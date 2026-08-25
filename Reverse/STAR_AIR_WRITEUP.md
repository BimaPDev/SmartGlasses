# MYVU Star Air — findings write-up

**Date:** 2026-08-22  
**Device:** Meizu MYVU Star Air, model **XGA010C**, BLE name **MYVU 0F35**  
**Serial:** `1001160244J0008Q`  
**Installed ROM:** Flyme XR **1.0.12.88** (`20250217_Air_FR`, `buildType: user`)  
**USB-C:** charge-only (no ADB, no gadget serial)

This is the readable summary of everything reverse-engineered so far: companion
OTA, two BES1600 firmware images, BLE/StarryNet, factory/MMI, HUD fonts (including
the boot **MYVU** logo), and what is actually inside the zip versus only on the
glasses. Deep dives stay in the files listed at the end.

---

## At a glance

| Question | Answer |
|---|---|
| Can we download the ROM that’s on the glasses (1.0.12.88)? | **No.** CN `checkV2` tops out at **1.0.12.83**. `.88` is past `supportTo: 1.0.12.23`. |
| What did we get? | Two OTA zips: **1.0.7.83** and **1.0.12.83** (plus **1.0.11.53** in the tree). Each zip is two BES bins, not an Android image. |
| Shop-demo BLE (`set_demo_mode`)? | **Not implemented** on Air. The About 5× tap still sends it; firmware has no handler. |
| Screenshot / glass log over BLE? | **Yes** (`get_glass_screenshot`, `get_glass_log`). Zip comes back over ShareAbility. |
| Screen record the HUD? | **No** such command. “Record” is meeting notes. |
| Factory / MMI? | Power-on **3 s or 5 s** key hold (no password). Full `eshell` needs UART / `debug_i2c` test points, not Type-C. |
| `en_usb`? | Factory stub. **No USB device stack** in this user image. |
| Boot **MYVU** logo? | Not a PNG. It is the compiled LVGL **bitmap font** drawing the letters M-Y-V-U. |
| Full Chinese font / AAC sounds? | Paths only in the OTA. Payloads live on-device LittleFS (`B:lv_font_air_full_cn_20_bpp1.bin`, `audio/*.aac`). |

---

## 1. Device and how firmware was obtained

Star Air is a BES1600 wearable: **M55** app processor (LVGL UI, StarryNet, launcher)
plus **M33** BT/MCU. The phone app never embeds a static firmware URL. It asks
CN/intl `POST /client/v1/arupgrade/checkV2` (HMAC-signed). Intl returned nothing
for this model; CN returned packs **older** than the glasses.

| Zip | Version | Upgrade window |
|---|---|---|
| `ota_star-air_1.0.7.83…zip` | Flyme AR 1.0.7.83 | 1.0.0.42 – 1.0.5.3 |
| `ota_star-air_1.0.12.83…zip` | Flyme XR 1.0.12.83 | 1.0.7.83 – 1.0.12.23 |

A 1500-request channel sweep (`versionType` × `buildType` × claimed version ×
region) only ever succeeded on `release` / `user`. Beta/gray/factory/etc. all
returned `existsUpdate: false`. **1.0.12.83 is the ceiling on every public
channel.** Treat 1.0.12.83 as the last published generation before installed
1.0.12.88, not as a byte-identical dump of `.88`.

Each zip:

| File | ~size | Chip | Role |
|---|---|---|---|
| `platform_tester.bin` | 6.0–6.5 MB | M55 | LVGL, StarryNet, launcher, factory, eshell |
| `best1600_watch_bth.bin` | 1.3 MB | M33 | RTX5, GATT, PMU, factory BT tests |

16-byte BES OTA header, then Thumb-2. M55 FLASH XIP base **`0x2C000000`**, entry
`0x2C010014`. Some `.rodata` pointers use alias **`0x3C000000`**. Factory NV
prints `__factory_start=0x28FFF000`.

Extracted copies: `Reverse/firmware/x_1.0.7.83/`, `x_1.0.11.53/`, `x_1.0.12.83/`.

---

## 2. What’s in the OTA vs only on the glasses

The zip is the **code image**. Media that the UI loads from LittleFS is **not**
in the OTA.

