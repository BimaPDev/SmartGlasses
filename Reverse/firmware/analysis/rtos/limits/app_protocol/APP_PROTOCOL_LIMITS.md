# App / protocol limits — leaf 1.3.2

**Scope:** Application-level hard and soft limits on M55 `platform_tester.bin`
(1.0.12.83): display queues/FPS, StarryNet actions/MTU, Share/OTA chunks,
audio volume, battery SOC, factory surface, LVGL guards.

**Owns:** `app_protocol/**`  
**Binary:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (XIP `0x2C000000`)  
**Extractor:** `extract_app_limits.py` → `app_protocol_limits.json`  
**Inventory:** **36** named limits across **8** categories.

## Method

1. Mine `STAR_AIR_FULL_WRITEUP.md`, `JBD013_DECOMP.md`, `IPC_OBJECTS.md`, and
   prior leaf reconstructions (`jbd013_reconstructed.c`, `power_reconstructed.c`,
   `AUDIO_SMARTPA.md`, `BLE_STARRYNET.md`).
2. Cross-check claims against `platform_tester.bin` ASCII strings and selected
   Thumb immediates in `jbd4010_display_thread` (`FUN_2c499270`).
3. Tag each JSON entry `source` as `binary` | `writeup` | `both`. Writeup-only
   figures (Share 4096/8 KiB preferred sizes, sample-rate list, dock tile count)
   are labeled explicitly when the M55 image has no binding ASCII constant.

## Category breakdown

| Category | Entries | Highlights |
|---|---:|---|
| `display` | 8 | 640×480, FB `0x25800`, FPS throttle **80**, WDT **0x76C**, bri 0..7109 |
| `ble_starrynet` | 6 | **27** packed `handleSystemMsg` actions, 8 CMD enums, ring name ≤30 |
| `share_transfer` | 5 | `chunkSize` field, preferred **4096** / asked **8192**, 15 stream types |
| `ota` | 4 | dual MD5, `do_ota_rollback`, no USB gadget |
| `audio` | 3 | volume UI **0..16** → `vol_value` max **0x2D0** |
| `power` | 2 | SOC clamp **0..100**, icon bands 10..90 |
| `factory` | 3 | NV `0x28FFF000`, `eshell >`, `en_usb` without gadget |
| `ui_lvgl` | 5 | `LV_MEM_BUF_MAX_NUM`, dock **4**, 21 Domain*.cpp, MAX_* inventory |

## Must-have evidence (verified)

### Panel 640×480 and FB `0x25800`

- Geometry hardcoded in JBD init / GPU tessellation (`0x280×0x1E0`).
- Binary MMI art: `AA_Pattern_640_480_*` @ file `0x161d80`.
- Framebuffer size `0x25800` (153,600 B) from reconstruction
  (`JBD_FB_BYTES` / writeup) — 4-bit packed 640×480. Tagged **writeup** for
  the byte count (no lone ASCII `0x25800` next to the driver).

### Display queue / FPS throttle (80) and watchdog `0x76C`

From Ghidra decomp `jbd4010_display_thread.c` @ `0x2C499270`:

- Message type filter `0x20`.
- `FUN_2c498db4(0x76c)` (~1.9 s) outside factory/test.
- `if (0x50 < counter)` → trace dump (FPS throttle when **>80** frames queued).

Binary immediates in the same function:

- Thumb-2 `movw r0, #0x76c` → bytes `40 f2 6c 70`.
- `cmp r2, #0x50` → bytes `50 2a`.

IPC inventory names the display cluster (`jbd_mailbox`, `display_frame_mutex`,
`jbd_panel_sem`, …) but does **not** publish a numeric CMSIS queue depth; the
recoverable soft limit is the **80-frame** in-flight throttle, not an
`osMessageQueueNew` capacity constant.

### Brightness and volume

| Limit | Value | Evidence |
|---|---|---|
| JBD BLE brightness | 0..7109 (`0x1BC5`), special `0x1C03` | `set_jbd_brightness`; `invalid brightness to set: %d` |
| Companion flat brightness | string 0–10 | writeup C5 |
| `setScreenBrightness` TRACE | 0–100 | writeup C5 |
| SmartPA UI volume | 0..16 | `cmp #0x10`; `PA set volume=%d` / `vol_value` |
| `vol_value` max | `0x2D0` (720) → AW883 reg 5 | writeup + `AUDIO_SMARTPA.md` |

### Share / OTA chunk sizes

- Protobuf field name `chunkSize` @ file `0x2d1c4` (`share_api.pb-c.c`).
- Writeup: preferred phone ACK **4096**; glasses asked **8 KiB** on some builds.
- iOS SDK mirrors those as `preferredChunkSize=4096` / `maxChunkSize=8192`
  (not firmware ASCII). JSON marks both sizes **`source: writeup`**.
- OTA rides Share `SHARE_STREAM_TYPE__RECEIVE_OTA_FINISH`; transfer + written-flash
  MD5 strings present; `do_ota_rollback` present.
- **No USB gadget:** `gadget` / `hal_usb` ASCII absent; `en_usb` fac_cmd name only.

### Battery SOC clamp 0–100

`battery_mgr_poll_level_voltage` (`FUN_2c489bd0`) clamps via `clamp_u0_100`
before `strh` to SRAM `0x3C408A6E`. Binary log: `get new battery level: %d`.

### StarryNet action surface

Authoritative packed inner table: **27** actions (9 get + 18 set/notify/sync).
Extractor finds **27/27** names in-image; miss path
`handleSystemMsg no handler for action %s` @ file `0x194f7f`.
Protobuf CMD surface: **8** `STARRY__MSG__CMD__*` symbols (INIT, NOTIFY, OTA,
SYS_VOLUME, SYS_BRIGHT, KEY_EVENT, SYS_INFO, VIDEO).

### `MAX_*` strings in binary

```
LV_MEM_BUF_MAX_NUM
MED_HEAP_BLOCK_MAX_NUM
MAX_GAIN
DDSP_DL_MBAND_MAX_NUM_SUBBANDS
configMAX_PRIORITIES
configMAX_TASK_NAME_LEN
PMAX_M
```

(Scheduler MAX_* are owned by other rtos-limits leaves; listed here for
app-adjacent string inventory completeness.)

## writeup-only (no M55 ASCII binding)

- Share preferred ACK chunk **4096** / glasses-asked **8192**.
- Accepted audio sample rates 8 / 16 / 44.1 / 48 kHz.
- Launcher dock **4** tiles; **21** NLU Domain*.cpp files.
- Companion brightness scale 0–10 vs TRACE 0–100 wording.

## Regenerate

```bash
python3 Reverse/firmware/analysis/rtos/limits/app_protocol/extract_app_limits.py
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.3.2
```

## Sources

- `Reverse/STAR_AIR_FULL_WRITEUP.md` (C3 audio, C4 power, C5 StarryNet, C6 factory, C7 OTA, Share §)
- `Reverse/firmware/analysis/jbd013/JBD013_DECOMP.md` + `decomp/jbd4010_display_thread.c`
- `Reverse/firmware/analysis/rtos/m55/IPC_OBJECTS.md`
- `Reverse/firmware/analysis/full_rev/ble_starrynet/BLE_STARRYNET.md`
- `Reverse/firmware/analysis/full_rev/audio_smartpa/AUDIO_SMARTPA.md`
- `Reverse/firmware/analysis/full_rev/power_battery/power_reconstructed.c`
- `Sources/MyvuCore/Protocol/ShareAbility.swift` (chunk constants mirrored from writeup)
