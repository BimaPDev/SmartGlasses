# Sensor Hub RTX5 Sub-Image (BEST1600)

Analysis of the **sensor-hub** RTOS image embedded inside `platform_tester.bin` (Flyme XR **1.0.12.83**). The hub is not a separate OTA zip member; the M55 loader pulls a **BES “subsys simple image”** from flash at runtime (`sensor_hub_open`, `Failed to load subsys simple image`).

## Carve summary

| Field | Value |
| --- | --- |
| Parent | `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (6,771,708 B) |
| Carve offset | **`0x134070`** (1,261,680) |
| Carve size | **`0x100000`** (1,048,576 B) → `sensor_hub.bin` |
| Runtime flash base | **`0x34000000`** (`FLASH_BASE` banner) |
| Advertised flash size | **`0x100000`** (1 MiB) |
| Kernel | **RTX5** (`RTX V5.5.1` string @ `0x149DAC`) |
| Build tag | `REV_INFO=422729f-dirty:sensor_hub` @ `0x14A77D` |
| Thread names recovered | **6** RTOS threads (+ 5 hub modules) |
| Carve confidence | **High** start anchor; **medium** on full 1 MiB extent |

### Methodology

Three independent anchors converge on the same blob:

1. **BES OTA header** — second `FF FF FF FF 00 00 04 00` header in the parent (first @ `0x0` is the main M55 image). Hub header @ **`0x134070`** matches the BTH/M55 layout (16-byte prefix then Thumb-2 stub).
2. **`CHIP_SUBSYS=sensor_hub` banner** @ **`0x14A663`** — inside the carved range; includes `FLASH_BASE=0x34000000`, `FLASH_SIZE=0x100000`, `KERNEL=RTX5`.
3. **RTX + source paths** — `RTX V5.5.1` @ `0x149DAC` sits with **`../../tests/sensor_hub/`** compile paths (`sensor_hub_main.c`, `sensor_hub_core_app.c`, `stk5115.c`, `wear_detection_s.cpp`, …).

Header word at **`+0x14`** = **`0x16734`** (91,956 B) is treated as the **code segment size**; banner strings begin near **`0x14A655`**, i.e. immediately after that code span (`0x134070 + 0x16734 = 0x14A7A4`). The remaining bytes up to **`0x234070`** are rodata/metadata/padding in the 1 MiB hub flash slot.

**Boundary honesty:** The start at `0x134070` is well supported. The **1 MiB length** is taken from the hub’s own `FLASH_SIZE=0x100000` string, not from an independent length field in the parent container. The upper third of the carve (`~0x160000`–`0x234070`) also contains **M55-side** rodata strings (audio/BTH/RPC thread names) that share the linked firmware pack — treat that tail as **shared build artifact**, not hub application logic. Hub-specific evidence clusters in **`0x146000`–`0x149000`**.

`extract_sensor_hub.py` implements the search (OTA header + banner + RTX/path scoring) and writes `sensor_hub.bin` + `sensor_hub_inventory.json`.

## Boot / bring-up sequence (string order)

Recovered from hub-side and loader strings (M55 opens the hub; hub pings back):

```
sensor_hub_open                    @ 0x14A814 (loader, rx_sens_trc.c path nearby)
  └─ hal_mcu2sens_open             failure: "hal_mcu2sens_open failed"
  └─ hal_mcu2sens_start_recv       failure: "hal_mcu2sens_start_recv failed"
       └─ sensor_main              sensor_hub_main.c — hub entry thread
            └─ app_sensor_hub_core_timer_init
                 └─ sensor_hub_ping_mcu_timer
                      └─ sns_ping_mcu  →  sns_ready / mcu_ready
                           └─ notify_mcu_sensorhub_ready
                                └─ mcu2sensor_msg_handler (sensor_hub_core_app.c)
                                     └─ init_xr_snshub_sensor_mgr (snshub_sensor_mgr.cpp)
                                          ├─ accel_gyro_s.cpp
                                          └─ wear_detection_s.cpp