| Kind | In OTA zip | On device | Extracted |
|---|---|---|---|
| HUD GIFs (12) | yes | same | catalogued in `extracted_assets/*/manifest.json` |
| 3 compiled LVGL Latin/CJK-subset faces | yes | yes | `extracted_assets/<ver>/fonts/` |
| Full CJK `B:lv_font_air_full_cn_20_bpp1.bin` | **no** | LittleFS | — |
| UI AAC (`audio/*.aac`, 21 names) | paths only | LittleFS | `strings/audio_paths.txt` |
| EN UI copy (~2516) / ZH (~408) | yes | yes | `i18n/en.txt`, `zh.txt` |
| BLE `handleSystemMsg` inner actions | packed table | yes | `strings/ble_actions.txt` |
| Factory / eshell command names | strings | UART/MMI | `strings/factory_cmds.txt` |
| Pages / Views / Models (~69) | source names | yes | `strings/pages.txt` |
| Screenshot / ASL log files | protocol only | runtime | ShareAbility |
| KWS models | not in these bins | device | — |

Re-run: `python3 Reverse/firmware/extract_firmware_map.py` then
`python3 Reverse/firmware/extract_lvgl_fonts.py`.

---

## 3. BLE / StarryNet

StarryNet JSON is `{action, data:{action, value}}`. Top-level `action` picks a
model (`system`, `screenshot`, `user_feedback`, …). Inner `data.action` is
matched against a packed string table next to

`handleSystemMsg no handler for action %s`.

BES compiles almost no C-string as a 32-bit pointer (trace-hash / positional
blob walk), so Ghidra `getReferencesTo` on those names is empty. The **packed
blob is still the dispatch list**: if a name is not in the image at all, the
handler was never compiled.

### Demo mode — not on Air

`set_demo_mode` / `get_demo_mode` are **absent** (ASCII and UTF-16) in 1.0.7,
1.0.12, and the BTH image. The companion About easter egg (tap ROM version 5×)
still sends:

```json
{"action":"system","data":{"action":"set_demo_mode","value":true}}
```

Air firmware falls through to “no handler”. The Android UI gate is `isAirPro()`
(`deviceType == "ari_pro"`); the BLE send is not model-gated. What *did* land
in 1.0.12 is a **local** launcher flag `launcher_standby_demo_mode` and the
string “Demo Mode Open” — a standby clock demo, not the shop-demo API.

### Screenshot — yes

`get_glass_screenshot` → `handleScreenShot` (refuses if screen off / business
app running / UUID alloc fails) → framebuffer encode → ShareAbility zip.
UI copy and `audio/screenshot.aac` are in the image. The Swift SDK can *ask*;
it does not yet implement the ShareAbility receiver (`SENDER_SYN` →
`confirm(taskId)` → `SENDER_DATA`).

### Glass log — yes

`{"action":"user_feedback","data":{"action":"get_glass_log",…}}` → `handleGetLog`
→ `user_feed_back.log` from ASL flash. Same ShareAbility split. Phone debug
panel refuses if `DynamicOperateUtil.h() < 3`.

### Screen record — no

No `screen_record` / `get_glass_screen_record`. `RECORD_STATE_*` / “Make a
Record” are Quick Notes / meeting assistant.

### Inner `system` actions recovered

**Gets:** `get_device_info`, `get_language`, `get_zen_mode`, `get_volume`,
`get_wear_detection_mode`, `get_standby_position`, `get_volume_stream_type`,
`get_music_tp_control_mode`, `get_standby_widget_lists`,
`get_glass_sound_effect_mode`

**Sets / notifies:** `set_device_name`, `set_volume`, `set_language`,
`set_font_mode`, `set_standby_position`, `set_wear_detection_mode`,
`set_glass_sound_effect_mode`, `set_hear_impairment_mode`, `set_app_fast_open`,
`set_music_tp_control_mode`, `set_image_stabilization_mode`,
`set_image_adjustment_mode`, `set_standby_widget_lists`, `change_dock_items`,
`do_recovery`, `sync_clone_data`, `notify_privacy_expired`,
`notify_statement_change`, `set_brightness_finish`

Also nearby as methods: `setScreenBrightness`, `setScreenOffTime`, `set_zen_mode`,
`open_app`, `system_glass_active`, `system_account`, `feature_list`.

**No Wi-Fi stack** in this image (`toggle_wifi` / `set_wifi` absent).

