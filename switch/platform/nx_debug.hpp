#ifndef GOEMON64NX_NX_DEBUG_H
#define GOEMON64NX_NX_DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif

// Breadcrumb on SD (goemon64.trace.log) + nxlink stdout. Safe to call often.
void nx_debug_checkpoint(const char *where);

// Pre-open crash/trace files. Called from platform_init.
void nx_debug_install(void);

// Mutex-free fatal line for terminate / abort paths (also SD crash log).
void nx_debug_fatal(const char *msg);

#ifdef __cplusplus
}
#endif

#endif
