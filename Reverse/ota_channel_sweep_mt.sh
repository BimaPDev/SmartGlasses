#!/bin/bash
# Parallel channel sweep of OTA checkV2 for XGA010C ("Star Air").
# Same space as ota_channel_sweep.sh but runs N workers concurrently via xargs -P.
# Each worker signs+POSTs one combo, records hits; a final pass dedupes and reports,
# loudly flagging any latestVersion newer than 1.0.12.83.
#
# Usage:
#   ./ota_channel_sweep_mt.sh            # CN, 12 workers
#   ./ota_channel_sweep_mt.sh --intl     # + INTL prod
#   JOBS=20 ./ota_channel_sweep_mt.sh    # override concurrency
set -euo pipefail

export KEY='wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI='
SALT='RhdNS`Z?'
SN="1001160244J0008Q"
export DEVICE_ID=$(printf '%s' "${SALT}${SN}" | openssl dgst -sha256 -hex | sed 's/^.*= //')
export CEILING="1.0.12.83"
JOBS="${JOBS:-12}"

VERSION_TYPES=(release beta gray grey dev test alpha rc stable canary internal uat prod debug daily)
BUILD_TYPES=(user userdebug eng dvt evt pvt mp debug release factory)
CLAIM_VERS=("1.0.12.87" "1.0.12.23" "1.0.12.0" "1.0.1.0" "0.0.0.0")
HOSTS=("https://xr-nbs.myvu.cn/ar-ota")
[ "${1:-}" = "--intl" ] && HOSTS+=("https://xr-nbs-global.myvu.cn/ar-ota")

TMP=$(mktemp -d); export RESULTS="$TMP/hits"; : > "$RESULTS"
PROG="$TMP/progress"; export PROG; : > "$PROG"
trap 'rm -rf "$TMP"' EXIT

# ---- worker: reads one "host|vt|bt|ver" combo, records hit lines --------------
worker() {
  local combo="$1" host vt bt ver
  IFS='|' read -r host vt bt ver <<EOF
$combo
EOF
  local region; region=$([ "$host" = "https://xr-nbs.myvu.cn/ar-ota" ] && echo CN || echo INTL)
  local ts; ts=$(python3 -c 'import time;print(int(time.time()*1000))')
  local K=(appVersion buildType deviceId deviceIdEncrypted deviceModel deviceType lang timestamp version versionType)
  local V=("2.40.51" "$bt" "$DEVICE_ID" "true" "XGA010C" "Star Air" "zh_CN" "$ts" "$ver" "$vt")
  local msg="" i
  for i in "${!K[@]}"; do msg+="${K[$i]}=${V[$i]}&"; done; msg="${msg%&}"
  local sign; sign=$(printf '%s' "$msg" | openssl dgst -sha256 -hmac "$KEY" -hex | sed 's/^.*= //')
  local args=(); for i in "${!K[@]}"; do args+=(--data-urlencode "${K[$i]}=${V[$i]}"); done
  local resp; resp=$(curl -sS -m 25 -X POST "$host/client/v1/arupgrade/checkV2" \
    -H "Content-Type: application/x-www-form-urlencoded" \
    "${args[@]}" --data-urlencode "sign=$sign" 2>/dev/null || echo '{"data":null}')
  printf '.' >> "$PROG"                        # progress tick
  if printf '%s' "$resp" | grep -q '"existsUpdate":true'; then
    local lver fn link
    lver=$(printf '%s' "$resp" | python3 -c 'import sys,json;print(json.load(sys.stdin)["data"].get("latestVersion") or "")' 2>/dev/null || echo "")
    link=$(printf '%s' "$resp" | python3 -c 'import sys,json;print(json.load(sys.stdin)["data"].get("packLink") or "")' 2>/dev/null || echo "")
    fn=$(basename "${link%%\?*}")
    printf '%s|%s|%s|%s|%s|%s\n' "$region" "$vt" "$bt" "$ver" "$lver" "$fn" >> "$RESULTS"
  fi
}
export -f worker

