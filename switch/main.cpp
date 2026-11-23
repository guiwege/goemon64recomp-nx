// Horizon NRO entry: recomp::start without RmlUi / NFD / RT64.
// ROM from sdmc:/switch/goemon64recomp-nx/. The GL 3.3 core context is created on the
// gfx thread by VidExt_SetVideoMode (switch/core_switch.cpp).

#include <SDL.h>

#include "audio.hpp"
#include "core_switch.hpp"
#include "input.hpp"
#include "goemon_config.h"
#include "goemon_game.h"
#include "goemon_render.h"
#include "goemon_support.h"
#include "nx_debug.hpp"
#include "nx_init.hpp"
#include "nx_log.hpp"
#include "nx_menu.h"
#include "perf.hpp"
#include "vsync.hpp"
#include "ovl_patches.hpp"
#include "recomp_data.h"
#include "recomp_input.h"
#include "recomp_ui.h"

#include "librecomp/game.hpp"
#include "librecomp/mods.hpp"
#include "librecomp/overlays.hpp"
#include "librecomp/rsp.hpp"
#include "ultramodern/ultramodern.hpp"

#include "../patches/graphics.h"
#include "../patches/input.h"
#include "../patches/sound.h"

#include <atomic>
#include <cctype>
#include <cinttypes>
#include <cstdlib>
#include <exception>
#include <filesystem>
#include <span>
#include <string>
#include <vector>

const std::string version_string = "0.2.0-dev+nx";

namespace {

constexpr std::u8string_view kGameId = u8"mnsg.us";

template <typename... Ts>
[[noreturn]] void exit_error(const char *str, Ts... args) {
    nx_log(str, args...);
    goemon64::show_error_message_box("Goemon 64: Recompiled", "Fatal error — see goemon64.log");
    ultramodern::error_handling::quick_exit(__FILE__, __LINE__, __func__);
}

bool is_rom_extension(const std::filesystem::path &path) {
    std::string ext = path.extension().string();
    for (char &c : ext) {
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    }
    return ext == ".z64" || ext == ".n64" || ext == ".v64";
}

const char *rom_error_name(recomp::RomValidationError err) {
    switch (err) {
        case recomp::RomValidationError::Good:
            return "ok";
        case recomp::RomValidationError::FailedToOpen:
            return "failed to open";
        case recomp::RomValidationError::NotARom:
            return "not an N64 ROM";
        case recomp::RomValidationError::IncorrectRom:
            return "wrong game";
        case recomp::RomValidationError::NotYet:
            return "dump not yet supported";
        case recomp::RomValidationError::IncorrectVersion:
            return "wrong version / not NTSC-U";
        default:
            return "other error";
    }
}

bool try_select_rom(const std::filesystem::path &path, std::u8string &game_id) {
    if (!std::filesystem::exists(path) || !std::filesystem::is_regular_file(path)) {
        return false;
    }
    nx_log("validating ROM %s", path.string().c_str());
    const recomp::RomValidationError err = recomp::select_rom(path, game_id);
    nx_log("ROM %s: %s", path.filename().string().c_str(), rom_error_name(err));
    return err == recomp::RomValidationError::Good;
}

bool ensure_rom(const std::filesystem::path &app_dir) {
    std::u8string game_id{kGameId};
    recomp::check_all_stored_roms();
    if (recomp::is_rom_valid(game_id)) {
        nx_log("stored ROM mnsg.us.z64 is valid");
        return true;
    }

    std::error_code ec;
    for (const auto &entry : std::filesystem::directory_iterator(app_dir, ec)) {
        if (ec || !entry.is_regular_file()) {
            continue;
        }
        const std::filesystem::path path = entry.path();
        if (!is_rom_extension(path)) {
            continue;
        }
        if (try_select_rom(path, game_id)) {
            return true;
        }
    }

    nx_log("No valid NTSC-U dump in %s", app_dir.string().c_str());
    nx_log("Copy the original USA cart dump as any name ending in .z64/.n64/.v64");
    nx_log("  internal name MYSTICAL NINJA, XXH3 0xDB1BC7EE0E6BEBA1");
    nx_log("Do not use the 32 MiB decompressed codegen ROM.");
    return false;
}

ultramodern::gfx_callbacks_t::gfx_data_t create_gfx() {
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "1");

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC) < 0) {
        exit_error("Failed to initialize SDL2: %s", SDL_GetError());
    }

    nx_log("SDL Video Driver: %s", SDL_GetCurrentVideoDriver());
    goemon64::input_open_existing();
    return {};
}

ultramodern::renderer::WindowHandle create_window(ultramodern::gfx_callbacks_t::gfx_data_t) {
    // Own NWindow (window_switch.c) so the VI thread can wait on this display's
    // vsync event. Size the buffers before SDL creates the EGL surface.
    Result vsync_rc = 0;
    (void)goemon64nx_vsync_event(&vsync_rc);
    goemon64nx_window_set_size(1280, 720);

    // GL context is created on the gfx thread in VidExt_SetVideoMode (GL 3.3 core).
    goemon64nx_window = SDL_CreateWindow("Goemon 64: Recompiled", 0, 0, 1280, 720,
                                         SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN | SDL_WINDOW_SHOWN);
    if (goemon64nx_window == nullptr) {
        exit_error("Failed to create window: %s", SDL_GetError());
    }
    nx_log("create_window: SDL_WINDOW_OPENGL 1280x720 (GL context on gfx thread via VidExt)");
    nx_debug_checkpoint("create_window");
    // Before PluginStartup (gfx thread): ConfigSetDefault* must not overwrite these.
    goemon64nx_seed_gliden64_config();
    return goemon64nx_window;
}

