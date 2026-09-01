# Full firmware map — Halliday ATS3089 `1.00_2601211113`

Cross-subsystem index for **unlazy firmware-rev** (C1–C14). Each leaf owns a disjoint directory under this tree; Star Air `full_rev/` baseline lives outside and is cited only.

**Images**

| Image | Load / container | Role |
|---|---|---|
| `Halliday/HallidayOfficialOTA.bin` | Outer **AOTA** | Stock OTA package |
| `Halliday/HomeBuddyHallidayCustomOTA.bin` | Outer **AOTA** | HomeBuddy-patched build (1216 B diff in `app.bin`) |
| `export/official/layer3/app.bin` | XIP **`0x10000000`** | Main Zephyr application (reverse target) |
| `export/official/layer1/TEMP.bin` | **ACTHHTCA** + LZMA | Boot/recovery + compressed inner AOTA |
| `export/official/layer1/res.bin`, `sdfs_k.bin` | compressed DATA | UI resources + SDFS assets |

**Method notes (shared):** AOTA unpack (`Reverse/firmware/Halliday/tools/export_halliday.py`) → `export/functions/app/` (**5,486** Ghidra functions: `functions.csv`, `decomp/*.c`, `asm/*.s`). VA rule: **`va = 0x10000000 + app.bin file_off`** for string anchors; Ghidra entries use absolute `0x100xxxxxx`.

**Baseline (out of scope, cite only)**

| Artifact | Path |
|---|---|
| Star Air full_rev | `../../../analysis/full_rev/FULL_FIRMWARE_MAP.md` |
| Star Air export | `../../../export/1.0.12.83/README.md` |

---

## Container & platform

Actions ATS3089 Leopard, Cortex-M33, Zephyr `WEST_TOPDIR/zephyr`; nested AOTA container chain and load map.

### `firmware_map` (leaf 1.3 · C3)

- **Overview:** [`firmware_map/FIRMWARE_MAP.md`](firmware_map/FIRMWARE_MAP.md)
- **SoC:** Actions **ATS3089** Leopard, Cortex-M33, Zephyr `WEST_TOPDIR/zephyr`
- **Pipeline:** Outer AOTA → TEMP (ACTHHTCA + boot stub + LZMA) → inner AOTA → `app.bin` + `sdfs.bin`
- **Board gate:** `ats3089_dev_watch` in `ota.xml`
- **Anchors:** `ota_app_main` `0x1014c286`, `view_manager_init` `0x10146c2c`, `xs_app_init` `0x1014e328`, `bt_manager_init` `0x10182817`

---

## Application & display

LVGL `bt_watch` launcher, Actions `libdisplay`, audio HAL, and Halliday `xs_app` overlay views.

### `ui_launcher` (leaf 1.4 · C4)

- **Overview:** [`ui_launcher/UI_LAUNCHER.md`](ui_launcher/UI_LAUNCHER.md) · [`view_catalog.md`](ui_launcher/view_catalog.md)
- **Stack:** `framework/display` view_manager + LVGL virtual display
- **Home:** `bt_watch` launcher (`launcher_app.c` @ `0x1014d151`), `CLOCK_VIEW`, health gadgets
- **Halliday:** `xs_app` — translate, msg/notify, remind, AI views (`xs_app_init` @ `0x1014e328`)
- **Nav:** numeric `view_id` + `view_stack` (not Star Air PageManager)

### `audio_display` (leaf 1.7 · C7)

- **Overview:** [`audio_display/AUDIO_DISPLAY.md`](audio_display/AUDIO_DISPLAY.md)
- **Display:** `view_manager_init` `0x10146c2c`, `display_composer_init` `0x101654be`, `lvgl_virtual_display.c` @ `0x1018e1e2`
- **Fonts:** FreeType cache + `lvgl_freetype_font_init` `0x1018e199`; assets on `/NAND:C/xs_font.ttf`
- **Audio:** `audio_track_create` `0x1017e65f`, `acts_audio_out_write` `0x1016a28b`, A2DP via `_bt_manager_a2dp_callback` `0x10182b40`
- **Honesty:** no AW883 SmartPA / Star Air pattern; no `functions.csv` yet

