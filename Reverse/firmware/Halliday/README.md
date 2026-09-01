# Halliday smart-glasses firmware reverse

Self-contained reverse-engineering tree for **Actions Semi ATS3089** Halliday glasses OTA (`1.00_2601211113`). Parallels Star Air `Reverse/firmware/export/1.0.12.83` + `analysis/full_rev/`.

## Layout

```
Reverse/firmware/Halliday/
├── HallidayOfficialOTA.bin      # Stock OTA
├── HomeBuddyHallidayCustomOTA.bin
├── tools/export_halliday.py     # AOTA unpack + strings
├── export/                      # Browse without Ghidra (~13 MB)
│   ├── official/ custom/
│   ├── functions/app/           # Ghidra decomp + asm
│   └── README.md
├── ghidra/import_app.sh         # Headless import @ 0x10000000
├── analysis/
│   ├── full_rev/                # Subsystem docs (C1–C14)
│   └── scripts/verify-*.mjs
└── .unlazy/halliday/            # Orchestration ledger
```

## Quick start

```bash
# Export partitions + strings
python3 Reverse/firmware/Halliday/tools/export_halliday.py

# Ghidra function export (optional, ~15 min)
Reverse/firmware/Halliday/ghidra/import_app.sh

# Verify all leaves
node Reverse/firmware/Halliday/analysis/scripts/verify-integration.mjs
```

## Index

Start at [`analysis/full_rev/FULL_FIRMWARE_MAP.md`](analysis/full_rev/FULL_FIRMWARE_MAP.md).

## vs Star Air

| | Star Air | Halliday |
|---|---|---|
| Location | `firmware/x_1.0.12.83`, `export/1.0.12.83`, `analysis/full_rev` | **All under `firmware/Halliday/`** |
| SoC | BES best1600 (M55 + BTH) | Actions ATS3089 |
| RTOS | FreeRTOS | Zephyr |
| Images | 2 bins | 1 `app.bin` (+ AOTA layers) |
| Phone protocol | StarryNet | Halliday vendor BLE + SPP |
