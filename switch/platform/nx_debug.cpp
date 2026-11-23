// Horizon crash capture for nxlink runs.
//
// Data abort / undefined instruction never reach std::terminate. libnx only
// forwards them here if __nx_exception_stack_size is non-zero. We dump PC/FAR
// to stdout (nxlink) and to sdmc:/switch/goemon64recomp-nx/goemon64.crash.log without
// taking the nx_log mutex, then sleep so the nxlink socket can drain.

#include "nx_debug.hpp"
#include "nx_log.hpp"

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <switch.h>

extern "C" {
alignas(16) u8 __nx_exception_stack[0x4000];
u64 __nx_exception_stack_size = sizeof(__nx_exception_stack);
}

namespace {

constexpr const char *kCrashSdmc = GOEMON64NX_APP_DIR_SDMC "/goemon64.crash.log";
constexpr const char *kCrashUnix = GOEMON64NX_APP_DIR_UNIX "/goemon64.crash.log";
constexpr const char *kTraceSdmc = GOEMON64NX_APP_DIR_SDMC "/goemon64.trace.log";
constexpr const char *kTraceUnix = GOEMON64NX_APP_DIR_UNIX "/goemon64.trace.log";

FILE *g_crash = nullptr;
FILE *g_trace = nullptr;

FILE *try_open(const char *a, const char *b, const char *mode) {
    FILE *f = fopen(a, mode);
    if (f == nullptr) {
        f = fopen(b, mode);
    }
    if (f != nullptr) {
        setvbuf(f, nullptr, _IONBF, 0);
    }
    return f;
}

void raw_line(FILE *f, const char *s) {
    fputs(s, stdout);
    fputc('\n', stdout);
    fflush(stdout);
    if (f != nullptr) {
        fputs(s, f);
        fputc('\n', f);
        fflush(f);
        const int fd = fileno(f);
        if (fd >= 0) {
            fsync(fd);
        }
    }
}

const char *desc_name(u32 desc) {
    switch (desc) {
        case ThreadExceptionDesc_InstructionAbort:
            return "InstructionAbort";
        case ThreadExceptionDesc_MisalignedPC:
            return "MisalignedPC";
        case ThreadExceptionDesc_MisalignedSP:
            return "MisalignedSP";
        case ThreadExceptionDesc_SError:
            return "SError";
        case ThreadExceptionDesc_BadSVC:
            return "BadSVC";
        case ThreadExceptionDesc_Trap:
            return "Trap";
        case ThreadExceptionDesc_Other:
            return "Other (data abort / undefined / breakpoint)";
        default:
            return "unknown";
    }
}

void dump_exception(ThreadExceptionDump *ctx) {
    char line[192];

    raw_line(g_crash, "==== Goemon64Recomp-NX fatal exception ====");
    snprintf(line, sizeof(line), "error_desc=0x%x (%s)", ctx->error_desc, desc_name(ctx->error_desc));
    raw_line(g_crash, line);
    snprintf(line, sizeof(line), "pc =0x%016lx  lr =0x%016lx",
             static_cast<unsigned long>(ctx->pc.x), static_cast<unsigned long>(ctx->lr.x));
    raw_line(g_crash, line);
    snprintf(line, sizeof(line), "sp =0x%016lx  fp =0x%016lx",
             static_cast<unsigned long>(ctx->sp.x), static_cast<unsigned long>(ctx->fp.x));
    raw_line(g_crash, line);
    snprintf(line, sizeof(line), "far=0x%016lx  esr=0x%08x  pstate=0x%08x",
             static_cast<unsigned long>(ctx->far.x), ctx->esr, ctx->pstate);
    raw_line(g_crash, line);
    snprintf(line, sizeof(line), "afsr0=0x%08x afsr1=0x%08x", ctx->afsr0, ctx->afsr1);
    raw_line(g_crash, line);

    for (int i = 0; i < 8; ++i) {
        snprintf(line, sizeof(line), "x%-2d=0x%016lx", i, static_cast<unsigned long>(ctx->cpu_gprs[i].x));
        raw_line(g_crash, line);
    }
    raw_line(g_crash, "see also goemon64.trace.log (last checkpoint) and atmosphere/crash_reports/");
}

} // namespace

extern "C" void nx_debug_install(void) {
    if (g_crash == nullptr) {
        g_crash = try_open(kCrashSdmc, kCrashUnix, "w");
    }
    if (g_trace == nullptr) {
        g_trace = try_open(kTraceSdmc, kTraceUnix, "w");
    }
    nx_debug_checkpoint("nx_debug_install");
}

extern "C" void nx_debug_checkpoint(const char *where) {
    char line[192];
    const char *w = where != nullptr ? where : "(null)";
    snprintf(line, sizeof(line), "chk %s", w);
    fputs(line, stdout);
    fputc('\n', stdout);
    fflush(stdout);
    if (g_trace != nullptr) {
        fputs(line, g_trace);
        fputc('\n', g_trace);
        fflush(g_trace);
    }
}

extern "C" void nx_debug_fatal(const char *msg) {
    raw_line(g_crash, "==== Goemon64Recomp-NX fatal ====");
    raw_line(g_crash, msg != nullptr ? msg : "(null)");
}

extern "C" void __libnx_exception_handler(ThreadExceptionDump *ctx) {
    dump_exception(ctx);
    // Let nxlink drain before Atmosphere tears the process down.
    svcSleepThread(2500000000ULL);
    diagAbortWithResult(MAKERESULT(Module_Libnx, LibnxError_IoError));
}
