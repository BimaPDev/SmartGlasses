# Star Air firmware findings — OTA dumps 1.0.7.83 / 1.0.12.83

**Date:** 2026-08-22  
**Device:** Meizu MYVU Star Air, model **XGA010C**, advertised **MYVU 0F35**  
**Serial:** `1001160244J0008Q`  
**Installed ROM:** `Flyme XR 1.0.12.88.20250217_Air_FR` (`buildType: user`)  
**USB-C:** charge-only (no ADB, no gadget serial)

Readable summary of **everything** (device, OTA, BLE, factory, fonts, assets):
`STAR_AIR_WRITEUP.md`.

This note is the local reverse of two BES1600 OTA zips obtained from the CN
`checkV2` API, plus Capstone and Ghidra 12.1.3 headless passes of
`platform_tester.bin` at FLASH XIP `0x2C000000`. It answers the questions that
were still open after the companion app / Swift SDK work: whether this model
implements `set_demo_mode`, screenshot, and screen-record; what the engineering
console would expose on UART; and how OTA verify works on-device.

Companion-app / OTA-API background lives in `FINDINGS.md`. Device/iOS session
context lives in `../INVESTIGATION.md` and `../SESSION_LOG.md`. Font carve and
asset map: §10–11 below and `firmware/extracted_assets/`.

---

## 1. What we actually downloaded

CN `POST /client/v1/arupgrade/checkV2` with official field mapping
(`deviceType=Star Air`, `deviceModel=XGA010C`, HMAC key from `SignUtils`) and a
claimed-version sweep. Intl returned nothing. CN returned **two unique packs**,
both older than the glasses' installed `1.0.12.88`:

| Zip | MD5 | `versionFullName` | Window |
|---|---|---|---|
| `firmware/ota_star-air_1.0.12.83.20241231_Air_FR_dvt_user.zip` | `fb7de159644754786df2b1049d9088ca` | Flyme XR 1.0.12.83 | 1.0.7.83 – 1.0.12.23 |
| `firmware/ota_star-air_1.0.7.83.20240612_Air_FR_dvt_user.zip` | `6e81dc3ac194f802bdce38e7299d7cdb` | Flyme AR 1.0.7.83 | 1.0.0.42 – 1.0.5.3 |

Why installed **1.0.12.88** never got a pack: CN uses `inspectionScope: interval`
with `supportTo: 1.0.12.23`. 1.0.12.88 is past that window. No newer pack showed
up on CN or intl.

**Channel sweep (2026-08-22, exhaustive):** `checkV2` was probed across **15
`versionType` × 10 `buildType` × 5 claimed-version × 2 region** combinations
(1500 signed requests). Only `versionType=release` / `buildType=user` ever
returns a pack; every alternate channel (`beta`/`gray`/`dev`/`eng`/`dvt`/`evt`/
`pvt`/`mp`/`factory`/`internal`/`uat`/…) returns `existsUpdate:false`.
**`1.0.12.83` is the hard ceiling on every channel — `.88` is not retrievable
via `checkV2` by any versionType/buildType/version/region.** This closes the
"maybe it's staged on a beta track" loophole. Tooling: `ota_channel_sweep_mt.sh`.

Each zip is **not** an Android system image. It is two BEST1600 binaries:

| File | ~size | Role |
|---|---|---|
| `platform_tester.bin` | 6.0–6.5 MB | M55 app (LVGL, StarryNet, launcher, factory, eshell) |
| `best1600_watch_bth.bin` | 1.3 MB | M33 BT/MCU (RTX5, `pmu_best1600`, GATT, factory BT tests) |

Extracted copies: `firmware/x_1.0.12.83/`, `firmware/x_1.0.7.83/`.

BES OTA header (16 bytes) then Thumb-2. Reset trampoline at file `+0x10`:

```
ldr r0, [pc, #0x44]
bx  r0
```

Literal at `+0x58` is `0x2C010015` → **M55 FLASH XIP base `0x2C000000`**, entry
`0x2C010014`. Factory NV symbol `__factory_start=0x28FFF000` is the
non-cache flash alias (`0x28000000` + last 4K of a 16 MB window).

---

## 2. BLE / StarryNet command handlers (the unresolved questions)

