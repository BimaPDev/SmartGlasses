#!/bin/bash
# Download MYVU XGA010C firmware via checkV2 by claiming a low current version
# that falls inside a published rollout's [supportFrom .. supportTo] window.
# Re-fetches a fresh signed OSS URL each run, downloads it, verifies the md5 digest.
set -euo pipefail

KEY='wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI='
SALT='RhdNS`Z?'
SN="${1:-1001160244J0008Q}"
CLAIM_VER="${2:-1.0.10.0}"     # in-window version to elicit a rollout (1.0.10.0 -> 1.0.12.83; 1.0.1.0 -> 1.0.7.83)
HOST="https://xr-nbs.myvu.cn/ar-ota"
OUT="Reverse/firmware"
mkdir -p "$OUT"

DEVICE_ID=$(printf '%s' "${SALT}${SN}" | openssl dgst -sha256 -hex | sed 's/^.*= //')
TS=$(python3 -c 'import time;print(int(time.time()*1000))')
K=(appVersion buildType deviceId deviceIdEncrypted deviceModel deviceType lang timestamp version versionType)
V=("2.40.51" "user" "$DEVICE_ID" "true" "XGA010C" "Star Air" "zh_CN" "$TS" "$CLAIM_VER" "release")
msg=""; for i in "${!K[@]}"; do msg+="${K[$i]}=${V[$i]}&"; done; msg="${msg%&}"
SIGN=$(printf '%s' "$msg" | openssl dgst -sha256 -hmac "$KEY" -hex | sed 's/^.*= //')
args=(); for i in "${!K[@]}"; do args+=(--data-urlencode "${K[$i]}=${V[$i]}"); done

echo "Claiming current version $CLAIM_VER to elicit a rollout ..."
RESP=$(curl -sS -m 25 -X POST "$HOST/client/v1/arupgrade/checkV2" \
  -H "Content-Type: application/x-www-form-urlencoded" \
  "${args[@]}" --data-urlencode "sign=$SIGN")

URL=$(printf '%s' "$RESP" | python3 -c 'import sys,json;d=json.load(sys.stdin)["data"];print(d.get("packLink") or "")')
DIGEST=$(printf '%s' "$RESP" | python3 -c 'import sys,json;d=json.load(sys.stdin)["data"];print(d.get("digest") or "")')
LVER=$(printf '%s' "$RESP" | python3 -c 'import sys,json;d=json.load(sys.stdin)["data"];print(d.get("latestVersion") or "")')

if [ -z "$URL" ]; then
  echo "No packLink returned (existsUpdate false for $CLAIM_VER). Full response:"; echo "$RESP"; exit 1
fi

FN=$(basename "${URL%%\?*}")
echo "latestVersion : $LVER"
echo "file          : $FN"
echo "expected md5  : $DIGEST"
echo "downloading   -> $OUT/$FN"
curl -sS -m 300 -L -o "$OUT/$FN" "$URL"

GOT=$(md5 -q "$OUT/$FN" 2>/dev/null || md5sum "$OUT/$FN" | awk '{print $1}')
echo "downloaded md5: $GOT"
if [ "$GOT" = "$DIGEST" ]; then echo "MD5 OK ✅  saved $OUT/$FN ($(wc -c < "$OUT/$FN") bytes)";
else echo "MD5 MISMATCH ❌ (expected $DIGEST got $GOT)"; fi
