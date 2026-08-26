# BIMA patches

Same-length swap `MYVU` → `BIMA` in the unpacked OTA bins.

The boot mark is **not** those ASCII strings and **not** the compiled Latin
glyphs — remapping M/Y/V/U turned HUD copy into BIBA/ByvuiOS and left splash
unchanged. Do not remap glyph slots.

What changed
- `platform_tester.bin` — UI copy + `displayName`
- 1.0.12.83 only: theme `radius = 12` → `0`, six `LV_RADIUS_CIRCLE`
  (`0x7FFF`) → `0`, and three `outline_width = 1` → `0` (drop the grey box).
  Disconnect canary: `…the HUD3` so a successful apply is visible.
  Idle HUD time string is `"HH:MM NN"` (SOC digits, no `%` glyph) via the
  TimeModel snprintf hook. Dock factory / Settings stay stock.
- `best1600_watch_bth.bin` — `MYVU ble` → `BIMA ble`
- Left alone: `myvu` / `Myvu` (e.g. `handleMyvuLoginStatus`)

Previews: `<ver>/fonts/*_BIMA.png`

**Before flashing:** run the pre-flash sandbox (not a SoC emulator):

```bash
python3 Reverse/firmware/sandbox/patch_check.py Reverse/firmware/patched_bima/1.0.12.83/platform_tester.bin
python3 Reverse/firmware/sandbox/hud_preview.py --time 19:23 --soc 68
```

See `Reverse/firmware/sandbox/README.md`. Do not flash if `patch_check` exits non-zero.