---

## Connectivity & vendor protocol

Dual-mode BR/EDR + BLE; iOS ANCS/AMS; Halliday SPP and vendor GATT command channel.

### `ble_connectivity` (leaf 1.5 · C5)

- **Overview:** [`ble_connectivity/BLE_CONNECTIVITY.md`](ble_connectivity/BLE_CONNECTIVITY.md)
- **Classic:** A2DP/AVRCP/HFP + **`Halliday SPP`** @ `0x10182867`
- **BLE:** dual-BLE (`dual_ble_event_handle` `0x101848c1`), ANCS/AMS client, HFP call pump
- **Honesty:** no StarryNet / `handleSystemMsg` in this build

### `xs_vendor` (leaf 1.12 · C12)

- **Overview:** [`xs_vendor/XS_VENDOR.md`](xs_vendor/XS_VENDOR.md) *(pending)*
- **Stack:** `xs_app/xs_ble_service/xs_vendor_ble_stream.c` @ `0x1015caad`
- **RX:** `vendor_ble_rx_event_proc` `0x1015a4b8` — CMD/KEY phone ↔ glasses dispatch
- **Ring:** `ble_ring_stream.c` @ `0x1015d876`; `ble_to_app_ota_state` @ `0x1015a4a3`
- **Events:** `xs_event_handle` `0x101591a0` central message pump for Halliday app layer

---

## OTA, security & variants

Actions libota staging, CRC integrity, and official vs HomeBuddy custom delta.

### `ota_security` (leaf 1.6 · C6)

- **Overview:** [`ota_security/OTA_SECURITY.md`](ota_security/OTA_SECURITY.md)
- **Integrity:** CRC32 at AOTA FAT, partition XML, BLE chunks, `ota_image_calc_crc` — **no image signing strings**
- **FSM:** `ota_app` (UI/transport) → `ota_rx` (NAND `/NAND:/ota.bin`) → `ota_upgrade` apply
- **Flags:** `OTA_UPG_FLAG`, `REC_OTA_FLAG`, breakpoint resume

### `custom_diff` (leaf 1.13 · C13)

- **Overview:** [`custom_diff/CUSTOM_DIFF.md`](custom_diff/CUSTOM_DIFF.md) · [`diff_regions.json`](custom_diff/diff_regions.json)
- **Delta:** 114 runs / 1216 B in `app.bin` — injected Thumb cave @ `0x1014456c`, clock watermark, notify app-ID whitelist
- **Version string unchanged:** `1.00_2601211113`

---

## Hardware, health & PM

Sensors, battery/charger, Zephyr PM, and factory/shell surfaces.

### `sensors_health` (leaf 1.8 · C8)

- **Overview:** [`sensors_health/SENSORS_HEALTH.md`](sensors_health/SENSORS_HEALTH.md)
- **UI:** launcher BP + SpO₂ gadgets — `bp_view.c` @ `0x1014d509`, `spo2_view.c` @ `0x1014d5e8`
- **BLE:** `_ble_rx_sensor_command` `0x1015a3b9`, `send_result` `0x1015cf04` (vendor stream adjacency)

### `power_battery` (leaf 1.9 · C9)

- **Overview:** [`power_battery/POWER_BATTERY.md`](power_battery/POWER_BATTERY.md)
- **Driver:** `battery_acts_init` `0x1016d0a0`, `battery_event_handle` `0x101591b0`, mini-charger FSM @ `0x1014ddec`
- **PM:** Zephyr `power.c` @ `0x10161800`, Leopard `sys_wakelock.c` @ `0x1015f466`, panel PM `0x101628cd`
- **Phone:** HFP battery indicator via `bt_manager_hfp_battery_report` `0x10183365`

### `factory_shell` (leaf 1.10 · C10)

