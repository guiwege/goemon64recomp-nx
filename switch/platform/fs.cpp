#include "goemon_config.h"
#include "goemon_sound.h"
#include "goemon_support.h"
#include "nx_log.hpp"
#include "nx_settings.h"
#include "recomp_input.h"
#include "ultramodern/config.hpp"

#include <filesystem>
#include <list>
#include <string>

namespace {

std::filesystem::path g_app_dir;
bool g_debug_mode = false;
goemon64::AutosaveMode g_autosave = goemon64::AutosaveMode::On;

goemon64::AnalogCamMode analog_cam_from_nx(int value) {
    return value != 0 ? goemon64::AnalogCamMode::On : goemon64::AnalogCamMode::Off;
}

int analog_cam_to_nx(goemon64::AnalogCamMode mode) {
    return mode == goemon64::AnalogCamMode::On ? 1 : 0;
}

bool try_app_dir(const char *path) {
    std::error_code ec;
    std::filesystem::create_directories(path, ec);
    if (ec) {
        return false;
    }
    g_app_dir = path;
    return true;
}

} // namespace

std::filesystem::path goemon64::get_app_folder_path() {
    if (!g_app_dir.empty()) {
        return g_app_dir;
    }
    if (try_app_dir(GOEMON64NX_APP_DIR_SDMC) || try_app_dir(GOEMON64NX_APP_DIR_UNIX)) {
        return g_app_dir;
    }
    return {};
}

void goemon64::reset_input_bindings() {}

void goemon64::reset_cont_input_bindings() {}

void goemon64::reset_kb_input_bindings() {}

void goemon64::reset_single_input_binding(recomp::InputDevice, recomp::GameInput) {}

bool goemon64::get_debug_mode_enabled() {
    return g_debug_mode;
}

void goemon64::set_debug_mode_enabled(bool enabled) {
    g_debug_mode = enabled;
}

goemon64::TargetingMode goemon64::get_targeting_mode() {
    return static_cast<TargetingMode>(nx::get(nx::Setting::TargetingMode));
}

void goemon64::set_targeting_mode(TargetingMode mode) {
    nx::set(nx::Setting::TargetingMode, static_cast<int>(mode));
}

goemon64::AutosaveMode goemon64::get_autosave_mode() {
    return g_autosave;
}

void goemon64::set_autosave_mode(AutosaveMode mode) {
    g_autosave = mode;
}

goemon64::CameraInvertMode goemon64::get_camera_invert_mode() {
    return static_cast<CameraInvertMode>(nx::get(nx::Setting::InvertCamera));
}

void goemon64::set_camera_invert_mode(CameraInvertMode mode) {
    nx::set(nx::Setting::InvertCamera, static_cast<int>(mode));
}

goemon64::CameraInvertMode goemon64::get_analog_camera_invert_mode() {
    return static_cast<CameraInvertMode>(nx::get(nx::Setting::InvertAnalogCamera));
}

void goemon64::set_analog_camera_invert_mode(CameraInvertMode mode) {
    nx::set(nx::Setting::InvertAnalogCamera, static_cast<int>(mode));
}

goemon64::AnalogCamMode goemon64::get_analog_cam_mode() {
    return analog_cam_from_nx(nx::get(nx::Setting::AnalogCamera));
}

void goemon64::set_analog_cam_mode(AnalogCamMode mode) {
    nx::set(nx::Setting::AnalogCamera, analog_cam_to_nx(mode));
}

void goemon64::open_quit_game_prompt() {}

void goemon64::load_config() {
    nx::load();

    goemon64::set_main_volume(nx::get(nx::Setting::MasterVolume));
    goemon64::set_bgm_volume(nx::get(nx::Setting::MusicVolume));
    goemon64::set_se_volume(nx::get(nx::Setting::SoundVolume));
    recomp::set_rumble_strength(nx::get(nx::Setting::Rumble));
    goemon64::set_targeting_mode(static_cast<TargetingMode>(nx::get(nx::Setting::TargetingMode)));
    goemon64::set_camera_invert_mode(static_cast<CameraInvertMode>(nx::get(nx::Setting::InvertCamera)));
    goemon64::set_analog_cam_mode(analog_cam_from_nx(nx::get(nx::Setting::AnalogCamera)));
    goemon64::set_analog_camera_invert_mode(
        static_cast<CameraInvertMode>(nx::get(nx::Setting::InvertAnalogCamera)));

    recomp::set_gyro_sensitivity(0);
    recomp::set_mouse_sensitivity(0);
    recomp::set_joystick_deadzone(5);
    g_autosave = AutosaveMode::On;
    g_debug_mode = false;

    ultramodern::renderer::GraphicsConfig gfx{};
    gfx.developer_mode = false;
    gfx.res_option = ultramodern::renderer::Resolution::Original;
    gfx.wm_option = ultramodern::renderer::WindowMode::Fullscreen;
    gfx.hr_option = ultramodern::renderer::HUDRatioMode::Original;
    gfx.api_option = ultramodern::renderer::GraphicsApi::Auto;
    // 16:9 = Expand (patches) + GLideN64 force 16:9. 4:3 = Original + force 4:3.
    // Both come from nx::at_startup; the renderer reads the seed at PluginStartup.
    gfx.ar_option = nx::widescreen() ? ultramodern::renderer::AspectRatio::Expand
                                    : ultramodern::renderer::AspectRatio::Original;
    gfx.msaa_option = ultramodern::renderer::Antialiasing::None;
    gfx.rr_option = ultramodern::renderer::RefreshRate::Original;
    gfx.hpfb_option = ultramodern::renderer::HighPrecisionFramebuffer::Off;
    gfx.rr_manual_value = 60;
    gfx.ds_option = 1;
    ultramodern::renderer::set_graphics_config(gfx);

    std::error_code ec;
    std::filesystem::create_directories(get_app_folder_path() / "saves", ec);
    nx_log("load_config: AR=%s nativeRes=%d (nx_options.txt)", nx::widescreen() ? "16:9" : "4:3",
           nx::resolution_factor());
}

void goemon64::save_config() {
    nx::save();
}

std::filesystem::path goemon64::get_program_path() {
    return {};
}

std::filesystem::path goemon64::get_asset_path(const char *asset) {
    return get_program_path() / "assets" / asset;
}

void goemon64::open_file_dialog(std::function<void(bool, const std::filesystem::path &)> callback) {
    callback(false, {});
}

void goemon64::open_file_dialog_multiple(
    std::function<void(bool, const std::list<std::filesystem::path> &)> callback) {
    callback(false, {});
}

void goemon64::show_error_message_box(const char *title, const char *message) {
    nx_log("%s: %s", title != nullptr ? title : "error", message != nullptr ? message : "");
}
