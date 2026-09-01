# Halliday ATS3089 power / battery / PM (1.00_2601211113)

**Leaf:** 1.9  
**Binary:** `Reverse/firmware/Halliday/HallidayOfficialOTA.bin` → inner `app.bin` (1,662,592 B)  
**Load base:** **`0x10000000`** (Thumb XIP; string VA = `0x10000000 + app.bin file_off`)  
**Sources:** `export/official/strings/categorized/power_battery.txt` (83 hits), targeted `app_ascii.txt` greps for `battery`, `charger`, `wakelock`, `pm_`  
**Manifest:** `manifest.json`

## Verdict

Halliday power management is a **Zephyr PM subsystem** (`zephyr/subsys/pm/power.c`) layered with **Actions Leopard SoC hooks** (`sys_wakelock.c`, `soc_pmu_*`) and an **Actions battery/charger driver** (`battery_acts_*`). Low-battery and dock events propagate through **`BAT_CHG_*` / `SYS_EVENT_BATTERY_LOW`** into `battery_event_handle`, while deep sleep uses **`bat_charger_set_before_enter_s4`** and a **“mini charger”** recovery path that can suspend/resume charging and reboot. Classic **HFP battery indicator** and BLE **ring battery state** expose percent/state to the phone. No Ghidra function export yet — anchors are rodata string VAs only.

## 1. Image and addressing

| Item | Value |
|---|---|
| Binary | `Reverse/firmware/Halliday/export/official/layer3/app.bin` |
| Platform | `ats3089_dev_watch`, build `1.00_2601211113` |
| XIP base | **`0x10000000`** |
| String bucket | `export/official/strings/categorized/power_battery.txt` |
| VA rule | **`va = 0x10000000 + file_off`** |

Re-run export: `python3 Reverse/firmware/Halliday/tools/export_halliday.py`.

## 2. End-to-end architecture (string-evidence)

```
USB / dock (DC5V) ──► BAT_CHG_EVENT_DC5V_IN/OUT, CHARGE_START/FULL
        │
        ▼
battery_acts_* driver (ADC mV, SOC %%, precharge, vd12/vc18 rails)
        │  battery_acts_init → register_notify → enable
        ▼
battery_event_handle ──► SYS_EVENT_BATTERY_LOW, BAT_CHG_EVENT_BATTERY_TOO_LOW(_2)
        │                      │
        │                      ├──► launcher / UI (charger_view scene)
        │                      ├──► mini charger FSM (entry/suspend/resume/reboot)
        │                      └──► ble_to_app_ring_state (ring accessory %)
        │
        ▼
Zephyr PM (power.c) + device pm_control handlers
        │  pm_early_suspend, _pm_devices
        │  panel/audio/lcdc/gpiokey/jpeg/composer/block_dev/i2cmt
        ▼
Actions wakelock (sys_wakelock.c) — ref_cnt hold/release
        │
        ▼
soc_pmu_* (wakeup source, 8 Hz alarm, temperature, PM_BAK_TIME)
```

## 3. Battery driver (`battery_acts_*`)

Actions Semi battery stack (Zephyr device driver naming):

| Symbol / log | File off → VA | Role |
|---|---|---|
| `battery_acts_init` | `0x16d0a0` → `0x1016d0a0` | Driver bring-up |
| `battery_acts_enable` | `0x16d06d` → `0x1016d06d` | Enable sampling/charger path |
| `battery_acts_register_notify` | `0x16d038` → `0x1016d038` | Event callback registration |
| `battery_acts_set_property` | `0x16d01e` → `0x1016d01e` | Property IOCTL surface |
| `battery real voltage init:%dmv` | `0x16ca2b` → `0x1016ca2b` | Boot-time ADC calibration |
| `battery ADC read error %d` | `0x16c8b0` → `0x1016c8b0` | ADC failure |
| `** battery voltage:%dmV capacity:%d%% **` | `0x16d82a` → `0x1016d82a` | Periodic SOC log |
| `Precharge time too long, battery is bad!` | `0x16d69e` → `0x1016d69e` | Bad-cell guard |
| `battery error` | `0x16d5ca` → `0x1016d5ca` | Generic fault |
| `int battery first insert, poweroff` | `0x15ee44` → `0x1015ee44` | First-insert policy |
| `soc cali vd12 =%d` / `soc get cali vd12 fail` | `0x15f0ba` / `0x15f0cd` | VD12 calibration |
| `vd12 sw %s; vc18 sw %s.` | `0x16d0e6` → `0x1016d0e6` | Rail switch logging |
| `pmuvdd_set_vd12_vc18_mode` | `0x16d3e3` → `0x1016d3e3` | PMU VDD mode control |

**Event pump:** `battery_event_handle` @ `0x1591b0` → **`0x101591b0`** (also `%d` variant @ `0x158f9f`). **`battery_power_enable`** @ `0x158920` → `0x10158920` gates battery power domain.

