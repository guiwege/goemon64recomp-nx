#ifndef GOEMON64NX_DLFCN_H
#define GOEMON64NX_DLFCN_H

// Horizon homebrew links statically: native mod libraries cannot be loaded
// (dlopen is a no-op). dlsym is a real symbol so Phase 3's mupen core table
// can replace the weak stub in switch/shim/dlfcn.c.

#include <stddef.h>

#define RTLD_LAZY   0x1
#define RTLD_NOW    0x2
#define RTLD_LOCAL  0x0
#define RTLD_GLOBAL 0x100

#ifdef __cplusplus
extern "C" {
#endif

void *dlsym(void *handle, const char *name);

#ifdef __cplusplus
}
#endif

static inline void *dlopen(const char *path, int mode) {
    (void)path;
    (void)mode;
    return NULL;
}

static inline int dlclose(void *handle) {
    (void)handle;
    return 0;
}

static inline char *dlerror(void) {
    return (char *)"dynamic libraries are not supported on Switch";
}

#endif
