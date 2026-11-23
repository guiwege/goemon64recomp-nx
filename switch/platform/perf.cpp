// Clock profiles, applied from the SDL event pump (goemon64nx_perf_update in
// update_gfx). Only while the game has focus; re-evaluated when the console is
// docked or undocked; released on focus loss or exit. GPU profiles raise clocks
// in handheld only — docked already runs at docked clocks.
//
// Two sources, as in DK64Recomp-NX / mpo_nx / sa2-nx:
// - official APM "docked GPU in handheld" (GPU 768 MHz), with mpo_nx's fallback;
// - Horizon OC (hoc:clk): docked-column clocks from this title's profile, else
//   the global one, forced with its override command. No frequency is invented:
//   a module with no docked value is left alone. Overrides do not expire, so a
//   marker records them and the next start releases them if the game crashed.
//
// Clock profile comes from nx::get(ClockProfile): 0 ConsoleDefault, 1 DockedGpu
// (default), 2 HorizonOcDocked, 3 CpuBoost. CPU Boost only if the user chooses
// it (Horizon OC). No recomp_nx_* RDRAM pacing exports.

#include "perf.hpp"

#include "nx_log.hpp"
#include "nx_settings.h"

#include <cstdio>

#include <switch.h>

namespace {

enum class Profile { ConsoleDefault, DockedGpu, HorizonOcDocked, CpuBoost };

Profile profile_from_setting(int value) {
    switch (value) {
        case 0:
            return Profile::ConsoleDefault;
        case 1:
            return Profile::DockedGpu;
        case 2:
            return Profile::HorizonOcDocked;
        case 3:
            return Profile::CpuBoost;
        default:
            return Profile::DockedGpu;
    }
}

constexpr u32 APM_DOCKED_GPU = 0x00010001;          // GPU 768 MHz
constexpr u32 APM_DOCKED_GPU_FALLBACK = 0x92220007; // GPU 460.8 MHz, RAM 1600 MHz

// Horizon OC's IPC (Source/hoc-clk/common/include/hocclk/ipc.h, API version 2).
constexpr const char *HOC_SERVICE = "hoc:clk";
constexpr u32 HOC_GET_PROFILES = 5;
constexpr u32 HOC_SET_OVERRIDE = 8;
constexpr u64 HOC_GLOBAL_PROFILE = 0xA111111111111111ull;
constexpr int HOC_PROFILE_COUNT = 5;
constexpr int HOC_MODULE_COUNT = 5; // CPU, GPU, MEM, governor, display
constexpr int HOC_DOCKED = 4;
constexpr u32 HOC_CLOCK_MODULES = 3; // only CPU, GPU and MEM are touched
// The governor module's override packs CPU, GPU and VRR states (1 disabled, 0
// left as configured, Source/hoc-clk/common/include/hocclk/board.h). While the
// CPU governor runs, Horizon OC skips every CPU frequency (clock_manager.cpp
// SetClocks, noCPU): with docked_governor=2 for the title the game runs as, the
// CPU stayed at 1020 MHz under both profiles below. They turn the CPU governor
// off for the game.
// Horizon OC applies the modules in order, CPU (0) before the governor (3), and
// only when something changed: a CPU clock sent with the governor override was
// skipped (governor still on), then the governor turned off reset the CPU to
// stock and nothing changed again (measured: both calls 0x0, CPU 1020 MHz). The
// CPU clock is sent once Horizon OC has polled the governor override
// (poll_interval_ms, 300 by default).
constexpr u32 HOC_GOVERNOR_MODULE = 3;
constexpr u64 HOC_CPU_DELAY_MS = 1000;
constexpr u32 HOC_CPU_GOVERNOR_OFF = 1;
constexpr const char *HOC_MARKER = GOEMON64NX_APP_DIR_SDMC "/.hoc_override";
// The CPU clock of the console's official boost mode (loading screens), on
// every model.
constexpr u32 HOC_CPU_MODULE = 0;
constexpr u32 CPU_BOOST_MHZ = 1785;

struct HocProfiles {
    u32 mhz[HOC_PROFILE_COUNT][HOC_MODULE_COUNT];
};
struct HocOverride {
    u32 module;
    u32 hz;
};

bool focused = true;
Profile applied = Profile::ConsoleDefault;
bool applied_in_handheld = false;
bool apm_changed = false;
u32 apm_original = 0;
AppletHookCookie hook_cookie;
u32 pending_cpu_mhz = 0; // the CPU clock to send at pending_cpu_at_ms, 0 for none
u64 pending_cpu_at_ms = 0;

u64 now_ms() {
    return armTicksToNs(armGetSystemTick()) / 1000000;
}

// Atmosphère's sm extension 65100 answers without blocking; smGetService on a
// missing service waits forever.
bool has_service(const char *name) {
    const SmServiceName service = smEncodeName(name);
    u8 present = 0;
    const Result rc = tipcDispatchInOut(smGetServiceSessionTipc(), 65100, service, present);
    return R_SUCCEEDED(rc) && present != 0;
}

bool open_hoc(Service *service) {
    return has_service(HOC_SERVICE) && R_SUCCEEDED(smGetService(service, HOC_SERVICE));
}

Result hoc_override(Service *service, u32 module, u32 hz) {
    const HocOverride args{module, hz};
    return serviceDispatchIn(service, HOC_SET_OVERRIDE, args);
}

Result hoc_profiles(Service *service, u64 program, HocProfiles *out) {
    return serviceDispatchIn(service, HOC_GET_PROFILES, program,
                             .buffer_attrs = {SfBufferAttr_HipcAutoSelect | SfBufferAttr_Out},
                             .buffers = {{out, sizeof(*out)}});
}

void send_pending_cpu() {
    if (pending_cpu_mhz == 0 || now_ms() < pending_cpu_at_ms) {
        return;
    }
    Service service;
    if (open_hoc(&service)) {
        const Result rc = hoc_override(&service, HOC_CPU_MODULE, pending_cpu_mhz * 1000000u);
        nx_log("perf: Horizon OC CPU -> %u MHz (0x%x)", pending_cpu_mhz, static_cast<unsigned>(rc));
        serviceClose(&service);
    }
    pending_cpu_mhz = 0;
}

void release_hoc() {
    Service service;
    if (!open_hoc(&service)) {
        return;
    }
    for (u32 module = 0; module < HOC_CLOCK_MODULES; module++) {
        hoc_override(&service, module, 0);
    }
    hoc_override(&service, HOC_GOVERNOR_MODULE, 0);
    serviceClose(&service);
    std::remove(HOC_MARKER);
    nx_log("perf: Horizon OC overrides released");
}

void apply_hoc_docked() {
    Service service;
    if (!open_hoc(&service)) {
        nx_log("perf: Horizon OC not running");
        return;
    }
    u64 program = 0;
    svcGetInfo(&program, InfoType_ProgramId, CUR_PROCESS_HANDLE, 0);
    HocProfiles own{};
    HocProfiles global{};
    hoc_profiles(&service, program, &own);
    hoc_profiles(&service, HOC_GLOBAL_PROFILE, &global);
    if (FILE *marker = std::fopen(HOC_MARKER, "w")) {
        std::fclose(marker);
    }
    hoc_override(&service, HOC_GOVERNOR_MODULE, HOC_CPU_GOVERNOR_OFF);
    for (u32 module = 0; module < HOC_CLOCK_MODULES; module++) {
        const u32 own_mhz = own.mhz[HOC_DOCKED][module];
        const u32 mhz = own_mhz != 0 ? own_mhz : global.mhz[HOC_DOCKED][module];
        if (mhz == 0) {
            continue;
        }
        if (module == HOC_CPU_MODULE) {
            pending_cpu_mhz = mhz;
            pending_cpu_at_ms = now_ms() + HOC_CPU_DELAY_MS;
            continue;
        }
        const Result rc = hoc_override(&service, module, mhz * 1000000u);
        nx_log("perf: Horizon OC module %u -> %u MHz (0x%x)", module, mhz, static_cast<unsigned>(rc));
    }
    serviceClose(&service);
}

void apply_hoc_cpu_boost() {
    Service service;
    if (!open_hoc(&service)) {
        nx_log("perf: Horizon OC not running");
        return;
    }
    if (FILE *marker = std::fopen(HOC_MARKER, "w")) {
        std::fclose(marker);
    }
    const Result governor_rc = hoc_override(&service, HOC_GOVERNOR_MODULE, HOC_CPU_GOVERNOR_OFF);
    nx_log("perf: Horizon OC CPU governor off (0x%x)", static_cast<unsigned>(governor_rc));
    serviceClose(&service);
    pending_cpu_mhz = CPU_BOOST_MHZ;
    pending_cpu_at_ms = now_ms() + HOC_CPU_DELAY_MS;
}

void apply_apm_docked_gpu() {
    if (R_FAILED(apmGetPerformanceConfiguration(ApmPerformanceMode_Normal, &apm_original))) {
        return;
    }
    Result rc = apmSetPerformanceConfiguration(ApmPerformanceMode_Normal, APM_DOCKED_GPU);
    if (R_FAILED(rc)) {
        rc = apmSetPerformanceConfiguration(ApmPerformanceMode_Normal, APM_DOCKED_GPU_FALLBACK);
    }
    apm_changed = R_SUCCEEDED(rc);
    nx_log("perf: apm docked GPU (0x%x)", static_cast<unsigned>(rc));
}

void release() {
    pending_cpu_mhz = 0;
    if (apm_changed) {
        apmSetPerformanceConfiguration(ApmPerformanceMode_Normal, apm_original);
        apm_changed = false;
    }
    if ((applied == Profile::HorizonOcDocked && applied_in_handheld) || applied == Profile::CpuBoost) {
        release_hoc();
    }
    applied = Profile::ConsoleDefault;
}

void apply(Profile profile, bool handheld) {
    if (handheld && profile == Profile::DockedGpu) {
        apply_apm_docked_gpu();
    }
    if (handheld && profile == Profile::HorizonOcDocked) {
        apply_hoc_docked();
    }
    if (profile == Profile::CpuBoost) {
        apply_hoc_cpu_boost();
    }
    applied = profile;
    applied_in_handheld = handheld;
}

// Runs from the SDL event pump (gfx thread, like dk64nx_perf_update). Clocks
// are released right here: once the game is in the background it may be
// suspended before the pump runs again.
void on_applet_hook(AppletHookType type, void *) {
    if (type != AppletHookType_OnFocusState) {
        return;
    }
    focused = appletGetFocusState() == AppletFocusState_InFocus;
    if (!focused) {
        release();
    }
}

} // namespace

void goemon64nx_perf_start() {
    apmInitialize();
    if (FILE *marker = std::fopen(HOC_MARKER, "r")) {
        std::fclose(marker);
        release_hoc();
    }
    appletHook(&hook_cookie, on_applet_hook, nullptr);
}

void goemon64nx_perf_update() {
    const Profile wanted =
        focused ? profile_from_setting(nx::get(nx::Setting::ClockProfile)) : Profile::ConsoleDefault;
    const bool handheld = appletGetOperationMode() == AppletOperationMode_Handheld;
    if (wanted == applied && handheld == applied_in_handheld) {
        send_pending_cpu();
        return;
    }
    release();
    apply(wanted, handheld);
}

void goemon64nx_perf_stop() {
    appletUnhook(&hook_cookie);
    release();
    apmExit();
}