void update_gfx(void *) {
    SDL_Event ev;
    while (SDL_PollEvent(&ev)) {
        if (ev.type == SDL_QUIT) {
            nx_log("SDL_QUIT, shutting down (save thread will flush)");
            ultramodern::quit();
        }
        goemon64::input_handle_event(ev);
    }
    goemon64nx_perf_update();
}

} // namespace

extern RspUcodeFunc aspMain;
extern "C" void recomp_entrypoint(uint8_t *rdram, recomp_context *ctx);
gpr get_entrypoint_address();

namespace {

RspUcodeFunc *get_rsp_microcode(const OSTask *task) {
    switch (task->t.type) {
        case M_AUDTASK:
            return aspMain;
        default:
            nx_log("Unknown RSP task type=%" PRIu32, task->t.type);
            return nullptr;
    }
}

std::vector<uint8_t> switch_decompress_mnsg(std::span<const uint8_t> compressed_rom) {
    nx_debug_checkpoint("decompress_mnsg begin");
    nx_log("decompress_mnsg: in=%zu", compressed_rom.size());
    std::vector<uint8_t> out = goemon64::decompress_mnsg(compressed_rom);
    nx_log("decompress_mnsg: out=%zu", out.size());
    nx_debug_checkpoint("decompress_mnsg done");
    return out;
}

void switch_on_init(uint8_t *rdram, recomp_context *ctx) {
    (void)ctx;
    // Patches fire recomp_on_init (event 0). load_mods is skipped when mod_game_id
    // is empty (no live-recomp on Horizon W^X), so allocate the builtin slots here.
    const size_t n = recomp::overlays::num_base_events();
    recomp::mods::setup_events(n);
    recomp::mods::setup_hooks(0);
    nx_log("on_init_callback rdram=%p events=%zu", static_cast<void *>(rdram), n);
}

void switch_entrypoint(uint8_t *rdram, recomp_context *ctx) {
    nx_debug_checkpoint("recomp_entrypoint begin");
    nx_log("recomp_entrypoint begin rdram=%p", static_cast<void *>(rdram));
    try {
        recomp_entrypoint(rdram, ctx);
        nx_log("recomp_entrypoint returned");
    } catch (const ultramodern::thread_terminated &) {
        nx_log("recomp_entrypoint: thread_terminated");
    }
}

void switch_gfx_init() {
    nx_debug_checkpoint("gfx_init_callback");
    nx_log("gfx_init_callback");
}

void switch_vi_callback() {
    static std::atomic<int> n{0};
    const int i = ++n;
    // First VIs install dummy OSViMode while is_game_started is false. start_game()
    // before recomp::start skips that path and update_vi() dereferences a null mode.
    if (i == 1) {
        nx_debug_checkpoint("vi_callback #1 start_game");
        nx_log("vi_callback #1, starting game mnsg.us");
        recomp::start_game(std::u8string{kGameId});
        nx_log("start_game returned");
        nx_debug_checkpoint("start_game returned");
        return;
    }
    if (i <= 3) {
        nx_log("vi_callback #%d", i);
    }
    recomp::update_rumble();
}

std::vector<recomp::GameEntry> supported_games = {
    {
        .rom_hash = 0xDB1BC7EE0E6BEBA1ULL,
        .internal_name = "MYSTICAL NINJA",
        .game_id = std::u8string{kGameId},
        .mod_game_id = "", // Phase 1: no live-recomp mods (W^X)
        .save_type = recomp::SaveType::AllowAll,
        .is_enabled = true,
        .decompression_routine = switch_decompress_mnsg,
        .has_compressed_code = true,
        .entrypoint_address = 0,
        .entrypoint = switch_entrypoint,
        .on_init_callback = switch_on_init,
    },
};

} // namespace

namespace goemon64 {

std::string get_game_thread_name(const OSThread *t) {
    std::string name = "[Game] ";

    switch (t->id) {
        case 0:
            switch (t->priority) {
                case 150:
                    name += "PIMGR";
                    break;
                case 254:
                    name += "VIMGR";
                    break;
                default:
                    name += std::to_string(t->id);
                    break;
            }
            break;
        case 1:
            name += "IDLE";
            break;
        case 3:
            switch (t->priority) {
                case 10:
                    name += "MAIN";
                    break;
                case 12:
                    name += "AUDIO";
                    break;
                default:
                    name += std::to_string(t->id);
                    break;
            }
            break;
        case 4:
            switch (t->priority) {
                case 9:
                    name += "GAME";
                    break;
                case 13:
                    name += "SCHED";
                    break;
                default:
                    name += std::to_string(t->id);
                    break;
            }
            break;
        default:
            name += std::to_string(t->id);
            break;
    }

    return name;
}

} // namespace goemon64

