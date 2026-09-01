# Halliday sensors & health UI — bp_view, spo2_view, BLE sensor channel

**Leaf:** 1.8 · **OWNS:** `Reverse/firmware/Halliday/analysis/full_rev/sensors_health/**`  
**Firmware:** `HallidayOfficialOTA` → `export/official/layer3/app.bin` (Actions ATS3089, `1.00_2601211113`)  
**Load base:** **`0x10000000`** (Thumb XIP); runtime string VA = **`0x10000000 + app.bin file_off`**

Primary evidence: `export/official/strings/categorized/sensors_health.txt`,
`export/official/strings/app_ascii.txt` (health / bp / spo2 clusters), cross-check
`categorized/lvgl_ui.txt`, `categorized/ble_bluetooth.txt`, `categorized/source_files.txt`.

**Recovery honesty:** No Ghidra function export for Halliday `app.bin` yet. Symbol names below
are **log-string / WEST_TOPDIR anchors** adjacent in rodata, not confirmed Thumb entry VAs unless
noted. UI lifecycle patterns match leaf 1.4 `ui_launcher` (view_manager + LVGL scene load).

---

## 1. Scope — what “health” means in this build

Halliday stock firmware exposes **two launcher health gadget views** inside the stock Actions
`bt_watch` application — blood pressure (`bp_view.c`) and SpO₂ (`spo2_view.c`). They sit in the
vertical launcher gadget strip next to `CLOCK_VIEW` (see leaf 1.4 `UI_LAUNCHER.md` §3.2).

Companion-app **sensor configuration and live results** use the Halliday vendor BLE stream
(`vendor_ble_rx_event_proc` @ `0x15a4b8`, leaf 1.5 `BLE_CONNECTIVITY.md`): dedicated RX handlers
`_ble_rx_sensor_command` and `_ble_rx_sensor_param`, plus TX helpers `send_result` /
`ble_send_to_app`. A dev-only **`send_result_simulator`** string cluster sits near xs_app unit-test
hooks (password / AI / translate test starts @ `0x157083`–`0x1571a0`).

| Subsystem | Role | Key anchors (file off) |
|---|---|---|
| Launcher health UI | On-glass BP + SpO₂ tiles | `bp_view.c` @ `0x14d509`, `spo2_view.c` @ `0x14d5e8` |
| LVGL scenes | Resource-backed layouts | `SCENE_BP_VIEW`, `SCENE_SPO2_VIEW` (miss → `not found`) |
| Vendor BLE RX | Phone → glasses sensor cmds | `_ble_rx_sensor_command` @ `0x15a3b9`, `_ble_rx_sensor_param` @ `0x15a4f6` |
| Vendor BLE TX | Glasses → phone measurements | `send_result` @ `0x15cf04`, `BLE SEND: CMD:0x%x` @ `0x15ce75` |
| Exercise neighbor | Sport mode (same RX table) | `sport_start` @ `0x15a16e`, `_ble_rx_exercise_command` @ `0x15a3a0` |

**Not health (categorized noise):** `Pull Up and Pull Down should not be enabled simultaneously`
@ `0x1625be` is a Zephyr GPIO assertion (panel / pin driver), and `hfp simu outgoing` @ `0x182e49`
is classic BT HFP simulation — both landed in `sensors_health.txt` via broad grep, not BP/SpO₂ logic.

---

## 2. Addressing

| Item | Value |
|---|---|
| Binary | `Reverse/firmware/Halliday/export/official/layer3/app.bin` |
| Size | 1,662,592 bytes |
| XIP base | **`0x10000000`** |
| Export offset column | File offset in `app.bin` (short form in tables) |
| Absolute VA | `0x10000000 + off` (example: `health_bp` off `0x14d559` → VA **`0x1014d559`**) |

Official vs HomeBuddy custom: health string cluster is **byte-identical** in both exports
(`export/custom/strings/categorized/sensors_health.txt` matches official).

---

## 3. bt_watch health views — `bp_view.c`

**Source path (rodata):** `WEST_TOPDIR/application/bt_watch/src/launcher/health/bp_view.c` @ **`0x14d509`**.

### 3.1 View identity & scene

| String | off | abs VA | Interpretation |
|---|---|---|---|
| `view_id == HEALTH_BP_VIEW` | `0x14d4ef` | `0x1014d4ef` | Debug assert in view dispatch |
| `SCENE_BP_VIEW not found` | `0x14d4d7` | `0x1014d4d7` | `lvgl_res_load_scene` failure for BP layout |
| `health_bp` | `0x14d559` | `0x1014d559` | Registered view / resource name |
| `bp view inflated` | `0x14d548` | `0x1014d548` | Layout inflate success log |

Scene assets live under `/NAND:A/bt_watch.res` (`.sty` / `.zhC` tables — leaf 1.4). Missing scene
does **not** crash the launcher; handler logs and skips paint (same pattern as `SCENE_AI_VIEW not found`).

### 3.2 Handler pipeline (string-proven)

Typical Actions view lifecycle symbols clustered in rodata:

| Phase | Symbol | off |
|---|---|---|
| Resource load | `_bp_view_load_resource` | `0x14d563` |
| First layout | `_bp_view_layout` | `0x14d57a` |
| Refresh | `_bp_view_layout_update` | `0x14d58a` |
| Events | `_bp_view_handler` | `0x14d5a1` |

