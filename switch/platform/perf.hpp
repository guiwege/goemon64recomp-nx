#ifndef GOEMON64NX_PERF_HPP
#define GOEMON64NX_PERF_HPP

// Clock profiles while the game has focus. nx::Setting::ClockProfile selects
// ConsoleDefault / DockedGpu (default) / HorizonOcDocked / CpuBoost. Clocks are
// released on HOME/overlay (OnFocusState) and on exit.

void goemon64nx_perf_start();
void goemon64nx_perf_update();
void goemon64nx_perf_stop();

#endif
