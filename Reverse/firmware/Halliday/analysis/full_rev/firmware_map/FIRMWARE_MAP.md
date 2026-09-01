# Halliday firmware map — ATS3089 official OTA

Cross-subsystem index for **Halliday ATS3089** reverse (leaf 1.2). Primary image is `app.bin` from the official export; sibling `custom/` (HomeBuddy) shares the same container layout and load base.

**Export baseline:** `Reverse/firmware/Halliday/export/official/` · re-run `python3 Reverse/firmware/Halliday/tools/export_halliday.py`

---

## Images

| Image | Load / format | Role |
|---|---|---|
| `HallidayOfficialOTA.bin` | Outer **AOTA** container | OTA package: `ota.xml`, `TEMP.bin`, `res.bin`, `sdfs_k.bin` |
| `layer1/TEMP.bin` | **ACTHHTCA** header + **LZMA** chunks | Boot/update payload; expands to inner AOTA |
| `layer2/inner_aota_container.bin` | Inner **AOTA** | Holds `app.bin` (SYSTEM) + `sdfs.bin` (DATA) |
| `layer3/app.bin` | Flash XIP **`0x10000000`** | Main Zephyr + `bt_watch` + `xs_app` firmware (1 662 592 B) |

**Platform:** Actions Semi **ATS3089** (Leopard SoC), **Cortex-M33**, Zephyr RTOS. Board id `ats3089_dev_watch`; build `1.00_2601211113`. OTA metadata uses `version_code=0x10000` / `version_res=0x10000`.

**Container chain:** outer AOTA → TEMP (ACTHHTCA + LZMA) → inner AOTA → `app.bin`. Embedded rodata includes `AOTAr` @ file `0x0b85cc` (VA `0x100b85cc`), confirming Actions OTA tooling in the linked image.

---

## VA mapping rule

All `app.bin` string/file anchors in this tree use:

```text
va = 0x10000000 + file_offset
```

Offsets come from `strings/app_ascii.txt` (format `0x<file_off>\t<text>`). Thumb entry PCs cluster around `0x10068xxx`–`0x1019xxxx`, consistent with the **`0x10000000`** load hint in `manifest.json`. Do not treat string VAs as function entry points without xref or decomp evidence.

**Method notes:** West build paths (`WEST_TOPDIR/...`) and assert strings are stable rodata anchors. Prefer Capstone/Ghidra xrefs from string VAs to recover handlers; many symbols are prefixed `_` (static linkage).

---

## OTA & recovery

Actions OTA stack plus LVGL progress view; staging path on SPI NAND.

| Anchor | VA | Evidence |
|---|---|---|
| `ota_app_main` | `0x1014c286` | `0x14c286` · ota.txt |
| `ota_app_init` | `0x1014c262` | `0x14c262` |
| `ota_app_init_bluetooth` | `0x1014c229` | BLE transport hook for OTA session |
| `ota_app_init_sdcard` | `0x1014c215` | SD-card OTA backend |
| `ota_view_init` / `_ota_view_handler` | `0x1014c315` / `0x1014c355` | LVGL OTA UI |
| `/NAND:/ota.bin` | `0x1014c1aa` | Staging file on NAND partition B |
| `OTA_UPG_FLAG` / `REC_OTA_FLAG` | `0x1014c04c` / `0x1014c062` | Upgrade / recovery flag strings |
| `spinand` | `0x1014c1c9` | SPI-NAND driver label near OTA backend |
| `AOTAr` (embedded) | `0x100b85cc` | In-image AOTA magic fragment |

**Edges:** `ota_type_process_allow` gates non-factory upgrades; `btcall unsupport ota` defers OTA during HFP. `ble_to_app_ota_state` bridges companion BLE OTA notifications (`0x1015a4a3`).

---

## Display / ui_service

Actions `libdisplay` + LVGL view stack; launcher and `xs_app` views register through ui_service.