```
launcher_app / view_stack
        │
        ▼
view_manager (view_id == HEALTH_BP_VIEW)
        │
        ├─► _bp_view_load_resource  ──► lvgl_res_load_scene(SCENE_BP_VIEW)
        ├─► _bp_view_layout         ──► "bp view inflated"
        ├─► _bp_view_layout_update  ──► measurement UI refresh
        └─► _bp_view_handler        ──► keys / focus / suspend
```

Navigation: entered from launcher gadget vertical layout (`LAUNCHER_GADGET` @ `0x14ef78`).
Escape hatch: `view_stack_clean_and_return_launcher` (leaf 1.4 @ `0x158935`).

---

## 4. bt_watch health views — `spo2_view.c`

**Source path:** `WEST_TOPDIR/application/bt_watch/src/launcher/health/spo2_view.c` @ **`0x14d5e8`**.

| String | off | abs VA | Interpretation |
|---|---|---|---|
| `view_id == HEALTH_SPO2_VIEW` | `0x14d5cc` | `0x1014d5cc` | View dispatch assert |
| `SCENE_SPO2_VIEW not found` | `0x14d5b2` | `0x1014d5b2` | Scene load failure |
| `health_spo2` | `0x14d63c` | `0x1014d63c` | Registered view name |
| `spo2 view inflated` | `0x14d629` | `0x1014d629` | Layout success |

| Phase | Symbol | off |
|---|---|---|
| Resource load | `_spo2_view_load_resource` | `0x14d648` |
| First layout | `_spo2_view_layout` | `0x14d661` |
| Refresh | `_spo2_view_layout_update` | `0x14d673` |
| Events | `_spo2_view_handler` | `0x14d68c` |

BP and SpO₂ views share the same four-function skeleton; differences are scene IDs and registered
names (`health_bp` vs `health_spo2`). No separate `heart_rate_view.c` path appears in export strings
for this OTA build.

---

## 5. BLE sensor command plane (phone ↔ glasses)

Sensor traffic is **not** classic GATT profile names in strings — it rides the Halliday vendor
packet format documented in leaf 1.5:

```
Phone app
  │  BLE GATT write (vendor stream)
  ▼
vendor_ble_rx_event_proc @ 0x15a4b8
  │  log: BLE RECV: CMD:0x%x, KEY:0x%x @ 0x15a332
  ├─► _ble_rx_sensor_command @ 0x15a3b9
  ├─► _ble_rx_sensor_param   @ 0x15a4f6
  └─► _ble_rx_exercise_command @ 0x15a3a0  (sport_start @ 0x15a16e)
        │
        ▼
  (measurement / UI update — body not string-exported)
        │
        ▼
ble_send_to_app @ 0x15cf10
  send_result / send_result2 @ 0x15cf04 / 0x15cf20
  log: BLE SEND: CMD:0x%x(%d), KEY:0x%x(%d),len:%d @ 0x15ce75
```

| Anchor | off | abs VA | Notes |
|---|---|---|---|
| `SENSOR_PARAMETERS` | `0x15a17a` | `0x1015a17a` | Literal table / enum name near sport + sensor RX cluster |
| `_ble_rx_sensor_command` | `0x15a3b9` | `0x1015a3b9` | Command handler symbol in vendor RX dispatch table |
| `_ble_rx_sensor_param` | `0x15a4f6` | `0x1015a4f6` | Parameter/config path (paired with command) |
| `send_result` | `0x15cf04` | `0x1015cf04` | TX helper beside `ble_send_to_app` |
| `send_result_simulator` | `0x157142` | `0x10157142` | Duplicate rodata @ `0x157174`; xs unit-test neighborhood |

Source file for RX table: `xs_app/xs_ble_service/xs_vendor_ble_stream.c` @ `0x15caad` (leaf 1.5).

**Edge to health UI (string-only):** `_ble_rx_sensor_*` and `_spo2_view_layout_update` share the
same firmware image and vendor BLE hub, but **no direct xref string** links a BLE CMD literal to
`HEALTH_BP_VIEW` — expect an intermediate sensor service or message bus not yet recovered.

---

## 6. Comparison to sibling leaves

| Leaf | Overlap |
|---|---|
| 1.4 `ui_launcher` | Owns view_manager, `HEALTH_*_VIEW` catalog, gadget navigation |
| 1.5 `ble_connectivity` | Owns `vendor_ble_rx_event_proc`, CMD/KEY framing, `ble_send_to_app` |
| 1.8 (this) | **Owns** health-specific view handlers + sensor BLE symbol cluster |

Do **not** duplicate full BLE stack or launcher architecture here — cite those leaves for transport
and navigation context.

---

## 7. Follow-up (Ghidra / runtime)

1. Disassemble `_bp_view_handler` / `_spo2_view_handler` — find calls into sensor start/stop or
   numeric label updates after scene inflate.
2. Xref `SENSOR_PARAMETERS` and `_ble_rx_sensor_command` — recover CMD/KEY enum values and payload
   layout (likely drives on-glass health tiles).
3. Trace `send_result` callers — map which measurement types reach the phone app vs stay on-device.
4. Confirm whether `send_result_simulator` is compiled in release or gated behind factory / unit test.
5. Re-run after Ghidra export: `python3 Reverse/firmware/Halliday/tools/export_halliday.py` then
   populate `manifest.json` with Thumb entry VAs.

---

## 8. Verify

```bash
node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs 1.8
```

Expected: `leaf 1.8 verification passed`.

**Artifacts:** `SENSORS_HEALTH.md` (this file), `manifest.json` (string-anchor index).