# ---- build combo list --------------------------------------------------------
COMBOS="$TMP/combos"; : > "$COMBOS"
for host in "${HOSTS[@]}"; do
  for vt in "${VERSION_TYPES[@]}"; do
    for bt in "${BUILD_TYPES[@]}"; do
      for ver in "${CLAIM_VERS[@]}"; do
        printf '%s|%s|%s|%s\n' "$host" "$vt" "$bt" "$ver" >> "$COMBOS"
      done
    done
  done
done
TOTAL=$(wc -l < "$COMBOS" | tr -d ' ')
echo "Parallel sweep: $TOTAL combos, $JOBS workers, ceiling=$CEILING"

# ---- run workers + live progress watcher ------------------------------------
( while :; do
    done_n=$(wc -c < "$PROG" 2>/dev/null | tr -d ' '); done_n=${done_n:-0}
    hits_n=$(wc -l < "$RESULTS" 2>/dev/null | tr -d ' '); hits_n=${hits_n:-0}
    printf '\r[%s/%s] hits=%s   ' "$done_n" "$TOTAL" "$hits_n" >&2
    [ "$done_n" -ge "$TOTAL" ] && break
    sleep 0.5
  done ) &
WATCH=$!

cat "$COMBOS" | xargs -P "$JOBS" -I{} bash -c 'worker "$@"' _ {}
kill "$WATCH" 2>/dev/null || true
printf '\r[%s/%s] done.            \n' "$TOTAL" "$TOTAL" >&2

# ---- aggregate + verdict -----------------------------------------------------
echo "==============================================================================="
if [ ! -s "$RESULTS" ]; then
  echo "No package returned on ANY channel. (unexpected — even release/user gave nothing)"
  exit 0
fi
# distinct packages by region|latestVersion|file
sort -t'|' -k1,1 -k5,5 -k6,6 -u -o "$RESULTS.uniq" <(awk -F'|' '{print $1"|"$5"|"$6"|"$2"|"$3"|"$4}' "$RESULTS")
echo "Distinct packages found:"
while IFS='|' read -r region lver fn vt bt ver; do
  newer=$(python3 - "$lver" "$CEILING" <<'PY'
import sys,re
def p(v):
    m=re.search(r'(\d+(?:\.\d+)+)',v or ''); return [int(x) for x in m.group(1).split('.')] if m else []
a,b=p(sys.argv[1]),p(sys.argv[2]); n=max(len(a),len(b)); a+=[0]*(n-len(a)); b+=[0]*(n-len(b))
print("newer" if a>b else "-")
PY
)
  flag=""; [ "$newer" = "newer" ] && flag="   <<<<< NEWER THAN $CEILING !!!"
  printf '  [%-4s] %-12s  %s  (via versionType=%s buildType=%s claim=%s)%s\n' "$region" "$lver" "$fn" "$vt" "$bt" "$ver" "$flag"
done < "$RESULTS.uniq"

# highest overall
HIGH=$(cut -d'|' -f2 "$RESULTS.uniq" | python3 -c '
import sys,re
def p(v):
    m=re.search(r"(\d+(?:\.\d+)+)",v or ""); return [int(x) for x in m.group(1).split(".")] if m else []
best="";bp=[]
for line in sys.stdin:
    v=line.strip(); pv=p(v)
    if pv>bp: bp=pv; best=v
print(best)')
echo "-------------------------------------------------------------------------------"
echo "Highest version seen: $HIGH"
if [ "$(python3 - "$HIGH" "$CEILING" <<'PY'
import sys,re
def p(v):
    m=re.search(r'(\d+(?:\.\d+)+)',v or ''); return [int(x) for x in m.group(1).split('.')] if m else []
a,b=p(sys.argv[1]),p(sys.argv[2]); n=max(len(a),len(b)); a+=[0]*(n-len(a)); b+=[0]*(n-len(b))
print("newer" if a>b else "-")
PY
)" = "newer" ]; then
  echo ">>> BREAKTHROUGH: a channel exposed a build newer than $CEILING ($HIGH). Pull it with download_ota.sh."
else
  echo "No channel exposed anything newer than $CEILING. .88 is not retrievable via checkV2 on any tried channel."
fi