---

## 4. Factory / MMI / UART

USB-C being charge-only means this is what a **UART or debug-I2C test point**
would unlock. Prompt: `eshell >`. BTH: `!!!!!ENGINEER_MODE!!!!!`. UI:
“MMI mode has been opened.”

### Entry — power-on key hold, no password

Nothing in the BLE `handleSystemMsg` table turns factory on. The M33 decides
at boot from a physical key, then mailboxes the M55 (`BTH_TO_M55_FACTORY_TEST_MODE`).

Hold thresholds in `hal_key.c`: **500 ms / 3 s / 5 s**. The MMI trigger is
almost certainly the 3 s or 5 s long-press on the power key at power-on.
Which exact pair is not recoverable from string xrefs (BES trace-hash). Safe
check: power off, power on while holding the button — try 3 s, then 5 s.
Reboot exits. Nothing is flashed.

Full `eshell` (`md`/`mw`/`xmodem`) is a **wire-level** tier, not Type-C.

### `fac_cmd` (names in the image)

Identity: `set_sn`/`get_sn`, `set_bsn`/`get_bsn`, `set_bt_name`/`get_bt_mac`,
`get_version`, `soc_info`, `sys_reset`, …

Display: `set_disp_bri`, `show_pic`, `panel_id`, `check_esd`, `get_jbd_brightness`, …

Audio / charger / sensors / MMI runner: `mmi_run`, `mmi_run_item`, `exit_mmi`, …

`en_usb` (“enable usb”) exists as a **name/help pair only**. Binding it to a
handler is not statically recoverable (positional blob walk, zero xrefs). The
M55 image has **no** `hal_usb` / TinyUSB / gadget stack. It cannot enable a
USB device that was never compiled in, and it does not prove Type-C D+/D− are
wired on retail boards. The 11 `tusb` hits are `launcher_sta`**`tusb`**`ar`.

### Core eshell (dangerous)

`md`/`mw` (8/16/32), `xmodem` (raw download to an address), `panic`,
`dump_all_threads`, `debug_i2c` (rebind eshell over I2C), unit tests
(`utest_ram`, `utest_uart`, …). Product CLIs on the same shell:
`xjxr_starrynet_test`, `xmonkey`, `xtest`, `xr_asl`, `xr_sensor_eshell`, …

---

## 5. OTA on the glasses

Phone sends the two BES bins over StarryNet file transfer. M55: parse file-info
(name, size, md5) → `SENDER_DATA` → MD5 the download → `ota_flash_program` →
MD5 the written flash → update magic / boot info →
`ota_check_and_change_boot_type`. Fail/rollback: `do_ota_rollback`. 1.0.12
adds silent-OTA pause/resume and an `OtaMsgModel` split out of `LauncherModel`.

---

## 6. HUD fonts and the MYVU logo

The reboot **MYVU** mark is **not a raster logo**. The launcher draws the four
letters with the compiled-in LVGL `fmt_txt` bitmap font (green-on-black HUD).
There is no TTF in the OTA.

### Three faces in `platform_tester.bin`

Walked by finding a 16-byte zero glyph descriptor, then a chain of
`lv_font_fmt_txt_glyph_dsc_t` (`<IIHHhh>` = `bitmap_index`, `adv_w` in 1/16 px,
`box_w`, `box_h`, `ofs_x`, `ofs_y`). Bitmap is tight-packed MSB-first, immediately
before the descriptor table.

| Face | bpp | Role (from strings) | Typical Latin cap |
|---|---|---|---|
| small | 1 | `FONT_DUMMY_16` / `FONT_CN_16_NORMAL` | ~12–16 px |
| medium | 4 (AA) | `FONT_DUMMY_20` / `FONT_CN_20_NORMAL` | ~14–20 px |
| large | 1 | `FONT_DUMMY_24` / `FONT_CN_24_NORMAL` | ~17–24 px |

Also named in the image but **not** these three blobs: `FONT_CN_32_NORMAL`,
`FONT_CN_36_BOLD`, `FONT_EN_32_NORMAL`, `FONT_EN_36_BOLD`. Full CJK is loaded at
runtime from LittleFS: `B:lv_font_air_full_cn_20_bpp1.bin`.

Placement matches LVGL 8.3:

