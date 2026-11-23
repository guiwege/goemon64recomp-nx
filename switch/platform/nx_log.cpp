#include "nx_log.hpp"

#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#include <switch.h>

// nvdrv keeps one record per GPU allocation (mesa: nvMapCreate per texture) in
// the transfer memory libnx hands it at startup. Weak default is 8 MiB
// (0x800000); GLideN64 caches up to ~8,000 textures and uploads start failing
// with GL_OUT_OF_MEMORY near 5,000. 32 MiB holds about 20,000 allocations.
extern "C" u32 __nx_nv_transfermem_size = 32 * 1024 * 1024;

namespace {

constexpr const char *kLogSdmc =
    GOEMON64NX_APP_DIR_SDMC "/" GOEMON64NX_LOG_NAME;
constexpr const char *kLogUnix =
    GOEMON64NX_APP_DIR_UNIX "/" GOEMON64NX_LOG_NAME;
constexpr const char *kPrevSdmc =
    GOEMON64NX_APP_DIR_SDMC "/" GOEMON64NX_PREV_LOG_NAME;
constexpr const char *kPrevUnix =
    GOEMON64NX_APP_DIR_UNIX "/" GOEMON64NX_PREV_LOG_NAME;

int g_nxlink_sock = -1;
FILE *g_log = nullptr;
bool g_stdout_is_file = false;
bool g_rotated = false;
pthread_mutex_t g_log_mu = PTHREAD_MUTEX_INITIALIZER;

void ensure_app_dir() {
    mkdir("/switch", 0755);
    mkdir(GOEMON64NX_APP_DIR_UNIX, 0755);
}

void rotate_logs() {
    if (g_rotated) {
        return;
    }
    g_rotated = true;
    // sdmc: and /switch are the same volume on libnx — rotate once.
    remove(kPrevSdmc);
    if (rename(kLogSdmc, kPrevSdmc) != 0) {
        remove(kPrevUnix);
        rename(kLogUnix, kPrevUnix);
    }
}

FILE *try_fopen(const char *path, const char *mode) {
    FILE *f = fopen(path, mode);
    if (f != nullptr) {
        setvbuf(f, nullptr, _IONBF, 0);
    }
    return f;
}

bool redirect_stdio(const char *path) {
    if (freopen(path, "w", stdout) == nullptr) {
        return false;
    }
    freopen(path, "a", stderr);
    setvbuf(stdout, nullptr, _IONBF, 0);
    setvbuf(stderr, nullptr, _IONBF, 0);
    g_stdout_is_file = true;
    return true;
}

void open_sd_log(bool nxlink_ok) {
    ensure_app_dir();
    rotate_logs();

    if (nxlink_ok) {
        if (g_log != nullptr) {
            return;
        }
        g_log = try_fopen(kLogSdmc, "w");
        if (g_log == nullptr) {
            g_log = try_fopen(kLogUnix, "w");
        }
        return;
    }

    // No nxlink: hbmenu / Album launch. Send stdout/stderr to the SD log so
    // printf from the rest of the process is captured too.
    if (g_stdout_is_file) {
        return;
    }
    if (!redirect_stdio(kLogSdmc) && !redirect_stdio(kLogUnix)) {
        printf("could not open %s: %s\n", kLogSdmc, strerror(errno));
        fflush(stdout);
    }
}

} // namespace

extern "C" void userAppInit(void) {
    bool nxlink_ok = false;
    if (R_SUCCEEDED(socketInitializeDefault())) {
        g_nxlink_sock = nxlinkStdio();
        if (g_nxlink_sock >= 0) {
            nxlink_ok = true;
            setvbuf(stdout, nullptr, _IONBF, 0);
            setvbuf(stderr, nullptr, _IONBF, 0);
        } else {
            socketExit();
            g_nxlink_sock = -1;
        }
    }
    open_sd_log(nxlink_ok);
}

extern "C" void userAppExit(void) {
    if (g_log != nullptr) {
        fclose(g_log);
        g_log = nullptr;
    }
    if (g_nxlink_sock >= 0) {
        close(g_nxlink_sock);
        socketExit();
        g_nxlink_sock = -1;
    }
}

extern "C" void nx_log_ensure_file(void) {
    open_sd_log(g_nxlink_sock >= 0);
}

extern "C" int nx_log_nxlink_connected(void) {
    return g_nxlink_sock >= 0 ? 1 : 0;
}

extern "C" void nx_log_flush(void) {
    fflush(stdout);
    fflush(stderr);
    if (g_log != nullptr) {
        fflush(g_log);
    }
}

extern "C" void nx_logv(const char *fmt, va_list ap) {
    pthread_mutex_lock(&g_log_mu);

    va_list ap_file;
    va_copy(ap_file, ap);
    vprintf(fmt, ap);
    fputc('\n', stdout);
    fflush(stdout);
    if (g_log != nullptr) {
        vfprintf(g_log, fmt, ap_file);
        fputc('\n', g_log);
        fflush(g_log);
    }
    va_end(ap_file);

    pthread_mutex_unlock(&g_log_mu);
}

extern "C" void nx_log(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    nx_logv(fmt, ap);
    va_end(ap);
}
