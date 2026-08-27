#!/usr/bin/env bash
# Import best1600_watch_bth.bin into a Ghidra project at 0x14000000 and run
# the factory-key bookmark / call-graph stub.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../../.." && pwd)"
BIN="$ROOT/Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin"
PROJ_DIR="$ROOT/Reverse/firmware/ghidra/project"
SCRIPTS="$ROOT/Reverse/firmware/ghidra/scripts"
REPORT="$ROOT/Reverse/firmware/analysis/bth_factory_key_entry.md"
GHIDRA_SUPPORT="${GHIDRA_SUPPORT:-/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support}"
HEADLESS="$GHIDRA_SUPPORT/analyzeHeadless"

if [[ ! -x "$HEADLESS" ]]; then
  echo "analyzeHeadless not found at $HEADLESS" >&2
  echo "Set GHIDRA_SUPPORT to <ghidra>/support" >&2
  exit 1
fi
if [[ ! -f "$BIN" ]]; then
  echo "missing $BIN" >&2
  exit 1
fi

mkdir -p "$PROJ_DIR" "$ROOT/Reverse/firmware/analysis"

ARGS=(
  "$PROJ_DIR" StarAirBth
  -import "$BIN"
  -overwrite
  -processor ARM:LE:32:v8-m
  -cspec default
  -loader BinaryLoader
  -loader-baseAddr 0x14000000
  -scriptPath "$SCRIPTS"
  -preScript AddBesNcOverlay.java
)
if [[ "${1:-}" == "--no-analysis" ]]; then
  ARGS+=(-noanalysis)
fi
ARGS+=(
  -analysisTimeoutPerFile 900
  -postScript FactoryKeyEntry.java "$REPORT"
  -log "$ROOT/Reverse/firmware/ghidra/analyzeHeadless.log"
)

exec "$HEADLESS" "${ARGS[@]}"
