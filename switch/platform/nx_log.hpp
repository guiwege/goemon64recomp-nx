#ifndef GOEMON64NX_NX_LOG_H
#define GOEMON64NX_NX_LOG_H

#include <stdarg.h>

// Horizon app folder. libnx mounts sdmc at "/", so both spellings work;
// prefer the sdmc: form from the port plan, then the unix mount.
#define GOEMON64NX_APP_DIR_SDMC "sdmc:/switch/goemon64recomp-nx"
#define GOEMON64NX_APP_DIR_UNIX "/switch/goemon64recomp-nx"
#define GOEMON64NX_LOG_NAME "goemon64.log"
#define GOEMON64NX_PREV_LOG_NAME "goemon64.prev.log"

#ifdef __cplusplus
extern "C" {
#endif

// stdout (nxlink when connected) plus the SD log file. Always appends a newline
// and flushes; unbuffered so a crash still leaves the last line on disk.
void nx_log(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void nx_logv(const char *fmt, va_list ap);
void nx_log_flush(void);

// Called from platform_init after create_directories: opens the SD log if
// userAppInit could not (mkdir/fopen failed that early).
void nx_log_ensure_file(void);

int nx_log_nxlink_connected(void);

#ifdef __cplusplus
}
#endif

#endif
