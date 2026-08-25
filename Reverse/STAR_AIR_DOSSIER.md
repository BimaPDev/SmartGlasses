# Star Air firmware — dossier

A decision-oriented synthesis of everything reverse-engineered on the Meizu MYVU
Star Air: what's inside the OTA, where every asset actually lives, and what can be
changed by which route. The full lab detail is in
[`STAR_AIR_WRITEUP.md`](STAR_AIR_WRITEUP.md) and
[`FIRMWARE_FINDINGS.md`](FIRMWARE_FINDINGS.md); this file is the map.

| | |
|---|---|
| **Model** | XGA010C (BLE name **MYVU 0F35**) |
| **Installed ROM** | Flyme XR **1.0.12.88** (`20250217_Air_FR`, `user`) |
| **SoC** | BES1600 — **M55** app + **M33** BT/MCU |
| **USB-C** | charge-only (no ADB, no gadget serial) |
| **Serial** | `1001160244J0008Q` |

---

## The one-minute read

| Question | Answer |
|---|---|
| Download the installed ROM (1.0.12.88)? | **No** — CN `checkV2` tops out at **1.0.12.83** (`.88` past `supportTo: 1.0.12.23`). |
| What did we get? | Three OTA packs — **1.0.7.83 / 1.0.11.53 / 1.0.12.83**. Each is two BES bins, not an Android image. |
| Shop-demo BLE (`set_demo_mode`)? | **Not on Air** — the About 5×-tap still sends it; firmware has no handler. |
| Screenshot / glass-log over BLE? | **Yes** (`get_glass_screenshot`, `get_glass_log`) → ShareAbility. |
| Screen-record the HUD? | **No such command** ("Record" is meeting notes). |
| Boot **MYVU** logo? | **Font, not a picture** — the launcher draws M-Y-V-U from the compiled LVGL bitmap font. |
| Full Chinese font / UI sounds? | Paths only in the OTA; payloads live on-device LittleFS. |
| `en_usb` factory command? | **Stub** — no USB device stack is compiled into this image at all. |

---

## 1. What we pulled, and what it is

The companion app never embeds a firmware URL — it asks
`POST /client/v1/arupgrade/checkV2` (HMAC-signed). International returned nothing
for this model; CN returned packs *older* than the glasses. A 1,500-request
sweep across `versionType × buildType × version × region` only ever succeeded on
`release / user`; every beta/gray/factory channel answered `existsUpdate:false`.

> **Hard ceiling:** 1.0.12.83 is the highest pack on any public channel. Treat it
> as the last published generation before the installed 1.0.12.88 — same
> generation, **not** a byte-identical dump.

| File | Size | Chip | Role |
|---|---|---|---|
| `platform_tester.bin` | 6.0–6.5 MB | M55 | LVGL UI, StarryNet, launcher, factory, eshell |
| `best1600_watch_bth.bin` | 1.3 MB | M33 | RTX5, GATT, PMU, factory BT tests |

16-byte BES OTA header, then Thumb-2. M55 FLASH XIP base `0x2C000000`, entry
`0x2C010014`; some `.rodata` pointers use alias `0x3C000000`. Factory NV prints
`__factory_start=0x28FFF000`.

---

## 2. Where things live (the key split)

**The OTA zip is the code image.** Anything the UI streams from on-device
LittleFS is **not** in the update. This line decides what a re-signed OTA can
change versus what needs physical flash access.

**In the OTA (re-signable, flashable over BLE)**
- M55 + M33 code (the two bins)
- 3 compiled LVGL faces — **including the boot logo glyphs**
- 12 HUD GIF animations (GIF89a)
- Factory MMI bitmaps (`img_*`)
- EN/ZH UI copy (~2.9k strings)

**On-device only (LittleFS, needs wire-level access)**
- Full CJK font `B:lv_font_air_full_cn_20_bpp1.bin`
- UI sounds `audio/*.aac` (21 names)
- Keyword-spot (KWS) models
- After-sale log (ASL flash), factory NV / SN / MAC (`0x28FF…`)

Only *paths* (not payloads) for the LittleFS items appear in the OTA.

---

## 3. The boot "MYVU" logo

The reboot mark is **not a raster logo** — there is no PNG or TTF for it in the
OTA. The launcher draws **M · Y · V · U** from the compiled-in LVGL `fmt_txt`
bitmap font (green-on-black), the same font that renders the rest of the HUD.

