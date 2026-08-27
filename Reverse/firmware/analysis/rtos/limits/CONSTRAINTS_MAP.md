# RTOS Constraints & Limits Map — Flyme XR 1.0.12.83 (BEST1600)

**Firmware:** `Reverse/firmware/x_1.0.12.83/`  
**Integration leaf:** leaf-2.1 (unlazy scope `rtos-limits`)  
**Machine index:** [`manifest.json`](manifest.json)  
**Prior RTOS map:** [`../RTOS_MAP.md`](../RTOS_MAP.md)

This document integrates **six verified analysis leaves** into one scannable constraints catalog: FreeRTOS compile-time features, per-thread stacks/priorities, timing/WDT, memory/MPU, BTH+hub RTX5 bounds, and application/protocol hard limits. Numeric claims require binary evidence (string + Capstone/create-site/descriptor); gaps are marked **UNRECOVERED** rather than filled with SDK defaults.

---

## Executive summary

| Metric | Count |
|---|---:|
| **Total constraint entries** (all leaves) | **275** |
| FreeRTOS config | 25 (17 valued, **8 UNRECOVERED**) |
| Stacks / priorities | 60 (32 M55 stacks + 32 prios recovered/inferred; **27** named gaps) |
| Timing / watchdog | 102 (11 numeric ms recovered; most named timers period-opaque) |
| Memory / MPU | 33 (10 sized bytes; **4 UNRECOVERED**) |
| BTH + Sensor Hub | 19 (**OS_THREAD_NUM**, INTERSYS payload UNRECOVERED) |
| Application / protocol | 36 (Share 4096/8192 = writeup-only) |

### Three kernels, one product (cross-link)

| Core | Kernel | Static threads | Flash budget (banner) |
|---|---|---:|---|
| M55 | FreeRTOS 10.4.1 + CMSIS-RTOS2 | 60 | **16 MiB** (`0x1000000`) |
| BTH | RTX5 5.5.1 | 16 | **4 MiB** (`0x400000`) |
| Sensor Hub | RTX5 5.5.1 | 6 | **1 MiB** (`0x100000`) |

