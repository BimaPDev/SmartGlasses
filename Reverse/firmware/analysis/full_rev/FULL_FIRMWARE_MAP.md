# Full firmware map — Star Air 1.0.12.83

Cross-subsystem index for **unlazy firmware-rev** (C1–C11). Each leaf owns a disjoint directory under this tree; baseline JBD013 / GPU decode lives outside and is cited only.

**Images**

| Image | Load | Role |
|---|---|---|
| `x_1.0.12.83/platform_tester.bin` | FLASH XIP `0x2C000000` (`.rodata` alias `0x3C000000`) | M55 HUD / LVGL / drivers / StarryNet |
| `x_1.0.12.83/best1600_watch_bth.bin` | `0x14000000` | BTH M33 Bluetooth / power / factory companion |

**Method notes (shared):** PIC + interned TRACE → absolute string xrefs often empty; prefer Capstone immediates, literal pools, packed blobs, and Ghidra decomp. Do not invent bus addresses or handler Thumb entries without binary evidence.

**Baseline (out of scope, cite only)**

| Artifact | Path |
|---|---|
| JBD013 / jbd4010 display | `../jbd013/` (`jbd013_reconstructed.c`, `JBD013_DECOMP.md`) |
| VGLite / GPU decode | `../ghidra_decoder/GPU_DECODE.md` |
| Battery circle HUD veneer | `../BATT_CIRCLE_POSTMORTEM.md` |
| HUD / font geometry | `../hud_map/` |

---

## Hardware drivers

M55 peripheral stack: temple TP, SmartPA, sensor-hub IPC, fuel-gauge / charger / sleep. Clusters sit mostly in `0x2C49B000`–`0x2C4C2000` (touch/FG) and `0x2C4A8020`–`0x2C4B1338` (AW883), with sensor bridge around `0x2C526xxx` and battery_mgr / LVGL power hooks higher.

### `touch_input` (leaf 1.1.1 · C1)

- **Overview:** [`touch_input/TOUCH_INPUT.md`](touch_input/TOUCH_INPUT.md) · [`touch_reconstructed.c`](touch_input/touch_reconstructed.c)
- **Chip:** STK5115 / STK501xx I2C; probe PID reg0 == `0xA0`
- **Anchors:** `stk5115_board_init` `0x2C4C1688`, `stk_probe_pid` `0x2C49D6AC`, `stk_wear_thresh_sm` `0x2C4C1044`, `stk_alg_work` `0x2C49B970`
- **Edges:** wear FSM → attr `0x1B`; LVGL `xjxr_touchpad*` / `lv_indev_xjxr` (TRACE-opaque); BLE `set_wear_detection_mode`

### `audio_smartpa` (leaf 1.1.2 · C2)

- **Overview:** [`audio_smartpa/AUDIO_SMARTPA.md`](audio_smartpa/AUDIO_SMARTPA.md) · [`audio_reconstructed.c`](audio_smartpa/audio_reconstructed.c)
- **Chip:** AW883xx; chip-id `0x2049`; dual-PA volume UI 0..16 → `vol_value` max `0x2D0` (reg 5)
- **Anchors:** `aw883xx_init` `0x2C4A8FCC`, `pid_2049_dev_init` `0x2C4AA018`, `smartpa_set_volume` `0x2C4A9894`
- **Edges:** profiles Mmi/Music/Receiver; xjxr A2DP/HFP volume strings → SmartPA; RTOS `osDelayMs` / semaphores

### `sensors_imu` (leaf 1.1.3 · C3)

- **Overview:** [`sensors_imu/SENSORS_IMU.md`](sensors_imu/SENSORS_IMU.md) · reconstruction + [`manifest.json`](sensors_imu/manifest.json)
- **Path:** `xjxr_m552sns` MCU sensor hub IPC (load/hub notes in leaf overview; bridge ~`0x2C5267C0`)
- **Anchors:** `xjxr_mcu_sensor_msg_dispatch` `0x2C52680C`, bridge locked send `0x2C526A40`
- **Edges:** mailbox / TRACE into RTOS sensor manager; wear adjacency with touch leaf

### `power_battery` (leaf 1.1.4 · C4)

- **Overview:** [`power_battery/POWER_BATTERY.md`](power_battery/POWER_BATTERY.md) · [`power_reconstructed.c`](power_battery/power_reconstructed.c)
- **SOC:** SRAM `0x3C408A6E` via getter `0x2C48A2C4` (matches BATT_CIRCLE postmortem)
- **Path:** cw221X FG (`0x2C49D134`, id `0xA0`) + sc7288 charger → `battery_mgr` / xrbm mailbox → HUD thunk `0x2C5D68D8` / icon picker `0x2C5CFE2C`
- **Edges:** `lv_power_manager` hooks `0x2C642C66`; wear-gated deep vs shallow sleep; charging blocks sleep

---

## Connectivity & privileged

StarryNet BLE actions, factory/eshell CLI, and OTA A/B integrity on the M55 image.

### `ble_starrynet` (leaf 1.2.1 · C5)

- **Overview:** [`ble_starrynet/BLE_STARRYNET.md`](ble_starrynet/BLE_STARRYNET.md) · `starrynet_handlers.md`
- **Surface:** `MessageModel::handleSystemMsg` `0x2C194D54` — full inner `data.action` table (≥27 actions documented in leaf)
- **Edges:** ShareAbility / screenshot / log pull; ANCS / SmartLife adjacency; **no** `set_demo_mode` in this build

