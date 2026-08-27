# Star Air 1.0.12.83 — full OTA export

Everything that can be pulled from `platform_tester.bin` (HUD / M55) and
`best1600_watch_bth.bin` (Bluetooth). Open this folder in Finder; you do not
need Ghidra to browse it.

Root: `Reverse/firmware/export/1.0.12.83/` (~135 MB)

## Layout

| Path | What |
|---|---|
| `strings/m55_ascii.txt` | 72,743 ASCII strings (offset + text) |
| `strings/m55_utf16le.txt` | 230 UTF-16LE strings |
| `strings/bth_ascii.txt` | 17,040 ASCII strings |
| `strings/bth_utf16le.txt` | 159 UTF-16LE strings |
| `strings/audio_paths.txt` | 21 `audio/*.aac` **path names** compiled into the HUD |
| `strings/categorized/` | BLE actions, factory cmds, pages, … |
| `i18n/en.txt` `i18n/zh.txt` | UI copy |
| `media/gifs/` | 12 HUD GIFs carved from the bin |
| `media/fonts/` | 3 compiled LVGL faces (bitmap + PNG previews) |
| `media/carved/` | 19 AAC streams found **inside** the HUD bin (`file` says MPEG ADTS AAC; encoder tag `Lavc60`) |
| `ui/` | View/page catalog, 98 LittleFS icon names, 12 carved HUD GIFs |
| `functions/m55/` | 12,068 functions: `functions.csv`, `decomp/*.c`, `asm/*.s` |
| `functions/bth/` | 3,101 functions, same layout |
| `missing.txt` | What is **not** in the OTA zip |

## Functions (no Ghidra needed)

- `functions.csv` — address, name, size, decompile ok/fail
- `decomp/` — Ghidra C (5 HUD functions failed pcode; the rest decompiled)
- `asm/` — Thumb listing

Names are still mostly `FUN_2c……`. Search the CSV or `grep -r` the decomp folder.

## Audio — two different things

1. **Path strings** (`audio/click.aac`, wake-word files, …) — names only. Those files live on the glasses’ LittleFS, not in the zip.
2. **Carved AAC** in `media/carved/` — actual ADTS blobs inside `platform_tester.bin`. Short UI/codec snippets, not the full LittleFS sound pack.

## UI — same split as audio

1. **View/Page names** (`AboutView`, `MMIPage`, …) are compiled C++ classes, not raster files. Catalog: `ui/`.
2. **Carved GIFs** in `ui/gifs/` — 12 HUD animations inside `platform_tester.bin`.
3. **Named icons** (`weather_sunny_day_24_24`, `music_cover_v3`, …) — LittleFS keys, not in the zip. List: `ui/icon_resources.txt`.

## Not in this export (cannot come from the zip)

- Full CJK font `B:lv_font_air_full_cn_20_bpp1.bin`
- The 21 LittleFS `audio/*.aac` files named in `strings/audio_paths.txt`
- Bootloader / panel firmware
- Runtime logs and NV

Re-run: `python3 Reverse/tools/export_everything.py` then Ghidra `ExportAll.java`.