`gpos.y = pos.y + (line_height - base_line) - box_h - ofs_y`

### Coverage differs by ROM

| ROM | Glyphs | ASCII `glyph_id_start` | Notes |
|---|---|---|---|
| **1.0.7.83** | 4347 | **0** (space is glyph 0) | Smaller cmap |
| **1.0.11.53** | 6032 | **1** (glyph 0 = `.notdef`) | Bitmap MD5 **identical** to 1.0.12 |
| **1.0.12.83** | 6032 | **1** | Same bitmaps as 1.0.11 |

1.0.12 clean fmt0 cmaps sit at `0x19ce44`, `0x20134c`, `0x2fd3c0` (one per face),
`U+0020` length 95, `gid_start=1`. 1.0.7 cmap scan is noisy; **I/H/M/period box
sizes** empirically require `gid_start=0`.

### Why 1.0.7 extractions looked like “NZWV” / hieroglyphs

The first extractor hardcoded `gid = 1 + (codepoint - 0x20)` (correct for
1.0.11/12). On 1.0.7 that is **off by +1**, so **MYVU** drew as **NZWV**.

A second bug: two **row-rotate** hacks that fix 1.0.11/12 were applied to every
face.

- **1bpp:** circular rotate each row by `box_w % 8`. Needed for 1.0.7 **large**
  and all 1.0.11/12 1bpp faces (stems sit on the edges). **Destroys 1.0.7 small**
  (M collapses into a right-side slab). Detected per face by scoring H/M/U edge
  ink with vs without the rotate.
- **4bpp:** rotate by 8 pixels (second 8-pixel bank). Needed for 1.0.11/12
  medium (ink lives in the right bank of M). **Destroys 1.0.7 medium** (glyphs
  are already centered). Detected by whether M’s first rows have more ink in
  columns 8+ than 0–7.

A third preview issue: 4bpp was blown up **5× nearest-neighbor**, so AA strokes
became slabs, and leftover bits on Y’s last row drew a **floor bar**. Previews
now use a smaller integer scale, a mild 4bpp gamma, and drop a last-row wrap
bar when ≥3 pixels have no ink in the same column above.

Extractor: `Reverse/firmware/extract_lvgl_fonts.py`. Output PNGs:
`small|medium|large_{ascii,MYVU,StarAir,pangram,digits}.png`, plus raw
`*_glyph_bitmap.bin` / `*_glyph_dsc.bin` and `manifest.json`.

### Offsets (file offsets in `platform_tester.bin`)

**1.0.7.83**

| Face | bpp | dsc | bitmap | size | `ascii_gid_start` | `row_shift` |
|---|---|---|---|---|---|---|
| small | 1 | `0x2db370` | `0x2c1624` | 103 KiB | 0 | false |
| medium | 4 | `0x29ff90` | `0x1e9bef` | 729 KiB | 0 | false |
| large | 1 | `0x1d3f74` | `0x1994b5` | 235 KiB | 0 | true |

**1.0.12.83** (1.0.11.53 bitmaps MD5-match these)

| Face | bpp | dsc | bitmap | size | `ascii_gid_start` | `row_shift` |
|---|---|---|---|---|---|---|
| small | 1 | `0x31dbc4` | `0x2fd681` | 129 KiB | 1 | true |
| medium | 4 | `0x2e2dc8` | `0x20160e` | 902 KiB | 1 | true |
| large | 1 | `0x1e610c` | `0x19d105` | 292 KiB | 1 | true |

These are still **HUD pixel fonts**, not print type. Large Y can show a leftover
last-row tick from the 1bpp wrap; medium is ~14px AA. Pixel dumps (not screenshot
captions) are the source of truth for “is this an M”.

---

## 7. Other carved assets

### GIFs

12 GIF89a HUD animations in `platform_tester.bin` (sizes 13×15 through 178×16
and 160×40). Catalog: `extracted_assets/<ver>/manifest.json`. Offsets on 1.0.12
start at `0x3730b4`. Re-run `extract_firmware_map.py` if `gifs/` is empty on disk.

### Named factory bitmaps (compiled LVGL, not separate files)

`img_cross_h/v`, `img_hh`, `img_vv`, `img_crossAll`, `img_rec_50`, `img_ghosts`,
`img_xjmz` — MMI LCD patterns (grey bars, checkerboard, eye box, logo).

