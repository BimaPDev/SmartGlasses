# Sensors / IMU / Sensor Hub — reverse notes

**Firmware:** `x_1.0.12.83/platform_tester.bin`  
**XIP base (M55 HUD):** `0x2C000000`  
**String/rodata view used by literal pools:** `0x3C000000 + file_off`  
**Ghidra export:** `Reverse/firmware/export/1.0.12.83/functions/m55/`

Readable reconstruction: [`sensors_reconstructed.c`](sensors_reconstructed.c).  
VA map: [`manifest.json`](manifest.json).

---

## Architecture (evidence-based)

Star Air splits sensing across **two BEST1600 images**:

| Role | Evidence |
|---|---|
| **M55 HUD** (`platform_tester.bin` @ `0x2C000000`) | `xjxr_sensor_mgr/m55/m55_sensor_mgr.cpp`, `accel_gyro.cpp`, `apps/sensorhub/xjxr_mcu_sensor_communicate.cpp` |
| **Sensor Hub MCU** (subsys) | Banner @ file `0x14A663`: `CHIP_SUBSYS=sensor_hub`, `FLASH_BASE=0x34000000`, `FLASH_SIZE=0x100000`, `KERNEL=RTX5`, `REV_INFO=422729f-dirty:sensor_hub` |

Load/bring-up strings (M55 side):

- `Failed to load subsys simple image: %d`
- `hal_mcu2sens_open failed: %d` / `hal_mcu2sens_start_recv failed: %d`
- `sensor_hub_open` / `sensor_hub_open failed: %d`
- `Start to rx sensor_hub trace` (`rx_sens_trc.c`)

```
LVGL / Launcher / factory fac_cmd
        │
        ▼
m55_sensor_mgr / accel_gyro.cpp     ◄── TRACE tags: init_xr_m55_sensor_mgr,
        │                               register_accel_gyro_listner,
        │                               sensor_ag_poll_notify
        ▼
xjxr_mcu_sensor_communicate.cpp     ◄── channels xjxr_m552sns / xjxr_sns2m55
        │   (hal_mcu2sens_* / rmt_ipc)
        ▼
Sensor Hub @ 0x34000000             ◄── snshub_sensor_mgr.cpp, accel_gyro_s.cpp,
        │                               xjxr_common_sensor.c, sensor_hub_main.c
        ▼
IMU (accel+gyro [+mag]) + SAR/wear  ◄── AGM globals g_ag_init / g_ag_reg / g_m_*
```

**Call-graph edge into LVGL / RTOS:** factory/UI paths call `registry_lookup` and `lv_obj_add_flag_invalidate` while resolving the `sns_ready` label (e.g. `FUN_2c5282a0` @ `0x2c5282a0` loads `sns_ready` then paints LVGL objects). Sensor Hub itself reports `KERNEL=RTX5`. IPC uses BES `hal_mcu2sens_*` / `hal_rmt_ipc_send_seq` (string @ `0x146BB8` area).

No ASCII driver name for the IMU die (no `BMI`/`LSM6`/`ICM` string hit). Do **not** invent a part number; the firmware only names the software AGM layer.

---

## Source path inventory (ASCII in bin)

### M55 (`xjxr_sensor_mgr/m55/…`, file ~`0x38Cxx`)

| String (file off) | Role |
|---|---|
| `m55_sensor_mgr.cpp` (`0x38CFE`) | M55 sensor manager |
| `init_xr_m55_sensor_mgr` (`0x38D28`) | Init entry TRACE tag |
| `accel_gyro.cpp` (`0x38D40`) | Accel/gyro client on M55 |
| `sensor_ag_poll_notify` (`0x38D88`) | Poll → notify path |
| `Accel and Gyro cali data not found` (`0x38DCC`) | Missing NV cal |
| `invalid xjxr mcu sensor msg` (`0x38E08`) | Bad IPC payload |
| `not expected sensor type:%d` (`0x38E24`) | Type filter |
| `sensor_factory_data_notify` (`0x38E40`) | Factory sample push |
| `only support agm %d` (`0x38E5C`) | AGM-only gate |
| `register_accel_gyro_listner` (`0x38E9C`) | Listener register (typo in binary) |
| `unegister_accel_gyro_listner` (`0x38EE4`) | Listener unregister |
| `xjxr_mcu_sensor_communicate.cpp` (`0x41A9C`) | M55↔hub messaging |

