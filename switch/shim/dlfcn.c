#include "dlfcn.h"

// Weak so Phase 3 can supply a strong dlsym that answers GLideN64's mupen
// "core" lookups from a static table.
__attribute__((weak)) void *dlsym(void *handle, const char *name) {
    (void)handle;
    (void)name;
    return NULL;
}