Handlers live in `platform_tester.bin` as `MessageModel` C++ methods. StarryNet
delivers JSON `{action, data:{action, value}}`. Top-level `action` selects a
model (`system` → `handleSystemMsg`, `screenshot` → `handleScreenShotMsg`, …);
the inner `data.action` is a packed string table next to
`handleSystemMsg no handler for action %s`.

### 2.1 `set_demo_mode` / `get_demo_mode` — **not on this model**

| Needle | 1.0.12.83 | 1.0.7.83 | BTH 1.0.12 |
|---|---|---|---|
| `set_demo_mode` | absent (ASCII and UTF-16) | absent | absent |
| `get_demo_mode` | absent | absent | absent |
| `demo_mode` as a BLE action | absent | absent | absent |

The companion-app About easter egg (tap ROM version 5×) sends

```json
{"action":"system","data":{"action":"set_demo_mode","value":true}}
```

The glasses image never registered that inner action. That matches the Android
UI gate `isAirPro()` (`deviceType == "ari_pro"`): the BLE command is not
model-gated in the app, but **Air firmware does not implement it**. Probing it
on XGA010C will fall into `handleSystemMsg no handler for action %s`.

What **did** land in 1.0.12 (not in 1.0.7) is a **local standby demo**, not the
shop-demo BLE API:

- NV/pref key `launcher_standby_demo_mode` (StandByView)
- EN UI string **“Demo Mode Open”** in `lv_language_factory`

That is a launcher clock/demo flag, not `set_demo_mode`.

### 2.2 Screenshot — **implemented** (1.0.7 and 1.0.12)

Full path is in the image:

- inner action `get_glass_screenshot`
- `MessageModel::handleScreenShot` — refuses if screen off / business app
  running / UUID alloc fails; encodes a framebuffer; sends via ShareAbility
- `show_screenshot_save_result`
- UI: “Save successfully, please go to the mobile phone album view” /
  “Failed to capture screen, please try again”
- sound `audio/screenshot.aac`

The **zip** still rides StarryNet file transfer (`SENDER_SYN` → `confirm(taskId)`
→ `SENDER_DATA`). The Swift SDK can ask; it does not yet implement the
ShareAbility receiver.

### 2.3 Screen-record — **not a glasses capture command**

No `screen_record`, `get_glass_screen_record`, or `screenrecord` in either
version. `RECORD_STATE_*` / “Make a Record” are meeting-assistant / Quick Notes,
not a framebuffer recorder.

### 2.4 Glass log — **implemented**

`get_glass_log` / `get_user_feedback` → `handleGetLog` → `user_feed_back.log`
from the ASL (after-sale log) flash. Official app path is
`{"action":"user_feedback","data":{"action":"get_glass_log",...}}`, not a
`system` query. Same ShareAbility split as screenshot. Debug panel on the phone
refuses if `DynamicOperateUtil.h() < 3`.

### 2.5 `handleSystemMsg` inner actions recovered from the string table

Packed next to the miss-path format string (file `0x194bcc`–`0x194f58` on 1.0.12):

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

Also present as methods / adjacent tokens (not all in that packed list):
`setScreenBrightness`, `setScreenOffTime`, `set_zen_mode`, `open_app`,
`system_glass_active`, `system_account`, `feature_list`, `do_recovery`.

No `toggle_wifi` / `set_wifi` — Air has no Wi-Fi stack in this image. The packed
blob *is* the dispatch key list; Ghidra/Capstone still cannot xref it as
32-bit pointers (see §8.5).

---

## 3. Engineering console (eshell + factory) — UART payoff

USB-C being charge-only means this table is what a **UART (or debug-I2C) test
point** would unlock. Prompt is `eshell >`. BTH side has
`!!!!!ENGINEER_MODE!!!!!`. Factory UI string: **“MMI mode has been opened.”**
Command `en_usb` (“enable usb”) exists as a `fac_cmd` stub (see §8.3). It does
**not** bring up a USB device stack in this user image, and is not proof that
the retail Type-C data lines are wired.

### 3.0 Entry mechanism — power-on key hold (no auth)

