# Ghidra — Halliday `app.bin`

Import official `app.bin` at **`0x10000000`** (Actions ATS3089 / Cortex-M33) and export all functions.

## Image map

| | |
|---|---|
| File | `../export/official/layer3/app.bin` (1,662,592 B) |
| Load | **`0x10000000`** |
| Language | `ARM:LE:32:v8-m` / `default` |
| Header | `ACTHHTCA` @ file 0 (Actions image header; code from ~0x200) |

## Import + export

From repo root:

```bash
Reverse/firmware/Halliday/ghidra/import_app.sh
```

Creates `project/HallidayApp.gpr`, runs auto-analysis (~3 min), then `ExportAll.java` → `../export/functions/app/` (`functions.csv`, `decomp/`, `asm/`).

Skip analysis (project only):

```bash
Reverse/firmware/Halliday/ghidra/import_app.sh --no-analysis
```

GUI: `ghidraRun`, open `Reverse/firmware/Halliday/ghidra/project`, file `app.bin`.

## Export stats (official 1.00_2601211113)

- **5,486** functions decompiled (0 failures)
- Output: `export/functions/app/` (~46 MB)
