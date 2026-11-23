// VI pacing from the display. The game stays at 30 fps; the VI thread still
// runs at 60 Hz. Waiting on vblank each VI reduces drift against SwapInterval(1)
// in VidExt. No overlay vblank ring (DK64 NX Options).
#include "vsync.hpp"

#include "nx_log.hpp"

namespace {
constexpr u64 kVsyncTimeoutNs = 50'000'000; // a missed vblank must not stall the game
bool g_logged = false;
} // namespace

extern "C" bool goemon64nx_wait_vsync(void) {
    Result rc = 0;
    Event *vsync = goemon64nx_vsync_event(&rc);
    if (!g_logged) {
        g_logged = true;
        nx_log("VI pacing: %s rc=0x%x", vsync != nullptr ? "display vsync" : "timer",
               static_cast<unsigned>(rc));
    }
    if (vsync == nullptr) {
        return false;
    }
    return R_SUCCEEDED(eventWait(vsync, kVsyncTimeoutNs));
}