Factory / MMI is a **privileged mode with no password**. Nothing in the BLE
`handleSystemMsg` table turns it on. The BT MCU (M33, `best1600_watch_bth.bin`)
decides at boot from a physical key, then tells the M55 app processor.

**Call chain (names as compiled, 1.0.12.83).** File offsets are the **ASCII
literals** (`.rodata`), not the Thumb functions — BES trace-hash means those
strings have no code xrefs. Ghidra VAs below assume BTH XIP `0x14000000`.

```
hal_key_boot_handler          BTH  file 0xe63b0  VA 0x140e63b0
  → bootmode / app_init       “To enter test mode!!!” / “power on case:%d”
  → app_poweron_key_init      BTH  file 0x1379a8  VA 0x141379a8
  → app_factorymode_key_init  BTH  file 0x1324ac  VA 0x141324ac
  → app_factorymode_enter     BTH  file 0x132494  VA 0x14132494
  → BTH_TO_M55_FACTORY_TEST_MODE   M55 file 0x16457c  (intersys mailbox)
  → “enter MMI mode!”         M55  file 0x167eb8  (About/More UI)
```

Related BTH strings: `!!!!!ENGINEER_MODE!!!!!`, `app_factorymode_init mode:%x`,
`BT_DUT_MODE` (RF/DUT test mailbox, same factory family). M55 also has
`MMI mode has been opened.`

**Hold thresholds in `hal_key.c` (the only ones in this image):**

| Event string | Duration |
|---|---|
| `HAL_KEY_EVENT_LONGPRESS_500_MS` | 500 ms |
| `HAL_KEY_EVENT_LONGPRESS_3000_MS` | 3 s |
| `HAL_KEY_EVENT_LONGPRESS_5000_MS` | 5 s |

The MMI trigger is almost certainly one of those long-presses on the power key
at power-on (`PWR KEY DITHER!` sits next to `app_poweron_key_init`). Which
exact pair (key code + 3 s vs 5 s) is **not** recoverable from string xrefs:
BES compiles `hal_key_boot_handler` logs through a trace-hash, so the function
name string is referenced by nothing (no absolute pointer, `MOVW`/`MOVT`, ADR,
or PC pool). Reading it needs a call-graph on the BTH image. Scaffold is in
`firmware/ghidra/` (import at `0x14000000`, NC overlay `FLASH_NC` @
`0x30000000`). Headless: `./Reverse/firmware/ghidra/import_bth.sh`. The
multi-hour part is following GPIO key-scan from `app_poweron_key_init` in the
GUI; the 3 s / 5 s boot-hold on the glasses is faster if it works.

**Safe on-device check (nothing is flashed; reboot exits):** power off, then
power on while holding the physical button — try **3 s first, then 5 s**. If
the factory/MMI self-test list appears on the lens, that is the privileged
mode. Full `eshell` (`md`/`mw`/`xmodem`) is a **wire-level** tier on UART or
`debug_i2c` (test points); Type-C being charge-only does not expose it.

### 3.1 `fac_cmd` (factory MMI over the shell)

Identity / BT: `set_sn`/`get_sn`, `set_bsn`/`get_bsn`, `set_bt_name`/`get_bt_name`,
`set_bt_mac`/`get_bt_mac`, `set_bt_discover`, `get_default_bt_name`, `get_version`,
`soc_info`, `build_date`, `flash_info`, `get_board_id`, `sys_reset`

Power / sleep: `goto_sleep`, `bth_goto_sleep`, `set_gpio`, `get_sysfreq`/`set_sysfreq`,
`close_eshell`, **`en_usb`**

Touch / display: `check_tp`, `get_tp_status`, `set_tp_sensitivity`, `set_disp_bri`/
`get_disp_bri`, `get_jbd_brightness`, `show_pic`/`exit_show_pic`, `set_always_on`,
`panel_id`, `panel_check`, `panel_bri_cali`, `set_lcd_clk`, `check_esd`

Audio: `audio_player`, `audio_loopback`, `audio_pdm_loopback`, `audio_info`,
`pa_cali`, `set_audio_vol`, `set_mic`/`get_mic`

Charger / FG: `check_charger`, `charger_status`, `charger_ship_mode`,
`charger_enable`, `charger_dump`, `check_coulomb_l`/`check_coulomb_r`,
`battery_info`, `set_battery`/`get_battery`, `charge_threshold`

