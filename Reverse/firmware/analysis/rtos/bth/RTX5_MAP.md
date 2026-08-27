# BTH M33 RTX5 Static Map

**Firmware:** `best1600_watch_bth.bin` (Flyme XR 1.0.12.83)  
**Size:** 1,341,116 bytes (0x1476BC)  
**Load base:** `0x14000000` → image end VA `0x141476BC`  
**Core:** BEST1600 Bluetooth subsystem (`CHIP_SUBSYS=bth`), Cortex-M33  
**Extract tool:** `extract_bth_rtos.py` → `rtx5_inventory.json`

---

## Kernel Identity

| Field | Value |
|-------|-------|
| RTOS | **RTX5** (`KERNEL=RTX5`) |
| Version | **V5.5.1** (banner `P RTX V5.5.1`) |
| Build | `BUILD_DATE=Dec 31 2024 14:02:34` |
| Git | `REV_INFO=422729f-dirty:best1600_watch_bth` |
| Product | `SW_VER=Flyme XR 1.0.12.83.20241231_Air_FR` |
| Chip | `CHIP=best1600` |
| Flash | `FLASH_BASE=0x34000000`, `FLASH_SIZE=0x400000` (4 MiB) |
| OTA | `OTA_CODE_OFFSET=0x10000`, `OTA_REMAP_OFFSET=0x400000/2-0x10000` |

### RTX5 Source Paths (in image)

| Path | Role |
|------|------|
| `../../rtos/rtx5/rtx_thread_dump.c` | Thread list / stack dump (`rtx_show_all_threads_usage`) |
| `../../rtos/rtx5/rtx_evr.c` | Event Recorder hooks (`EvrRtxThreadError, thread name:%s, status:%d`) |

### OS Abstraction Layer

BES wraps CMSIS-RTOS2 RTX5 via `../../services/osif/osif_rtx.c`. Thread start/stop is gated by name:

- `request_thread:%s`
- `hold_thread:%s`

Audio flinger and BT host code defer thread creation through this gate (`request thread=%s`, `hold thread=%s`).

---

## Memory & Scheduler Hints

### Build-time layout strings

The image embeds a full multi-core memory map (used by eshell `show memory map`):

| Region | Format string |
|--------|---------------|
| M55 ITCM/DTCM/SYS RAM | `M55_ITCM_BASE/SIZE`, `M55_DTCM_BASE/SIZE`, `M55_SYS_RAM_BASE/SIZE` |
| HIFI4 ITCM/DTCM/SYS RAM | `HIFI4_*` |
| BTH RAM | `BTH_RAM_BASE`, `BTH_RAM_SIZE` |
| Sensor hub RAM | `SENS_RAM_BASE`, `SENS_RAM_SIZE` |
| Flash | `FLASH_BASE`, `FLASH_SIZE` |

BTH eshell can print M55 crash context: `M55 Info,PC:0x%x, LR:0x%x, SP:0x%x`.

### RTX5 thread dump (`rtx_thread_dump.c`)

Entry function: **`rtx_show_all_threads_usage`**. Output begins with `Thread List:`.

#### Per-thread summary line

```
 thread=0x%x, prio=%u state=%-9s thread_addr=0x%08X
```

Alternate header:

```
--- Thread  %d thread=0x%x name=%s
    prio=%u state=%-9s thread_addr=0x%08X
```

#### Stack fields

```
    stack_mem=0x%08X stack_size=%u sp:0x%04x min_stack_free=%u
```

Split variants also present for `stack_mem`/`stack_size` and `sp`/`min_stack_free` alone.

#### Scheduler state names (9-char field)

| String | Meaning |
|--------|---------|
| `INACTIVE` | Not started |
| `READY` | Runnable |
| `RUNNING` | Current |
| `WAIT_DLY` | Delay/sleep |
| `WAIT_JOIN` | Join wait |
| `WAIT_FLAG` | Flag wait |
| `WAIT_SEM` | Semaphore |
| `WAIT_MEM` | Memory pool |
| `WAIT_MUT` | Mutex |
| `WAIT_EVE` | Event flags |
| `WAIT_MGET` | Message queue get |
| `WAIT_MPUT` | Message queue put |
| `TERMINAT` | Terminated |

#### Extended dump (optional)

- Doubly-linked lists: `thread_next/prev`, `delay_next/prev`
- Join/flags: `thread_join`, `flags_options`, `wait_flags`, `thread_flags`
- Timing: `swap_in_time`, `swap_out_time`, `task runtime`, `thread still runing`
- Register frame: `R0–R3`, `R12`, `LR`, `PC`, `XPSR`

#### Usage summary header

```
--- Thread name=%s cpu=%%%d min-free-stack=%d
```

Also dumps memory pool stats (`Memory stack/mp_data/mq_data Stats`) and timer scan (`Timer: %s`, `Oneshot`/`Periodic`).

