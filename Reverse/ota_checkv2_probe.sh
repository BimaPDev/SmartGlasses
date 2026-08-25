#!/bin/bash
# Signed OTA checkV2 probe for MYVU glasses (XGA010C / "Star Air").
#
# deviceId = SHA256_hex( SALT + serialNumber )            (DataTrackUtil.f)
# sign     = HMAC_SHA256_hex over alphabetically-sorted "k=v&k=v" params,
#            key = literal ASCII string KEY (raw, NOT base64-decoded). Body field "sign".
# In-app air path: deviceType = model ("Star Air"), deviceModel = subModel ("XGA010C").
#
# Usage:
#   ./ota_checkv2_probe.sh                 # china host, real serial, ver 0.0.0.0
#   ./ota_checkv2_probe.sh "" INTL         # intl host
#   ./ota_checkv2_probe.sh <SN> <CN|INTL> <version>
set -euo pipefail

KEY='wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI='   # HMAC key, used as raw ASCII
SALT='RhdNS`Z?'                                       # deviceId hash salt

SN="${1:-1001160244J0008Q}"                           # captured serial (default = this device)
REGION="${2:-CN}"                                      # CN or INTL
VER="${3:-0.0.0.0}"                                    # 0.0.0.0 elicits the newest build held
DTYPE="Star Air"                                       # deviceType = model
DMODEL="XGA010C"                                       # deviceModel = subModel

if [ "$REGION" = "INTL" ]; then
  HOST="https://xr-nbs-global.myvu.cn/ar-ota"
else
  HOST="https://xr-nbs.myvu.cn/ar-ota"
fi

TS=$(python3 -c 'import time;print(int(time.time()*1000))')
DEVICE_ID=$(printf '%s' "${SALT}${SN}" | openssl dgst -sha256 -hex | sed 's/^.*= //')

# Non-null params, ALPHABETICAL order (must match the sign order).
K=(appVersion buildType deviceId     deviceIdEncrypted deviceModel deviceType lang    timestamp version versionType)
V=("2.40.51"  "user"    "$DEVICE_ID" "true"            "$DMODEL"   "$DTYPE"   "zh_CN"  "$TS"    "$VER"  "release")

msg=""
for i in "${!K[@]}"; do msg+="${K[$i]}=${V[$i]}&"; done
msg="${msg%&}"
SIGN=$(printf '%s' "$msg" | openssl dgst -sha256 -hmac "$KEY" -hex | sed 's/^.*= //')

echo "serial   : $SN"
echo "deviceId : $DEVICE_ID"
echo "region   : $REGION -> $HOST"
echo "params   : deviceType='$DTYPE' deviceModel='$DMODEL' version=$VER"
echo "sign     : $SIGN"
echo "------------------------------------------------------------"

args=()
for i in "${!K[@]}"; do args+=(--data-urlencode "${K[$i]}=${V[$i]}"); done

curl -sS -m 25 -w "\n[HTTP %{http_code}]\n" \
  -X POST "$HOST/client/v1/arupgrade/checkV2" \
  -H "Content-Type: application/x-www-form-urlencoded" \
  "${args[@]}" --data-urlencode "sign=$SIGN"
