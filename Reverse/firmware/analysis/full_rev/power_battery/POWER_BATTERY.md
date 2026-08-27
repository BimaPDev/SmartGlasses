# Power / Battery / PMU / Sleep — reverse notes

**Firmware:** `x_1.0.12.83/platform_tester.bin`  
**XIP base (M55 HUD):** `0x2C000000` (VA = `0x2C000000` + file offset)  
**SRAM / data alias seen in pools:** `0x3Cxxxxxx`, `0x3Dxxxxxx`  
**Ghidra export:** `Reverse/firmware/export/1.0.12.83/functions/m55/`  
**Readable reconstruction:** [`power_reconstructed.c`](power_reconstructed.c) · VA map: [`manifest.json`](manifest.json)

HUD battery **percent display / circle patch history** is documented separately in  
[`../BATT_CIRCLE_POSTMORTEM.md`](../BATT_CIRCLE_POSTMORTEM.md) — cite only; this leaf owns the **power/PMU/charger/FG/sleep** stack, not the LVGL circle veneer work.

---

## Architecture

```
cw221X fuel gauge (I²C)          sc7288 charger (I²C)
  cw221X-fuel-gauge.c              sc7288_charger.c
        │                                  │
        └──────────┬───────────────────────┘
                   ▼
         FG/CHG HAL cluster ~0x2C49C000
         (cap/volt/curr/temp/cycle getters)
                   │
                   ▼
         battery_mgr.cpp  (xrbm_* thread + mailbox)
         cached SOC u16 @ SRAM 0x3C408A6E
                   │
        ┌──────────┼──────────────┐
        ▼          ▼              ▼
  HUD getters   lv_power_manager  xjxr_battery_stats
  FUN_2c48a2c4  (events/shutdown)  (BLE telemetry timer)
        │
        ▼
  customTimeAndBatteryWidget / icon picker
```

BES on-die PMU lives in `pmu_best1600.c` (LDO/DCDC comps, `pmu_charger_irq_handler`, power-key, shutdown/reboot). External charge path is **sc7288**; SOC is **cw221X**, not the PMU ADC alone.

---

## Source-path string inventory (file off → VA)

| File offset | VA `0x2C…` | Path / symbol |
|---|---|---|
| `0x0392AC` | `0x2C0392AC` | `xjxr_sensor_mgr/m55/battery_mgr.cpp` |
| `0x0418EC` | `0x2C0418EC` | `xjxr_common/xjxr_battery_stats.cpp` |
| `0x043048` | `0x2C043048` | `platform/drivers/fuelgauge/cw221X-fuel-gauge.c` |
| `0x0429D0` | `0x2C0429D0` | `platform/drivers/charger/sc7288_charger.c` |
| `0x015388` | `0x2C015388` | `platform/drivers/ana/best1600/pmu_best1600.c` |
| `0x425DB4` | `0x2C425DB4` | `star_air_lvgl/src/power/lv_power_manager.c` |
| `0x041480` | `0x2C041480` | `xjxr_common/xjxr_system_sleep.cpp` |
| `0x0396F4` | `0x2C0396F4` | `xjxr_sensor_mgr/m55/wear_detection.cpp` |

Related names: `xrbm_thread`, `battery_mgr_mutex`, `register_xr_battery_event_listener`, `register_xr_battery_voltage_monitor`, `dump_battery_info_timer`, `pmu_charger_pluginout_debounce_handler`, `xjxr_system_enter_deep_sleep` / `shallow_sleep`.

---

## Battery SOC path (verified)

| Role | VA | Notes |
|---|---|---|
| SOC getter (HUD) | `0x2C48A2C4` | `ldrh r0, [0x3C408A6E]` — matches BATT_CIRCLE_POSTMORTEM |
| Charging/plug byte | `0x2C48A2B8` | `ldrb` from `0x3D62A481` |
| UI thunk | `0x2C5D68D8` | `bl 0x2C48A2C4` then return |
| Icon band picker | `0x2C5CFE2C` | SOC thresholds 10 / 20 / 30 / … / 90 → LVGL img src |
| FG capacity read | `0x2C49D134` | Requires FG object `+0x48 == 1`; else stub `0x14` (20%) |
| FG voltage read | `0x2C49D108` | Cached `*0x3C43BD00` or recompute via `FUN_2c49ce4c` |
| BM level+volt poll | `0x2C489BD0` | Clamp SOC 0–100; `strh` into `0x3C408A6E`; `bl 0x2C489B5C` notify; then voltage listeners |
| Listener register | `0x2C48A2D0` | `register_xr_battery_event_listener` |
| Voltage monitor reg | `0x2C48A0C0` | `register_xr_battery_voltage_monitor` |

**xrbm mailbox thread** (asm around `0x2C489D94`, not fully recovered as one Ghidra function):

| Msg id | Action |
|---|---|
| `0x20` | USB plug in/out — update charger status via `FUN_2c49b954`, set flag, `FUN_2c489b5c` notify |
| `0x40` | `bl 0x2C489BD0` — refresh SOC/voltage from FG |

