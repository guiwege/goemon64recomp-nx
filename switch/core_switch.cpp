// Minimal mupen64plus "core" for statically linked GLideN64.
// PluginStartup does dlsym(NULL, "VidExt_SetVideoMode") / Config* / PluginGetVersion;
// Horizon has no .so loader, so dlsym below answers from a table.
// Config is in-memory (ConfigSaveFile is a no-op; no GLideN64.ini on SD).

#include "core_switch.hpp"

#include "nx_debug.hpp"
#include "nx_log.hpp"
#include "nx_menu.h"
#include "nx_settings.h"

#include <cstring>
#include <map>
#include <string>

#include <SDL.h>

#include "m64p_common.h"
#include "m64p_config.h"
#include "m64p_types.h"
#include "m64p_vidext.h"

SDL_Window *goemon64nx_window = nullptr;

extern "C" void goemon64nx_gliden64_save_shaders();

namespace {

constexpr const char *kDataDir = GOEMON64NX_APP_DIR_SDMC;
constexpr int kScreenWidth = 1280;
constexpr int kScreenHeight = 720;

struct Param {
    m64p_type type = M64TYPE_INT;
    int int_value = 0;
    float float_value = 0.0f;
    std::string string_value;
};

using Section = std::map<std::string, Param>;

std::map<std::string, Section> &sections() {
    static std::map<std::string, Section> store;
    return store;
}

Section *as_section(m64p_handle handle) {
    return static_cast<Section *>(handle);
}

const Param *find_param(m64p_handle handle, const char *name) {
    Section *section = as_section(handle);
    auto it = section->find(name);
    return it == section->end() ? nullptr : &it->second;
}

void set_param(m64p_handle handle, const char *name, const Param &param, bool only_if_absent) {
    Section *section = as_section(handle);
    if (only_if_absent && section->count(name) != 0) {
        return;
    }
    (*section)[name] = param;
}

Param int_param(int value) {
    Param p;
    p.type = M64TYPE_INT;
    p.int_value = value;
    return p;
}

Param bool_param(bool value) {
    Param p;
    p.type = M64TYPE_BOOL;
    p.int_value = value ? 1 : 0;
    return p;
}

SDL_GLContext gl_context = nullptr;
int swap_interval = 1;

} // namespace

