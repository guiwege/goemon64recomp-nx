# Horizon NRO build. Invoked from the repo-root CMakeLists via add_subdirectory(switch).
# Two executables share this file:
#   goemon64_hello    — Docker/libnx/SDL/GL probe (no recompiler)
#   goemon64recomp-nx — game NRO + static GLideN64 (Mesa/EGL, GL 3.3)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
  cmake_minimum_required(VERSION 3.24)
  project(Goemon64RecompNX VERSION 0.1.0 LANGUAGES C CXX)
  if(NOT NINTENDO_SWITCH)
    message(FATAL_ERROR
      "switch/ is a Horizon NRO (CMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}). Configure with:\n"
      "  -DCMAKE_TOOLCHAIN_FILE=\$DEVKITPRO/cmake/Switch.cmake\n"
      "via ./scripts/build-nro.sh")
  endif()
  option(GOEMON64_BUILD_GAME "Build goemon64recomp-nx (disable for the hello probe)" ON)
endif()

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
  cmake_policy(SET CMP0135 NEW)
endif()

get_filename_component(REPO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)
set(SWITCH_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(N64MR "${REPO_ROOT}/lib/N64ModernRuntime")

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(GLESV2 REQUIRED glesv2)
pkg_check_modules(EGL REQUIRED egl)

function(goemon64_nx_gl_dirs target)
  target_include_directories(${target} PRIVATE
    ${SDL2_INCLUDE_DIRS}
    ${GLESV2_INCLUDE_DIRS}
    ${EGL_INCLUDE_DIRS}
  )
  target_link_directories(${target} PRIVATE
    ${SDL2_LIBRARY_DIRS}
    ${GLESV2_LIBRARY_DIRS}
    ${EGL_LIBRARY_DIRS}
  )
endfunction()

function(goemon64_nx_gl_libs target)
  # SDL2.pc does not pull GLESv2; mesa needs glapi/drm_nouveau/stdc++ as well.
  target_link_libraries(${target} PRIVATE
    SDL2
    GLESv2
    EGL
    glapi
    drm_nouveau
    nx
    pthread
    stdc++
    m
  )
endfunction()

function(goemon64_nx_nro target nacp_name author)
  nx_generate_nacp(OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${target}.nacp"
    NAME "${nacp_name}"
    AUTHOR "${author}"
    VERSION "${PROJECT_VERSION}"
  )
  nx_create_nro(${target}
    NACP "${CMAKE_CURRENT_BINARY_DIR}/${target}.nacp"
  )
endfunction()

function(goemon64_pick_source out_var)
  foreach(cand IN LISTS ARGN)
    if(EXISTS "${cand}")
      set(${out_var} "${cand}" PARENT_SCOPE)
      return()
    endif()
  endforeach()
  set(${out_var} "" PARENT_SCOPE)
endfunction()

# ---------------------------------------------------------------------------
# goemon64_hello — day-1 Docker / libnx / SDL/GL probe
# ---------------------------------------------------------------------------
add_executable(goemon64_hello hello.c)
target_include_directories(goemon64_hello PRIVATE "${SWITCH_DIR}/platform")
target_compile_definitions(goemon64_hello PRIVATE
  ENABLE_NXLINK=1
  SDL_MAIN_HANDLED
  GOEMON64_HELLO_VERSION="${PROJECT_VERSION}"
)
target_compile_options(goemon64_hello PRIVATE
  -Wall
  -Wextra
  -Werror=implicit-function-declaration
  -Werror=return-type
  ${SDL2_CFLAGS_OTHER}
)
goemon64_nx_gl_dirs(goemon64_hello)
goemon64_nx_gl_libs(goemon64_hello)
goemon64_nx_nro(goemon64_hello "Goemon64 Hello" "Goemon64Recomp-NX")

# ---------------------------------------------------------------------------
# goemon64recomp-nx — recompiled game + static GLideN64 plugin
# ---------------------------------------------------------------------------
if(NOT GOEMON64_BUILD_GAME)
  message(STATUS "GOEMON64_BUILD_GAME=OFF — skipping goemon64recomp-nx")
  return()
endif()

if(NOT EXISTS "${N64MR}/CMakeLists.txt")
  message(FATAL_ERROR
    "lib/N64ModernRuntime is missing. git submodule update --init --recursive")
endif()

file(GLOB FUNC_C_SOURCES "${REPO_ROOT}/RecompiledFuncs/*.c")
file(GLOB FUNC_CXX_SOURCES "${REPO_ROOT}/RecompiledFuncs/*.cpp")
if(NOT FUNC_C_SOURCES)
  message(FATAL_ERROR "No RecompiledFuncs/*.c — they must be versioned in this NX tree.")
endif()
if(NOT EXISTS "${REPO_ROOT}/RecompiledPatches/patches.c"
   OR NOT EXISTS "${REPO_ROOT}/RecompiledPatches/patches_bin.c")
  message(FATAL_ERROR "RecompiledPatches/patches.c or patches_bin.c is missing.")
endif()

goemon64_pick_source(GOEMON64_MMAN
  "${SWITCH_DIR}/platform/mman.c"
  "${SWITCH_DIR}/platform/mman.cpp"
)
goemon64_pick_source(GOEMON64_THREADS
  "${SWITCH_DIR}/platform/threads.cpp"
  "${SWITCH_DIR}/platform/threads.c"
)
goemon64_pick_source(GOEMON64_INPUT
  "${SWITCH_DIR}/platform/input.cpp"
  "${SWITCH_DIR}/platform/input.c"
)
goemon64_pick_source(GOEMON64_AUDIO
  "${SWITCH_DIR}/platform/audio.cpp"
  "${SWITCH_DIR}/platform/audio.c"
)
goemon64_pick_source(GOEMON64_FS
  "${SWITCH_DIR}/platform/fs.cpp"
  "${SWITCH_DIR}/platform/fs.c"
)

set(GOEMON64_GAME_SOURCES
  "${SWITCH_DIR}/main.cpp"
  "${SWITCH_DIR}/core_switch.cpp"
  "${SWITCH_DIR}/renderer/gliden64_context.cpp"
  "${SWITCH_DIR}/platform/nx_log.cpp"
  "${SWITCH_DIR}/platform/nx_init.cpp"
  "${SWITCH_DIR}/platform/nx_debug.cpp"
  ${GOEMON64_MMAN}
  ${GOEMON64_THREADS}
  ${GOEMON64_INPUT}
  ${GOEMON64_AUDIO}
  ${GOEMON64_FS}
  "${SWITCH_DIR}/platform/window_switch.c"
  "${SWITCH_DIR}/platform/vsync.cpp"
  "${SWITCH_DIR}/platform/perf.cpp"
  "${SWITCH_DIR}/frontend/nx_settings.cpp"
  "${SWITCH_DIR}/frontend/nx_menu.cpp"
  "${SWITCH_DIR}/frontend/nx_menu_widgets.cpp"
  "${REPO_ROOT}/src/main/register_overlays.cpp"
  "${REPO_ROOT}/src/main/register_patches.cpp"
  "${REPO_ROOT}/src/game/debug.cpp"
  "${REPO_ROOT}/src/game/recomp_api.cpp"
  "${REPO_ROOT}/src/game/recomp_actor_api.cpp"
  "${REPO_ROOT}/src/game/recomp_data_api.cpp"
  "${REPO_ROOT}/src/game/rom_decompression.cpp"
  "${REPO_ROOT}/src/game/unknown_symbols.cpp"
  "${REPO_ROOT}/src/game/scene_table.cpp"
  "${REPO_ROOT}/rsp/aspMain.cpp"
)
# Do not link src/game/input.cpp or src/game/controls.cpp (PC SDL). Platform stubs cover them.

set(GOEMON64_GAME_MISSING)
foreach(src ${GOEMON64_GAME_SOURCES})
  if(src AND NOT EXISTS "${src}")
    list(APPEND GOEMON64_GAME_MISSING "${src}")
  endif()
endforeach()
if(NOT GOEMON64_MMAN)
  list(APPEND GOEMON64_GAME_MISSING "${SWITCH_DIR}/platform/mman.c")
endif()
if(NOT GOEMON64_THREADS)
  list(APPEND GOEMON64_GAME_MISSING "${SWITCH_DIR}/platform/threads.cpp")
endif()
if(NOT GOEMON64_INPUT)
  list(APPEND GOEMON64_GAME_MISSING "${SWITCH_DIR}/platform/input.cpp")
endif()
if(NOT GOEMON64_AUDIO)
  list(APPEND GOEMON64_GAME_MISSING "${SWITCH_DIR}/platform/audio.cpp")
endif()
if(GOEMON64_GAME_MISSING)
  string(REPLACE ";" "\n  " _missing_fmt "${GOEMON64_GAME_MISSING}")
  message(FATAL_ERROR
    "goemon64recomp-nx is missing sources:\n  ${_missing_fmt}\n"
    "Finish the switch/ platform, renderer stub, and shims, then reconfigure.")
endif()

set(BUILD_SHARED_LIBS OFF)
set(FMT_INSTALL OFF CACHE BOOL "" FORCE)
set(FMT_TEST OFF CACHE BOOL "" FORCE)
set(FMT_DOC OFF CACHE BOOL "" FORCE)
set(FMT_OS OFF CACHE BOOL "" FORCE)

# Shim headers (sys/mman.h, dlfcn.h, WindowHandle, recomp_ui) win over vendored ones.
include_directories(BEFORE "${SWITCH_DIR}/shim")
# newlib hides POSIX under strict -std=c++20; concurrentqueue wants POSIX semaphores.
add_compile_definitions(
  _GNU_SOURCE=1
  FMT_USE_FALLBACK_FILE=1
  __unix__
  # Mesa eglplatform.h prefers X11 when __unix__ is set; Switch has no X11.
  EGL_NO_X11
  SDL_MAIN_HANDLED
)

add_subdirectory("${N64MR}" "${CMAKE_BINARY_DIR}/N64ModernRuntime")

if(TARGET ultramodern)
  target_include_directories(ultramodern BEFORE PUBLIC "${SWITCH_DIR}/shim")
endif()
if(TARGET librecomp)
  target_include_directories(librecomp BEFORE PUBLIC
    "${SWITCH_DIR}/shim"
    "${SWITCH_DIR}/shim/librecomp"
  )
endif()
if(TARGET LiveRecomp)
  target_include_directories(LiveRecomp PRIVATE "${SWITCH_DIR}/shim")
endif()

foreach(host_tgt N64RecompCLI RSPRecomp RecompModTool OfflineModRecomp LiveRecompTest)
  if(TARGET ${host_tgt})
    set_target_properties(${host_tgt} PROPERTIES EXCLUDE_FROM_ALL TRUE)
  endif()
endforeach()

set(RECOMP_INCLUDES
  "${REPO_ROOT}/include"
  "${N64MR}/ultramodern/include"
  "${N64MR}/librecomp/include"
  "${N64MR}/N64Recomp/include"
)
set(RECOMP_C_FLAGS
  -fno-strict-aliasing
  -falign-functions=16
  -Wno-unused-variable
  -Wno-unused-function
  $<$<COMPILE_LANGUAGE:C>:-Wno-implicit-function-declaration>
  $<$<COMPILE_LANGUAGE:C>:-Wno-int-conversion>
  $<$<COMPILE_LANGUAGE:C>:-Wno-incompatible-pointer-types>
)

add_library(RecompiledFuncs STATIC ${FUNC_C_SOURCES} ${FUNC_CXX_SOURCES})
target_include_directories(RecompiledFuncs PRIVATE
  ${RECOMP_INCLUDES}
  "${SWITCH_DIR}/shim"
)
target_compile_options(RecompiledFuncs PRIVATE ${RECOMP_C_FLAGS})
# GCC: originals weak, patches strong (see N64Recomp/include/recomp.h).
target_compile_definitions(RecompiledFuncs PRIVATE RECOMP_FUNC_WEAK)

add_library(PatchesLib STATIC
  "${REPO_ROOT}/RecompiledPatches/patches.c"
  "${REPO_ROOT}/RecompiledPatches/patches_bin.c"
)
target_include_directories(PatchesLib PRIVATE
  ${RECOMP_INCLUDES}
  "${SWITCH_DIR}/shim"
)
target_compile_options(PatchesLib PRIVATE ${RECOMP_C_FLAGS})
set_source_files_properties("${REPO_ROOT}/RecompiledPatches/patches.c"
  PROPERTIES COMPILE_FLAGS -fno-strict-aliasing)

# GLideN64 as a static mupen64plus plugin: desktop GL through Mesa/EGL (same
# pattern as DK64Recomp-NX). NOHQ = TxFilterStub, NO_OSD = TextDrawerStub.
# Do not define GLES — shaders are desktop OpenGL; GLESv2 is the portlib name.
if(NOT EXISTS "${REPO_ROOT}/lib/GLideN64/src")
  message(FATAL_ERROR
    "lib/GLideN64 is missing. git submodule update --init lib/GLideN64")
endif()
if(NOT EXISTS "${SWITCH_DIR}/gliden64_rt64ex.cpp")
  message(FATAL_ERROR "switch/gliden64_rt64ex.cpp is missing")
endif()
if(NOT EXISTS "${SWITCH_DIR}/gliden64/Revision.h")
  message(FATAL_ERROR "switch/gliden64/Revision.h is missing")
endif()

set(GLIDEN64_DIR "${REPO_ROOT}/lib/GLideN64/src")
include("${SWITCH_DIR}/gliden64_sources.cmake")
# ARM64 substitutions used by Android/DK64-NX: CRC32 hardware + NEON matrices.
list(REMOVE_ITEM GLIDEN64_SOURCES
  "${GLIDEN64_DIR}/CRC32.cpp"
  "${GLIDEN64_DIR}/3DMath.cpp"
  "${GLIDEN64_DIR}/RSP_LoadMatrix.cpp"
)
list(APPEND GLIDEN64_SOURCES
  "${GLIDEN64_DIR}/CRC32_ARMV8.cpp"
  "${GLIDEN64_DIR}/Neon/3DMathNeon.cpp"
  "${GLIDEN64_DIR}/Neon/gSPNeon.cpp"
  "${GLIDEN64_DIR}/Neon/RSP_LoadMatrixNeon.cpp"
)

add_library(GLideN64 STATIC
  ${GLIDEN64_SOURCES}
  "${SWITCH_DIR}/gliden64_rt64ex.cpp"
)
target_include_directories(GLideN64 PRIVATE
  "${SWITCH_DIR}/shim"
  "${SWITCH_DIR}/platform"
  "${GLIDEN64_DIR}"
  "${GLIDEN64_DIR}/inc"
  "${GLIDEN64_DIR}/osal"
  "${SWITCH_DIR}/gliden64"
  ${EGL_INCLUDE_DIRS}
  ${GLESV2_INCLUDE_DIRS}
)
target_compile_definitions(GLideN64 PRIVATE
  MUPENPLUSAPI
  TXFILTER_LIB
  OS_LINUX
  EGL
  EGL_NO_X11
  NDEBUG
  __NEON_OPT
  __VEC4_OPT
)
# winlnxdefs.h #defines true/false, which breaks C++20 <format>.
set_target_properties(GLideN64 PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED YES
  CXX_EXTENSIONS ON
)
target_compile_options(GLideN64 PRIVATE
  -Wno-narrowing
  $<$<COMPILE_LANGUAGE:CXX>:-fpermissive>
)
# Tegra X1 (Cortex-A57) has the optional ARMv8 CRC32 extension; the
# CRC32_ARMV8.cpp path needs it even if the rest of the plugin does not.
set_source_files_properties("${GLIDEN64_DIR}/CRC32_ARMV8.cpp"
  PROPERTIES COMPILE_OPTIONS "-march=armv8-a+crc")

# Dear ImGui OpenGL3 backend through switch-glad (desktop GL 4.3 loader).
# No imgui_impl_sdl2 — the NX menu polls the pad (nx_menu.cpp).
set(IMGUI_DIR "${REPO_ROOT}/lib/imgui")
if(NOT EXISTS "${IMGUI_DIR}/imgui.cpp")
  message(FATAL_ERROR
    "lib/imgui is missing. git submodule update --init lib/imgui")
endif()

# Portlib .pc is libglad; the archive is still -lglad. Do not pass
# GLAD_INCLUDE_DIRS into ninja — libglad.pc uses prefix=$(DEVKITPRO)/...
pkg_check_modules(GLAD REQUIRED libglad)
find_path(GLAD_INCLUDE_DIR NAMES glad/glad.h REQUIRED
  HINTS "$ENV{DEVKITPRO}/portlibs/switch/include"
)
find_library(GLAD_LIBRARY NAMES glad REQUIRED
  HINTS "$ENV{DEVKITPRO}/portlibs/switch/lib"
)

add_library(imgui STATIC
  "${IMGUI_DIR}/imgui.cpp"
  "${IMGUI_DIR}/imgui_draw.cpp"
  "${IMGUI_DIR}/imgui_tables.cpp"
  "${IMGUI_DIR}/imgui_widgets.cpp"
  "${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp"
)
target_include_directories(imgui PUBLIC
  "${IMGUI_DIR}"
  "${IMGUI_DIR}/backends"
  "${GLAD_INCLUDE_DIR}"
)
# Horizon has no waitpid/execvp; the default OpenInShell handler forks xdg-open.
target_compile_definitions(imgui PRIVATE
  IMGUI_IMPL_OPENGL_LOADER_CUSTOM
  IMGUI_DISABLE_DEFAULT_SHELL_FUNCTIONS
)
set_source_files_properties("${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp"
  PROPERTIES COMPILE_OPTIONS "-include;glad/glad.h")
target_link_libraries(imgui PUBLIC ${GLAD_LIBRARY})

file(GLOB GOEMON64_SHIM_SOURCES
  "${SWITCH_DIR}/shim/*.c"
  "${SWITCH_DIR}/shim/*.cpp"
)

add_executable(goemon64recomp-nx
  ${GOEMON64_GAME_SOURCES}
  ${GOEMON64_SHIM_SOURCES}
)

target_include_directories(goemon64recomp-nx PRIVATE
  "${SWITCH_DIR}/shim"
  "${SWITCH_DIR}/platform"
  "${SWITCH_DIR}/renderer"
  "${SWITCH_DIR}/frontend"
  "${SWITCH_DIR}"
  "${IMGUI_DIR}"
  "${IMGUI_DIR}/backends"
  "${GLAD_INCLUDE_DIR}"
  "${REPO_ROOT}/lib/GLideN64/src/inc"
  ${RECOMP_INCLUDES}
  "${REPO_ROOT}"
  "${N64MR}/thirdparty"
  "${N64MR}/thirdparty/concurrentqueue"
  "${N64MR}/thirdparty/sse2neon"
  "${REPO_ROOT}/lib/concurrentqueue"
  "${REPO_ROOT}/lib/GamepadMotionHelpers"
  "${REPO_ROOT}/lib/SlotMap"
)
goemon64_nx_gl_dirs(goemon64recomp-nx)

target_compile_definitions(goemon64recomp-nx PRIVATE
  ENABLE_NXLINK=1
  GOEMON64_SWITCH_VERSION="${PROJECT_VERSION}"
)

target_compile_options(goemon64recomp-nx PRIVATE
  -fno-strict-aliasing
  -fms-extensions
  -Wall
  -Wextra
  -Wno-unused-parameter
  -Wno-missing-field-initializers
  ${SDL2_CFLAGS_OTHER}
)

# libnx default stacks are 128 KiB; recomp threads need ~1 MiB (see platform/threads).
target_link_options(goemon64recomp-nx PRIVATE
  -Wl,--wrap=pthread_create,--wrap=pthread_detach
)

# NintendoSwitch does not predefine LINK_GROUP:RESCAN; PatchesLib ↔ RecompiledFuncs ↔ librecomp cycle.
set(CMAKE_C_LINK_GROUP_USING_RESCAN "LINKER:--start-group" "LINKER:--end-group")
set(CMAKE_C_LINK_GROUP_USING_RESCAN_SUPPORTED TRUE)
set(CMAKE_CXX_LINK_GROUP_USING_RESCAN "LINKER:--start-group" "LINKER:--end-group")
set(CMAKE_CXX_LINK_GROUP_USING_RESCAN_SUPPORTED TRUE)

target_link_libraries(goemon64recomp-nx PRIVATE
  "$<LINK_GROUP:RESCAN,PatchesLib,RecompiledFuncs,librecomp,ultramodern>"
  GLideN64
  imgui
  ${GLAD_LIBRARY}
)
goemon64_nx_gl_libs(goemon64recomp-nx)

goemon64_nx_nro(goemon64recomp-nx "Goemon 64: Recompiled" "Goemon64Recomp-NX")

message(STATUS "Goemon64RecompNX ${PROJECT_VERSION} — goemon64_hello + goemon64recomp-nx (static GLideN64, no RT64/RmlUi)")
