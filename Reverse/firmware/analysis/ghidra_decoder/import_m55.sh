#!/usr/bin/env bash
set -euo pipefail
SUP=/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support
BIN=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin
PROJ=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/gproj
mkdir -p "$PROJ"
"$SUP/analyzeHeadless" "$PROJ" M55 \
  -import "$BIN" -overwrite \
  -processor ARM:LE:32:Cortex -cspec default \
  -loader BinaryLoader -loader-baseAddr 0x2C000000 \
  -analysisTimeoutPerFile 1500