| Anchor | VA | Evidence |
|---|---|---|
| `ui_service` | `0x101464a0` | Subsystem label @ `0x1464a0` |
| `view_manager.c` | `0x10146648` | `WEST_TOPDIR/framework/display/libdisplay/ui_service/view_manager.c` |
| `view_manager_init` | `0x10146c2c` | `0x146c2c` |
| `input_dispatcher.c` | `0x10146cc8` | Touch/key routing |
| `view_cache.c` | `0x1018fb65` | View cache / stack |
| `msgbox_cache_lvgl.c` | `0x1018fd82` | Modal/msgbox layer |
| `panel_device.c` | `0x1016270b` | Zephyr display panel driver |
| `de_common.c` | `0x10162ba1` | Display engine (2D blit) |

**Edges:** Early/late suspend strings tie ui_service to launcher (`Early suspend: return to launcher view` @ `0x10158818`). Resource paths under `/NAND:A/` (`bt_watch.res`, `.sty`, fonts on `/NAND:C/`).

---

## bt_watch launcher

Stock Actions watch launcher (`application/bt_watch/src/launcher/`); clock, health, power-off views.

| Anchor | VA | Evidence |
|---|---|---|
| `launcher_app.c` | `0x1014d151` | `WEST_TOPDIR/application/bt_watch/src/launcher/launcher_app.c` |
| `_launcher_app_init` | `0x1014d3f8` | `0x14d3f8` |
| `_launcher_app_loop` | `0x1014d3e5` | Main app thread |
| `_launcher_app_suspend` / `_launcher_app_resume` | `0x1014d2fd` / `0x1014d313` | PM hooks |
| `_launcher_app_early_suspend` | `0x1014d2c7` | Display-off path |
| `launcher_suspend_player` | `0x1014d3cd` | Audio player PM |
| `clock_view.c` | `0x1014d439` | Default home surface |
| `charger_view` | `0x1014dedc` | Charging UI |

**Edges:** Calls into `xs_app_init` during boot; `system_ready_suspend` @ `0x1015895a` coordinates global suspend readiness.

---

## xs_app (Halliday / HomeBuddy)

Halliday-specific application layer atop `bt_watch`: AI, prompter, reminders, translate, BLE vendor streams, ring accessory.

| Anchor | VA | Evidence |
|---|---|---|
| `xs_app_init` | `0x1014e328` | `0x14e328` · halliday.txt |
| `_xs_app_init` | `0x1014ed1a` | Init wrapper |
| `xs_event_handle` | `0x101591a0` | Central message dispatch |
| `xs_vendor_ble_stream.c` | `0x1015caad` | Vendor BLE GATT/stream |
| `ble_ring_stream.c` | `0x1015d876` | Ring accessory BLE |
| `ai_view.c` / `proactiva_ai_view.c` | `0x10154242` / `0x1015454b` | AI surfaces |
| `setting_view_v330.c` | `0x1015bd00` | Settings hub |
| `/NAND:C/xs_font.ttf` | `0x1014ed27` | Halliday font asset |

**Edges:** `xs_event_handle MSG_BT_EVENT` @ `0x10158db4`; SN storage via `xs_get_sn_info` / `xs_set_sn_info`. Custom variant adds HomeBuddy-specific strings (same layout, different `app_bin_md5`).

---

## Bluetooth stack

Dual-mode BR/EDR + BLE; ANCS/AMS iPhone integration; Halliday-named SPP service.

| Anchor | VA | Evidence |
|---|---|---|
| `bt_manager_init` | `0x10182817` | `0x182817` |
| `Halliday SPP` | `0x10182867` | SPP service name |
| `Halliday Glasses` | `0x10182856` | BR/EDR friendly name |
| `bt_manager_set_bt_ble_name` | `0x10158442` | Name provisioning |
| `bt_manager_allow_sco_connect` | `0x1014c0a8` | HFP SCO gating (OTA adjacency) |
| ANCS subscribe strings | `0x1014a50e`–`0x1014a640` | Notification center |
| AMS subscribe strings | `0x1014a08b`–`0x1014a1b9` | Media remote |
| `ble_to_app_ota_state` | `0x1015a4a3` | Companion OTA state sync |
| `shell_set_dualble_adv_connected` | `0x1014af4c` | Factory/shell dual-BLE control |

