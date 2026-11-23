# shellcheck shell=bash
# Shared helpers for wrapper scripts. ROOT must be set by the caller.

: "${ROOT:?ROOT must be set}"

export GID="${GID:-$(id -g)}"
SWITCH_SDK_IMAGE="${SWITCH_SDK_IMAGE:-goemon64recomp-nx-switch-sdk:20260219}"

in_container() {
  [[ -n "${GOEMON64_IN_CONTAINER:-}" ]] || [[ -f /.dockerenv ]]
}

in_switch_sdk() {
  [[ -n "${GOEMON64_SWITCH_SDK:-}" ]]
}

compose() {
  docker compose -f "${ROOT}/docker-compose.yml" --project-directory "${ROOT}" "$@"
}

die() {
  printf 'error: %s\n' "$*" >&2
  exit 1
}

require_cmd() {
  command -v "$1" >/dev/null 2>&1 || die "missing command: $1"
}