> **Changing it — this is reachable via OTA.** Because the logo is glyphs inside
> `platform_tester.bin`, it does **not** require hardware access (unlike the full
> CJK font). Two routes:
> 1. **Edit the glyph bitmaps** for M/Y/V/U — keep each glyph's `box_w`/`box_h`
>    identical so the descriptor table doesn't shift.
> 2. **Patch the early launcher draw** to skip the splash entirely.
>
> Both repackage as a re-signed OTA; the on-device `do_ota_rollback` is a safety
> net. Raw glyphs and previews (`large_MYVU.png`, `large_StarAir.png`) are already
> carved into `firmware/extracted_assets/<ver>/fonts/`.

---

## 4. HUD fonts

Three bitmap faces compiled in; one full CJK face loaded at runtime. Each face is
a chain of `lv_font_fmt_txt_glyph_dsc_t` (`bitmap_index, adv_w, box_w, box_h,
ofs_x, ofs_y`) with a tight MSB-first bitmap before the descriptor table.
Placement matches LVGL 8.3: `gpos.y = pos.y + (line_height − base_line) − box_h − ofs_y`.

| Face | bpp | Role string | 1.0.12 dsc | 1.0.12 bitmap |
|---|---|---|---|---|
| small | 1 | `FONT_CN_16_NORMAL` | `0x31dbc4` | `0x2fd681` |
| medium | 4 (AA) | `FONT_CN_20_NORMAL` | `0x2e2dc8` | `0x20160e` |
| large | 1 | `FONT_CN_24_NORMAL` | `0x1e610c` | `0x19d105` |

Coverage grew **4347 → 6032** glyphs from 1.0.7 to 1.0.12; ASCII
`glyph_id_start` shifted **0 → 1** (glyph 0 became `.notdef`). 1.0.11.53 and
1.0.12.83 share identical bitmap MD5s.

> **Why the first extraction drew "NZWV":** the carver hard-coded
> `gid = 1 + (cp − 0x20)` (correct for 1.0.11/12) — on 1.0.7 that's off by +1, so
> MYVU rendered as NZWV. Row-rotate fixes needed for 1.0.11/12 destroy 1.0.7, so
> they're now detected per-face by scoring H/M/U edge ink. Pixel dumps — not
> screenshot captions — are ground truth.

Carver: `firmware/extract_lvgl_fonts.py`.

---

## 5. Other carved assets

- **12 HUD GIFs** — GIF89a, 13×15 up to 178×16 and 160×40; on 1.0.12 they start
  at `0x3730b4`. Catalogued per version in `manifest.json`.
- **Factory bitmaps** — `img_cross_h/v`, `img_hh`, `img_crossAll`, `img_rec_50`,
  `img_ghosts`, `img_xjmz` (MMI LCD test patterns), compiled in.
- **Audio (paths only)** — 21 `audio/*.aac` names; payloads on LittleFS.
- **~69 UI pages** — source basenames survive: `SplashView`, `StandByView`,
  `AboutView`, `NaviView`, `TransView`, `QqMusicMainView`, …

Map/carve: `firmware/extract_firmware_map.py` → `firmware/extracted_assets/`.

---

## 6. BLE / StarryNet surface

JSON `{action, data:{action, value}}` → a model → an inner action, matched
against a packed string table beside `handleSystemMsg no handler for action %s`.
If a name isn't in the image, the handler was never compiled — the packed blob
*is* the dispatch list.

- **Demo mode — absent.** `set_demo_mode`/`get_demo_mode` in neither image nor
  BTH. The About 5×-tap fires it; Air falls through to "no handler." Only a local
  `launcher_standby_demo_mode` clock flag exists.
- **Screenshot — live.** `get_glass_screenshot` → `handleScreenShot` →
  framebuffer encode → ShareAbility zip. Swift SDK can ask, doesn't yet receive.
- **Glass log — live.** `user_feedback / get_glass_log` → `handleGetLog` →
  `user_feed_back.log` from ASL flash.
- **Screen record — none.** `RECORD_STATE_*` / "Make a Record" are Quick Notes.

Recovered `system` actions: `get_device_info`, `set_volume`, `set_language`,
`set_wear_detection_mode`, `do_recovery`, `set_brightness_finish`, +~30 more.
**No Wi-Fi stack** (`toggle_wifi`/`set_wifi` absent).

---

## 7. Factory / MMI / eshell

Prompt `eshell >`; BTH carries `!!!!!ENGINEER_MODE!!!!!`; UI shows "MMI mode has
been opened." Nothing in the BLE table enables it — the M33 decides at boot from a
physical key, then mailboxes the M55 (`BTH_TO_M55_FACTORY_TEST_MODE`). Key
thresholds in `hal_key.c`: **500 ms / 3 s / 5 s** → the MMI trigger is a 3 s or
5 s power-key hold at power-on (reboot exits; nothing is flashed).