```

M55-side counterparts (`init_xr_m55_sensor_mgr`, `register_accel_gyro_listner`) live in the main M55 image under `../../apps/sensorhub/` and communicate over the channels below.

## IPC channels (M55 ↔ hub)

| Channel | Direction | File offset (hub copy) | Role |
| --- | --- | --- | --- |
| **`xjxr_m552sns`** | M55 → hub | `0x146CAC` | Commands, config, enable/disable sensors |
| **`xjxr_sns2m55`** | hub → M55 | `0x146C9C` | Samples, wear events, IMU data to M55 dispatcher |

Both names appear in `../../tests/sensor_hub/../../apps/sensorhub/xjxr_mcu_sensor_communicate.cpp` (duplicate `@ 0x41B74` in the M55 path tree). Synchronization: **`xjxr_ms_mutex`** @ `0x146E50`, **`xjxr_sensor_mutex`** @ `0x1477FC`.

## Thread map (hub-side evidence)

| Thread | Offset | Source path | Role |
| --- | --- | --- | --- |
| **`sensor_main`** | `0x1474A8` | `sensor_hub_main.c` | Hub entry / main loop |
| **`core_bridge_tx_thread`** | `0x14727C` | `app_sensor_hub.cpp` | Core-bridge TX pump (M55↔hub) |
| **`core_bridge_rx_thread`** | `0x147294` | `app_sensor_hub.cpp` | Core-bridge RX pump |
| **`sar_thread`** | `0x147A5C` | `sar/stk5115.c` | STK5115 SAR / temple touch proxy |
| **`stk501xx_thread`** | `0x148C18` | `wear_detection_s.cpp` | STK501xx wear — common path |
| **`stk501xx_cust_thread`** | `0x148BE4` | `wear_detection_s.cpp` | STK501xx wear — custom FSM |

### Hub modules (not all are OS threads)

| Module | Source | Notes |
| --- | --- | --- |
| `mcu2sensor_msg_handler` | `sensor_hub_core_app.c` | IPC dispatch from M55 |
| `accel_gyro_s` | `accel_gyro_s.cpp` | 6-axis IMU hub-side aggregator |
| `wear_detection_s` | `wear_detection_s.cpp` | Wear FSM / STK501xx glue |
| `snshub_sensor_mgr` | `snshub_sensor_mgr.cpp` | Sensor manager init |
| `sensor_hub_core_app` | `sensor_hub_core_app.c` | Ping timer, ready handshake |

### M55-only names (not in hub carve)

These thread strings exist in **`platform_tester.bin`** but only under **`../../tests/besair_platform/`** or early M55 rodata — **not** tagged `../../tests/sensor_hub/`:

- `sar_thread_51155`, `sar_thread_51158` — temple touch on M55 (`stk51155.c` / `stk51158.c` paths @ `0x43xxx`–`0x45xxx`)
- `touch_trd`, `stk_touch_trd` — M55 touch job threads

Do not attribute these to the hub RTX5 image.

## RTOS objects (selected)

| Name | Type | Offset |
| --- | --- | --- |
| `sensor_hub_ping_mcu_timer` | timer | `0x147600` |
| `sar_mailbox` | mailbox | `0x147A74` |
| `app_core_bridge_tx_mutex` | mutex | `0x1472AC` |
| `app_core_bridge_tx_mailbox` | mailbox | `0x1472C8` |
| `STK501XX_WEAR_DAEMON_TIMER` | timer | `0x148C28` |
| `xjxr_ms_mutex` | mutex | `0x146E50` |
| `xjxr_sensor_mutex` | mutex | `0x1477FC` |

Full list: `sensor_hub_inventory.json` → `rtos_objects`.

## Regenerate

```bash
cd Reverse/firmware/analysis/rtos/sensor_hub
python3 extract_sensor_hub.py
node ../scripts/verify-leaf.mjs leaf-1.2.2
```