extern "C" {

m64p_error nx_ConfigOpenSection(const char *name, m64p_handle *handle) {
    *handle = &sections()[name];
    return M64ERR_SUCCESS;
}

// Clearing (not erasing) keeps handles GLideN64 already holds valid.
m64p_error nx_ConfigDeleteSection(const char *name) {
    sections()[name].clear();
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigSaveSection(const char *) {
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigSaveFile(void) {
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigSetDefaultInt(m64p_handle handle, const char *name, int value, const char *) {
    set_param(handle, name, int_param(value), true);
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigSetDefaultFloat(m64p_handle handle, const char *name, float value, const char *) {
    Param p;
    p.type = M64TYPE_FLOAT;
    p.float_value = value;
    set_param(handle, name, p, true);
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigSetDefaultBool(m64p_handle handle, const char *name, int value, const char *) {
    set_param(handle, name, bool_param(value != 0), true);
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigSetDefaultString(m64p_handle handle, const char *name, const char *value,
                                     const char *) {
    Param p;
    p.type = M64TYPE_STRING;
    p.string_value = value != nullptr ? value : "";
    set_param(handle, name, p, true);
    return M64ERR_SUCCESS;
}

int nx_ConfigGetParamInt(m64p_handle handle, const char *name) {
    const Param *p = find_param(handle, name);
    if (p == nullptr) {
        return 0;
    }
    return p->type == M64TYPE_FLOAT ? static_cast<int>(p->float_value) : p->int_value;
}

float nx_ConfigGetParamFloat(m64p_handle handle, const char *name) {
    const Param *p = find_param(handle, name);
    if (p == nullptr) {
        return 0.0f;
    }
    return p->type == M64TYPE_FLOAT ? p->float_value : static_cast<float>(p->int_value);
}

int nx_ConfigGetParamBool(m64p_handle handle, const char *name) {
    return nx_ConfigGetParamInt(handle, name) != 0;
}

const char *nx_ConfigGetParamString(m64p_handle handle, const char *name) {
    const Param *p = find_param(handle, name);
    return p == nullptr ? "" : p->string_value.c_str();
}

m64p_error nx_ConfigSetParameter(m64p_handle handle, const char *name, m64p_type type,
                                 const void *value) {
    Param p;
    p.type = type;
    if (type == M64TYPE_FLOAT) {
        p.float_value = *static_cast<const float *>(value);
    } else if (type == M64TYPE_STRING) {
        p.string_value = static_cast<const char *>(value);
    } else {
        p.int_value = *static_cast<const int *>(value);
    }
    set_param(handle, name, p, false);
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigGetParameter(m64p_handle handle, const char *name, m64p_type type, void *value,
                                 int max_size) {
    const Param *p = find_param(handle, name);
    if (p == nullptr) {
        return M64ERR_INPUT_NOT_FOUND;
    }
    if (type == M64TYPE_FLOAT) {
        *static_cast<float *>(value) = p->float_value;
    } else if (type == M64TYPE_STRING) {
        if (max_size <= 0) {
            return M64ERR_INPUT_INVALID;
        }
        std::strncpy(static_cast<char *>(value), p->string_value.c_str(),
                     static_cast<size_t>(max_size - 1));
        static_cast<char *>(value)[max_size - 1] = '\0';
    } else {
        *static_cast<int *>(value) = p->int_value;
    }
    return M64ERR_SUCCESS;
}

const char *nx_ConfigGetParameterHelp(m64p_handle, const char *) {
    return "";
}

// No per-game GLideN64.custom.ini: Switch seeds are applied in goemon64nx_seed_gliden64_config.
m64p_error nx_ConfigExternalOpen(const char *, m64p_handle *) {
    return M64ERR_FILES;
}

m64p_error nx_ConfigExternalClose(m64p_handle) {
    return M64ERR_SUCCESS;
}

m64p_error nx_ConfigExternalGetParameter(m64p_handle, const char *, const char *, char *, int) {
    return M64ERR_INPUT_NOT_FOUND;
}

const char *nx_ConfigGetSharedDataFilepath(const char *) {
    return kDataDir;
}

const char *nx_ConfigGetUserConfigPath(void) {
    return kDataDir;
}

const char *nx_ConfigGetUserDataPath(void) {
    return kDataDir;
}

const char *nx_ConfigGetUserCachePath(void) {
    return kDataDir;
}

m64p_error nx_VidExt_Init(void) {
    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_Quit(void) {
    if (gl_context != nullptr) {
        SDL_GL_DeleteContext(gl_context);
        gl_context = nullptr;
    }
    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_ListFullscreenModes(m64p_2d_size *modes, int *count) {
    if (*count >= 1) {
        modes[0].uiWidth = static_cast<unsigned>(kScreenWidth);
        modes[0].uiHeight = static_cast<unsigned>(kScreenHeight);
        *count = 1;
    }
    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_ListFullscreenRates(m64p_2d_size, int *count, int *rates) {
    if (*count >= 1) {
        rates[0] = 60;
        *count = 1;
    }
    return M64ERR_SUCCESS;
}

// Runs on ultramodern's gfx thread (RomOpen). The window already exists on the
// main thread; this is where the GL 3.3 core context is created (not ES 2.0).
m64p_error nx_VidExt_SetVideoMode(int width, int height, int, m64p_video_mode, m64p_video_flags) {
    if (goemon64nx_window == nullptr) {
        nx_log("VidExt_SetVideoMode: goemon64nx_window is null");
        nx_debug_checkpoint("VidExt_SetVideoMode no window");
        return M64ERR_SYSTEM_FAIL;
    }

    if (gl_context == nullptr) {
        // GLideN64 already requested CORE 3.3 via VidExt_GL_SetAttribute; set
        // them again so a direct call still cannot fall back to ES 2.0.
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

        gl_context = SDL_GL_CreateContext(goemon64nx_window);
        if (gl_context == nullptr) {
            nx_log("VidExt_SetVideoMode: SDL_GL_CreateContext failed: %s", SDL_GetError());
            nx_debug_checkpoint("VidExt_SetVideoMode CreateContext failed");
            return M64ERR_SYSTEM_FAIL;
        }
        nx_debug_checkpoint("VidExt_SetVideoMode context created");
    }

    if (SDL_GL_MakeCurrent(goemon64nx_window, gl_context) != 0) {
        nx_log("VidExt_SetVideoMode: SDL_GL_MakeCurrent failed: %s", SDL_GetError());
        nx_debug_checkpoint("VidExt_SetVideoMode MakeCurrent failed");
        return M64ERR_SYSTEM_FAIL;
    }
    SDL_GL_SetSwapInterval(swap_interval);

    using GlGetStringFn = const unsigned char *(*)(unsigned int);
    auto glGetString =
        reinterpret_cast<GlGetStringFn>(SDL_GL_GetProcAddress("glGetString"));
    if (glGetString != nullptr) {
        constexpr unsigned kGlVendor = 0x1F00;
        constexpr unsigned kGlRenderer = 0x1F01;
        constexpr unsigned kGlVersion = 0x1F02;
        const char *vendor = reinterpret_cast<const char *>(glGetString(kGlVendor));
        const char *renderer = reinterpret_cast<const char *>(glGetString(kGlRenderer));
        const char *version = reinterpret_cast<const char *>(glGetString(kGlVersion));
        nx_log("VidExt GL %dx%d vendor=%s renderer=%s version=%s", width, height,
               vendor != nullptr ? vendor : "?", renderer != nullptr ? renderer : "?",
               version != nullptr ? version : "?");
    } else {
        nx_log("VidExt_SetVideoMode: context ready (%dx%d), glGetString missing", width, height);
    }

    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_SetVideoModeWithRate(int width, int height, int, int bpp, m64p_video_mode mode,
                                          m64p_video_flags flags) {
    return nx_VidExt_SetVideoMode(width, height, bpp, mode, flags);
}

m64p_error nx_VidExt_ResizeWindow(int, int) {
    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_SetCaption(const char *) {
    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_ToggleFullScreen(void) {
    return M64ERR_SUCCESS;
}

m64p_function nx_VidExt_GL_GetProcAddress(const char *name) {
    return reinterpret_cast<m64p_function>(SDL_GL_GetProcAddress(name));
}

m64p_error nx_VidExt_GL_SetAttribute(m64p_GLattr attr, int value) {
    switch (attr) {
        case M64P_GL_DOUBLEBUFFER:
            SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, value);
            break;
        case M64P_GL_BUFFER_SIZE:
            SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, value);
            break;
        case M64P_GL_DEPTH_SIZE:
            SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, value);
            break;
        case M64P_GL_RED_SIZE:
            SDL_GL_SetAttribute(SDL_GL_RED_SIZE, value);
            break;
        case M64P_GL_GREEN_SIZE:
            SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, value);
            break;
        case M64P_GL_BLUE_SIZE:
            SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, value);
            break;
        case M64P_GL_ALPHA_SIZE:
            SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, value);
            break;
        case M64P_GL_SWAP_CONTROL:
            swap_interval = value;
            break;
        case M64P_GL_MULTISAMPLEBUFFERS:
            SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, value);
            break;
        case M64P_GL_MULTISAMPLESAMPLES:
            SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, value);
            break;
        case M64P_GL_CONTEXT_MAJOR_VERSION:
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, value);
            break;
        case M64P_GL_CONTEXT_MINOR_VERSION:
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, value);
            break;
        case M64P_GL_CONTEXT_PROFILE_MASK:
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                                value == M64P_GL_CONTEXT_PROFILE_ES
                                    ? SDL_GL_CONTEXT_PROFILE_ES
                                    : value == M64P_GL_CONTEXT_PROFILE_COMPATIBILITY
                                          ? SDL_GL_CONTEXT_PROFILE_COMPATIBILITY
                                          : SDL_GL_CONTEXT_PROFILE_CORE);
            break;
        default:
            return M64ERR_INPUT_INVALID;
    }
    return M64ERR_SUCCESS;
}

m64p_error nx_VidExt_GL_GetAttribute(m64p_GLattr attr, int *value) {
    SDL_GLattr sdl_attr;
    switch (attr) {
        case M64P_GL_DOUBLEBUFFER:
            sdl_attr = SDL_GL_DOUBLEBUFFER;
            break;
        case M64P_GL_BUFFER_SIZE:
            sdl_attr = SDL_GL_BUFFER_SIZE;
            break;
        case M64P_GL_DEPTH_SIZE:
            sdl_attr = SDL_GL_DEPTH_SIZE;
            break;
        case M64P_GL_RED_SIZE:
            sdl_attr = SDL_GL_RED_SIZE;
            break;
        case M64P_GL_GREEN_SIZE:
            sdl_attr = SDL_GL_GREEN_SIZE;
            break;
        case M64P_GL_BLUE_SIZE:
            sdl_attr = SDL_GL_BLUE_SIZE;
            break;
        case M64P_GL_ALPHA_SIZE:
            sdl_attr = SDL_GL_ALPHA_SIZE;
            break;
        case M64P_GL_SWAP_CONTROL:
            *value = SDL_GL_GetSwapInterval();
            return M64ERR_SUCCESS;
        case M64P_GL_MULTISAMPLEBUFFERS:
            sdl_attr = SDL_GL_MULTISAMPLEBUFFERS;
            break;
        case M64P_GL_MULTISAMPLESAMPLES:
            sdl_attr = SDL_GL_MULTISAMPLESAMPLES;
            break;
        case M64P_GL_CONTEXT_MAJOR_VERSION:
            sdl_attr = SDL_GL_CONTEXT_MAJOR_VERSION;
            break;
        case M64P_GL_CONTEXT_MINOR_VERSION:
            sdl_attr = SDL_GL_CONTEXT_MINOR_VERSION;
            break;
        default:
            return M64ERR_INPUT_INVALID;
    }
    return SDL_GL_GetAttribute(sdl_attr, value) == 0 ? M64ERR_SUCCESS : M64ERR_SYSTEM_FAIL;
}

m64p_error nx_VidExt_GL_SwapBuffers(void) {
    // HOME never reaches RomClosed, so flush new combiner shaders to
    // sdmc:/switch/goemon64recomp-nx/shaders every ~10 s (same hunk as DK64-NX).
    constexpr Uint64 kShaderSaveMs = 10000;
    static Uint64 shaders_saved_at = 0;
    const Uint64 now = SDL_GetTicks64();
    if (now - shaders_saved_at >= kShaderSaveMs) {
        goemon64nx_gliden64_save_shaders();
        shaders_saved_at = now;
    }

    if (goemon64nx_window != nullptr) {
        int width = kScreenWidth;
        int height = kScreenHeight;
        SDL_GetWindowSize(goemon64nx_window, &width, &height);
        if (width <= 0 || height <= 0) {
            width = kScreenWidth;
            height = kScreenHeight;
        }
        goemon64nx_menu_on_swap(width, height);
        SDL_GL_SwapWindow(goemon64nx_window);
    }
    return M64ERR_SUCCESS;
}

uint32_t nx_VidExt_GL_GetDefaultFramebuffer(void) {
    return 0;
}

m64p_error CorePluginGetVersion(m64p_plugin_type *type, int *version, int *api_version,
                                const char **name, int *caps) {
    if (type) {
        *type = M64PLUGIN_CORE;
    }
    if (version) {
        *version = 0x020600;
    }
    if (api_version) {
        *api_version = 0x020001;
    }
    if (name) {
        *name = "Goemon64NX core";
    }
    if (caps) {
        *caps = 0;
    }
    return M64ERR_SUCCESS;
}

void *dlsym(void *, const char *name) {
    struct Entry {
        const char *name;
        void *fn;
    };
    static const Entry table[] = {
#define CORE_FN(fn) {#fn, reinterpret_cast<void *>(&nx_##fn)}
        CORE_FN(ConfigOpenSection),
        CORE_FN(ConfigDeleteSection),
        CORE_FN(ConfigSaveSection),
        CORE_FN(ConfigSaveFile),
        CORE_FN(ConfigSetDefaultInt),
        CORE_FN(ConfigSetDefaultFloat),
        CORE_FN(ConfigSetDefaultBool),
        CORE_FN(ConfigSetDefaultString),
        CORE_FN(ConfigGetParamInt),
        CORE_FN(ConfigGetParamFloat),
        CORE_FN(ConfigGetParamBool),
        CORE_FN(ConfigGetParamString),
        CORE_FN(ConfigSetParameter),
        CORE_FN(ConfigGetParameter),
        CORE_FN(ConfigGetParameterHelp),
        CORE_FN(ConfigExternalOpen),
        CORE_FN(ConfigExternalClose),
        CORE_FN(ConfigExternalGetParameter),
        CORE_FN(ConfigGetSharedDataFilepath),
        CORE_FN(ConfigGetUserConfigPath),
        CORE_FN(ConfigGetUserDataPath),
        CORE_FN(ConfigGetUserCachePath),
        CORE_FN(VidExt_Init),
        CORE_FN(VidExt_Quit),
        CORE_FN(VidExt_ListFullscreenModes),
        CORE_FN(VidExt_ListFullscreenRates),
        CORE_FN(VidExt_SetVideoMode),
        CORE_FN(VidExt_SetVideoModeWithRate),
        CORE_FN(VidExt_ResizeWindow),
        CORE_FN(VidExt_SetCaption),
        CORE_FN(VidExt_ToggleFullScreen),
        CORE_FN(VidExt_GL_GetProcAddress),
        CORE_FN(VidExt_GL_SetAttribute),
        CORE_FN(VidExt_GL_GetAttribute),
        CORE_FN(VidExt_GL_SwapBuffers),
        CORE_FN(VidExt_GL_GetDefaultFramebuffer),
#undef CORE_FN
        {"PluginGetVersion", reinterpret_cast<void *>(&CorePluginGetVersion)},
    };
    for (const Entry &entry : table) {
        if (std::strcmp(entry.name, name) == 0) {
            return entry.fn;
        }
    }
    nx_log("core symbol not provided: %s", name);
    return nullptr;
}

} // extern "C"

// Values GLideN64 must not pick by itself on a 720p Tegra X1 (ConfigSetDefault* keeps them).
void goemon64nx_seed_gliden64_config() {
    m64p_handle general = nullptr;
    m64p_handle gliden = nullptr;
    nx_ConfigOpenSection("Video-General", &general);
    nx_ConfigOpenSection("Video-GLideN64", &gliden);
    set_param(general, "Fullscreen", bool_param(true), false);
    set_param(general, "ScreenWidth", int_param(kScreenWidth), false);
    set_param(general, "ScreenHeight", int_param(kScreenHeight), false);
    set_param(general, "VerticalSync", bool_param(true), false);
    // 2× (640×480) or 3× (960×720). Applied at PluginStartup; changing them in
    // NX Options needs a Restart (UseNativeResolutionFactor is not hot).
    // GLideN64: 1 = force 4:3, 2 = force 16:9. Do not seed 3 (adjust 4:3):
    // Goemon's Expand patches already widen FOV/HUD; 3 on top doubles it.
    constexpr int kAspectForce43 = 1;
    constexpr int kAspectForce169 = 2;
    const int native_res = nx::resolution_factor();
    const bool wide = nx::widescreen();
    set_param(gliden, "UseNativeResolutionFactor", int_param(native_res), false);
    set_param(gliden, "AspectRatio", int_param(wide ? kAspectForce169 : kAspectForce43), false);
    set_param(gliden, "ThreadedVideo", bool_param(false), false);
    set_param(gliden, "txHiresEnable", bool_param(false), false);
    // Do not write color/depth back into recomp RDRAM: a bad SETCIMG address
    // would smash OS mesg queues and the game would stop submitting DLs.
    set_param(gliden, "EnableCopyColorToRDRAM", int_param(0), false);
    set_param(gliden, "EnableCopyDepthToRDRAM", int_param(0), false);
    set_param(gliden, "EnableCopyAuxiliaryToRDRAM", bool_param(false), false);
    // GLES/Switch defaults from mupen64plus-libretro-nx / GLideN64 Android:
    // Tegra through Mesa is a slow GL driver; desktop-GL defaults compile a
    // blender shader per cycle and re-CRC every scrolling texrect tile.
    set_param(gliden, "EnableLegacyBlending", bool_param(true), false);
    set_param(gliden, "EnableHybridFilter", bool_param(false), false);
    set_param(gliden, "EnableInaccurateTextureCoordinates", bool_param(true), false);
    set_param(gliden, "EnableFragmentDepthWrite", bool_param(false), false);
    set_param(gliden, "BackgroundsMode", int_param(0), false); // OnePiece (fast)
    set_param(gliden, "EnableDitheringQuantization", bool_param(false), false);
    set_param(gliden, "EnableDitheringPattern", bool_param(false), false);
    set_param(gliden, "EnableHiresNoiseDithering", bool_param(false), false);
    set_param(gliden, "RDRAMImageDitheringMode", int_param(0), false);
    set_param(gliden, "txFilterIgnoreBG", bool_param(true), false);
    nx_log("ThreadedVideo=0 CopyDepthToRDRAM=0 AR=%s nativeRes=%d VerticalSync=1 "
           "LegacyBlend=1 HybridFilter=0 InaccurateTex=1 BG=OnePiece",
           wide ? "16:9" : "4:3", native_res);
}