Static inventories are **lower bounds**. Full live `stack_size` / `prio` / dynamically created tasks require on-device **`eshell > dump_all_threads`** (see [Runtime-only path](#runtime-only-path-eshell-dump_all_threads)).

### Strongest recovered hard numbers (preview)

| Domain | Hard limit |
|---|---|
| Stacks | LVGL **32 KiB**, A2DP **32 KiB**, `af_thread` / `rpc_rx` **16 KiB**, JBD display **4 KiB** |
| Display | **640×480**, FB **`0x25800`** (153600 B), FPS throttle **>80** queued frames, WDT **1900 ms** |
| Audio / power | Volume UI **0..16** → `vol_value` max **`0x2D0`**, SOC clamp **0..100** |
| Flash | M55 **16 MiB**, BTH **4 MiB**, hub **1 MiB** |
| Share (writeup) | Preferred ACK chunk **4096**, glasses-asked **8192** |

---

## FreeRTOS config

**Leaf:** [`freertos_config/FREERTOS_CONFIG.md`](freertos_config/FREERTOS_CONFIG.md) · [`freertos_config/freertos_config.json`](freertos_config/freertos_config.json)  
**Binary:** `platform_tester.bin` · XIP `0x2C000000` · Kernel banner `FreeRTOS V10.4.1` @ `0x12BECC`

### Recovered (feature / identity — 17)

| Name | Value | Offset | Notes |
|---|---|---|---|
| `kernel_version` | FreeRTOS 10.4.1 | `0x12BECC` | M55 CMSIS-RTOS2 stack + HiFi4 co-located port strings |
| `cmsis_rtos2_shim` | present | `0x12BE5D` | `cmsis_os2.c` + full API surface |
| `heap_implementation` | **heap_4** | `0x12D613` | `pvPortMalloc` / `vPortFree` asserts |
| `configCHECK_FOR_STACK_OVERFLOW` | enabled (1 or 2) | `0x12BA86` | `vApplicationStackOverflowHook` |
| `configSUPPORT_STATIC_ALLOCATION` | 1 | `0x12CAA1` | `xTaskCreateStatic` family |
| `configSUPPORT_DYNAMIC_ALLOCATION` | 1 | `0x12D0AA` | Dynamic create + heap_4 |
| `configUSE_TIMERS` | 1 | `0x12C862` | `Tmr Svc` daemon |
| `configUSE_EVENT_GROUPS` | 1 | `0x12C1BD` | |
| `configUSE_STREAM_BUFFERS` | 1 | `0x12C412` | |
| `configUSE_TASK_NOTIFICATIONS` | 1 | `0x12CF5C` | |
| `configUSE_MUTEXES` | 1 | `0x12D1C2` | |
| `configUSE_COUNTING_SEMAPHORES` | 1 | `0x12D1FC` | |
| `configASSERT` | enabled | `0x12BE99` | Dense assert cluster |
| `hifi4_freertos_port` | XCC/Xtensa | `0x12D7AB` | Only FreeRTOS port path string in image |
| `smf_thread_hifi4` | present | `0xC5F55` | HiFi4 SMF wrapper |
| `idle_task_name` | IDLE | `0x12CBEC` | |
| `vTaskStartScheduler` | present | `0x12CBF1` | |

### UNRECOVERED numerics (8) — TRACE-interned / no bound immediate

| Name | Why |
|---|---|
| **`configMAX_PRIORITIES`** | Assert @ `0x12CB89`; 0 VA refs |
| **`configMAX_TASK_NAME_LEN`** | Assert @ `0x12CC9A`; 0 VA refs |
| **`configTOTAL_HEAP_SIZE`** | No `ucHeap` extent; do not confuse with multi_heap / LV_MEM |
| **`configTICK_RATE_HZ`** | No tick-freq banner; LVGL tick ≠ kernel rate |
| **`configMINIMAL_STACK_SIZE`** | Runtime print format only |
| `portBYTE_ALIGNMENT` | Mask assert unbound |
| `cmsis_osThreadFlags_max` | API present; 31-bit default unproven |
| `cmsis_osMessageQueue_max` | Per-queue capacities elsewhere |

---

## Stack and priority

**Leaf:** [`stacks_priorities/STACKS_PRIORITIES.md`](stacks_priorities/STACKS_PRIORITIES.md) · [`stacks_priorities/stacks_priorities.json`](stacks_priorities/stacks_priorities.json)  
**Method:** BES create-site descriptors (`stack_size` + `osPriority_t` next to TRACE magic); name bound by proximity.

| Metric | Count |
|---|---:|
| JSON entries | **60** |
| M55 stacks recovered/inferred | **32** |
| M55 priorities recovered/inferred | **32** |
| BTH static create-site | **1** (`restart_eshell_thread` = 1024 / Normal) |
| Named inventory UNRECOVERED | **27** |

### Largest / notable stacks (bytes)

| Thread | Stack | Priority | Conf. |
|---|---:|---|---|
| `lvgl_task_handler_thread` | **32768** | High (40) | recovered |
| `a2dp_sink_player_thread` | **32768** | High3 (43) | recovered |
| `af_thread` | **16384** | High3 (43) | recovered |
| `rpc_rx_thread` | **16384** | High (40) | recovered |
| `local_decode_thread` | 10240 | High3 (43) | recovered |
| `eshell_thread` | 10240 | High (40) | recovered |
| `bth_if_client_thread` | 6144 | High (40) | recovered |
| `touch_job_thread` | 5120 | High4 (44) | inferred |
| `jbd4010_display` | **4096** | High (40) | recovered |
| `core_bridge_rx_thread` | 4096 | High (40) | recovered |
| `xrbm_thread` | 2048 | High (40) | recovered |
| `lvgl_async` | 2048 | High2 (42) | recovered |
| `restart_eshell_thread` | 1024 | Normal (24) | inferred |

Observed CMSIS priority band: **Normal (24)**, **AboveNormal7 (39)**, **High (40)** … **High4 (44)**. Most app workers sit at High / High3.

### Gaps

27 inventory names lack a bound descriptor (e.g. `mcpp_srv_thread`, `fac_cmd_trd`, many `*_thread_run` / mailbox-only symbols). Fill via runtime dump (below).

---

## Timing and watchdog

**Leaf:** [`timing_watchdog/TIMING_WATCHDOG.md`](timing_watchdog/TIMING_WATCHDOG.md) · [`timing_watchdog/timing_inventory.json`](timing_watchdog/timing_inventory.json)  
**Entries:** **102** across 8 categories.

| Category | Count |
|---|---:|
| protocol | 30 |
| sensor | 16 |
| ui | 14 |
| audio | 13 |
| factory | 9 |
| display | 8 |
| power | 8 |
| system_wdt | 4 |

### Hard recovered periods

| Name | Value | Evidence |
|---|---|---|
| `jbd4010_display_thread_watchdog` | **1900 ms** (`0x76C`) | Capstone `movw r0,#0x76c` @ display thread |
| `jbd4010_display_fps_throttle_queued_frames` | **80** frames | `cmp r2,#0x50` → throttle when queue **>80** |
| `jbd4010_display_esd_reinit_delay` | **200 ms** | `osDelayMs` path |
| `music_loading_timeout_timer` | **4000 ms** | Log text “4s later” |
| `music_check_status_timer` | **2000 ms** | Log text “2s later” |
| `STK501XX_WEAR_DAEMON_TIMER` | **100 ms** | `movs r1,#0x64` |
| Timer helpers (soft bind) | 60 s / 6 s / 3–10 s clusters | `movw` sites |

### Named but period UNRECOVERED (selected)

- **`wdt_ping_timer` / `app_watchdog`** — feed path high-confidence; ping period not isolated  
- `OTA_TRANSFER_TIMEOUT_TIMER`, `ios_wait_bt_connect_timeout` (`%d`), StateContext / ASR / mute / Drain timeouts  
- Most StarryNet / SPP / ACK / ADV named `osTimer` objects  
- BTH BLE stack timers — **presence skim only** (no Capstone periods in this leaf)

---

## Memory and MPU

**Leaf:** [`memory_mpu/MEMORY_MPU.md`](memory_mpu/MEMORY_MPU.md) · [`memory_mpu/memory_limits.json`](memory_mpu/memory_limits.json)  
**Entries:** **33** · sized bytes set: **10** · UNRECOVERED: **4**

### Flash / DSP / framebuffer sizes

| Name | Bytes | Hex |
|---|---:|---|
| `m55_flash_size` | 16777216 | `0x1000000` (16 MiB) |
| `bth_flash_size` | 4194304 | `0x400000` (4 MiB) |
| `sensor_hub_flash_size` | 1048576 | `0x100000` (1 MiB) |
| `m55_factory_sec_size` / userdata | 4096 each | `0x1000` |
| `m55_ota_code_offset` | 65536 | `0x10000` |
| `hifi4_itcm_size` / `hifi4_dtcm_size` | 262144 each | `0x40000` |
| `jbd_framebuffer_bytes` | **153600** | **`0x25800`** |
| `LV_MEM_BUF_MAX_NUM` | 16 | slots (`cmp #0x10`) |
| `custom_heap_max_single_alloc` | 17211392 | `0x106A000` (reject ceiling, not total heap) |

### Heap stack honesty

1. FreeRTOS **heap_4** linked; **`configTOTAL_HEAP_SIZE` UNRECOVERED**.  
2. BES **multi_heap** / syspool / med_heap sit beside FreeRTOS; LVGL uses custom heap **id 4**.  
3. **`LV_MEM_SIZE` UNRECOVERED** (OOM string present; custom alloc → heap id 4).  
4. **`PSRAM_SIZE`**, **`MED_HEAP_BLOCK_MAX_NUM`** numeric N UNRECOVERED.  
5. Per-core SRAM/PSRAM rows printed by `show memory map` at **runtime** only.

### MPU

- `mpu_armv8m.c` / `mpu_cfg.c` in M55 **and** BTH; warning string if setup fails.  
- Static region table **not** recovered.  
- ASCII **`TrustZone` absent** — SecureFault name ≠ TrustZone product evidence.

---

## BTH and Sensor Hub

**Leaf:** [`bth_hub_limits/BTH_HUB_LIMITS.md`](bth_hub_limits/BTH_HUB_LIMITS.md) · [`bth_hub_limits/bth_hub_limits.json`](bth_hub_limits/bth_hub_limits.json)  
**Entries:** **19** (bth=9, sensor_hub=4, both=6)

| Limit | BTH | Sensor hub |
|---|---|---|
| Kernel | RTX5 **V5.5.1** | RTX5 **V5.5.1** |
| Flash | **`FLASH_SIZE=0x400000`** (4 MiB) | **`FLASH_SIZE=0x100000`** (1 MiB) |
| Named threads (lower bound) | **16** | **6** |
| Stack dump format | `stack_mem` / `stack_size` / `min_stack_free` | Same |
| PMU / app WDT | Present (`pmu_wdt_irq_handle`, `wdt_ping_timer`) | `app_watchdog` + SAR sensing WDT |
| INTERSYS / RMT_IPC | `rx_flowctrl` agreement + invalid msg type + `TX too fast` | RMT_IPC `rx_flowctrl` + `TX too fast` |
| OSIF request/hold gate | Present | Absent |

### UNRECOVERED

| Name | Note |
|---|---|
| **`OS_THREAD_NUM`** / RTX max TCB pool | No compile-time literal; use named-thread lower bounds |
| **INTERSYS max payload bytes** | Type validity + flowctrl only; no `msg_size=` / MTU ASCII |
| `BTH_RAM_SIZE` / `SENS_RAM_SIZE` | Runtime `%08x` prints; no fixed scanned literals |

---

## Application and protocol

**Leaf:** [`app_protocol/APP_PROTOCOL_LIMITS.md`](app_protocol/APP_PROTOCOL_LIMITS.md) · [`app_protocol/app_protocol_limits.json`](app_protocol/app_protocol_limits.json)  
**Entries:** **36** across 8 categories.

| Category | n | Highlights |
|---|---:|---|
| display | 8 | 640×480, FB `0x25800`, FPS **>80**, WDT `0x76C`, bri 0..7109 |
| ble_starrynet | 6 | **27** `handleSystemMsg` actions, 8 CMD enums, ring name ≤30 |
| share_transfer | 5 | `chunkSize` field; preferred **4096** / asked **8192** (writeup) |
| ota | 4 | dual MD5, rollback, no USB gadget |
| audio | 3 | volume **0..16** → **`0x2D0`** |
| power | 2 | SOC **0..100** |
| factory | 3 | NV `0x28FFF000`, `eshell >`, `en_usb` sans gadget |
| ui_lvgl | 5 | `LV_MEM_BUF_MAX_NUM`, dock 4, Domain*.cpp inventory |

### Writeup-only (no M55 ASCII binding)

- Share preferred ACK chunk **4096** / glasses-asked **8192**  
- Audio sample rates 8 / 16 / 44.1 / 48 kHz  
- Launcher dock **4** tiles; **21** NLU Domain*.cpp files  
- Companion brightness scales 0–10 vs TRACE 0–100 wording  

MTU for StarryNet is **runtime-negotiated** (logged), not a fixed firmware constant.

---

## Hard limits summary

Scannable table of the **strongest recovered** numbers across leaves. Writeup-only and UNRECOVERED called out explicitly.

| Domain | Limit | Value | Source leaf |
|---|---|---|---|
| **Stack** | `lvgl_task_handler_thread` | **32768** (32 KiB) | stacks |
| **Stack** | `a2dp_sink_player_thread` | **32768** (32 KiB) | stacks |
| **Stack** | `af_thread` | **16384** (16 KiB) | stacks |
| **Stack** | `rpc_rx_thread` | **16384** (16 KiB) | stacks |
| **Stack** | `jbd4010_display` | **4096** (4 KiB) | stacks |
| **Display** | Panel resolution | **640×480** | app |
| **Display** | Framebuffer | **`0x25800`** (153600 B) | memory / app |
| **Display** | FPS throttle | queued frames **>80** | timing / app |
| **Display** | Frame-path WDT | **1900 ms** (`0x76C`) | timing / app |
| **Display** | ESD reinit delay | **200 ms** | timing |
| **Display** | BLE brightness | **0..7109** (`0x1BC5`) | app |
| **Audio** | UI volume | **0..16** | app |
| **Audio** | `vol_value` max | **`0x2D0`** (720) | app |
| **Power** | Battery SOC clamp | **0..100** | app |
| **Flash** | M55 NOR | **16 MiB** | memory |
| **Flash** | BTH NOR | **4 MiB** | memory / bth |
| **Flash** | Sensor hub NOR | **1 MiB** | memory / bth |
| **LVGL** | `LV_MEM_BUF_MAX_NUM` | **16** | memory / app |
| **BLE** | StarryNet actions | **27** packed | app |
| **Share** | Preferred ACK chunk | **4096** | app (**writeup-only**) |
| **Share** | Glasses-asked chunk | **8192** | app (**writeup-only**) |
| **Sensor** | Wear daemon period | **100 ms** | timing |
| **Audio timer** | Music load / status | **4 s / 2 s** | timing |

### UNRECOVERED (must not invent)

| Symbol / limit | Leaf |
|---|---|
| **`configMAX_PRIORITIES`** | freertos_config |
| **`configMAX_TASK_NAME_LEN`** | freertos_config |
| **`configTOTAL_HEAP_SIZE`** | freertos_config / memory |
| **`configTICK_RATE_HZ`** | freertos_config |
| **`configMINIMAL_STACK_SIZE`** | freertos_config |
| **`LV_MEM_SIZE`** | memory |
| **`PSRAM_SIZE`** | memory |
| **`MED_HEAP_BLOCK_MAX_NUM`** (numeric) | memory |
| **`OS_THREAD_NUM`** (RTX max threads) | bth_hub |
| **INTERSYS max payload size** | bth_hub |
| **`wdt_ping_timer` period** | timing |
| Most named `osTimer` periods | timing |
| 27 M55 thread stack/prio attrs | stacks |
| StarryNet fixed MTU | app (runtime negotiated) |

---

## Unrecovered inventory (honest)

| Leaf | Entries | Unrecovered / opaque | Notes |
|---|---:|---:|---|
| freertos_config | 25 | **8** | All major numeric `config*` knobs |
| stacks_priorities | 60 | **27** named | Stacks/prios missing create-site bind |
| timing_watchdog | 102 | **~91** null `value_ms` | Named objects exist; periods mostly runtime/`%d` |
| memory_mpu | 33 | **4** | `LV_MEM_SIZE`, `configTOTAL_HEAP_SIZE`, med N, `PSRAM_SIZE` |
| bth_hub_limits | 19 | **2** catalogued | `OS_THREAD_NUM`, INTERSYS payload (+ RAM sizes) |
| app_protocol | 36 | 0 “null” | **9 writeup-only** (chunks, dock, rates, …) — not binary-bound |

**Do not** backfill FreeRTOS/CMSIS defaults, iOS keepalive docs, or SDK `FreeRTOSConfig.h` tables into this map without a new binary xref.

---

## Runtime-only path (eshell `dump_all_threads`)

Cross-link: [`../RTOS_MAP.md`](../RTOS_MAP.md) §6 · [`../introspection/INTROSPECTION.md`](../introspection/INTROSPECTION.md) · stacks leaf dump formats.

1. Enter factory / MMI (physical key hold; BTH may log `!!!!!ENGINEER_MODE!!!!!`).  
2. Reach **`eshell >`** via UART test pads or `debug_i2c`.  
3. Run on M55 and/or BTH:

```text
eshell > dump_all_threads
eshell > show_threads_usage_once
```

| What you get | Why static analysis cannot |
|---|---|
| Live `stack_size`, `prio`, `thread_addr`, `min_stack_free` | Create-site descriptors incomplete; PIC/TRACE hides entry VAs |
| Dynamically created / unnamed tasks | Static lists are lower bounds (60+16+6) |
| BTH full stack map | Only `restart_eshell_thread` recovered statically |
| SRAM / PSRAM region sizes | `show memory map` fills `%08x` at runtime |
| FreeRTOS tick / heap high-water | No `vTaskList` / `vTaskGetRunTimeStats` in image |

Format anchors (M55): `stack_mem=0x%08X stack_size=%u` @ `0x1497C0` / `0x426C34`; BTH @ `0xA7E8`.

---

## Artifact index

| Artifact | Path | Leaf | Entries |
|---|---|---|---:|
| **This map** | [`CONSTRAINTS_MAP.md`](CONSTRAINTS_MAP.md) | 2.1 | — |
| **Manifest** | [`manifest.json`](manifest.json) | 2.1 | (index) |
| FreeRTOS config MD/JSON | [`freertos_config/`](freertos_config/) | 1.1.1 | **25** |
| Stacks / priorities MD/JSON | [`stacks_priorities/`](stacks_priorities/) | 1.1.2 | **60** |
| Timing / WDT MD/JSON | [`timing_watchdog/`](timing_watchdog/) | 1.2.1 | **102** |
| Memory / MPU MD/JSON | [`memory_mpu/`](memory_mpu/) | 1.2.2 | **33** |
| BTH + hub limits MD/JSON | [`bth_hub_limits/`](bth_hub_limits/) | 1.3.1 | **19** |
| App / protocol MD/JSON | [`app_protocol/`](app_protocol/) | 1.3.2 | **36** |
| Leaf verifier | [`scripts/verify-leaf.mjs`](scripts/verify-leaf.mjs) | — | — |
| Root verifier | [`scripts/verify-root.mjs`](scripts/verify-root.mjs) | — | — |
| Prior RTOS master map | [`../RTOS_MAP.md`](../RTOS_MAP.md) | rtos-map | 82 threads / 133 IPC |

### Aggregate

| Metric | Value |
|---|---:|
| **Total constraint entries** | **275** |
| Leaves integrated | **6** |
| Section headings (gate strings) | **7** |

### Regeneration

```bash
python3 Reverse/firmware/analysis/rtos/limits/freertos_config/extract_freertos_config.py
python3 Reverse/firmware/analysis/rtos/limits/stacks_priorities/extract_stacks_priorities.py
python3 Reverse/firmware/analysis/rtos/limits/timing_watchdog/extract_timing.py
python3 Reverse/firmware/analysis/rtos/limits/memory_mpu/extract_memory.py
python3 Reverse/firmware/analysis/rtos/limits/bth_hub_limits/extract_bth_hub_limits.py
python3 Reverse/firmware/analysis/rtos/limits/app_protocol/extract_app_limits.py

node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.1.1
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.1.2
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.2.1
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.2.2
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.3.1
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.3.2
node Reverse/firmware/analysis/rtos/limits/scripts/verify-root.mjs
```