Sensors: `sensor_self_test`, `sensor_info`, `sensor_cali`, `get_sensor_data`/
`stop_sensor_data`, `enable_sensor`/`disable_sensor`, `sensor_loglevel`,
`sensor_debug_switch`

MMI runner: `mmi_help`, `mmi_run`, `mmi_run_item`, `mmi_result_clear`, `exit_mmi`,
`switch_page`

MMI items in `factory/lvgl_ui/mmi_item/`: BT, keys, fuel gauge, charging, LCD
patterns (grey bars, checkerboard, gamma, eye box, logo), wear detection,
`audio_record`, `touch`.

### 3.2 Core `app_eshell` (memory / CPU — this is the dangerous one)

`md`/`md16`/`md32`, `mw`/`mw16`/`mw32`, `comp`/`comp16`/`comp32`, `gpioset`/
`gpioget`, `pmugpioset`/`pmugpioget`, `pmu_read`/`pmu_write`, **`xmodem`** (raw
download to an address), `panic`, reboot/shutdown, `sysfreq`, `sleep`/`msleep`,
`dump_all_threads`, `show_threads_usage`, **`debug_i2c`** (re-open eshell over
I2C), `pll_autocalib`.

Unit tests: `utest_ram`, `utest_dma`, `utest_i2c`, `utest_rtc`, `utest_gpio`,
`utest_uart`, `utest_wdt`.

### 3.3 Product test CLIs on the same shell

| CLI | What it is |
|---|---|
| `xjxr_starrynet_test` | BLE adv/bond/SPP, `enable_starrynet_log`, ring OTA, `sendmsg_launcher`, `test_remove_bond`, discoverable, … |
| `xmonkey` | start/stop monkey test |
| `xtest` | JSON harness (`open_ble`, `setName`, `getState`, `setScanMode`) |
| `xr_asl` | dump / crash the after-sale log flash (the same buffer `get_glass_log` reads) |
| `xr_sensor_eshell` | sensor toolkit |
| `xjxr_audio_test`, `xjxr_graphic`, `xjxr_input_test`, `xjxr_fps_collect`, `xjxr_power_test` | audio / display / TP / fps / power |
| `lv_preference_command open_dump/close_dump` | dump LVGL prefs |

UART therefore gets factory SN/MAC write, MMI, sensor cal, **arbitrary memory
R/W**, **xmodem load**, and StarryNet test hooks. It does **not** add
`set_demo_mode`.

---

## 4. OTA verify path (on-device)

Phone sends the two BES bins over StarryNet file transfer. M55:

1. Parse file-info stream (`fileName`, size, md5)
2. Receive `SENDER_DATA` / `RECEIVE_OTA_FINISH`
3. `ota failed to check transfer file md5` if the download hash misses
4. `ota_flash_program` (M55 + BTH images, size checks)
5. `ota failed to check written flash md5`
6. Update magic + boot info (`ota failed to update magic number` /
   `ota_update_ota_boot_info`)
7. `ota_check_and_change_boot_type` → inform StarryNet
8. Fail/rollback: `do_ota_rollback`

Timeouts, BLE-disconnect abort, and `ota unsupported file name` are all present.
Silent-OTA pause/resume hooks exist in 1.0.12.

---

## 5. LVGL / UI (light pass)

EN table in `lv_language_factory` (file `~0x403000`) covers About, factory
reset, MMI, DND, fonts, ring pairing, translation, QQ Music, navigation, OTA
copy. Settings labels include Wear Detection, Auto Lock, Language, Unpair,
Factory reset, Image Stabilization, Auto Brightness, Font Size.

Hidden-menu hunt: no “secret menu” string. Closest are factory list, MMI mode,
`lv_preference_command` dump, and the About easter egg that **does not work on
Air firmware** (see §2.1).

---

## 6. Diff 1.0.7.83 → 1.0.12.83 (string-level)

~51k unique strings → ~55k (`+14223` / `-9956`, lots of compiler noise).

**Added in 1.0.12 and actually meaningful:**

