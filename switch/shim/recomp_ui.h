#ifndef __RECOMP_UI__
#define __RECOMP_UI__

// Overlay of include/recomp_ui.h. The PC header pulls RmlUi; this NRO does not
// ship a launcher. Only the entry points linked game sources call.

namespace recompui {
    void get_window_size(int &width, int &height);
    void message_box(const char *msg);
}

#endif