### `factory_eshell` (leaf 1.2.2 · C6)

- **Overview:** [`factory_eshell/FACTORY_ESHELL.md`](factory_eshell/FACTORY_ESHELL.md) · [`fac_cmd_map.md`](factory_eshell/fac_cmd_map.md)
- **Blob:** fac_cmd packed names/help file `0x15FDBC`–`0x1606B0` (VA `0x2C15FDBC`…); `eshell >` @ `0x2C4274E2`
- **Honesty:** Thumb handlers **unrecovered** (positional dispatch); prior VAs `0x2C5AA114` / `0x2C5AAB48` / `0x2C606A28` rejected as LVGL false positives

### `ota_security` (leaf 1.2.3 · C7)

- **Overview:** [`ota_security/OTA_SECURITY.md`](ota_security/OTA_SECURITY.md)
- **Verdict:** dual-bank A/B + transfer/post-write MD5 + boot-info; `do_ota_rollback` `0x2C5B9E10`
- **Security:** no RSA/ECDSA/image-signature string next to apply path; SecureFault strings present, literal `TrustZone` **absent**
- **Edges:** LVGL `OtaMsgModel`; launcher “current in ota” backHome guards

---

## App & companion SoC

LVGL launcher domains, BTH M33 companion image, and ring accessory / OTA FSM.

### `launcher_ui` (leaf 1.3.1 · C8)

- **Overview:** [`launcher_ui/LAUNCHER_UI.md`](launcher_ui/LAUNCHER_UI.md) · [`domain_map.md`](launcher_ui/domain_map.md)
- **Home:** `Pages/Launcher` `0x2C165B98`; DockviewV2 ↔ `LauncherProvider` (`startAppByPageName` `0x2C190DB4`, `DockviewV2::onClick` `0x2C196C00`)
- **Code:** `launcher_theme_init` `0x2C5046BA`; 21 `Domain*.cpp` string VAs
- **Edges:** StarryNetApp when not bonded; Assistant Domain → Pages/Navigation / SplashView; ring scroll inject on dock

### `bth_m33` (leaf 1.3.2 · C9)

- **Overview:** [`bth_m33/BTH_M33.md`](bth_m33/BTH_M33.md) · [`bth_reconstructed.c`](bth_m33/bth_reconstructed.c)
- **Image:** `best1600_watch_bth.bin` @ `0x14000000`
- **Edges:** INTERSYS mailbox ↔ M55 (`send_bth_to_m55_msg`, factory/MMI); BES TRACE / HFP timers

### `ring_accessory` (leaf 1.3.3 · C10)

- **Overview:** [`ring_accessory/RING.md`](ring_accessory/RING.md) · reconstruction + manifest
- **Stack:** HOGPRH + RingManager / LVGL OTA FSM
- **Anchors:** ring connect callback `0x2C5CA080`, `RingOtaManager_handle_ota_list` `0x2C5CC130`, ConnectingView `0x2C5CB758`
- **Edges:** DockviewV2 `onRingEvent`; BTH-side strings also appear in M33 image

---

## Inventory checklist (C1–C11)

| ID | Outcome | Leaf / owner | Dir |
|---|---|---|---|
| C1 | Touch/STK5115 | 1.1.1 | `touch_input` |
| C2 | AW883 SmartPA | 1.1.2 | `audio_smartpa` |
| C3 | Sensors / IMU hub | 1.1.3 | `sensors_imu` |
| C4 | Power / FG / sleep | 1.1.4 | `power_battery` |
| C5 | StarryNet actions | 1.2.1 | `ble_starrynet` |
| C6 | Factory / eshell | 1.2.2 | `factory_eshell` |
| C7 | OTA / rollback | 1.2.3 | `ota_security` |
| C8 | Launcher / domains | 1.3.1 | `launcher_ui` |
| C9 | BTH M33 | 1.3.2 | `bth_m33` |
| C10 | Ring accessory | 1.3.3 | `ring_accessory` |
| C11 | This integration map + jbd013/GPU cite | root | `FULL_FIRMWARE_MAP.md` |

## Manifest VA span summary (N2)

| Dir | n | min VA | max VA | empty roles |
|---|---|---|---|---|
| touch_input | 14 | `0x2c49b2c0` | `0x2c4c16fe` | 0 |
| audio_smartpa | 20 | `0x2c4a85ac` | `0x2c4abfec` | 0 |
| sensors_imu | 12 | `0x2c5267c0` | `0x2c5af350` | 0 |
| power_battery | 16 | `0x2c0392ac` | `0x3c408a6e` | 0 |
| ble_starrynet | 10 | `0x2c0282ee` | `0x2c195498` | 0 |
| factory_eshell | 18 | `0x2c15fd98` | `0x2c606a28` | 0 |
| ota_security | 9 | `0x2c48c450` | `0x3c1654a0` | 0 |
| launcher_ui | 16 | `0x2c165b98` | `0x2c508910` | 0 |
| bth_m33 | 12 | `0x1402a6e8` | `0x141379a8` | 0 |
| ring_accessory | 10 | `0x14136b2b` | `0x2c62c82c` | 0 |

*factory_eshell max includes documented LVGL false-positive VAs kept as rejected evidence; handlers remain unrecovered.*