- `launcher_standby_demo_mode`, “Demo Mode Open”
- OTA path split out of `LauncherModel` into `OtaMsgModel` + `OtaChecker`
- wear-detection MMI item, `sensor_debug_switch`
- transfer/written-flash MD5 fail strings, silent-OTA

**Already in 1.0.7:** screenshot + log handlers (log lines later gained a
`[Launcher]` prefix). `set_demo_mode` was never in either image.

---

## 7. What this means for the live glasses (1.0.12.88)

The dumped 1.0.12.83 is the last CN pack *before* 1.0.12.88; treat it as the
same generation, not a guarantee of byte-identity with 1.0.12.88.

| Probe | Expectation |
|---|---|
| BLE `set_demo_mode` / `get_demo_mode` | no handler |
| BLE `get_glass_screenshot` | implemented; zip via ShareAbility |
| BLE `get_glass_log` | implemented; zip via ShareAbility |
| BLE screen-record | not a command |
| Power-on 3 s / 5 s key hold | candidate MMI / factory entry (no auth); reboot exits |
| UART eshell | full factory + memory R/W if test points are found |
| USB-C data / ADB | still not there in user builds; `en_usb` is a factory UI stub, not a PHY bring-up |

---

## 8. Disassembly pass (`platform_tester.bin` @ `0x2C000000`)

Capstone against the recovered BEST1600 M55 load address, then Ghidra 12.1.3
headless (Homebrew + OpenJDK 21). Ghidra auto-analysis of the raw Cortex image
created ~5000 functions but **left the `fac_cmd` band undefined** (no insn at
`set_sn`); string `getReferencesTo` is empty even with the `0x3C` alias mapped,
because almost no C string is a 32-bit pointer. The three leftover items were
finished by walking `push {…,lr}` function starts and their literal pools.

BTH factory-key call-graph is scaffolded separately (`firmware/ghidra/`; image
base `0x14000000`, NC data alias `0x30000000`).

### 8.1 Load address

16-byte BES OTA header, then Thumb-2. At file `+0x10`:

```
ldr r0, [pc, #0x44]
bx  r0
```

PC-literal at `+0x58` is `0x2C010015` → **FLASH XIP `0x2C000000`**, entry
`0x2C010014`. SRAM literals in the same pool sit at `0x20xxxxxx`. Factory NV
prints `__factory_start=0x28FFF000` (non-cache flash alias `0x28000000` + last
4K of a 16 MB window).

App `.text` is dense at file `0x430000`–`0x670000` (VA `0x2C430000`–`0x2C670000`).
Launcher / factory **strings** live earlier (`~0x15F000`–`0x198000`, language
table `~0x400000`). Some `.rodata` pointers are stored with a second alias,
**`0x3C000000 + file_off`** (confirmed: `set_sn` literal `0x3C15FDBC` at file
`0x5AA10C`).

### 8.2 Why most string xrefs are invisible as 32-bit pointers

A raw-byte scan of every Thumb-2 `MOVW`/`MOVT` pair (1142 pairs) found **none**
that materialize a `0x2C`/`0x3C` C-string VA. Linear Capstone of ~1.1M insns
likewise found no `ldr [pc]` to `handleSystemMsg`, `get_glass_screenshot`,
`en_usb`, or `eshell >`. The exception is a handful of factory TRACE literals
that *do* use the `0x3C` alias (`set_sn` name `0x3C15FDBC` at file `0x5AA10C`).

`0x2C5E33F0` is not a string intern — it is a keyed `{key,value}` registry
lookup (8-byte records, key at +0, value at +4). Helper `0x2C5E32BC(mode, &n)`
selects table 1 (`0x3C43EE84`) or table 2 (`0x3C43FD64`). Code that uses it
passes 16-bit IDs, e.g. the LVGL Model method at `0x2C5AA114` (see the §8.3
correction — this is *not* `set_sn`):

```
push {r4, r5, lr}
…
movw r0, #0x5059
bl   0x2C5E33F0      ; registry lookup (not intern)
…
movw r0, #0x5060
bl   0x2C5E33F0
```

So “no 32-bit pointer to `en_usb`” does **not** by itself mean the command is
dead — but note the corrected finding in §8.3 that command names are only ever
walked positionally and carry no reference at all.
“No bytes `set_demo_mode` anywhere in either image” **does** mean that BLE
action was never compiled in.

