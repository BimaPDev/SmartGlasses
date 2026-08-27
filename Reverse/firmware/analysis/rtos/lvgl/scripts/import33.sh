#!/usr/bin/env bash
set -euo pipefail
ROOT=/Users/bimap/Documents/Coding/SmartGlasses
export JAVA_HOME=/opt/homebrew/opt/openjdk
export PATH="$JAVA_HOME/bin:$PATH"
HEADLESS=/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support/analyzeHeadless
PROJ="$ROOT/Reverse/firmware/analysis/rtos/lvgl/disasm/proj"
exec "$HEADLESS" "$PROJ" lvgl33 \
  -import "$ROOT/Reverse/firmware/x_1.0.12.83/platform_tester.bin" \
  -overwrite \
  -processor ARM:LE:32:v8-m \
  -cspec default \
  -loader BinaryLoader \
  -loader-baseAddr 0x2C000000 \
  -analysisTimeoutPerFile 5400 \
  -log "$ROOT/Reverse/firmware/analysis/rtos/lvgl/disasm/import.log"