Init strings: `start xrbm thread`, `init charger pluginout`, `init battery level and voltage`, `get new battery level: %d`.

---

## Fuel gauge — cw221X

- Probe reads chip id reg `0`; expects **`0xA0`** (`FUN_2c49D6AC`).
- Profile / mode_config / update-flag reset paths log `[SFG] …`, `cw221X Need update profile!`, `not cw221X`.
- Exposed values (strings): voltage, current, capacity, temperature, cycle count, SOH; NV-backed SOC correction `cw_juadge_voltage_soc_correct`.
- Safety: low voltage without charger → shutdown; high temperature → shutdown (`Battery vol was %d…`, `Battery temperature was %d…`).
- Object base seen in getters: **`0x3C43BB10`** (`+0x48` = ready).

---

## Charger — sc7288 + PMU plug IRQ

- `sc7288_detect_device` / `sc7288_init_device`; probe log `[CHG] sc7288 probe successfully, Chip id:0x%x…`.
- Vbus enable/disable reasons, JEITA temp bands adjusting FV/FCC, LCD on/off charge derate.
- PMU side: `pmu_charger_irq_handler`, `pmu_charger_pluginout_debounce_handler`; logs mix `pmu_irq`, `pmu_charger_plug`, `status_charger`.
- Register property switch at `FUN_2c49C0CC` (cases `0x14`/`0x15`/`0x17`/`0x18` …) writes charger regs through `FUN_2c49b35c` / `FUN_2c49b318`.

---

## LVGL power manager

`FUN_2c642C66` (lv_power init path):

1. `FUN_2c48A0C0` — register voltage monitor callback  
2. `FUN_2c48A2D0` — register battery event listener  
3. Create **5 s** `lv_timer` (`FUN_2c62BDD8`) for temp/voltage policy  
4. Sample “already powered on / charging” via vtable query  

State machine strings: `POWER_ON`, `POWER_OFF`, `POWER_OFF_CHARING`, `POWER_ON_CHARGING`, `POWER_REBOOT`.  
Events: `EVENT_CHARGING_ON/OFF`, `EVENT_USER_POWER_ON/OFF`, `EVENT_LOW_BATTERY_POWER_OFF`, `EVENT_USER_POWER_REBOOT`.  
Policy logs: ignore voltage events while charging; shutdown below voltage threshold; flush data when battery below threshold; mainboard/battery temp ≥58 °C in off-charging forces shutdown.

---

## Wear-gated sleep

`xjxr_system_sleep.cpp` policy (strings):

- Abort sleep if **charging**, A2DP/SCO active, screen on, or OTA in progress.  
- **Deep sleep** requires **not wearing**.  
- **Shallow sleep** requires **wearing**.  
- Helpers: `xjxr_system_enter_deep_sleep`, `xjxr_system_enter_shallow_sleep`, `xjxr_system_sleep_again`, `xjxr_system_wake_up`, `xjxr_sleep_confirm_timer`.  

Wear stack: `wear_detection.cpp` → `wear_detect_handler` / `sensor_wear_status_change_notify`; UI `handleWearStateChanged`, `onWearTimeout`; music pause on wear-down. Touch SAR (`stk51158`) is owned by leaf 1.1.1 — here wear is only the **sleep/power gate**.

---

## Battery stats + factory eshell

- `battery_stats_init`, `start_batterystats_timer`, fields `gas_gauge`, `charge_status`, `bat_vol`, `bat_temp`, `bat_soh`, `bat_cycle`, `wear_status`.  
- Eshell: `get_battery_level|temperature|current|cycle_count|voltage`, `get_battery_info_start/stop`, `xjxr_power_cmd`, `set_battery_temp` / `set_mainboard_temp`.

---

## Call-graph edges (into LVGL / RTOS)

| From | To | Meaning |
|---|---|---|
| `0x2C5D9426` (widget ctor) | `0x2C5D68D8` → `0x2C48A2C4` | Idle HUD reads SOC |
| `0x2C642C66` | `0x2C48A2D0` / `0x2C48A0C0` | Power mgr hooks BM |
| `0x2C642C66` | `0x2C62BDD8` | LVGL timer create |
| xrbm loop | `0x2C644324` / `0x2C644388` | RTOS mailbox get/release |
| BM / FG | `0x2C673D88` / `0x2C62C82C` | BES TRACE |

---

## What this leaf does **not** own

- Battery **circle** veneer / bootloop forensics → `BATT_CIRCLE_POSTMORTEM.md`  
- Touch/wear SAR driver details → leaf `1.1.1`  
- BTH image power-key / HOGP battery test strings → leaf `1.3.2` / ring leaves  

---

## Method notes

Four passes: (1) string + VA inventory, (2) decomp of SOC/FG/BM/power-mgr cluster, (3) Capstone confirm of mailbox opcodes `0x20`/`0x40` and literal pools for `0x3C408A6E`, (4) polish against verify-leaf and sibling leaf style.
