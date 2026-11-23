#!/usr/bin/env bash
# Cross-compile a Horizon .nro with aarch64-none-elf + Switch.cmake.
# Default: goemon64recomp-nx. Pass "hello" for the libnx/SDL/GL probe.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
# shellcheck source=scripts/common.sh
source "${ROOT}/scripts/common.sh"

target="${1:-game}"
cmake_target=""
build_dir=""
game_flag=""
case "${target}" in
  hello)
    build_dir="${ROOT}/build/switch-hello"
    cmake_target="goemon64_hello_nro"
    game_flag="OFF"
    ;;
  game|"")
    build_dir="${ROOT}/build/switch"
    cmake_target="goemon64recomp-nx_nro"
    game_flag="ON"
    ;;
  *)
    die "unknown target '${target}' (use 'game' or 'hello')"
    ;;
esac

# Host-side: the SDK image has no git. Apply before entering the container so a
# second run is a no-op (reverse --check succeeds when the patch is already on).
apply_git_patch() {
  local repo="$1"
  local patch="$2"
  local missing="$3"
  [[ -f "${patch}" ]] || die "missing ${patch}"
  [[ -d "${repo}" ]] || die "${missing}"
  command -v git >/dev/null 2>&1 || die "git is required to apply ${patch}"
  if git -C "${repo}" apply --reverse --check "${patch}" >/dev/null 2>&1; then
    echo "== $(basename "${patch}") already applied =="
    return
  fi
  echo "== applying ${patch} =="
  git -C "${repo}" apply --check "${patch}"
  git -C "${repo}" apply "${patch}"
}

apply_game_patches() {
  apply_git_patch \
    "${ROOT}/lib/N64ModernRuntime" \
    "${ROOT}/switch/patches/n64modernruntime.patch" \
    "lib/N64ModernRuntime is missing. git submodule update --init --recursive lib/N64ModernRuntime"
  apply_git_patch \
    "${ROOT}/lib/N64ModernRuntime/N64Recomp" \
    "${ROOT}/switch/patches/n64recomp.patch" \
    "lib/N64ModernRuntime/N64Recomp is missing. git submodule update --init --recursive lib/N64ModernRuntime"
  apply_git_patch \
    "${ROOT}/lib/GLideN64" \
    "${ROOT}/switch/patches/gliden64.patch" \
    "lib/GLideN64 is missing. git submodule update --init lib/GLideN64"
}

if ! in_container; then
  if [[ "${game_flag}" == "ON" ]]; then
    apply_game_patches
  fi
  exec "${ROOT}/scripts/switch-sh" /work/scripts/build-nro.sh "$@"
fi
if ! in_switch_sdk; then
  die "build-nro.sh must run in the switch-sdk container (use scripts/switch-sh)"
fi

toolchain="${DEVKITPRO:-/opt/devkitpro}/cmake/Switch.cmake"
[[ -f "${toolchain}" ]] || die "Switch.cmake not found at ${toolchain} (install switch-cmake)"

[[ -f "${ROOT}/CMakeLists.txt" ]] || die "no CMakeLists.txt at repo root"
[[ -f "${ROOT}/switch/CMakeLists.txt" ]] || die "no CMakeLists.txt under switch/"

gen_args=()
if command -v ninja >/dev/null 2>&1; then
  gen_args=(-G Ninja)
fi

echo "== cmake ${ROOT} (${target}) =="
cmake -S "${ROOT}" -B "${build_dir}" \
  "${gen_args[@]}" \
  -DCMAKE_TOOLCHAIN_FILE="${toolchain}" \
  -DCMAKE_SYSTEM_NAME=NintendoSwitch \
  -DCMAKE_BUILD_TYPE="${CMAKE_BUILD_TYPE:-Release}" \
  -DGOEMON64_BUILD_GAME="${game_flag}"
cmake --build "${build_dir}" --target "${cmake_target}" -j"$(nproc)"

echo "== nro =="
mapfile -t nros < <(find "${build_dir}" -name '*.nro' -print | sort)
if ((${#nros[@]} == 0)); then
  die "cmake finished but no .nro was produced under ${build_dir}"
fi
printf '%s\n' "${nros[@]}"

stage="${ROOT}/sdmc-staging/switch/goemon64recomp-nx"
mkdir -p "${stage}"
for nro in "${nros[@]}"; do
  cp -f "${nro}" "${stage}/"
done
echo "== staged ${stage} =="
ls -l "${stage}"