### 8.3 `fac_cmd` handlers, including `en_usb`

Name/help pairs are packed in `.rodata` at file `0x15FBFC`–`0x1606D0`
(`name\0help\0…`).

> **Correction (2026-08-22, second Ghidra pass).** The handler VAs previously
> listed here (`set_sn`@`0x2C5AA114`, `en_usb`@`0x2C5AAB48`, `lcd_id`@`0x2C5AAB80`)
> were **misattributed**. The first pass's `ForceDis.java` silently failed to
> load as an OSGi bundle, so it analysed an under-covered image (~4993 functions,
> `0x2C5AA114` not even disassembled) and named handlers from a TRACE line number
> + the nearest literal pool. A working force-disassembly (→ **13,815 functions**,
> ~all of `.text`) plus decompilation shows the `0x2C5AAxxx` band is **LVGL
> Pages/Models (`OtaMsgModel` & siblings), not `fac_cmd.c`**:
>
> - `0x2C606A28` — the "shared helper" — decompiles to an **LVGL object
>   flag/invalidate** routine (`*(obj+0x1c) |= flags`; then invalidate/refresh
>   `0x2C6041D4`/`0x2C607248` gated on mask `0x1800000`; a sibling iterates child
>   objects). A factory SN-writer / USB-enable would not touch LVGL objects.
> - The vtable at `0x2C1825B4` — between the `Page::onEvent` and `OtaMsgModel.cpp`
>   strings — points into `0x2C5AAAxx`.
> - `0x2C5AA114`'s literal pool is at `0x5AA174` (it loads `DAT_2c5aa174/78/7c`),
>   **not** the `0x5AA10C` "set_sn" pointer. That pointer belongs to the previous
>   function `FUN_2C5AA01C`, an **LVGL event handler** (`ev != 0xd → return`) that
>   only *TRACEs* the string `"set_sn"` (line 390). The `"set_sn"` literal is
>   linker-merged and shared between the fac_cmd blob and that page.

**The real `en_usb` handler is not statically recoverable from this image.**
Command names and `handleSystemMsg` action names are consumed **only by
positional blob-walking** — the dispatcher receives the packed-blob base and
increments through it, so a mid-blob name like `en_usb` is *never* referenced
by any instruction. Confirmed exhaustively against the fully force-disassembled
image: `en_usb`, `eshell >`, `handleSystemMsg`, `no handler for action %s`,
`hal_uart_open`, `Invalid UART ID: %d`, and even the RTOS object name
`fac_cmd_trd` have **zero** references under every addressing form tested —
absolute pointer (`0x2C`/`0x3C`/`0x28`, aligned & unaligned), PIC bare-offset
word, `MOVW`/`MOVT` full address, `MOVW`/`MOVT` bare offset + base register,
`ADR`, and `LDR`-literal pool. The only hit for any of them is the one LVGL
`"set_sn"` TRACE above. Binding `en_usb` → its handler needs the parallel
handler array / registration site (BES `nc_cmd`/eshell table convention, not
found by string anchor) or a **dynamic** trace of the eshell on device.

The **operational** conclusion is unchanged and rests on independent evidence:
`en_usb` is factory-only and is **not** a real USB device stack. The whole M55
image contains **no** `hal_usb`, `usbphy`, `usb_phy`, `CDC_ACM`, `dwc`/`dwc2`,
`UsbDevice`, `gadget`, or TinyUSB string (the 11 `tusb` hits are all
`launcher_sta`**`tusb`**`ar`). The only USB strings are:

