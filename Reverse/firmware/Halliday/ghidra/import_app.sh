#!/usr/bin/env bash
# Import Halliday app.bin (official) at 0x10000000 and export all functions.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../../../.." && pwd)"
BIN="$ROOT/Reverse/firmware/Halliday/export/official/layer3/app.bin"
PROJ_DIR="$ROOT/Reverse/firmware/Halliday/ghidra/project"
SCRIPTS="$ROOT/Reverse/firmware/Halliday/ghidra/scripts"
FUNC_OUT="$ROOT/Reverse/firmware/Halliday/export/functions/app"
GHIDRA_SUPPORT="${GHIDRA_SUPPORT:-/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support}"
HEADLESS="$GHIDRA_SUPPORT/analyzeHeadless"

if [[ ! -x "$HEADLESS" ]]; then
  echo "analyzeHeadless not found at $HEADLESS" >&2
  exit 1
fi
if [[ ! -f "$BIN" ]]; then
  echo "missing $BIN — run: python3 Reverse/firmware/Halliday/tools/export_halliday.py" >&2
  exit 1
fi

mkdir -p "$PROJ_DIR" "$FUNC_OUT"

ARGS=(
  "$PROJ_DIR" HallidayApp
  -import "$BIN"
  -overwrite
  -processor ARM:LE:32:v8-m
  -cspec default
  -loader BinaryLoader
  -loader-baseAddr 0x10000000
  -scriptPath "$SCRIPTS"
)
if [[ "${1:-}" == "--no-analysis" ]]; then
  ARGS+=(-noanalysis)
else
  ARGS+=(-analysisTimeoutPerFile 1200)
fi
ARGS+=(
  -postScript ExportAll.java "$FUNC_OUT"
  -log "$ROOT/Reverse/firmware/Halliday/ghidra/analyzeHeadless.log"
)

exec "$HEADLESS" "${ARGS[@]}"
