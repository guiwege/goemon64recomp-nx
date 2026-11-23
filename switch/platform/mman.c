#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sys/mman.h"

#define PAGE_SIZE 0x1000

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) {
    (void)addr;
    (void)prot;
    (void)flags;
    (void)fd;
    (void)offset;

    if (length == 0) {
        errno = EINVAL;
        return MAP_FAILED;
    }

    const size_t rounded = (length + PAGE_SIZE - 1) & ~(size_t)(PAGE_SIZE - 1);
    if (rounded >= (size_t)(1024 * 1024)) {
        fprintf(stdout, "[mmap] alloc %zu MiB\n", rounded / (1024 * 1024));
        fflush(stdout);
    }

    void *block = aligned_alloc(PAGE_SIZE, rounded);
    if (block == NULL) {
        fprintf(stdout, "[mmap] aligned_alloc failed length=%zu errno=%d\n", rounded, errno);
        fflush(stdout);
        errno = ENOMEM;
        return MAP_FAILED;
    }

    memset(block, 0, rounded);
    if (rounded >= (size_t)(1024 * 1024)) {
        fprintf(stdout, "[mmap] ok p=%p zeroed %zu MiB\n", block, rounded / (1024 * 1024));
        fflush(stdout);
    }
    return block;
}

int munmap(void *addr, size_t length) {
    (void)length;
    if (addr == NULL || addr == MAP_FAILED) {
        errno = EINVAL;
        return -1;
    }
    free(addr);
    return 0;
}

int mprotect(void *addr, size_t length, int prot) {
    (void)addr;
    (void)length;
    (void)prot;
    return 0;
}

int getpagesize(void) {
    return PAGE_SIZE;
}
