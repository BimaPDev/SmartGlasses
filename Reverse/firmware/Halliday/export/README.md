# Halliday ATS3089 firmware export — 1.00_2601211113

Everything recoverable from `HallidayOfficialOTA.bin` / `HomeBuddyHallidayCustomOTA.bin`.
Open this folder in Finder; Ghidra export optional for function decomp.

Root: `Reverse/firmware/Halliday/export/`

## Layout

| Path | What |
|---|---|
| `official/layer3/app.bin` | Main Zephyr app (1,662,592 B) @ load `0x10000000` |
| `official/strings/app_ascii.txt` | ASCII strings (offset + text) |
| `official/strings/categorized/` | BLE, OTA, LVGL, Halliday, Zephyr, factory, audio, power, sensors |
| `custom/` | HomeBuddy-patched variant (same layout) |
| `functions/app/` | Ghidra: `functions.csv`, `decomp/*.c`, `asm/*.s` — **ready** |
| `missing.txt` | What is not in the OTA zip |

## Variants

| Variant | OTA file |
|---|---|
| `official/` | `../HallidayOfficialOTA.bin` |
| `custom/` | `../HomeBuddyHallidayCustomOTA.bin` |

## Container

Outer **AOTA** → `TEMP.bin` (ACTHHTCA + LZMA) → inner AOTA → `app.bin` + `sdfs.bin`

Re-run: `python3 Reverse/firmware/Halliday/tools/export_halliday.py` then `Reverse/firmware/Halliday/ghidra/import_app.sh`
