#!/bin/bash
# Version sweep of OTA checkV2 for XGA010C ("Star Air").
# Reuses the verified sign scheme. Fires one signed request per candidate version,
# on both CN + INTL prod, and flags any response where existsUpdate != false.
# Polite: 0.4s between requests. Stops-loud on any HIT.
set -euo pipefail

KEY='wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI='
SALT='RhdNS`Z?'
SN="${1:-1001160244J0008Q}"
DTYPE="Star Air"
DMODEL="XGA010C"
DEVICE_ID=$(printf '%s' "${SALT}${SN}" | openssl dgst -sha256 -hex | sed 's/^.*= //')

# Candidate versions to try. Curated, not brute-force (server gates on rollout window,
# not raw version — exhaustive enumeration would just hammer the vendor for no gain).
VERSIONS=(
  "0" "0.0.0.0" "1.0.0.0"
  # FCC-certification-era build
  "0.1.1.837" "Flyme AR 0.1.1.837.20240101_Air_intl_FR"
  # around the installed build 1.0.12.88
  "1.0.12.0" "1.0.12.50" "1.0.12.80" "1.0.12.87" "1.0.12.88" "1.0.12.89" "1.0.12.90" "1.0.12.99"
  "1.0.11.0" "1.0.10.0" "1.0.9.0" "1.0.8.0" "1.0.5.0" "1.0.1.0"
  "1.0.13.0" "1.0.20.0" "1.1.0.0" "2.0.0.0"
  # real installed version string form
  "Flyme XR 1.0.12.88.20250217_Air_FR"
  "Flyme XR 1.0.12.0.20250101_Air_FR"
)

HOSTS=("https://xr-nbs.myvu.cn/ar-ota" "https://xr-nbs-global.myvu.cn/ar-ota")

probe () {
  local host="$1" ver="$2"
  local ts; ts=$(python3 -c 'import time;print(int(time.time()*1000))')
  local K=(appVersion buildType deviceId deviceIdEncrypted deviceModel deviceType lang timestamp version versionType)
  local V=("2.40.51" "user" "$DEVICE_ID" "true" "$DMODEL" "$DTYPE" "zh_CN" "$ts" "$ver" "release")
  local msg="" i
  for i in "${!K[@]}"; do msg+="${K[$i]}=${V[$i]}&"; done; msg="${msg%&}"
  local sign; sign=$(printf '%s' "$msg" | openssl dgst -sha256 -hmac "$KEY" -hex | sed 's/^.*= //')
  local args=(); for i in "${!K[@]}"; do args+=(--data-urlencode "${K[$i]}=${V[$i]}"); done
  curl -sS -m 25 -X POST "$host/client/v1/arupgrade/checkV2" \
    -H "Content-Type: application/x-www-form-urlencoded" \
    "${args[@]}" --data-urlencode "sign=$sign"
}

hits=0
for host in "${HOSTS[@]}"; do
  region=$([ "$host" = "${HOSTS[0]}" ] && echo CN || echo INTL)
  for ver in "${VERSIONS[@]}"; do
    resp=$(probe "$host" "$ver" || echo '{"code":-1,"msg":"request failed"}')
    if echo "$resp" | grep -q '"existsUpdate":false'; then
      printf '  %-5s  false   version=%s\n' "$region" "$ver"
    else
      echo "=============================================================="
      echo "  >>> HIT  region=$region  version=$ver"
      echo "  $resp"
      echo "=============================================================="
      hits=$((hits+1))
    fi
    sleep 0.4
  done
done
echo
echo "Sweep done. HITs (existsUpdate not false): $hits"
