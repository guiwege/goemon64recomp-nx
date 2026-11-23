/* Fase 1 hello NRO: nxlink + sdmc log + SDL/GL clear. Validates the Docker SDK. */

#include <errno.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#include <switch.h>

#include <SDL.h>
#include <GLES2/gl2.h>

#include "nx_log.hpp"

#ifndef GOEMON64_HELLO_VERSION
#define GOEMON64_HELLO_VERSION "0.1.0"
#endif

#ifdef ENABLE_NXLINK
static int g_nxlink_sock = -1;

void userAppInit(void) {
    if (R_FAILED(socketInitializeDefault())) {
        return;
    }
    g_nxlink_sock = nxlinkStdio();
    if (g_nxlink_sock < 0) {
        socketExit();
    }
}

void userAppExit(void) {
    if (g_nxlink_sock >= 0) {
        close(g_nxlink_sock);
        socketExit();
        g_nxlink_sock = -1;
    }
}
#endif

static FILE *g_log;
static bool g_application_mode;

static void log_line(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
    fputc('\n', stdout);
    fflush(stdout);
    if (g_log) {
        va_start(ap, fmt);
        vfprintf(g_log, fmt, ap);
        va_end(ap);
        fputc('\n', g_log);
        fflush(g_log);
    }
}

static void ensure_dir(const char *path) {
    if (mkdir(path, 0755) != 0 && errno != EEXIST) {
        log_line("mkdir %s: %s", path, strerror(errno));
    }
}

static FILE *try_open(const char *dir, const char *name, const char *mode) {
    char path[256];
    snprintf(path, sizeof(path), "%s/%s", dir, name);
    return fopen(path, mode);
}

static void open_log(void) {
    ensure_dir("/switch");
    ensure_dir(GOEMON64NX_APP_DIR_UNIX);
    g_log = try_open(GOEMON64NX_APP_DIR_SDMC, GOEMON64NX_LOG_NAME, "w");
    if (!g_log) {
        g_log = try_open(GOEMON64NX_APP_DIR_UNIX, GOEMON64NX_LOG_NAME, "w");
    }
    if (!g_log) {
        printf("could not open %s/%s: %s\n", GOEMON64NX_APP_DIR_SDMC, GOEMON64NX_LOG_NAME, strerror(errno));
    }
}

static const char *applet_type_name(AppletType t) {
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

static void log_runtime_env(void) {
    AppletType t = appletGetAppletType();
    g_application_mode = (t == AppletType_Application || t == AppletType_SystemApplication);

    u64 used = 0;
    u64 total = 0;
    svcGetInfo(&used, InfoType_UsedMemorySize, CUR_PROCESS_HANDLE, 0);
    svcGetInfo(&total, InfoType_TotalMemorySize, CUR_PROCESS_HANDLE, 0);

    log_line("Goemon64 Hello %s", GOEMON64_HELLO_VERSION);
    log_line("hello");
    log_line("applet type: %s (%d) — %s", applet_type_name(t), (int)t,
             g_application_mode
                 ? "title override / application (full RAM)"
                 : "applet (~400 MB). Hold R on a game from HOME, not Album.");
    log_line("memory: used %llu MiB / total %llu MiB",
             (unsigned long long)(used / (1024ull * 1024ull)),
             (unsigned long long)(total / (1024ull * 1024ull)));
#ifdef ENABLE_NXLINK
    log_line("nxlink stdout: %s", g_nxlink_sock >= 0 ? "connected" : "not connected");
#endif
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    open_log();
    log_runtime_env();

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER) < 0) {
        log_line("SDL_Init: %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    SDL_Window *window = SDL_CreateWindow(
        "Goemon64 Hello", 0, 0, 1280, 720,
        SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN | SDL_WINDOW_SHOWN);
    if (!window) {
        log_line("SDL_CreateWindow: %s", SDL_GetError());
        SDL_Quit();
        return EXIT_FAILURE;
    }

    SDL_GLContext ctx = SDL_GL_CreateContext(window);
    if (!ctx) {
        log_line("SDL_GL_CreateContext: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return EXIT_FAILURE;
    }
    SDL_GL_MakeCurrent(window, ctx);
    SDL_GL_SetSwapInterval(1);

    log_line("GL_VENDOR   %s", (const char *)glGetString(GL_VENDOR));
    log_line("GL_RENDERER %s", (const char *)glGetString(GL_RENDERER));
    log_line("GL_VERSION  %s", (const char *)glGetString(GL_VERSION));

    int njoy = SDL_NumJoysticks();
    for (int i = 0; i < njoy; i++) {
        if (SDL_IsGameController(i)) {
            SDL_GameControllerOpen(i);
        } else {
            SDL_JoystickOpen(i);
        }
    }
    log_line("joysticks: %d", njoy);
    log_line("controls: Plus/Start exits.");

    bool running = true;
    while (running) {
        SDL_Event ev;
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_QUIT) {
                running = false;
            } else if (ev.type == SDL_CONTROLLERBUTTONDOWN &&
                       ev.cbutton.button == SDL_CONTROLLER_BUTTON_START) {
                running = false;
            } else if (ev.type == SDL_JOYBUTTONDOWN && ev.jbutton.button == 10) {
                running = false;
            }
        }

        if (g_application_mode) {
            glClearColor(0.05f, 0.28f, 0.32f, 1.0f);
        } else {
            glClearColor(0.40f, 0.22f, 0.04f, 1.0f);
        }
        glClear(GL_COLOR_BUFFER_BIT);
        SDL_GL_SwapWindow(window);
    }

    log_line("exit");
    SDL_GL_DeleteContext(ctx);
    SDL_DestroyWindow(window);
    SDL_Quit();
    if (g_log) {
        fclose(g_log);
    }
    return EXIT_SUCCESS;
}