- **Overview:** [`factory_shell/FACTORY_SHELL.md`](factory_shell/FACTORY_SHELL.md)
- **Shell:** Zephyr UART shell (`shell.c` @ `0x1015fd29`) + Application shell commands @ `0x1014aff4`
- **Factory:** `shell_device_test`, `key_power_to_factory_reset_handle` `0x10159396`, `Factory Config` NVRAM labels
- **Edges:** `ota_type_process_allow` factory gate; dual-BLE adv via `shell_set_dualble_adv_connected`

### `zephyr_rtos` (leaf 1.11 · C11)

- **Overview:** [`zephyr_rtos/ZEPHYR_RTOS.md`](zephyr_rtos/ZEPHYR_RTOS.md) *(pending)*
- **Kernel:** WEST_TOPDIR/zephyr — threads, semaphores, PM, devicetree labels
- **SoC:** Leopard wakelocks, `soc_pmu_*`, partition table `partition.c` @ `0x1016226c`
- **NAND:** `/NAND:A`–`/NAND:K` multi-partition layout; config under `/NAND:/SYSTEM/*`

---

## Export & re-run

```bash
python3 Reverse/firmware/Halliday/tools/export_halliday.py
```

Browse without Ghidra: `Reverse/firmware/Halliday/export/README.md`

## Leaf gates

| Leaf | Verify |
|---|---|
| 1.1 export | `node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs 1.1` |
| 1.2 ghidra | `node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs 1.2` |
| 1.3–1.13 | `node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs <id>` |
| integration | `node Reverse/firmware/Halliday/analysis/scripts/verify-integration.mjs` |

---

## Inventory checklist (C1–C14)

| ID | Outcome | Leaf / owner | Dir |
|---|---|---|---|
| C1 | Export unpack (official + custom) | 1.1 | `Halliday/export/` |
| C2 | Ghidra function export | 1.2 | `export/functions/app/` |
| C3 | Container + load map | 1.3 | `firmware_map` |
| C4 | Launcher / xs_app views | 1.4 | `ui_launcher` |
| C5 | BLE / classic BT | 1.5 | `ble_connectivity` |
| C6 | OTA / CRC integrity | 1.6 | `ota_security` |
| C7 | Audio / display stack | 1.7 | `audio_display` |
| C8 | Sensors / health UI | 1.8 | `sensors_health` |
| C9 | Power / battery / PM | 1.9 | `power_battery` |
| C10 | Factory / shell | 1.10 | `factory_shell` |
| C11 | Zephyr RTOS / SoC | 1.11 | `zephyr_rtos` |
| C12 | xs_app vendor protocol | 1.12 | `xs_vendor` |
| C13 | Official vs custom diff | 1.13 | `custom_diff` |
| C14 | This integration map + Star Air cite | root | `FULL_FIRMWARE_MAP.md` |

## Manifest VA span summary (N2)

| Dir | n | min VA | max VA | empty roles |
|---|---|---|---|---|
| firmware_map | 8 | `0x10146c2c` | `0x10182817` | 0 |
| ui_launcher | 8 | `0x10146c2c` | `0x1018fb39` | 0 |
| ble_connectivity | 8 | `0x1014a777` | `0x1018652e` | 0 |
| ota_security | 8 | `0x1014c04c` | `0x1018203b` | 0 |
| audio_display | 10 | `0x10146c2c` | `0x1018a72b` | 0 |
| sensors_health | 8 | `0x1014d559` | `0x1015cf04` | 0 |
| power_battery | 10 | `0x1014ddec` | `0x1016d428` | 0 |
| factory_shell | 10 | `0x1014aff4` | `0x101932b8` | 0 |
| zephyr_rtos | — | — | — | pending leaf |
| xs_vendor | — | — | — | pending leaf |
| custom_diff | 3 | `0x1014d439` | `0x1015148b` | 0 |

*All spans from manifest `functions` / `anchors` entries unless noted pending. Handler Thumb PCs require Ghidra xref recovery beyond string rodata.*