BES TRACE for this cluster is **ID-oriented**: many of these tags have **no** `0x3Cxxxxxx` literal-pool pointer in the M55 text. They remain valid offline TRACE decode evidence of the API surface.

### Sensor Hub (`xjxr_sensor_mgr/sensor_hub/…`, file ~`0x147xxx`–`0x149xxx`)

| String | Role |
|---|---|
| `sensor_hub_main.c` / `sensor hub main..` / `sensor_main` | Hub boot |
| `sensor_hub_core_app.c` | Core app |
| `app_sensor_hub.cpp` / `app_sensor_hub_core_timer_init` | Hub app + ping timer |
| `sns_ping_mcu` / `sns_ready` / `mcu_ready` | Readiness handshake |
| `notify_mcu_sensorhub_ready` / `mcu2sensor_msg_handler` | Ready notify + MCU→sensor handler |
| `xjxr_common_sensor.c` | Common enable/register/data path |
| `submit_sensor_data_event` | Event submit |
| `snshub_sensor_mgr.cpp` / `init_xr_snshub_sensor_mgr` | Hub sensor mgr |
| `accel_gyro_s.cpp` | Hub-side AG driver glue |
| `sensor_agm_event_callback` | AGM sample callback |
| `sensor_factory_data_callback` / `reg_unreg_sensor` | Factory + reg API |
| `wear_detection_s.cpp` | Wear (SAR) — owned by touch leaf; cited only as sibling |

---

## IPC messaging (`xjxr_mcu_sensor_communicate`)

Channel name strings (duplicated on M55 @ `0x41B74` and hub @ `0x146C9C`):

| Channel | Direction |
|---|---|
| `xjxr_m552sns` | M55 → Sensor Hub |
| `xjxr_sns2m55` | Sensor Hub → M55 |

Supporting symbols:

- `xjxr_register_rx_msg_handler` / `xjxr_unregister_rx_msg_handler`
- `xjxr_mcu_sensor_receive_message_no_rsp`
- `xjxr_ms_mutex`
- Debug: `msg_id: %02x, msg_data: %s, msg_data_len: %d`
- Errors: `invalid route direct:%d`, `%s unsupported message route direction:`, `%s handler [%d 0x%p] already exist|not exist`

**Mapped code (literal pools → `0x3C14…` strings):**

| Semantic name | VA | Evidence |
|---|---|---|
| `xjxr_mcu_sensor_ipc_trace` | `0x2c5267c0` | Pool → `xjxr_mcu_sensor_communicate.cpp` + `rmt_ipc_send_seq` |
| `xjxr_mcu_sensor_msg_dispatch` | `0x2c52680c` | Capstone: loads `msg_id` fmt, `demo_no_rsp_cmd_received_handler`, `xjxr_m552sns` (`2sns`), `xjxr_register_rx_msg_handler`; Ghidra missed this as a named function |
| `xjxr_mcu_sensor_bridge_locked` | `0x2c526a40` | Pool → `xjxr_ms_mutex`, `xjxr mcu_sensor communication` |

Handshake-related TRACE stubs (noreturn assert paths with hub source paths in pool):

| Name | VA | String in pool |
|---|---|---|
| `hal_mcu2sens_recv_fail_trace` | `0x2c527144` | `hal_mcu2sens_start_recv failed: %d` |
| `notify_mcu_sensorhub_ready_trace` | `0x2c527494` | mid-string of `notify_mcu_sensorhub_ready` |
| `xjxr_common_sensor_init_guard` | `0x2c52751c` | `xjxr_common_sensor.c` |
| `xjxr_common_sensor_bad_dtype` | `0x2c527564` | `sensor: Data type %d not supported` when getter returns dtype `0xd` |

