#!/usr/bin/env bash
# Build and install MyvuDemo onto the paired iPhone.
#
# The two things that cost time the first round, recorded so they don't again:
#
#  1. DEVELOPMENT_TEAM is the certificate's OU field, NOT the id in its common name.
#       security find-certificate -c "Apple Development: <you>" -p \
#         | openssl x509 -noout -subject | tr ',' '\n' | grep OU
#     "Apple Development: name (32D8BDNZ44)" -> 32D8BDNZ44 is the CERT id and FAILS with
#     'No Account for Team'. The real team is OU=264YPMKQC6.
#
#  2. Provisioning profiles live under
#       ~/Library/Developer/Xcode/UserData/Provisioning Profiles/
#     not the legacy ~/Library/MobileDevice/Provisioning Profiles/.
#
# devicectl prints 'Failed to load provisioning paramter list ... No provider was found'
# on both install and launch. It is NOISE — the operations succeed anyway.
set -euo pipefail

TEAM="${TEAM:-264YPMKQC6}"
DEVICE_NAME="${DEVICE_NAME:-Testing1}"
BUNDLE="${BUNDLE:-dev.myvu.demo}"
PROJ="$(cd "$(dirname "$0")/../.." && pwd)/Examples/MyvuDemo"

# Match the UUID by shape, not by column position: the model name contains spaces
# ("iPhone 14 Pro Max (iPhone15,3)"), so field offsets from the end are not stable.
DEV_ID=$(xcrun devicectl list devices 2>/dev/null | grep -F "$DEVICE_NAME" \
         | grep -oE '[0-9A-F]{8}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{12}' | head -1)
[ -z "$DEV_ID" ] && { echo "device '$DEVICE_NAME' not found — is it plugged in and unlocked?"; exit 1; }
echo "device $DEVICE_NAME -> $DEV_ID"

# NOTE two different id spaces: devicectl uses a UUID (105620E7-...), xcodebuild uses the
# ECID form (00008120-...). They are not interchangeable, so build by NAME and install by
# the devicectl UUID. If xcodebuild says "Timed out waiting for all destinations", the
# phone is almost certainly LOCKED — unlock it and rerun.
echo "building (team $TEAM)…"
xcodebuild -project "$PROJ/MyvuDemo.xcodeproj" -scheme MyvuDemo -configuration Debug \
  -destination "platform=iOS,name=$DEVICE_NAME" \
  DEVELOPMENT_TEAM="$TEAM" -allowProvisioningUpdates build > /tmp/myvu-deploy.log 2>&1 \
  || { grep -E "error:" /tmp/myvu-deploy.log | head; exit 1; }
echo "build ok"

APP=$(find ~/Library/Developer/Xcode/DerivedData -name MyvuDemo.app \
        -path "*Debug-iphoneos*" -not -path "*Index*" 2>/dev/null | head -1)
[ -z "$APP" ] && { echo "built .app not found"; exit 1; }

# The device tunnel drops intermittently ("Connection reset by peer", error 4000).
# Retrying works; one attempt is not enough.
for try in 1 2 3; do
  if xcrun devicectl device install app --device "$DEV_ID" "$APP" 2>&1 | grep -qE "bundleID"; then
    echo "installed (attempt $try)"; break
  fi
  echo "install attempt $try failed, retrying…"; sleep 8
done
xcrun devicectl device process launch --device "$DEV_ID" "$BUNDLE" 2>&1 | grep -E "Launched|ERROR" || true
echo "done — Log tab › Probe"
