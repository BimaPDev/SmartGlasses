# BTH + Sensor Hub RTX5 Resource Limits

**Leaf:** `leaf-1.3.1` (`rtos-limits`)  
**Images:**
- BTH: `Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin` (load `0x14000000`)
- Sensor hub carve: `Reverse/firmware/analysis/rtos/sensor_hub/sensor_hub.bin` (parent carve `@0x134070`, FLASH `0x34000000`, size `0x100000`)

**Machine catalog:** `bth_hub_limits.json` (regenerate with `extract_bth_hub_limits.py`)  
**Priors:** `bth/RTX5_MAP.md`, `sensor_hub/SENSOR_HUB_RTOS.md`, `introspection/INTROSPECTION.md`

This leaf documents **companion-core** (BTH M33 + sensor hub) RTX5 resource / flow-control limits. Numeric FreeRTOS `config*` knobs live on M55 leaves; here the recoverable bounds are mostly **banner sizes**, **named thread footprints**, **IPC flow-control strings**, and **soft overload warnings**.

---

## Counts (per core)

| Core tag | Entries | Meaning |
| --- | ---: | --- |
| `bth` | 9 | BTH-only evidence |
| `sensor_hub` | 4 | Hub-carve-only evidence |
| `both` | 6 | Same limit class on both companions |
| **total** | **≥12 (19)** | `bth_hub_limits.json` → `counts` |

Re-measure after regenerate: `python3 extract_bth_hub_limits.py` prints `bth=…, sensor_hub=…, both=…`.

---

## Kernel identity

| Limit | BTH | Sensor hub |
| --- | --- | --- |
| Kernel | `KERNEL=RTX5` | `KERNEL=RTX5` |
| Version banner | `P RTX V5.5.1` @ `0xadd4` | `RTX V5.5.1` @ `0x15d3c` |
| Chip / subsys | `CHIP=best1600` / `CHIP_SUBSYS=bth` | `CHIP=best1600` / `CHIP_SUBSYS=sensor_hub` |
| Flash slot | `FLASH_BASE=0x34000000`, **`FLASH_SIZE=0x400000`** | `FLASH_BASE=0x34000000`, **`FLASH_SIZE=0x100000`** |
| Rev | `REV_INFO=…:best1600_watch_bth` | `REV_INFO=…:sensor_hub` |

Hub **1 MiB** flash is both the carve extent and the build banner — treat that as the hard hub image budget. BTH advertises a **4 MiB** flash map (OTA remap uses half-slot math in the same banner block).

### Max threads (compile-time)

**UNRECOVERED** as `OS_THREAD_NUM` / similar immediates. Soft substitutes:

| Core | Named RTOS thread literals | Role |
| --- | ---: | --- |
| BTH | **16** | BT / audio / RPC / eshell / OTA / INTERSYS |
| Hub | **6** | `sensor_main`, core-bridge TX/RX, SAR, STK501xx ×2 |

These are **lower bounds** on live concurrency, not the RTX pool ceiling.

---

## Thread dump stack fields

Both images ship `rtx_show_all_threads_usage` (`rtx_thread_dump.c`) with identical stack format:

```
    stack_mem=0x%08X stack_size=%u sp:0x%04x min_stack_free=%u
```

| Field | Meaning |
| --- | --- |
| `stack_mem` | Stack base |
| `stack_size` | Allocated bytes |
| `sp` | Current SP (printed as 16-bit `0x%04x`) |
| `min_stack_free` | High-water free bytes |

Also dumps RTX memory pools (`Memory common/stack/mp_data/mq_data Stats`) and software timers — observability for allocator pressure, not fixed pool sizes in rodata.

Offsets: BTH `0xa7e4`; hub carve `0x1574c`.

---

## INTERSYS / RMT_IPC flow control

### BTH ↔ M55 INTERSYS

Source path: `xjxr_intersys_bth.c` (via `intersys_bth_m33`).

