#!/usr/bin/env bash
# Send an NRO over the LAN with nxlink (hbmenu netloader).
# Requires: Switch on the same network, hbmenu open, Y to start netloader.
# Uses docker run --network host (compose run --network is rejected on some hosts).
#
# Captures the nxlink stdout stream to logs/nxlink-YYYYMMDD-HHMMSS.log so a
# data abort still leaves the last lines on the host (the NRO also writes
# goemon64.crash.log / goemon64.trace.log on the SD card).
#
# Usage:
#   ./scripts/nxlink.sh -s
#   ./scripts/nxlink.sh -a 192.168.1.50 -s
# Extra args are passed to nxlink. SWITCH_IP sets -a if you did not pass it.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
# shellcheck source=scripts/common.sh
source "${ROOT}/scripts/common.sh"

if in_container; then
  die "run nxlink.sh on the host (it enters switch-sdk with --network host)"
fi

nro=""
if [[ -d "${ROOT}/build/switch" ]]; then
  nro="$(find "${ROOT}/build/switch" -maxdepth 3 -name 'goemon64recomp-nx.nro' -print -quit || true)"
fi
if [[ -z "${nro}" && -d "${ROOT}/build/switch-hello" ]]; then
  nro="$(find "${ROOT}/build/switch-hello" -maxdepth 3 -name '*.nro' -print -quit || true)"
fi
if [[ -z "${nro}" && -d "${ROOT}/sdmc-staging/switch/goemon64recomp-nx" ]]; then
  nro="$(find "${ROOT}/sdmc-staging/switch/goemon64recomp-nx" -maxdepth 1 -name '*.nro' -print -quit || true)"
fi
[[ -n "${nro}" ]] || die "no .nro in build/switch, build/switch-hello, or sdmc-staging — run scripts/build-nro.sh first"

args=()
have_addr=0
have_server=0
for a in "$@"; do
  case "${a}" in
    -a|--address) have_addr=1 ;;
    -s|--server) have_server=1 ;;
  esac
  args+=("${a}")
done
if ((have_addr == 0)) && [[ -n "${SWITCH_IP:-}" ]]; then
  args=(-a "${SWITCH_IP}" "${args[@]}")
fi
# Always start the stdout server so crashes show up on this terminal and in logs/.
if ((have_server == 0)); then
  args+=(-s)
fi

log_dir="${ROOT}/logs"
mkdir -p "${log_dir}"
stamp="$(date +%Y%m%d-%H%M%S)"
logfile="${log_dir}/nxlink-${stamp}.log"

nro_in_container="/work/${nro#"${ROOT}"/}"
echo "nxlink ${args[*]} ${nro_in_container}"
echo "capture: ${logfile}"
echo "on the Switch: hbmenu → Y (netloader). Title override still recommended after this probe."
set +e
"${ROOT}/scripts/switch-sh" --network-host nxlink "${args[@]}" "${nro_in_container}" 2>&1 | tee "${logfile}"
status=${PIPESTATUS[0]}
set -e
echo "nxlink exit ${status} — host log ${logfile}"
echo "on SD (if the NRO ran): sdmc:/switch/goemon64recomp-nx/goemon64.log, goemon64.trace.log, goemon64.crash.log"
exit "${status}"
