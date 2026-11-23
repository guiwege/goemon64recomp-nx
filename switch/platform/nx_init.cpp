#include "nx_init.hpp"
#include "nx_debug.hpp"
#include "nx_log.hpp"

#include <cstdlib>
#include <exception>
#include <filesystem>

#include <switch.h>

extern "C" u32 __nx_nv_transfermem_size;

namespace goemon64nx {
namespace {

bool g_inited = false;

const char *applet_type_name(AppletType t) {
    switch (t) {
        case AppletType_None:
            return "None";
        case AppletType_Default:
            return "Default";
        case AppletType_Application:
            return "Application";
        case AppletType_SystemApplet:
            return "SystemApplet";
        case AppletType_LibraryApplet:
            return "LibraryApplet";
        case AppletType_OverlayApplet:
            return "OverlayApplet";
        case AppletType_SystemApplication:
            return "SystemApplication";
        default:
            return "unknown";
    }
}

[[noreturn]] void terminate_handler() {
    nx_debug_fatal("std::terminate");
    nx_log("std::terminate");
    if (std::exception_ptr ep = std::current_exception()) {
        try {
            std::rethrow_exception(ep);
        } catch (const std::exception &e) {
            nx_log("  exception: %s", e.what());
            nx_debug_fatal(e.what());
        } catch (...) {
            nx_log("  exception: (unknown type)");
            nx_debug_fatal("unknown exception type");
        }
    } else {
        nx_log("  no current_exception (abort / data abort / uncaught in another thread)");
        nx_debug_fatal("no current_exception");
    }
    nx_log_flush();
    // Give nxlink a moment to drain before the process is torn down.
    svcSleepThread(2000000000ULL);
    std::abort();
}

} // namespace

bool is_application_mode() {
    const AppletType t = appletGetAppletType();
    return t == AppletType_Application || t == AppletType_SystemApplication;
}

void platform_init() {
    if (g_inited) {
        return;
    }
    g_inited = true;

    std::error_code ec;
    std::filesystem::create_directories(GOEMON64NX_APP_DIR_SDMC, ec);
    if (ec) {
        std::filesystem::create_directories(GOEMON64NX_APP_DIR_UNIX, ec);
    }
    // GLideN64 writes combiner binaries under <cache>/shaders/ (HOME never hits RomClosed).
    std::filesystem::create_directories(GOEMON64NX_APP_DIR_SDMC "/shaders", ec);
    if (ec) {
        std::filesystem::create_directories(GOEMON64NX_APP_DIR_UNIX "/shaders", ec);
    }
    nx_log_ensure_file();
    nx_debug_install();

    std::set_terminate(terminate_handler);

    const AppletType t = appletGetAppletType();
    u64 used = 0;
    u64 total = 0;
    svcGetInfo(&used, InfoType_UsedMemorySize, CUR_PROCESS_HANDLE, 0);
    svcGetInfo(&total, InfoType_TotalMemorySize, CUR_PROCESS_HANDLE, 0);

    nx_log("applet type: %s (%d) — %s", applet_type_name(t), static_cast<int>(t),
           is_application_mode()
               ? "title override / application (full RAM)"
               : "applet (~400 MB). Hold R on a game from HOME, not Album.");
    nx_log("memory: used %llu MiB / total %llu MiB",
           static_cast<unsigned long long>(used / (1024ull * 1024ull)),
           static_cast<unsigned long long>(total / (1024ull * 1024ull)));
    nx_log("nxlink stdout: %s", nx_log_nxlink_connected() ? "connected" : "not connected");
    nx_log("nv transfermem: %u MiB",
           static_cast<unsigned>(__nx_nv_transfermem_size / (1024u * 1024u)));
    nx_debug_checkpoint("platform_init done");
}

} // namespace goemon64nx

// libnx: userAppInit (nxlink + SD log) then __libc_init_array. Logging is
// already live here so the applet warning hits the file before main().
__attribute__((constructor)) static void goemon64nx_platform_ctor() {
    goemon64nx::platform_init();
}
