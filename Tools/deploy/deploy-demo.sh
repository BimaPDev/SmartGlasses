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

DEV_ID=$(xcrun devicectl list devices 2>/dev/null \
         | awk -v n="$DEVICE_NAME" '$0 ~ n {print $(NF-4)}' | head -1)
[ -z "$DEV_ID" ] && { echo "device '$DEVICE_NAME' not found — is it plugged in and unlocked?"; exit 1; }
echo "device $DEVICE_NAME -> $DEV_ID"

echo "building (team $TEAM)…"
xcodebuild -project "$PROJ/MyvuDemo.xcodeproj" -scheme MyvuDemo -configuration Debug \
  -destination "platform=iOS,name=$DEVICE_NAME" \
  DEVELOPMENT_TEAM="$TEAM" -allowProvisioningUpdates build > /tmp/myvu-deploy.log 2>&1 \
  || { grep -E "error:" /tmp/myvu-deploy.log | head; exit 1; }
echo "build ok"

APP=$(find ~/Library/Developer/Xcode/DerivedData -name MyvuDemo.app \
        -path "*Debug-iphoneos*" -not -path "*Index*" 2>/dev/null | head -1)
[ -z "$APP" ] && { echo "built .app not found"; exit 1; }

xcrun devicectl device install app --device "$DEV_ID" "$APP" 2>&1 | grep -E "bundleID|error" || true
xcrun devicectl device process launch --device "$DEV_ID" "$BUNDLE" 2>&1 | grep -E "Launched|error" || true
echo "done — Log tab › Probe"
