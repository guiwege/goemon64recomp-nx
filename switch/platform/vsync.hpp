#ifndef GOEMON64NX_VSYNC_HPP
#define GOEMON64NX_VSYNC_HPP

#include <switch.h>

#ifdef __cplusplus
extern "C" {
#endif

// Display vsync Event from window_switch.c, or NULL if vi refused it / another
// instance in this process already took it.
Event *goemon64nx_vsync_event(Result *rc_out);

// NWindow buffer size, before SDL creates its EGL surface.
void goemon64nx_window_set_size(int width, int height);

// VI thread: wait up to 50 ms for vblank. false → ultramodern's timer paces.
bool goemon64nx_wait_vsync(void);

#ifdef __cplusplus
}
#endif

#endif
