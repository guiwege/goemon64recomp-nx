#!/usr/bin/env bash
# Pull goemon64 logs from the Switch over FTP (ftpd.nro / sys-ftpd on port 5000).
# Usage: SWITCH_IP=192.168.15.5 ./scripts/pull-sd-logs.sh
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
ip="${SWITCH_IP:-192.168.15.5}"
port="${SWITCH_FTP_PORT:-5000}"
user="${SWITCH_FTP_USER:-anonymous}"
pass="${SWITCH_FTP_PASS:-}"
out="${ROOT}/logs"
mkdir -p "${out}"
stamp="$(date +%Y%m%d-%H%M%S)"

base="ftp://${user}:${pass}@${ip}:${port}/switch/goemon64recomp-nx"
ok=0
for name in goemon64.log goemon64.prev.log goemon64.trace.log goemon64.crash.log; do
  dest="${out}/sd-${stamp}-${name}"
  if curl -sS --connect-timeout 5 --max-time 30 -f "${base}/${name}" -o "${dest}"; then
    echo "got ${name} -> ${dest} ($(wc -c < "${dest}") bytes)"
    ok=1
  else
    rm -f "${dest}"
    echo "missing ${name}"
  fi
done
((ok == 1)) || {
  echo "error: no logs pulled from ${ip}:${port} — is ftpd running?" >&2
  exit 1
}