> **`en_usb`** exists only as a name/help pair. Binding it to a handler is not
> statically recoverable (positional blob walk, zero xrefs). More decisively: the
> M55 image has **no** `hal_usb` / TinyUSB / gadget stack — it can't enable a USB
> device that was never compiled in, and it doesn't prove the retail Type-C data
> lines are wired.

Full `eshell` is wire-level: `md`/`mw` (8/16/32), `xmodem` raw download, `panic`,
`debug_i2c` (rebind over I²C), plus `xjxr_starrynet_test`, `xmonkey`, `xr_asl`,
unit tests. Via UART/I²C test points this is the path to on-device LittleFS and
arbitrary flash R/W.

---

## 8. The disassembly pass (Ghidra 12.1.3 headless)

Auto-analysis recovered only ~4,993 functions and left key code undisassembled.
A prologue-sweep force-disassembly took it to **13,815 functions** (~all of
`.text`) — the step a first pass missed because its `ForceDis.java` silently
failed to load as an OSGi bundle.

> **Correction:** the previously-listed `set_sn @ 0x2C5AA114` /
> `en_usb @ 0x2C5AAB48` were **misattributed** — that band is LVGL
> `OtaMsgModel`/Page code. `0x2C606A28` (the "shared helper") decompiles to an
> LVGL object flag/invalidate routine; the vtable at `0x2C1825B4` (next to
> `OtaMsgModel.cpp`) points into it; the "set_sn" pointer belongs to an adjacent
> LVGL event handler via a linker-merged string.

**Why string xrefs are empty:** BES compiles almost no C-string as a 32-bit
pointer — command/action names are walked positionally from a blob base, and
TRACE strings are base-register addressed. Verified across every form (absolute
pointer, PIC offset, MOVW/MOVT, ADR, LDR-literal): factory/dispatch names carry
no recoverable reference. It's a property of the build, not a tooling limit.
Scripts + project under `firmware/analysis/`.

---

## 9. On-device OTA flow

Phone sends the two BES bins over StarryNet file transfer. M55: parse file-info
(name, size, md5) → receive → MD5 the download → `ota_flash_program` → MD5 the
written flash → update magic/boot info → `ota_check_and_change_boot_type`.
On failure: `do_ota_rollback`. 1.0.12 adds silent-OTA pause/resume and splits
`OtaMsgModel` out of `LauncherModel`. This, plus the known `checkV2` HMAC signing,
is what makes a re-signed OTA the viable route for any in-image change.

---

## 10. What's changeable, and how

| Target | Where it lives | Route | Feasibility |
|---|---|---|---|
| Boot MYVU logo | font glyphs, M55 bin | edit glyphs / patch draw → re-signed OTA | **OTA path** |
| HUD GIFs / MMI bitmaps | M55 bin | replace bytes (same size) → re-signed OTA | **OTA path** |
| UI text (EN/ZH) | M55 bin | string patch → re-signed OTA | **OTA path** |
| Full CJK font | LittleFS | dump / write partition | **Wire access** |
| UI sounds (AAC) | LittleFS | dump / write partition | **Wire access** |
| Enable USB / ADB | not compiled | — | **Not present** |

- **OTA path** = patch the M55 bin, keep byte sizes stable, repackage, re-sign
  with the known `checkV2` scheme, flash over BLE.
- **Wire access** = reach the internal UART / `debug_i2c` test points (or clip an
  external SPI-NOR programmer). USB-C is charge-only — no host-software shortcut.

---

## 11. Still open

- Exact power-key duration for MMI entry (3 s vs 5 s) — confirm on device; reboot exits.
- UART pad / `HAL_UART_ID` — no `hal_iomux_set_uart*` string; needs a board photo or recursive descent of `eshell_platform.c`.
- Real `en_usb` / `fac_cmd` handler array — positional walk, not string-anchored.
- Byte identity of installed **1.0.12.88** vs dumped **1.0.12.83**.
- On-device LittleFS contents (full CJK font, AAC, KWS) — only reachable over the wire.

---

## Files

| Path | What |
|---|---|
| `STAR_AIR_WRITEUP.md` | full readable lab summary |
| `STAR_AIR_DOSSIER.md` | this map / decision matrix |
| `FIRMWARE_FINDINGS.md` | lab notebook: OTA sweep, eshell, Ghidra, `en_usb` correction |
| `FINDINGS.md` | companion APK / `checkV2` |
| `MYVU_cloud_API_map.md` | cloud hosts and signing |
| `firmware/extracted_assets/` | GIFs, fonts, i18n, string dumps, `INDEX.md` |
| `firmware/extract_lvgl_fonts.py` / `extract_firmware_map.py` | carvers |
| `firmware/x_1.0.{7.83,11.53,12.83}/` | unpacked OTA bins |
| `firmware/analysis/` | Ghidra project, scripts, disasm notes |