Common-sensor log formats (string table @ `0x147718`+):

```
sensor: sensor %d enable failed
sensor: %s, event_cb is NULL
sensor: Data type %d not supported
sensor: unregister type:%d,dt:%d
sensor: register type:%d, dt:%d, op:%d, inited:%d, event_cb:%p
```

---

## IMU / AGM software model

Hub-side status format (full string @ file `0x148FC8`, pool fragments used by `FUN_2c529be4` @ `0x2c529be4`):

```
%s, amg_type=%d, g_ag_init=%d, g_m_init=%d, en=%d, g_ag_reg=%d, g_m_reg=%d
```

Interpretation from names only (no invented registers):

| Symbol | Meaning |
|---|---|
| `amg_type` / AGM | Accel + Gyro (+ Mag) product type id |
| `g_ag_init` / `g_ag_reg` | Accel-gyro bring-up / listener registry |
| `g_m_init` / `g_m_reg` | Mag (or secondary) bring-up / registry |
| `en` | Enable flag |

Related hub TRACE stubs with `accel_gyro_s.cpp` / `sensor_agm_event_callback` in pool:

| Name | VA |
|---|---|
| `sensor_agm_event_callback_trace` | `0x2c5299c8` (line imm `0x2c` = 44) |
| `sensor_factory_data_callback_trace` | `0x2c529b34` |
| `sensor_agm_registry_dump` | `0x2c529be4` |

M55 cal / factory surface (strings @ `0x160xxx`, `fac_cmd_sensor.c`):

- `enable_sensor` / `disable_sensor` / `get_sensor_data` / `stop_sensor_data`
- `sensor_cali` → `Sensor cali:type:%d result:%d data:%d,%d,%d,%d,%d,%d`
- `imu cal crc error` — IMU calibration blob CRC check failed (no algorithm recovered from ASCII alone)

---

## Address notes

- Code executes at **`0x2C……`** (Ghidra `FUN_2c…` names).
- Many TRACE string pointers are stored as **`0x3C……`** = `0x3C000000 + file_offset` (verified: `sensor: Data type %d not supported` lit @ `0x2c527618` → `0x3c147758`).
- Sensor Hub runtime flash is advertised as **`0x34000000`** (`FLASH_NC_BASE=0x30000000`). Hub source strings appear inside `platform_tester.bin` for TRACE/decode and for M55 code that was built against the same tree; treat `0x2c526xxx` as **M55-resident** communicate/UI glue that references those strings.

---

## Bring-up order (string-ordered)

1. M55 loads Sensor Hub simple image (`sensor_hub_open`, flash `0x34000000`).
2. `hal_mcu2sens_open` + `hal_mcu2sens_start_recv` open the MCU2SENS IPC.
3. Hub core (`sensor_hub_main` / `app_sensor_hub_core_timer_init`) pings MCU (`sns_ping_mcu`) until `sns_ready` / `mcu_ready`.
4. `notify_mcu_sensorhub_ready` / `mcu2sensor_msg_handler` complete the handshake.
5. `init_xr_snshub_sensor_mgr` + `xjxr_common_sensor` register types; `accel_gyro_s` installs `sensor_agm_event_callback`.
6. M55 `init_xr_m55_sensor_mgr` + `register_accel_gyro_listner` subscribe over `xjxr_sns2m55`.
7. Factory/`fac_cmd_sensor` can `enable_sensor` / `sensor_cali` (CRC fail → `imu cal crc error`).

RTOS edge: Sensor Hub banner `KERNEL=RTX5`. LVGL edge: `FUN_2c5282a0` binds UI to `sns_ready`.

---

## What was not recovered (honest gaps)

- Exact IMU I²C/SPI register map / chip ID (no part-number string).
- Numeric `msg_id` enum table (only printf format found).
- Full bodies of `init_xr_m55_sensor_mgr` / `register_accel_gyro_listner` (TRACE tags without literal-pool xrefs under `0x3C`).

Reconstruction in `sensors_reconstructed.c` models the **messaging and AGM control plane** that *is* evidenced, with HAL stubs for the rest.