**Edges:** OTA uses `ota_app_init_bluetooth`; launcher defers OTA when btcall active. Ring path via `xs_app` BLE ring service.

---

## Shell & factory

Zephyr shell on UART plus application-specific debug commands.

| Anchor | VA | Evidence |
|---|---|---|
| `shell.c` | `0x1015fd29` | `WEST_TOPDIR/zephyr/subsys/shell/shell.c` |
| `shell_uart.c` | `0x10160288` | UART backend |
| `shell_ops.c` / `shell_utils.c` | `0x1016022e` / `0x101601e5` | Core shell |
| `Application shell commands` | `0x1014aff4` | App command group |
| `shell_set_volume` / `shell_device_test` | `0x1014b0cd` / `0x1014b0bb` | Debug hooks |
| `key_power_to_factory_reset_handle` | `0x10159396` | Long-press factory reset |
| `factory power down` | `0x1015ee22` | Factory-mode power off |

**Edges:** Shell can toggle LED, vibration, dual-BLE adv; overlaps factory test paths in `factory.txt`.

---

## Power, PM & NAND

Leopard wakelocks, Zephyr PM, charger mini-mode, SPI-NAND partition layout.

| Anchor | VA | Evidence |
|---|---|---|
| `sys_wakelock.c` | `0x1015f466` | `WEST_TOPDIR/zephyr/soc/arm/actions/leopard/sys_wakelock.c` |
| `power.c` | `0x10161800` | `WEST_TOPDIR/zephyr/subsys/pm/power.c` |
| `system_ready_suspend` | `0x1015895a` | Global suspend gate |
| `charger_suspend` / `charger_resume` | `0x1014de62` / `0x1014de72` | Charger PM |
| `mini charger entry` | `0x1014ddec` | Low-battery mini charge mode |
| `partition.c` | `0x1016226c` | Zephyr partition table |
| `/NAND:A` / `/NAND:B` / `/NAND:C` / `/NAND:K` | `0x1014aba9`… | Multi-partition paths |
| `/NAND:/SYSTEM/*` | `0x1014e345`+ | Config libraries (BT name, weather, navi) |

**Edges:** Launcher early-suspend returns to home unless “important view” active. OTA staging on `/NAND:/ota.bin`; assets on `/NAND:A/bt_watch.*` and fonts on `/NAND:C/`.

---

## Variant comparison (official vs custom)

| Field | official | custom (HomeBuddy) |
|---|---|---|
| OTA MD5 | `a1e0b7b2643ca7224a4471ba6f733eb5` | `2307fa18d3a15a6af343517b9e0184af` |
| app.bin MD5 | `32f7cdc25818cdcb853d04702687fc8a` | `9dc263a12606e06231bbd41fd09bdb18` |
| app.bin size | 1 662 592 (`0x195e80`) | same |
| platform_id | `ats3089_dev_watch` | same |
| ASCII strings | 25 548 | 25 549 (+1 halliday bucket line) |

Same **`0x10000000`** map applies to both variants; diff at `app.bin` byte level only.

---

## Leaf ownership & downstream work

| Leaf | Owns | Dir |
|---|---|---|
| 1.2 (this) | Integration map + string VA index | `firmware_map/` |
| (siblings) | Per-subsystem decomp, BLE protocol, xs_app views | `Reverse/firmware/Halliday/analysis/full_rev/` |

**Inventory anchors for manifest:** see [`manifest.json`](manifest.json) — string-derived VAs for launcher, OTA, ui_service, xs_app, bt_manager, shell.
