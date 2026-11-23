#!/bin/bash
# switch-sdk runs as root so /opt/devkitpro stays readable/writable.
# Build outputs on the bind-mount must belong to the host user.
# Do not exec the command: that would skip the EXIT trap and leave /work/build as root.
set -euo pipefail

cleanup() {
  if [[ -n "${HOST_UID:-}" && -d /work/build ]]; then
    chown -R "${HOST_UID}:${HOST_GID:-${HOST_UID}}" /work/build || true
  fi
  if [[ -n "${HOST_UID:-}" && -d /work/sdmc-staging ]]; then
    chown -R "${HOST_UID}:${HOST_GID:-${HOST_UID}}" /work/sdmc-staging || true
  fi
}
trap cleanup EXIT

if (($# == 0)); then
  set -- bash
fi
"$@"