#define REGISTER_FUNC(name) recomp::overlays::register_base_export(#name, name)

int main(int argc, char **argv) {
    if (argc > 0 && argv != nullptr) {
        goemon64nx_program_path = argv[0];
    }

    goemon64nx::platform_init();
    nx_log("Goemon64Recomp-NX %s (upstream %s)", GOEMON64_SWITCH_VERSION, version_string.c_str());
    goemon64nx_perf_start();

    recomp::Version project_version{};
    if (!recomp::Version::from_string(version_string, project_version)) {
        nx_log("Invalid version string: %s", version_string.c_str());
        goemon64nx_perf_stop();
        return EXIT_FAILURE;
    }

    const std::filesystem::path app_dir = goemon64::get_app_folder_path();
    nx_log("app dir: %s", app_dir.string().c_str());
    recomp::register_config_path(app_dir);

    supported_games[0].entrypoint_address = get_entrypoint_address();
    for (const auto &game : supported_games) {
        recomp::register_game(game);
    }

    if (!ensure_rom(app_dir)) {
        nx_debug_checkpoint("ensure_rom failed");
        goemon64::show_error_message_box(
            "ROM missing",
            "Copy the NTSC-U dump (.z64) to " GOEMON64NX_APP_DIR_SDMC "/");
        goemon64nx_perf_stop();
        return EXIT_FAILURE;
    }
    nx_debug_checkpoint("ensure_rom ok");

    REGISTER_FUNC(recomp_get_window_resolution);
    REGISTER_FUNC(recomp_get_target_aspect_ratio);
    REGISTER_FUNC(recomp_get_resolution_scale);
    REGISTER_FUNC(recomp_get_target_framerate);
    REGISTER_FUNC(recomp_get_analog_cam_enabled);
    REGISTER_FUNC(recomp_get_camera_inputs);
    REGISTER_FUNC(recomp_get_targeting_mode);
    REGISTER_FUNC(recomp_get_bgm_volume);
    REGISTER_FUNC(recomp_get_se_volume);
    REGISTER_FUNC(recomp_get_gyro_deltas);
    REGISTER_FUNC(recomp_get_mouse_deltas);
    REGISTER_FUNC(recomp_get_inverted_axes);
    REGISTER_FUNC(recomp_get_analog_inverted_axes);
    recomputil::register_data_api_exports();

    goemon64::register_overlays();
    goemon64::register_patches();
    recomputil::init_extended_actor_data();
    goemon64::load_config();

    recomp::rsp::callbacks_t rsp_callbacks{
        .get_rsp_microcode = get_rsp_microcode,
    };

    ultramodern::renderer::callbacks_t renderer_callbacks{
        .create_render_context = goemon64::renderer::create_render_context,
    };

    ultramodern::gfx_callbacks_t gfx_callbacks{
        .create_gfx = create_gfx,
        .create_window = create_window,
        .update_gfx = update_gfx,
    };

    ultramodern::audio_callbacks_t audio_callbacks{
        .queue_samples = queue_samples,
        .get_frames_remaining = get_frames_remaining,
        .set_frequency = set_frequency,
    };

    ultramodern::input::callbacks_t input_callbacks{
        .poll_input = recomp::poll_inputs,
        .get_input = recomp::get_n64_input,
        .set_rumble = recomp::set_rumble,
        .get_connected_device_info = recomp::get_connected_device_info,
    };

    ultramodern::events::callbacks_t thread_callbacks{
        .vi_callback = switch_vi_callback,
        .gfx_init_callback = switch_gfx_init,
    };

    ultramodern::error_handling::callbacks_t error_handling_callbacks{
        .message_box = recompui::message_box,
    };

    ultramodern::threads::callbacks_t threads_callbacks{
        .get_game_thread_name = goemon64::get_game_thread_name,
    };

    if (SDL_InitSubSystem(SDL_INIT_AUDIO) < 0 || !reset_audio(48000)) {
        nx_log("audio init failed: %s", SDL_GetError());
        goemon64nx_perf_stop();
        return EXIT_FAILURE;
    }

    nx_debug_checkpoint("recomp::start entering");
    nx_log("recomp::start entering");
    try {
        recomp::start(project_version, {}, rsp_callbacks, renderer_callbacks, audio_callbacks,
                      input_callbacks, gfx_callbacks, thread_callbacks, error_handling_callbacks,
                      threads_callbacks);
        nx_log("recomp::start returned");
        nx_debug_checkpoint("recomp::start returned");
    } catch (const std::exception &e) {
        nx_log("recomp::start exception: %s", e.what());
        nx_debug_fatal(e.what());
        goemon64nx_perf_stop();
        throw;
    }
    goemon64nx_perf_stop();

    if (goemon64nx_window != nullptr) {
        SDL_DestroyWindow(goemon64nx_window);
        goemon64nx_window = nullptr;
    }
    SDL_Quit();
    return EXIT_SUCCESS;
}
