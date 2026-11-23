// NX Options overlay: −+ opens it, drawn in VidExt_GL_SwapBuffers on the gfx
// thread. While it owns the pad the game sees a neutral controller.
#pragma once

// argv[0] from main, for Restart Game (envSetNextLoad).
extern const char *goemon64nx_program_path;

bool goemon64nx_menu_owns_pad();
void goemon64nx_menu_on_swap(int width, int height);