### CMSIS-RTOS primitives observed

- **Signals:** `hci_rx_thread: osSignalWait fail %d`
- **Mailboxes:** `osMailAlloc` / `osMailPut` (BTH IF, app trace, RPC mailboxes)
- **Idle:** `IdleTask: Failed to register crash dump callback`, `IdleTask: Failed to alloc sleep timer`

---

## Thread Table (16 named threads)

| Thread | Category | Source hint | String VA |
|--------|----------|-------------|-----------|
| `app_thread` | app_main | `../../apps/common/app_thread.c` | `0x1413805c` |
| `app_bt_cmd_thread` | bt_stack | `app_bt_cmd.cpp` | `0x1411623c` |
| `hci_rx_thread` | bt_stack | HCI RX ISR → host stack | `0x1411efb4` |
| `bth_if_thread` | bt_stack | `bth_if_thread_server.c` | `0x14130dc8` |
| `APPTHREAD` | bt_stack | BT application thread mode label | `0x140e6688` |
| `BesbtThread` | bt_stack | Main BT stack thread (logged as `%p`) | `0x1411a7a0` |
| `af_thread` | audio | Audioflinger DMA/signal pump | `0x1412cccc` |
| `xjxr_audio_event_thread` | audio | XJXR audio event loop | `0x1411ab5c` |
| `xjxr_audio_msg_handler_thread` | audio | XJXR audio message handler | `0x1411aad8` |
| `bth_dsp_tx_thread` | audio_dsp | RPC to BTH DSP (`rpc_bth_dsp.c`) | `0x14131ac8` |
| `ota_thread` | ota | BES OTA service | `0x141311f8` |
| `rpc_rx_thread` | rpc_ipc | Generic RPC RX (`rpc_rx_thread.c`) | `0x141317ac` |
| `eshell_rpc_rx_thread` | shell | Remote eshell over core bridge | `0x14141adc` |
| `eshell_thread...` | shell | Local UART eshell reader | `0x14140a3c` |
| `restart_eshell_thread` | shell | debug_i2c re-open helper | `0x14140b94` |
| `BesbtThread` | bt_stack | Main BT stack thread (logged as `%p`) | `0x1411a7a0` |
| `intersys_tx_thread_id` | intersys | INTERSYS TX thread handle (logged as `%p`) | `0x141402fc` |

### Category map

```
┌─────────────────────────────────────────────────────────────┐
│  BT STACK (5+1)                                             │
│  app_bt_cmd_thread, hci_rx_thread, bth_if_thread,           │
│  APPTHREAD, BesbtThread                                     │
├─────────────────────────────────────────────────────────────┤
│  AUDIO (3) + DSP (1)                                        │
│  af_thread, xjxr_audio_event_thread,                        │
│  xjxr_audio_msg_handler_thread, bth_dsp_tx_thread           │
├─────────────────────────────────────────────────────────────┤
│  SHELL / RPC (3) + APP (1)                                  │
│  eshell_thread, eshell_rpc_rx_thread, restart_eshell_thread │
│  rpc_rx_thread, app_thread                                  │
├─────────────────────────────────────────────────────────────┤
│  OTA (1)                                                    │
│  ota_thread                                                 │
└─────────────────────────────────────────────────────────────┘
```

### BT stack threads

| Thread | Function |
|--------|----------|
| `hci_rx_thread` | Pulls HCI ACL/events from controller; uses `osSignalWait`; queues `hci_rx_cmp_q`, `hci_rx_evt_acl_q` |
| `app_bt_cmd_thread` | Factory/test BT commands via mailbox (`app_bt_cmd_mailbox`) |
| `bth_if_thread` | BT host ↔ app interface server (`bth_if_thread_server_init`) |
| `BesbtThread` / `APPTHREAD` | Core BES BT stack scheduling context |

### Audio threads

| Thread | Function |
|--------|----------|
| `af_thread` | Audioflinger: DMA timing, stream handler intervals, signal loss warnings |
| `xjxr_audio_event_thread` | XJXR audio event mail (`xjxr_audio_event_mail`) |
| `xjxr_audio_msg_handler_thread` | Processes multi-core audio messages |
| `bth_dsp_tx_thread` | Sends commands/data to BTH DSP (`rpc_bth_dsp_send_data_*`) |

### Shell / introspection threads

| Thread | Function |
|--------|----------|
| `eshell_thread...` | UART shell input loop (`eshell >` prompt) |
| `eshell_rpc_rx_thread` | Receives remote eshell commands from M55 via core bridge |
| `restart_eshell_thread` | Re-open eshell after `debug_i2c` session |

### OTA

| Thread | Function |
|--------|----------|
| `ota_thread` | Handles OTA flash operations; M55 can trigger `M55_TO_BTH_WRITE_FLASH` / `READ_FLASH` |

---

## Inter-core IPC (BTH ↔ M55)

