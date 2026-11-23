#ifndef GOEMON64NX_SEMAPHORE_H
#define GOEMON64NX_SEMAPHORE_H

// newlib/libnx POSIX semaphores are missing or fatal. The Switch CMake defines
// __unix__ so concurrentqueue's LightweightSemaphore includes <semaphore.h>;
// unnamed semaphores are implemented with pthreads.

#include <errno.h>
#include <pthread.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    unsigned int count;
} sem_t;

static inline int sem_init(sem_t *sem, int pshared, unsigned int value) {
    if (sem == NULL || pshared != 0) {
        errno = EINVAL;
        return -1;
    }
    if (pthread_mutex_init(&sem->mutex, NULL) != 0) {
        return -1;
    }
    if (pthread_cond_init(&sem->cond, NULL) != 0) {
        pthread_mutex_destroy(&sem->mutex);
        return -1;
    }
    sem->count = value;
    return 0;
}

static inline int sem_destroy(sem_t *sem) {
    if (sem == NULL) {
        errno = EINVAL;
        return -1;
    }
    pthread_cond_destroy(&sem->cond);
    pthread_mutex_destroy(&sem->mutex);
    return 0;
}

static inline int sem_wait(sem_t *sem) {
    if (sem == NULL) {
        errno = EINVAL;
        return -1;
    }
    pthread_mutex_lock(&sem->mutex);
    while (sem->count == 0) {
        pthread_cond_wait(&sem->cond, &sem->mutex);
    }
    sem->count--;
    pthread_mutex_unlock(&sem->mutex);
    return 0;
}

static inline int sem_trywait(sem_t *sem) {
    if (sem == NULL) {
        errno = EINVAL;
        return -1;
    }
    pthread_mutex_lock(&sem->mutex);
    if (sem->count == 0) {
        pthread_mutex_unlock(&sem->mutex);
        errno = EAGAIN;
        return -1;
    }
    sem->count--;
    pthread_mutex_unlock(&sem->mutex);
    return 0;
}

static inline int sem_timedwait(sem_t *sem, const struct timespec *abs_timeout) {
    if (sem == NULL || abs_timeout == NULL) {
        errno = EINVAL;
        return -1;
    }
    pthread_mutex_lock(&sem->mutex);
    while (sem->count == 0) {
        int rc = pthread_cond_timedwait(&sem->cond, &sem->mutex, abs_timeout);
        if (rc == ETIMEDOUT) {
            pthread_mutex_unlock(&sem->mutex);
            errno = ETIMEDOUT;
            return -1;
        }
        if (rc != 0 && rc != EINTR) {
            pthread_mutex_unlock(&sem->mutex);
            errno = rc;
            return -1;
        }
    }
    sem->count--;
    pthread_mutex_unlock(&sem->mutex);
    return 0;
}

static inline int sem_post(sem_t *sem) {
    if (sem == NULL) {
        errno = EINVAL;
        return -1;
    }
    pthread_mutex_lock(&sem->mutex);
    sem->count++;
    pthread_cond_signal(&sem->cond);
    pthread_mutex_unlock(&sem->mutex);
    return 0;
}

#ifdef __cplusplus
}
#endif

#endif
