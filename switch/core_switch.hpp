#ifndef GOEMON64NX_CORE_SWITCH_HPP
#define GOEMON64NX_CORE_SWITCH_HPP

// Mupen64plus "core" surface that GLideN64 looks up with dlsym(NULL, …) at
// PluginStartup. Horizon cannot load .so files; switch/shim/dlfcn.c is weak
// and this translation unit supplies the strong table (Config*, VidExt_*,
// PluginGetVersion).

struct SDL_Window;

// Owned by main: SDL_WINDOW_OPENGL 1280×720, created without a GL context.
// VidExt_SetVideoMode creates the 3.3 core context on the gfx thread.
extern SDL_Window *goemon64nx_window;

// Write Switch-safe Video-General / Video-GLideN64 values so GLideN64's
// ConfigSetDefault* leaves them alone. Call before PluginStartup.
void goemon64nx_seed_gliden64_config();

#endif
