#ifndef GOEMON64NX_NX_INIT_H
#define GOEMON64NX_NX_INIT_H

namespace goemon64nx {

// Create sdmc:/switch/goemon64recomp-nx and shaders/, install the terminate handler,
// and log applet type / RAM. Safe to call more than once. Also runs from a
// constructor so main.cpp can skip an explicit call.
void platform_init();

bool is_application_mode();

} // namespace goemon64nx

#endif
