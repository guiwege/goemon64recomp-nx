#include "input.hpp"
#include "nx_log.hpp"
#include "nx_menu.h"
#include "nx_pad.hpp"
#include "nx_settings.h"
#include "recomp_input.h"

#include <SDL.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <cmath>
#include <mutex>
#include <string>
#include <string_view>
#include <vector>

namespace {

// N64 controller bits — same values as DEFINE_N64_BUTTON_INPUTS in recomp_input.h.
constexpr uint16_t N64_A = 0x8000;
constexpr uint16_t N64_B = 0x4000;
constexpr uint16_t N64_Z = 0x2000;
constexpr uint16_t N64_START = 0x1000;
constexpr uint16_t N64_DPAD_UP = 0x0800;
constexpr uint16_t N64_DPAD_DOWN = 0x0400;
constexpr uint16_t N64_DPAD_LEFT = 0x0200;
constexpr uint16_t N64_DPAD_RIGHT = 0x0100;
constexpr uint16_t N64_L = 0x0020;
constexpr uint16_t N64_R = 0x0010;
constexpr uint16_t N64_C_UP = 0x0008;
constexpr uint16_t N64_C_DOWN = 0x0004;
constexpr uint16_t N64_C_LEFT = 0x0002;
constexpr uint16_t N64_C_RIGHT = 0x0001;

constexpr float AXIS_MAX = 32767.0f;
constexpr float C_BUTTON_THRESHOLD = 0.5f;
constexpr float STICK_DEADZONE = 0.1f;
// Re-armed on every VI while the game keeps rumble on, so a short duration
// stops it promptly (same as DK64 RUMBLE_PULSE_MS; no PC ramp).
constexpr uint32_t RUMBLE_PULSE_MS = 100;

std::atomic<SDL_GameController *> current_controller{nullptr};
std::atomic<bool> rumble_on{false};
std::mutex pad_mutex;
NxPad pad_snapshot{};
NxStartFilter start_filter; // game thread only (get_n64_input)

float read_axis(SDL_GameController *controller, SDL_GameControllerAxis axis) {
    const float value = SDL_GameControllerGetAxis(controller, axis) / AXIS_MAX;
    return std::fabs(value) < STICK_DEADZONE ? 0.0f : value;
}

NxPad read_controller(SDL_GameController *controller) {
    struct Binding {
        SDL_GameControllerButton button;
        uint32_t nx;
    };
    static constexpr Binding bindings[] = {
        {SDL_CONTROLLER_BUTTON_A, NX_A},
        {SDL_CONTROLLER_BUTTON_B, NX_B},
        {SDL_CONTROLLER_BUTTON_X, NX_X},
        {SDL_CONTROLLER_BUTTON_Y, NX_Y},
        {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, NX_L},
        {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, NX_R},
        {SDL_CONTROLLER_BUTTON_START, NX_PLUS},
        {SDL_CONTROLLER_BUTTON_BACK, NX_MINUS},
        {SDL_CONTROLLER_BUTTON_DPAD_UP, NX_UP},
        {SDL_CONTROLLER_BUTTON_DPAD_DOWN, NX_DOWN},
        {SDL_CONTROLLER_BUTTON_DPAD_LEFT, NX_LEFT},
        {SDL_CONTROLLER_BUTTON_DPAD_RIGHT, NX_RIGHT},
        {SDL_CONTROLLER_BUTTON_LEFTSTICK, NX_LSTICK},
        {SDL_CONTROLLER_BUTTON_RIGHTSTICK, NX_RSTICK},
    };
    NxPad pad;
    for (const Binding &binding : bindings) {
        if (SDL_GameControllerGetButton(controller, binding.button)) {
            pad.buttons |= binding.nx;
        }
    }
    // ZL/ZR are analog axes in SDL.
    if (read_axis(controller, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 0.5f) {
        pad.buttons |= NX_ZL;
    }
    if (read_axis(controller, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 0.5f) {
        pad.buttons |= NX_ZR;
    }
    // SDL's Y axes point down; N64 Y points up.
    pad.lx = read_axis(controller, SDL_CONTROLLER_AXIS_LEFTX);
    pad.ly = -read_axis(controller, SDL_CONTROLLER_AXIS_LEFTY);
    pad.rx = read_axis(controller, SDL_CONTROLLER_AXIS_RIGHTX);
    pad.ry = -read_axis(controller, SDL_CONTROLLER_AXIS_RIGHTY);
    return pad;
}

uint16_t to_n64_buttons(const NxPad &pad) {
    struct Binding {
        uint32_t nx;
        uint16_t n64;
    };
    static constexpr Binding bindings[] = {
        {NX_A, N64_A},
        {NX_B, N64_B},
        {NX_ZL, N64_Z},
        {NX_L, N64_L},
        {NX_R, N64_R},
        {NX_ZR, N64_R},
        {NX_PLUS, N64_START},
        {NX_UP, N64_DPAD_UP},
        {NX_DOWN, N64_DPAD_DOWN},
        {NX_LEFT, N64_DPAD_LEFT},
        {NX_RIGHT, N64_DPAD_RIGHT},
    };
    uint16_t buttons = 0;
    for (const Binding &binding : bindings) {
        if (pad.buttons & binding.nx) {
            buttons |= binding.n64;
        }
    }
    if (pad.rx < -C_BUTTON_THRESHOLD) {
        buttons |= N64_C_LEFT;
    }
    if (pad.rx > C_BUTTON_THRESHOLD) {
        buttons |= N64_C_RIGHT;
    }
    if (pad.ry > C_BUTTON_THRESHOLD) {
        buttons |= N64_C_UP;
    }
    if (pad.ry < -C_BUTTON_THRESHOLD) {
        buttons |= N64_C_DOWN;
    }
    return buttons;
}

NxPad copy_snapshot() {
    std::lock_guard lock{pad_mutex};
    return pad_snapshot;
}

void adopt_controller(SDL_GameController *pad) {
    if (pad == nullptr) {
        nx_log("GameControllerOpen failed: %s", SDL_GetError());
        return;
    }
    current_controller.store(pad);
    const char *name = SDL_GameControllerName(pad);
    nx_log("opened GameController: %s", name != nullptr ? name : "(unnamed)");
    char *mapping = SDL_GameControllerMapping(pad);
    if (mapping != nullptr) {
        nx_log("mapping: %s", mapping);
        SDL_free(mapping);
    }
}

int g_gyro_sensitivity = 0;
int g_mouse_sensitivity = 0;
int g_joystick_deadzone = 5;
bool g_right_analog_suppressed = false;
recomp::BackgroundInputMode g_background_input_mode = recomp::BackgroundInputMode::On;

using input_mapping = std::array<recomp::InputField, recomp::bindings_per_input>;
using input_mapping_array = std::array<input_mapping, static_cast<size_t>(recomp::GameInput::COUNT)>;
input_mapping_array g_keyboard_mappings{};
input_mapping_array g_controller_mappings{};

#define DEFINE_INPUT(name, value, readable, description) readable,
const std::vector<std::string> kInputNames = {DEFINE_ALL_INPUTS()};
#undef DEFINE_INPUT

#define DEFINE_INPUT(name, value, readable, description) #name,
const std::vector<std::string> kInputEnumNames = {DEFINE_ALL_INPUTS()};
#undef DEFINE_INPUT

#define DEFINE_INPUT(name, value, readable, description) description,
const std::vector<std::string> kInputDescriptions = {DEFINE_ALL_INPUTS()};
#undef DEFINE_INPUT

int clamp100(int v) {
    return std::clamp(v, 0, 100);
}

} // namespace

void goemon64::input_read_pad(NxPad *pad) {
    if (pad == nullptr) {
        return;
    }
    *pad = NxPad{};
    SDL_GameController *controller = current_controller.load();
    if (controller != nullptr) {
        *pad = read_controller(controller);
    }
}

void goemon64::input_open_existing() {
    const int n = SDL_NumJoysticks();
    for (int i = 0; i < n; ++i) {
        if (SDL_IsGameController(i)) {
            adopt_controller(SDL_GameControllerOpen(i));
            return;
        }
    }
}

void goemon64::input_handle_event(const SDL_Event &event) {
    if (event.type == SDL_CONTROLLERDEVICEADDED && current_controller.load() == nullptr) {
        adopt_controller(SDL_GameControllerOpen(event.cdevice.which));
    } else if (event.type == SDL_CONTROLLERDEVICEREMOVED) {
        SDL_GameController *controller = current_controller.load();
        if (controller != nullptr &&
            SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(controller)) == event.cdevice.which) {
            // Drop the handle without Close: the game thread may be reading it.
            current_controller.store(nullptr);
        }
    }
}

const recomp::DefaultN64Mappings recomp::default_n64_keyboard_mappings{};
const recomp::DefaultN64Mappings recomp::default_n64_controller_mappings{};

void recomp::poll_inputs() {
    // Snapshot on the game thread (osContStartReadData) so GetButton is not
    // concurrent with the gfx thread's SDL_PollEvent.
    NxPad pad{};
    SDL_GameController *controller = current_controller.load();
    if (controller != nullptr) {
        pad = read_controller(controller);
    }
    std::lock_guard lock{pad_mutex};
    pad_snapshot = pad;
}

bool recomp::get_n64_input(int controller_num, uint16_t *buttons_out, float *x_out, float *y_out) {
    // Pad 0 always reports connected (zeros if no SDL handle). Returning false
    // marks CONT_NO_RESPONSE_ERROR and the title screen treats the port as empty.
    if (controller_num != 0 || buttons_out == nullptr || x_out == nullptr || y_out == nullptr) {
        return false;
    }
    NxPad pad = copy_snapshot();
    if (goemon64nx_menu_owns_pad()) {
        // Keep the Start filter in sync so −+ does not replay Start after the menu closes.
        (void)start_filter.apply(pad.buttons, SDL_GetTicks64());
        pad = NxPad{};
    } else {
        if (nx::get(nx::Setting::FaceButtons) != 0) {
            const uint32_t a = pad.buttons & NX_A;
            const uint32_t b = pad.buttons & NX_B;
            pad.buttons &= ~(NX_A | NX_B);
            if (a != 0) {
                pad.buttons |= NX_B;
            }
            if (b != 0) {
                pad.buttons |= NX_A;
            }
        }
        pad.buttons = start_filter.apply(pad.buttons, SDL_GetTicks64());
    }
    *buttons_out = to_n64_buttons(pad);
    *x_out = pad.lx;
    *y_out = pad.ly;
    return true;
}

void recomp::set_rumble(int controller_num, bool on) {
    if (controller_num == 0) {
        rumble_on.store(on);
    }
}

void recomp::update_rumble() {
    SDL_GameController *controller = current_controller.load();
    if (controller != nullptr && rumble_on.load()) {
        const Uint16 s = static_cast<Uint16>(recomp::get_rumble_strength() * 0xFFFF / 100);
        SDL_GameControllerRumble(controller, s, s, RUMBLE_PULSE_MS);
    }
}

void recomp::handle_events() {}

ultramodern::input::connected_device_info_t recomp::get_connected_device_info(int controller_num) {
    if (controller_num == 0) {
        return {
            .connected_device = ultramodern::input::Device::Controller,
            .connected_pak = ultramodern::input::Pak::RumblePak,
        };
    }
    return {
        .connected_device = ultramodern::input::Device::None,
        .connected_pak = ultramodern::input::Pak::None,
    };
}

float recomp::get_input_analog(const InputField &) {
    return 0.0f;
}

float recomp::get_input_analog(const std::span<const InputField>) {
    return 0.0f;
}

bool recomp::get_input_digital(const InputField &) {
    return false;
}

bool recomp::get_input_digital(const std::span<const InputField>) {
    return false;
}

void recomp::get_gyro_deltas(float *x, float *y) {
    if (x != nullptr) {
        *x = 0.0f;
    }
    if (y != nullptr) {
        *y = 0.0f;
    }
}

void recomp::get_mouse_deltas(float *x, float *y) {
    if (x != nullptr) {
        *x = 0.0f;
    }
    if (y != nullptr) {
        *y = 0.0f;
    }
}

void recomp::get_right_analog(float *x, float *y) {
    float rx = 0.0f;
    float ry = 0.0f;
    if (!g_right_analog_suppressed && !goemon64nx_menu_owns_pad()) {
        const NxPad pad = copy_snapshot();
        rx = pad.rx;
        ry = pad.ry;
    }
    if (x != nullptr) {
        *x = rx;
    }
    if (y != nullptr) {
        *y = ry;
    }
}

void recomp::apply_joystick_deadzone(float x_in, float y_in, float *x_out, float *y_out) {
    if (x_out != nullptr) {
        *x_out = x_in;
    }
    if (y_out != nullptr) {
        *y_out = y_in;
    }
}

void recomp::set_right_analog_suppressed(bool suppressed) {
    g_right_analog_suppressed = suppressed;
}

bool recomp::game_input_disabled() {
    return false;
}

bool recomp::all_input_disabled() {
    return false;
}

int recomp::get_rumble_strength() {
    return nx::get(nx::Setting::Rumble);
}

void recomp::set_rumble_strength(int strength) {
    nx::set(nx::Setting::Rumble, strength);
}

int recomp::get_gyro_sensitivity() {
    return g_gyro_sensitivity;
}

void recomp::set_gyro_sensitivity(int strength) {
    g_gyro_sensitivity = clamp100(strength);
}

int recomp::get_mouse_sensitivity() {
    return g_mouse_sensitivity;
}

void recomp::set_mouse_sensitivity(int strength) {
    g_mouse_sensitivity = clamp100(strength);
}

int recomp::get_joystick_deadzone() {
    return g_joystick_deadzone;
}

void recomp::set_joystick_deadzone(int strength) {
    g_joystick_deadzone = clamp100(strength);
}

recomp::BackgroundInputMode recomp::get_background_input_mode() {
    return g_background_input_mode;
}

void recomp::set_background_input_mode(BackgroundInputMode mode) {
    g_background_input_mode = mode;
}

size_t recomp::get_num_inputs() {
    return static_cast<size_t>(GameInput::COUNT);
}

const std::string &recomp::get_input_name(GameInput input) {
    return kInputNames.at(static_cast<size_t>(input));
}

const std::string &recomp::get_input_enum_name(GameInput input) {
    return kInputEnumNames.at(static_cast<size_t>(input));
}

const std::string &recomp::get_input_description(GameInput input) {
    return kInputDescriptions.at(static_cast<size_t>(input));
}

recomp::GameInput recomp::get_input_from_enum_name(const std::string_view name) {
    auto it = std::find(kInputEnumNames.begin(), kInputEnumNames.end(), name);
    if (it == kInputEnumNames.end()) {
        return GameInput::COUNT;
    }
    return static_cast<GameInput>(it - kInputEnumNames.begin());
}

recomp::InputField &recomp::get_input_binding(GameInput input, size_t binding_index, InputDevice device) {
    input_mapping_array &maps =
        (device == InputDevice::Controller) ? g_controller_mappings : g_keyboard_mappings;
    input_mapping &cur = maps.at(static_cast<size_t>(input));
    if (binding_index < cur.size()) {
        return cur[binding_index];
    }
    static InputField dummy{};
    return dummy;
}

void recomp::set_input_binding(GameInput input, size_t binding_index, InputDevice device, InputField value) {
    input_mapping_array &maps =
        (device == InputDevice::Controller) ? g_controller_mappings : g_keyboard_mappings;
    input_mapping &cur = maps.at(static_cast<size_t>(input));
    if (binding_index < cur.size()) {
        cur[binding_index] = value;
    }
}

void recomp::start_scanning_input(InputDevice) {}

void recomp::stop_scanning_input() {}

void recomp::finish_scanning_input(InputField) {}

void recomp::cancel_scanning_input() {}

void recomp::config_menu_set_cont_or_kb(bool) {}

recomp::InputField recomp::get_scanned_input() {
    return {};
}

int recomp::get_scanned_input_index() {
    return -1;
}

std::string recomp::InputField::to_string() const {
    return {};
}
