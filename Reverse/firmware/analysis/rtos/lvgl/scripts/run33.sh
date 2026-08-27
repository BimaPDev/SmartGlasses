#!/usr/bin/env bash
set -euo pipefail
ROOT=/Users/bimap/Documents/Coding/SmartGlasses
export JAVA_HOME=/opt/homebrew/opt/openjdk
export PATH="$JAVA_HOME/bin:$PATH"
HEADLESS=/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support/analyzeHeadless
BASEDIR="$ROOT/Reverse/firmware/analysis/rtos/lvgl"
exec "$HEADLESS" "$BASEDIR/disasm/proj" lvgl33 \
  -process platform_tester.bin -noanalysis \
  -scriptPath "$BASEDIR/scripts" \
  -postScript LvglThread.java "$BASEDIR/disasm" "$@" \
  -log "$BASEDIR/disasm/script.log"
