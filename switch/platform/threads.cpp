#include <mutex>
#include <pthread.h>
#include <string>
#include <vector>

#include <switch.h>

#include "nx_log.hpp"
#include "ultramodern/ultramodern.hpp"

// libnx default stacks are 128 KiB (newlib __syscall_thread_create). Recompiled
// N64 frames need about 1 MiB. std::thread cannot pass attributes, so the NRO
// is linked with -Wl,--wrap=pthread_create,--wrap=pthread_detach.
//
// pthread_detach is unsupported on libnx (ENOSYS); std::thread::detach would
// throw. Detached runtime threads live until process exit.
//
// libnx also starts every thread on core 0. SDL audio sharing that core with
// GLideN64 starved the mixer (~25.6k of 48k frames/s). Names from
// set_native_thread_name pick a core; main and the SDL audio thread stay on 0.

namespace {
constexpr size_t kThreadStackSize = 1024 * 1024;
constexpr int kGfxCore = 2;
constexpr int kGameCore = 1;

// HOS: lower is more urgent. 0x2C is libnx's main thread; 0x3B is the default
// for new threads. Indexed by ultramodern::ThreadPriority (Low … Critical).
constexpr u32 kHosPriority[] = {0x3C, 0x3B, 0x30, 0x2D, 0x2C};

int core_for(const std::string &name) {
    if (name == "Gfx Thread") {
        return kGfxCore;
    }
    if (name == "VI Thread" || name == "Timer Thread" || name == "SP Task Thread" ||
        name == "Game Start Thread" || name.starts_with("[Game]")) {
        return kGameCore;
    }
    return -1;
}

void log_pin_once(const std::string &name, int core) {
    static std::mutex mutex;
    static std::vector<std::string> seen;
    std::lock_guard lock(mutex);
    for (const std::string &logged : seen) {
        if (logged == name) {
            return;
        }
    }
    seen.push_back(name);
    nx_log("thread pin name=%s core=%d", name.c_str(), core);
}

} // namespace

extern "C" {

int __real_pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                          void *(*start)(void *), void *arg);

int __wrap_pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                          void *(*start)(void *), void *arg) {
    if (attr != nullptr) {
        return __real_pthread_create(thread, attr, start, arg);
    }

    pthread_attr_t sized;
    pthread_attr_init(&sized);
    pthread_attr_setstacksize(&sized, kThreadStackSize);
    const int result = __real_pthread_create(thread, &sized, start, arg);
    pthread_attr_destroy(&sized);
    return result;
}

int __wrap_pthread_detach(pthread_t thread) {
    (void)thread;
    return 0;
}

}

void ultramodern::set_native_thread_name(const std::string &name) {
    const int core = core_for(name);
    if (core < 0) {
        return;
    }
    svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, 1u << core);
    log_pin_once(name, core);
}

void ultramodern::set_native_thread_priority(ultramodern::ThreadPriority pri) {
    const int level = static_cast<int>(pri);
    if (level < 0 || level >= static_cast<int>(sizeof(kHosPriority) / sizeof(kHosPriority[0]))) {
        return;
    }
    svcSetThreadPriority(CUR_THREAD_HANDLE, kHosPriority[level]);
}
