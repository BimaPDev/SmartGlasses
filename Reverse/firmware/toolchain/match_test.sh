#!/usr/bin/env bash
# match_test.sh — flag bake-off: find the compile flags whose codegen best matches
# the shipped firmware. This is what "closest to the 3 firmware" means operationally.
#
# Usage:
#   ./match_test.sh <source.c> <function-name> <fw_file_off_hex> <byte_len>
# Example:
#   ./match_test.sh ref/strtok.c strtok 0x4a1234 96
#
# Pick reference functions whose EXACT source you have (newlib routines — the image
# embeds the same newlib revision as the toolchain), so any mismatch is a flag
# difference rather than a source difference.

set -u
SRC="${1:?source file}"; FN="${2:?function name}"; OFF="${3:?firmware file offset (hex)}"; LEN="${4:?byte length}"

ROOT="$(cd "$(dirname "$0")/../../.." && pwd)"
FW="$ROOT/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
CC="${CC:-arm-none-eabi-gcc}"
OBJCOPY="${OBJCOPY:-arm-none-eabi-objcopy}"
TMP="$(mktemp -d)"; trap 'rm -rf "$TMP"' EXIT

command -v "$CC" >/dev/null || { echo "ERROR: $CC not found. See TOOLCHAIN.md §4."; exit 1; }
"$CC" --version | head -1
case "$("$CC" -dumpversion)" in
  10.3*) ;;
  *) echo "WARNING: expected GCC 10.3.1 (Arm 10.3-2021.10); codegen may not match." ;;
esac

# reference bytes out of the firmware
dd if="$FW" bs=1 skip=$((OFF)) count="$LEN" of="$TMP/ref.bin" 2>/dev/null
echo "reference: $FW @ $OFF ($LEN bytes)"
xxd "$TMP/ref.bin" | head -4

ARCH="-mthumb -mcpu=cortex-m55+nomve -mfloat-abi=hard -mfpu=fpv5-d16"
BEST=999999; BESTFLAGS=""

for OPT in -Os -O2 -O1 -O3; do
for EXTRA in "" "-fno-exceptions -fno-rtti" "-fshort-enums" "-fno-exceptions -fno-rtti -fshort-enums"; do
for LTO in "" "-ffunction-sections"; do
  FLAGS="$ARCH $OPT $EXTRA $LTO -fomit-frame-pointer -ffreestanding"
  if ! "$CC" $FLAGS -c "$SRC" -o "$TMP/o.o" 2>/dev/null; then continue; fi
  "$OBJCOPY" -O binary --only-section=".text.$FN" "$TMP/o.o" "$TMP/out.bin" 2>/dev/null
  [ -s "$TMP/out.bin" ] || "$OBJCOPY" -O binary --only-section=.text "$TMP/o.o" "$TMP/out.bin" 2>/dev/null
  [ -s "$TMP/out.bin" ] || continue

  DIFF=$(python3 - "$TMP/ref.bin" "$TMP/out.bin" <<'PY'
import sys
a=open(sys.argv[1],'rb').read(); b=open(sys.argv[2],'rb').read()
n=min(len(a),len(b))
d=sum(1 for i in range(n) if a[i]!=b[i]) + abs(len(a)-len(b))
print(d)
PY
)
  printf "  %-58s diff=%s\n" "$OPT $EXTRA $LTO" "$DIFF"
  if [ "$DIFF" -lt "$BEST" ]; then BEST="$DIFF"; BESTFLAGS="$FLAGS"; fi
done; done; done

echo
if [ "$BEST" = "0" ]; then
  echo "EXACT MATCH ✅"
else
  echo "best differing bytes: $BEST (0 = exact)"
fi
echo "best flags: $BESTFLAGS"