- `en_usb` / `enable usb` (this command's name/help)
- `[CHG] vbus usb_enable:%d disable_reason:0x%x` (charger VBUS, not gadget)
- `DRVUSB` (BES TRACE module tag next to `DRVBT` / `DRVCODEC` — a log
  category, not a compiled USB stack)

So `en_usb` cannot enable a USB device stack that isn't in the firmware, and
its existence still does not show that Type-C D+/D− are wired on the retail
board.

### 8.4 UART / eshell pinmux

Present in the image: `hal_uart.c`, `Invalid UART ID: %d`,
`../../utils/eshell/eshell_platform.c`, `eshell_paltform_init open=%d`,
prompt `eshell >`, `debug_i2c`, `utest_uart`. Named IOMUX setters that
*are* in the string table: `hal_iomux_set_sys_dig_mic`,
`hal_iomux_set_sens_i2c3` only. **No** `hal_iomux_set_uart0/1/2`,
`HAL_TRACE_TRANSPORT`, or `hal_trace_open` string.

`eshell_platform_init` logs `open=%d` (UART `hal_uart_open` result) and can
rebind the same shell over I2C (`debug_i2c`). Which `HAL_UART_ID` and which
pins that `open` uses are **not** recoverable from strings or 32-bit
pointers in this user image — the iomux UART setter was compiled without a
TRACE of its name. Finding the pad still needs a board photo / fixture
schematic, or a Ghidra recursive-descent of `eshell_platform.c` once that
`.text` is force-disassembled.

### 8.5 BLE `handleSystemMsg` dispatch

Packed inner-action names sit next to the miss path
`[Launcher]MessageModel handleSystemMsg no handler for action %s`
(file `0x194BCC`–`0x194F68`). That list is the dispatch table. Confirmed
**absent**: `set_demo_mode`, `get_demo_mode`, `screen_record`. Extra token
not in the original §2.5 get/set lists: `set_brightness_finish`.

Instruction-level `strcmp` xrefs are the same ID/TRACE story as factory
(zero 32-bit pointers to those action strings under `0x2C`/`0x3C`/`0x28`).
The packed blob is still decisive: those are the only inner actions this
function will ever match.

Screenshot / log remain as in §2.2–2.4 (`handleScreenShot` follows
immediately at file `0x194FA8`). OTA verify is still pinned by fail strings
next to `ota_flash_program` / `ota_check_and_change_boot_type` (see §4).

---

## 9. Artifacts

- Packs: `firmware/ota_star-air_1.0.12.83…zip`, `firmware/ota_star-air_1.0.7.83…zip`
- Extracted bins: `firmware/x_1.0.12.83/`, `firmware/x_1.0.7.83/`
- Watcher / sweep: `tools/watch_ota.py`, `ota_version_sweep.sh`
- checkV2 probe/download (signed): `ota_checkv2_probe.sh` (single call),
  `download_ota.sh` (fetch + md5-verify a pack), `ota_channel_sweep.sh`
  (sequential channel sweep), `ota_channel_sweep_mt.sh` (parallel via `xargs -P`).
  Sign scheme: HMAC-SHA256 hex over alphabetically-sorted `k=v&…` params, key =
  literal ASCII `wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI=` (raw, not b64-decoded),
  `sign` sent as a form field; `deviceId` = SHA256hex(`RhdNS`+backtick+`Z?` + serial).
  Impl decompiled at `jadx-intl-2.40.51` (`com/upuphone/star/httplib/SignUtils`).
- Disassembly notes: `firmware/analysis/platform_tester_1.0.12.83_disasm.md`
- M55 Ghidra 12.1.3 project: `firmware/analysis/ghidra_proj/` (load
  `0x2C000000`; optional byte-mapped overlay `0x3C000000`). Scripts:
  `firmware/analysis/ghidra_scripts/ForceDis.java`, `DumpLeftovers.java`
- BTH Ghidra scaffold: `firmware/ghidra/` (`import_bth.sh`,
  `scripts/FactoryKeyEntry.java`, NC overlay `AddBesNcOverlay.java`)
- BTH key-entry scan report: `firmware/analysis/bth_factory_key_entry.md`
- Scripts: `tools/fw_disasm.py`, `tools/fw_xrefs.py`, `tools/fw_movw_scan.py`,
  `tools/fw_linear_movw.py`, `tools/fw_pic_xrefs.py`, `tools/fw_bth_keyscan.py`,
  `tools/fw_movw_raw.py`, `tools/fw_enusb.py`
- Readable write-up: `STAR_AIR_WRITEUP.md`
- Asset map: `firmware/extracted_assets/INDEX.md`, `extract_firmware_map.py`
- LVGL fonts: `firmware/extract_lvgl_fonts.py`, `extracted_assets/<ver>/fonts/`

---

## 10. The boot MYVU mark is a resource-partition image (CORRECTED)

**The earlier claim here — "the boot MYVU mark is the Latin bitmap font" — is
WRONG.** Verified 2026-08-23 by flashing the BIMA build: the ASCII `MYVU`->`BIMA`
swap changed the About device name to `BIMA 0F35`, but the boot wordmark still
rendered `MYVU`. There is **no literal `MYVU` text label** in `platform_tester.bin`
(all 50 `MYVU` byte-strings are UI copy: "MYVU App"/"MYVU Ring"/"open MYVU"), and
no UTF-16 form. The boot mark is a **compiled bitmap image** (drawn via the
`mmi_logo` / `app_startup_myvuapp` startup path).

**Where the pixels live -- and why they are unreachable via OTA.**
`platform_tester.bin` holds **380 LVGL image descriptors** (mostly IDX4, 16-colour)
whose `data` pointers ALL target a **separate resource partition at
`0x3c30fd40`-`0x3c3fd540` (~950 KB)**. **Zero** image pixels sit inside the flashed
file (code/strings load at `0x3d580000`). The OTA zip ships ONLY
`platform_tester.bin` + `best1600_watch_bth.bin`; it does **not** contain or write
the `0x3c3xxxxx` resource region. So modifying/flashing `platform_tester` can never
change any UI bitmap, boot logo included -- exactly why the BIMA flash left the boot
mark as MYVU.

Wordmark-shaped boot-mark candidates (descriptor offset in `platform_tester.bin`;
pixels in the untouched resource partition). `cf=9` = `LV_IMG_CF_INDEXED_4BIT`:

| desc off | WxH | data_size | pixel VA (resource part.) |
|---|---|---|---|
| 0x3af594 | 399x145 | 29064 | 0x3c3871c0 |
| 0x33f6ec | 256x80  | 10304 | 0x3c317340 |
| 0x338194 | 204x92  | 9448  | 0x3c30fdc0 |
| 0x39be7c | 220x72  | 7984  | 0x3c373ac0 |
| 0x33adbc | 204x62  | 6388  | 0x3c312a00 |

Rebranding the boot logo requires obtaining and rewriting the resource partition
(BES download-mode UART dump / `app_eshell` flash cmd), NOT the OTA path.
Descriptor scanner: lv_img_dsc = `<III>` {header, data_size, data_ptr}; header bits
cf:5, always_zero:3, reserved:2, w:11, h:11; at LV_COLOR_DEPTH=32
(`lv_port_disp_speedup_bgra8888`) truecolor=4B/px, indexed adds 4B/palette-entry.

---

## 10b. (historical) Latin bitmap fonts

The Latin bitmap font renders M/Y/V/U glyphs, but nothing in the app draws them as
a standalone boot label -- the source of the wrong claim above. Three `fmt_txt`
faces in `platform_tester.bin` (descriptor `<IIHHhh>`, tight MSB-first bitmap
immediately before the dsc table). Full CJK is on-device only:
`B:lv_font_air_full_cn_20_bpp1.bin`.

| ROM | glyphs | ASCII `gid_start` | small / medium / large |
|---|---|---|---|
| 1.0.7.83 | 4347 | **0** | 1bpp / 4bpp AA / 1bpp |
| 1.0.11.53 / 1.0.12.83 | 6032 | **1** | same; **bitmap MD5 identical** between 11 and 12 |

Hardcoding `gid = 1 + (cp - 0x20)` draws 1.0.7 **MYVU as NZWV**. 1bpp
`row_rotate = box_w % 8` and 4bpp rotate-by-8 fix 1.0.11/12 but shear 1.0.7
small/medium; `extract_lvgl_fonts.py` now detects both per face. 4bpp previews
also strip a disconnected last-row wrap bar (Y’s floor). Offsets and MD5s:
`extracted_assets/<ver>/fonts/manifest.json`.

---

## 11. Carved OTA assets

`extract_firmware_map.py` dumps GIF89a HUD animations (12), EN/ZH UI copy,
BLE action names, factory cmd names, page/view/model basenames, and audio
**paths** (payloads not in the zip). Layout: `firmware/extracted_assets/<ver>/`.
