#include "recomp_ui.h"

#include "core_switch.hpp"
#include "nx_log.hpp"
#include "recomp.h"

#include <SDL.h>

namespace recompui {

void get_window_size(int &width, int &height) {
    // Expand (recomp_get_target_aspect_ratio) uses width/height. The NWindow is
    // 1280×720; follow the SDL window when it reports a real size.
    width = 1280;
    height = 720;
    if (goemon64nx_window == nullptr) {
        return;
    }
    int actual_width = 0;
    int actual_height = 0;
    SDL_GetWindowSize(goemon64nx_window, &actual_width, &actual_height);
    if (actual_width > 0 && actual_height > 0) {
        width = actual_width;
        height = actual_height;
    }
}

void message_box(const char *msg) {
    nx_log("[message_box] %s", msg != nullptr ? msg : "");
}

} // namespace recompui

extern "C" void recomp_run_ui_callbacks(uint8_t *rdram, recomp_context *ctx) {
    (void)rdram;
    (void)ctx;
}