| String | Offset | Limit interpretation |
| --- | --- | --- |
| `INTERSYS-OPEN: rx_flowctrl=%d (should be %d)` | `0xe5fcc` | OPEN-time flow-control must match peer expectation |
| `INTERSYS-RX: Invalid msg type: %d` | `0xe5f64` | Typed messages; unknown type rejected |
| `INTERSYS-TX: Invalid msg type: %d` | `0xe5fa8` | Same bound on TX |
| `[%s] error -1, TX too fast` | `0xe5f30` | Soft TX backpressure (`hal_rmt_ipc`) |
| `RMT_IPC-OPEN: rx_flowctrl=%d (should be %d)` | `0xe5e8c` | Generic remote-IPC twin of INTERSYS OPEN check |

**UNRECOVERED:** concrete INTERSYS max payload byte count (no `msg_size=` / MTU string). The hard recoverable protocol bound is **message type validity** plus **rx_flowctrl** agreement.

### Hub RMT_IPC

Hub carve has `RMT_IPC-OPEN: rx_flowctrl=%d (should be %d)` @ `0x12a84` (and a second copy) plus the same `TX too fast` backpressure — M55↔hub core-bridge path, not INTERSYS-named.

---

## OSIF thread-gate serialization (BTH)

`../../services/osif/osif_rtx.c` exposes a named-thread gate:

- `request_thread:%s` / `hold_thread:%s` (@ `0x1300a0` / `0x1300b4`)
- `request thread=%s` / `hold thread=%s` (@ `0x1300c4` / `0x1300d8`)

This is a **concurrency constraint**: late bring-up of audio/BT helper threads is serialized through OSIF request/hold, independent of RTX’s absolute thread pool size. Hub carve has **no** `request_thread` / `hold_thread` strings.

---

## Soft signal / shell backpressure

| Limit | Core | Evidence |
| --- | --- | --- |
| HCI RX signal wait | BTH | `hci_rx_thread: osSignalWait fail %d` @ `0x11ef5c` |
| Audioflinger signal loss | BTH | `af_thread:WARNING:… lost %u signals` @ `0x12cb28` |
| eshell CMD / OUTPUT LOST | BTH | `[APP-ESHELL]ESHELL CMD LOST!!!` / `OUTPUT LOST!!!` @ `0x141a84` / `0x141aa4` |

`af_thread` loss text also appears in the hub carve (`0x1a25c`) inside the **shared pack tail** — do not treat it as hub-local audio policy (see `SENSOR_HUB_RTOS.md` boundary honesty).

---

## Watchdogs / PMU WDT

### BTH — PMU WDT **present**

| Evidence | Offset |
| --- | --- |
| `Error: pmu wdt reboot failed!` | `0xe76e5` |
| `pmu_wdt_irq_handle` | `0x137f80` |
| `wdt_ping_timer` | `0x137f5c` |
| `../../apps/common/app_watchdog.c` | `0x137e10` |

Also: `Error: pmu shutdown failed!`, feed-watchdog warnings in the same module.

### Sensor hub

| Evidence | Offset |
| --- | --- |
| `[SAR5]: sar sensing wdt trigger` | `0x149f0` |
| `pmu_wdt_irq_handle` / `wdt_ping_timer` | `0x2f6d0` / `0x2f6ac` |
| `app_watchdog.c` | `0x2f560` |

Hub **lacks** the BTH-specific `Error: pmu wdt reboot failed!` string; SAR sensing WDT is hub-local.

---

## UNRECOVERED (honest)

1. Compile-time RTX `OS_THREAD_NUM` / max TCB pool size  
2. INTERSYS max payload / mailbox element byte size  
3. Numeric RAM region sizes for `BTH_RAM_SIZE` / `SENS_RAM_SIZE` (eshell prints `%08x` at runtime; no fixed literals in scanned rodata)

---

## Regeneration

```bash
python3 Reverse/firmware/analysis/rtos/limits/bth_hub_limits/extract_bth_hub_limits.py
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.3.1
```
