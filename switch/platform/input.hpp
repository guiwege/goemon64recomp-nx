#ifndef GOEMON64NX_INPUT_HPP
#define GOEMON64NX_INPUT_HPP

#include "nx_pad.hpp"

#include <SDL.h>

namespace goemon64 {

// Joy-Con / Pro are already attached when SDL_Init returns, before DEVICEADDED
// events are queued. Open the first GameController for pad 0.
void input_open_existing();

// SDL_CONTROLLERDEVICEADDED / REMOVED on the gfx thread (owns the event queue).
void input_handle_event(const SDL_Event &event);

// Raw SDL pad (no Start filter, no FaceButtons swap) for NX Options on the gfx thread.
void input_read_pad(NxPad *pad);

} // namespace goemon64

#endif