### Audio (paths only)

`audio/click.aac`, `connectSucc.aac`, `disconnect.aac`, `msg.aac`, `unlock.aac`,
`screenOff.aac`, `screenshot.aac`, wake-word style `*_wozai.aac` / `*_ei.aac`
(cute boy / female tianmei / yujie / male qingse), `phone_8k.aac`, `phone_16k.aac`,
…

### UI pages (source basenames in the image)

Launcher: `SplashView`, `StandByView`, `AboutView`, `SettingView`, `FontView`,
`BrightView`, `WearView`, `OtaView`, `MMIPage`, …

Apps: `NaviView`, `TransView`, `QqMusicMainView`, `WechatMsgView`, `PhoneView`,
`TaxiView`, `FlightView`, `AirMusicView`, …

---

## 8. Companion app (short)

Intl APK **2.40.51** (`com.upuphone.star.launcher.intl`). Firmware URLs come
from `checkV2`; request HMAC key and `deviceId` derivation are in
`SignUtils` / `FINDINGS.md`. Cloud hosts (CN vs intl, OTA, ASR, weather, account)
are tabulated in `MYVU_cloud_API_map.md`. XGA010C maps to the **AIR** credential
pair, not VIEW.

---

## 9. Diff 1.0.7.83 → 1.0.12.83 (meaningful)

- Font glyph count 4347 → 6032; ASCII cmap `gid_start` 0 → 1; 1.0.11 and 1.0.12
  **share bitmap MD5s**
- `launcher_standby_demo_mode` / “Demo Mode Open”
- OTA moved into `OtaMsgModel` + `OtaChecker`; transfer/written-flash MD5 fail
  strings; silent-OTA
- Wear-detection MMI item, `sensor_debug_switch`
- Screenshot + log handlers already existed in 1.0.7
- `set_demo_mode` never existed in either image

---

## 10. What this means on the live glasses (1.0.12.88)

| Probe | Expectation |
|---|---|
| BLE `set_demo_mode` | no handler |
| BLE `get_glass_screenshot` / `get_glass_log` | implemented; zip via ShareAbility |
| BLE screen-record | not a command |
| Power-on 3 s / 5 s hold | candidate MMI; reboot exits |
| UART eshell | factory + memory R/W **if** test points exist |
| USB-C data / ADB | not in user builds |
| Pull `B:lv_font_air_full_cn_20_bpp1.bin` or `audio/*.aac` | need on-device LittleFS, not the OTA zip |

---

## 11. Still open

- Exact power-key duration for MMI (3 s vs 5 s) — try on device; BTH call-graph
  is scaffolded in `firmware/ghidra/` (`0x14000000`)
- UART pad / `HAL_UART_ID` — no `hal_iomux_set_uart*` string; needs board photo
  or recursive descent of `eshell_platform.c`
- Real `en_usb` / `fac_cmd` handler array — positional walk, not string-anchored
- Byte identity of installed **1.0.12.88** vs dumped **1.0.12.83**
- Perfect 4bpp last-row / 1bpp wrap without heuristics (LVGL packed bitstream is
  correct; converter leftover bits are ugly in previews)
- On-device LittleFS (full CJK font, AAC, KWS)

---

## Where the files are

| Path | What |
|---|---|
| `Reverse/STAR_AIR_WRITEUP.md` | this summary |
| `Reverse/FIRMWARE_FINDINGS.md` | lab notebook: OTA sweep, eshell, Ghidra, `en_usb` correction |
| `Reverse/FINDINGS.md` | companion APK / `checkV2` |
| `Reverse/MYVU_cloud_API_map.md` | cloud hosts and signing |
| `Reverse/firmware/extracted_assets/` | GIFs catalog, fonts, i18n, string dumps, `INDEX.md` |
| `Reverse/firmware/extract_lvgl_fonts.py` | font carver |
| `Reverse/firmware/extract_firmware_map.py` | GIF/string/i18n map |
| `Reverse/firmware/x_1.0.{7.83,11.53,12.83}/` | unpacked OTA bins |
| `Reverse/firmware/ghidra/` | BTH import @ `0x14000000` |
| `Reverse/firmware/analysis/` | disasm notes, factory-key scan |
| `jadx-intl-2.40.51/` | decompiled intl companion |