### INTERSYS mailbox

Source: `../../apps/main/watch_src/.../intersys/intersys_bth_m33/xjxr_intersys_bth.c`

| Symbol | Direction |
|--------|-----------|
| `send_bth_to_m55_msg` | BTH → M55 |
| `send_m55_to_bth_msg` | M55 → BTH |
| `xjxr_bth2m55` | Channel name (BTH → M55) |
| `xjxr_m552bth` | Channel name (M55 → BTH) |

Error strings: `INTERSYS-RX/TX: Invalid msg type`, `INTERSYS-RX: Handler missing`, `INTERSYS-OPEN: rx_flowctrl`.

### RPC layer

| Component | File | Role |
|-----------|------|------|
| `rpc_rx_thread` | `rpc_rx_thread.c` | Generic RPC mailbox consumer |
| `rpc_rx_mailbox` | — | Cross-core RPC queue |
| `bth_dsp_tx_thread` | `rpc_bth_dsp.c` | DSP command/response path |

### M55 notification callbacks (A2DP / BT)

- `notify_a2dp_status_to_m55`
- `notify_a2dp_position_to_m55`
- `notify_a2dp_connected_status_to_M55`
- `m55_bt_adapter_remove_bond_cb`, `m55_ble_remove_bond`, etc.

### Flash proxy (OTA)

- `M55_TO_BTH_WRITE_FLASH`
- `M55_TO_BTH_READ_FLASH`

### ESHELL core bridge

- `XRM_ESHELL` — ring message type for remote shell
- `eshell_corebridge_comm` — M55 ↔ BTH eshell forwarding
- `[APP-ESHELL]ESHELL CMD LOST!!!` / `OUTPUT LOST!!!` — backpressure indicators

---

## ESHELL Introspection Commands (BTH image)

Registered in `../../apps/app_eshell/system/ps.c` and related modules.

### Thread / CPU (`ps.c`)

| Command | Help text |
|---------|-----------|
| `show_threads_usage` | show all threads usage |
| `show_threads_usage_once` | one-shot CPU % per thread |
| `close_threads_usage` | close threads usage |
| `dump_all_threads` | dump threads stack |
| `show_threads_uasges` / `close_threads_uasges` | typo aliases (same handlers) |

Underlying RTX5 dump: `rtx_show_all_threads_usage`.

Alternate thread view (CMSIS-style):

```
Thread %d: / Current Thread:
  ID, Name, Priority, State, Stack Size, Stack Space
  psp/msp/psplimit/msplimit
```

States: `Inactive`, `Running`, `Blocked`, `Terminated`, `Error`.

### Memory

| Command | Purpose |
|---------|---------|
| `show memory map` | Print M55/HIFI4/BTH/SENS/FLASH layout |
| `md` / `md16` / `md32` | Dump memory (8/16/32-bit) |
| `mw` / `mw16` / `mw32` | Write memory |
| `comp` / `comp16` / `comp32` | Compare memory regions |

### GPIO / PMU

| Command | Purpose |
|---------|---------|
| `gpioget` / `gpioset` | GPIO read/write |
| `pmugpioget` / `pmugpioset` | PMU GPIO |

### Sleep / debug

| Command | Purpose |
|---------|---------|
| `sleep` / `msleep` / `shell_sleep` | Delay |
| `debug_i2c` | I2C debug mode; spawns `restart_eshell_thread` |
| `restart_eshell_thread` | Re-open UART eshell |

### BT factory (separate from ps.c)

- `app_bt_cmd_*` test table commands
- `bt_show_link_key`, `dump_key_event`, `ble_*` scan/adv helpers

---

## Key Findings

1. **RTX5 V5.5.1** confirmed; only two RTX5 source paths linked (`rtx_thread_dump.c`, `rtx_evr.c`).
2. **16 named RTOS threads** identified statically; BT stack dominates (5 explicit + BesbtThread + APPTHREAD).
3. **Dual eshell path:** local UART (`eshell_thread`) + M55 proxy (`eshell_rpc_rx_thread` / `XRM_ESHELL`).
4. **INTERSYS** is the primary BTH↔M55 transport; flash OTA proxied via dedicated message types.
5. **Audio pipeline** spans 4 threads: flinger (`af_thread`), XJXR event/msg pair, and DSP RPC tx.
6. **Thread dump format** exposes `prio`, 9-char `state`, `thread_addr`, `stack_mem`, `stack_size`, `sp`, `min_stack_free` — sufficient for live introspection via eshell without JTAG.
7. **`osif_rtx.c` thread gate** (`request_thread`/`hold_thread`) serializes late thread bring-up (likely power/clock dependent).

---

## Regeneration

```bash
python3 Reverse/firmware/analysis/rtos/bth/extract_bth_rtos.py
node Reverse/firmware/analysis/rtos/scripts/verify-leaf.mjs leaf-1.2.1
```