## 4. Charger events and UI

### 4.1 `BAT_CHG_*` / system events

| Event string | File off → VA |
|---|---|
| `BAT_CHG_EVENT_BATTERY_TOO_LOW` | `0x14aaa6` → `0x1014aaa6` |
| `BAT_CHG_EVENT_BATTERY_TOO_LOW2` | `0x14aac4` → `0x1014aac4` |
| `BAT_CHG_EVENT_DC5V_IN` | `0x158fb7` → `0x10158fb7` |
| `BAT_CHG_EVENT_DC5V_OUT` | `0x158fcf` → `0x10158fcf` |
| `BAT_CHG_EVENT_CHARGE_START` | `0x159019` → `0x10159019` |
| `BAT_CHG_EVENT_CHARGE_FULL` | `0x158fe8` → `0x10158fe8` |
| `SYS_EVENT_BATTERY_LOW` | `0x159002` → `0x10159002` |

Dock attach/detach (`DC5V_IN/OUT`) and charge lifecycle (`START`, `FULL`) are distinct from critical low-battery (`TOO_LOW`, `SYS_EVENT_BATTERY_LOW`).

### 4.2 Charger hardware + mini charger FSM

| Symbol / log | File off → VA | Notes |
|---|---|---|
| `charger enabled` | `0x16d140` → `0x1016d140` | Charger IC enable |
| `set init charger const current:%d` | `0x16d3a3` → `0x1016d3a3` | CC precharge/current |
| `charger_enable_timer_handler` | `0x16d448` → `0x1016d448` | Deferred enable timer |
| `bat_charger_set_before_enter_s4` | `0x16d428` → `0x1016d428` | Pre-deep-sleep charger policy |
| `charger_suspend` / `charger_resume` | `0x14de62` / `0x14de72` | Suspend/resume hooks |
| `charger_mode_check` | `0x14de81` → `0x1014de81` | Mode probe |
| `mini charger entry.` | `0x14ddec` → **`0x1014ddec`** | Enters mini-charge recovery |
| `mini charger suspend` / `resume` | `0x14de01` / `0x14ddad` | Mini FSM states |
| `bat is not lowpower, exit mini charger.` | `0x14ddc2` → `0x1014ddc2` | Exit when SOC recovered |
| `exit mini charger and reboot...` | `0x14de41` → `0x1014de41` | Reboot after mini charge |
| `mini charger get bat_mv: %dmv.` | `0x16cacd` → `0x1016cacd` | Voltage read in mini mode |

Mini charger reads **`bat_mv`** and **`batchk_mv`** for protect checks (`0x16cb0e` band).

### 4.3 Charger LVGL view

| Symbol | File off → VA |
|---|---|
| `charger_view` | `0x14dedc` → `0x1014dedc` |
| `charger_view_deinit` | `0x14dee9` → `0x1014dee9` |
| `_charger_load_resource` | `0x14defd` → `0x1014defd` |
| `_charger_view_layout` | `0x14df14` → `0x1014df14` |
| `SCENE_CHARGER_VIEW not found` | `0x14de94` → `0x1014de94` |
| `charger scene load pictures failed` | `0x14deb9` → `0x1014deb9` |

Charger UI is a dedicated scene in the bt_watch view stack (see `ui_launcher` leaf for view_manager integration).

## 5. Actions wakelock (`sys_wakelock.c`)

Source path embedded in rodata:

| Path | File off → VA |
|---|---|
| `WEST_TOPDIR/zephyr/soc/arm/actions/leopard/sys_wakelock.c` | `0x15f466` → **`0x1015f466`** |

Assert strings confirm reference-counted wakelocks:

| Assert | File off → VA |
|---|---|
| `wakelock->ref_cnt < 0xFFFF` | `0x15f44b` → `0x1015f44b` |
| `wakelock->ref_cnt > 0` | `0x15f4a0` → `0x1015f4a0` |

Wakelocks sit **below** application battery policy and **above** SoC sleep entry — holding a wakelock prevents premature `PM_STATE_SOFT_OFF` transitions while audio, display, or OTA paths are active (cross-ref `ble_connectivity`, `audio_display` device PM handlers).

## 6. Zephyr PM (`power.c` + device handlers)

### 6.1 Core PM subsystem

| Symbol / path | File off → VA |
|---|---|
| `WEST_TOPDIR/zephyr/subsys/pm/power.c` | `0x161800` → **`0x10161800`** |
| `_pm_devices` | `0x161974` → `0x10161974` |
| `pm_early_suspend` | `0x161980` → **`0x10161980`** |
| `info.state < (1 + PM_STATE_SOFT_OFF - PM_STATE_ACTIVE)` | `0x161825` → `0x10161825` |

Zephyr PM state machine validates transitions through `PM_STATE_ACTIVE` … `PM_STATE_SOFT_OFF`. **`pm_early_suspend`** runs before devices suspend — typical Android-style early/late suspend ordering on Actions watches.

