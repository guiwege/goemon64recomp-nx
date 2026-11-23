cmake_minimum_required(VERSION 3.24)

# PC RT64/RmlUi is not this tree. switch/CMakeLists.txt is the real NRO build;
# this file only rejects a host configure and forwards into switch/.
project(Goemon64RecompNX VERSION 0.1.0 LANGUAGES C CXX)

if(NOT NINTENDO_SWITCH)
  message(FATAL_ERROR
    "This repository builds a Horizon NRO (CMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}).\n"
    "The PC RT64 binary is a different tree. Configure with:\n"
    "  -DCMAKE_TOOLCHAIN_FILE=\$DEVKITPRO/cmake/Switch.cmake\n"
    "via ./scripts/build-nro.sh")
endif()

option(GOEMON64_BUILD_GAME
  "Build goemon64recomp-nx (disable for the hello probe)"
  ON)

add_subdirectory(switch)
