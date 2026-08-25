#!/bin/bash
# Exhaustive channel sweep of OTA checkV2 for XGA010C ("Star Air").
# Varies versionType x buildType x claimed-version x region, looking for ANY package,
# and loudly flags any latestVersion NEWER than the known ceiling 1.0.12.83 (a shot at .88).
# Dedupes identical package hits so output stays readable. Polite: 0.25s between requests.
#
# Usage:
#   ./ota_channel_sweep.sh            # CN only (this unit is CN-provisioned)
#   ./ota_channel_sweep.sh --intl     # also sweep INTL prod
set -euo pipefail

KEY='wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI='
SALT='RhdNS`Z?'
SN="1001160244J0008Q"
DEVICE_ID=$(printf '%s' "${SALT}${SN}" | openssl dgst -sha256 -hex | sed 's/^.*= //')
CEILING="1.0.12.83"

# ---- sweep space -------------------------------------------------------------
VERSION_TYPES=(release beta gray grey dev test alpha rc stable canary internal uat prod debug daily)
BUILD_TYPES=(user userdebug eng dvt evt pvt mp debug release factory)
# claimed versions: .87 catches a .83->.88 upgrade window; lower ones catch channel-specific rollouts
CLAIM_VERS=("1.0.12.87" "1.0.12.23" "1.0.12.0" "1.0.1.0" "0.0.0.0")
HOSTS=("https://xr-nbs.myvu.cn/ar-ota")
[ "${1:-}" = "--intl" ] && HOSTS+=("https://xr-nbs-global.myvu.cn/ar-ota")

# ---- version compare: echoes "newer" if $1 > CEILING (numeric dotted) ---------
newer_than_ceiling () {
  python3 - "$1" "$CEILING" <<'PY'
import sys,re
def parse(v):
    m=re.search(r'(\d+(?:\.\d+)+)', v or '')
    return [int(x) for x in m.group(1).split('.')] if m else []
a,b=parse(sys.argv[1]),parse(sys.argv[2])
n=max(len(a),len(b)); a+=[0]*(n-len(a)); b+=[0]*(n-len(b))
print("newer" if a>b else "notnewer")
PY
}

probe () { # host vtype btype ver
  local host="$1" vt="$2" bt="$3" ver="$4"
  local ts; ts=$(python3 -c 'import time;print(int(time.time()*1000))')
  local K=(appVersion buildType deviceId deviceIdEncrypted deviceModel deviceType lang timestamp version versionType)
  local V=("2.40.51" "$bt" "$DEVICE_ID" "true" "XGA010C" "Star Air" "zh_CN" "$ts" "$ver" "$vt")
  local msg="" i
  for i in "${!K[@]}"; do msg+="${K[$i]}=${V[$i]}&"; done; msg="${msg%&}"
  local sign; sign=$(printf '%s' "$msg" | openssl dgst -sha256 -hmac "$KEY" -hex | sed 's/^.*= //')
  local args=(); for i in "${!K[@]}"; do args+=(--data-urlencode "${K[$i]}=${V[$i]}"); done
  curl -sS -m 25 -X POST "$host/client/v1/arupgrade/checkV2" \
    -H "Content-Type: application/x-www-form-urlencoded" \
    "${args[@]}" --data-urlencode "sign=$sign" 2>/dev/null || echo '{"data":null}'
}

SEEN_KEYS="|"            # dedupe (bash 3.2 safe): "|region#ver#file|..."
total=0; hits=0; newest="$CEILING"; newest_line=""
TOTAL_COMBOS=$(( ${#VERSION_TYPES[@]} * ${#BUILD_TYPES[@]} * ${#CLAIM_VERS[@]} * ${#HOSTS[@]} ))
echo "Sweeping ${#VERSION_TYPES[@]} versionTypes x ${#BUILD_TYPES[@]} buildTypes x ${#CLAIM_VERS[@]} versions x ${#HOSTS[@]} host(s)..."
echo "(only NEW distinct packages are printed; ceiling to beat = $CEILING)"
echo "==============================================================================="

for host in "${HOSTS[@]}"; do
  region=$([ "$host" = "https://xr-nbs.myvu.cn/ar-ota" ] && echo CN || echo INTL)
  for vt in "${VERSION_TYPES[@]}"; do
    for bt in "${BUILD_TYPES[@]}"; do
      for ver in "${CLAIM_VERS[@]}"; do
        total=$((total+1))
        printf '\r[%d/%d] %-4s vt=%-9s bt=%-9s claim=%-10s hits=%d   ' \
          "$total" "$TOTAL_COMBOS" "$region" "$vt" "$bt" "$ver" "$hits" >&2
        resp=$(probe "$host" "$vt" "$bt" "$ver")
        if echo "$resp" | grep -q '"existsUpdate":true'; then
          lver=$(printf '%s' "$resp" | python3 -c 'import sys,json;print(json.load(sys.stdin)["data"].get("latestVersion") or "")' 2>/dev/null || echo "")
          link=$(printf '%s' "$resp" | python3 -c 'import sys,json;print(json.load(sys.stdin)["data"].get("packLink") or "")' 2>/dev/null || echo "")
          fn=$(basename "${link%%\?*}")
          key="$region#$lver#$fn"
          case "$SEEN_KEYS" in
            *"|$key|"*) : ;;   # already reported
            *)
            SEEN_KEYS="$SEEN_KEYS$key|"; hits=$((hits+1))
            flag=""
            [ "$(newer_than_ceiling "$lver")" = "newer" ] && flag="  <<<<< NEWER THAN $CEILING !!!"
            printf '\n' >&2   # break the progress line
            echo ">>> [$region] versionType=$vt buildType=$bt claim=$ver  ->  latestVersion=$lver$flag"
            echo "    file: $fn"
            if [ "$(newer_than_ceiling "$lver")" = "newer" ]; then
              newest="$lver"; newest_line="$region versionType=$vt buildType=$bt -> $lver ($fn)"
              echo "    FULL: $resp"
            fi
            ;;
          esac
        fi
        sleep 0.25
      done
    done
  done
done

printf '\n' >&2   # clear the progress line
echo "==============================================================================="
echo "Requests sent: $total   Distinct packages found: $hits"
echo "Highest version seen: $newest"
if [ "$newest" != "$CEILING" ]; then
  echo ">>> BREAKTHROUGH: found build newer than $CEILING -> $newest_line"
else
  echo "No channel exposed anything newer than $CEILING. .88 is not on this server on any tried channel."
fi