### 6.2 Registered `pm_control` devices (partial list)

| Handler | File off → VA | Subsystem |
|---|---|---|
| `_lcd_panel_pm_control` | `0x1628cd` → `0x101628cd` | Display panel |
| `_panel_pm_early_suspend` | `0x162853` → `0x10162853` | Panel early suspend |
| `_panel_pm_late_resume` | `0x16286b` → `0x1016286b` | Panel late resume |
| `_panel_pm_enter_low_power` / `_panel_pm_exit_low_power` | `0x16289a` / `0x1628b4` | Panel low-power modes |
| `lcdc_pm_control` | `0x1682d0` → `0x101682d0` | LCD controller |
| `_composer_display_pm_notify_handler` | `0x16550d` → `0x1016550d` | Composer/display stack |
| `_jpeg_hw_pm_control` | `0x163f44` → `0x10163f44` | JPEG accelerator |
| `audio_out_pm_control` | `0x16a2d4` → `0x1016a2d4` | Audio output |
| `audio_out_pm_check_all_sessions` | `0x16a2b4` → `0x1016a2b4` | Blocks sleep if audio active |
| `audio_adc_pm_control` | `0x16b387` → `0x1016b387` | Mic ADC |
| `es8156_pm_suspend` / `es8156_pm_resume` | `0x16b9c8` / `0x16b9da` | ES8156 codec |
| `gpiokey_pm_control` | `0x16c403` → `0x1016c403` | GPIO keys (wake source) |
| `i2cmt_pm_control` | `0x166cf5` → `0x10166cf5` | I2C master |
| `block_dev_pm_control` | `0x167e40` → `0x10167e40` | Storage block dev |

Sleep policy is **device-granular**: each driver registers suspend/resume; audio explicitly checks active sessions before allowing system sleep.

## 7. SoC PMU (`soc_pmu_*`)

| API / log | File off → VA | Role |
|---|---|---|
| `soc_pmu_register_notify` | `0x15f168` → **`0x1015f168`** | PMU event callbacks |
| `soc_pmu_get_wakeup_source` | `0x15f180` → `0x1015f180` | Post-wake reason |
| `soc_pmu_get_counter8hz_cycles` | `0x15f19a` → `0x1015f19a` | Low-power timebase |
| `soc_pmu_alarm8hz_enable` | `0x15f1b8` → `0x1015f1b8` | 8 Hz alarm wake |
| `soc_pmu_get_temperature` | `0x15f208` → `0x1015f208` | Die/charger temp |
| `PM_BAK_TIME` | `0x15ed3e` → `0x1015ed3e` | Backed-up RTC/alarm time |

PMU layer bridges **hardware wake sources** (dock, key, alarm) to Zephyr PM resume paths.

## 8. Phone / accessory battery reporting

| Symbol / log | File off → VA | Transport |
|---|---|---|
| `bt_manager_hfp_battery_report` | `0x183365` → `0x10183365` | Classic HFP indicator |
| `bt_manager_hfp_battery_hprec_report` | `0x183383` → `0x10183383` | High-precision HFP level |
| `hfp battery Indicator enable.` | `0x1831d4` → `0x101831d4` | Feature toggle |
| `_btsrv_hfp_battery_cb` | `0x18b247` → `0x1018b247` | Stack callback |
| `_btsrv_hfp_battery_indicator_cb` | `0x18b364` → `0x1018b364` | Indicator AT path |
| `Battery value: %u` | `0x18ac7b` → `0x1018ac7b` | Debug log |
| `battery level` | `0x18cb8b` → `0x1018cb8b` | Generic level string |
| `ble_to_app_ring_state battery_percent %d,battery_state %d, sn %s` | `0x15b570` → `0x1015b570` | Ring accessory BLE |
| `ring_info type[%d] ... battery_state[%d] battery_percent[%d]` | `0x15695d` → `0x1015695d` | Ring info struct |

Glasses **battery** SOC feeds iPhone/Android status bar via HFP; paired **ring** reports separate `battery_percent` / `battery_state` over vendor BLE.

## 9. Recovery honesty

- **No Ghidra Thumb export** for `app.bin` — function entry points not confirmed.
- **No fuel-gauge IC part numbers** (e.g. CW221X) in Halliday string set; SOC appears **ADC + calibration** (`vd12`, `bat_mv`) rather than a named coulomb counter.
- **Mini charger** behavior inferred from sequential log strings only; exact voltage thresholds not in rodata.
- Cross-leaf: display panel PM defers to `audio_display`; BLE transport defers to `ble_connectivity`.

## Related artifacts

- String bucket: `Reverse/firmware/Halliday/export/official/strings/categorized/power_battery.txt`
- VA index: `manifest.json` (this leaf)
- Export tool: `Reverse/firmware/Halliday/tools/export_halliday.py`
- Verify: `node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs 1.9`
