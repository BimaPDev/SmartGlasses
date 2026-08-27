# Stacks and Priorities — M55 FreeRTOS (+ BTH RTX dump note)

**Firmware:** `x_1.0.12.83/platform_tester.bin` (M55), `best1600_watch_bth.bin` (BTH)  
**Prior inventory:** [`../../m55/thread_inventory.json`](../../m55/thread_inventory.json) (60 named threads)  
**Extractor:** [`extract_stacks_priorities.py`](extract_stacks_priorities.py) → [`stacks_priorities.json`](stacks_priorities.json)

This leaf recovers **per-thread `stack_size` (bytes)** and **CMSIS `osPriority_t`** from static create-site descriptors, and documents how **runtime** sizes appear on both cores via eshell.

---

## Summary

| Metric | Count |
|--------|------:|
| M55 threads with recovered/inferred **stack_size** | **32** |
| M55 threads with recovered/inferred **priority** | **32** |
| BTH static create-site stacks | **1** (`restart_eshell_thread`) |
| Named inventory gaps (`unrecovered`) | **27** |
| JSON `entries` total | **60** |

Known entry VAs (from prior map; stack attrs live in *create* rodata, not in the thread body):

| Thread | Entry VA |
|--------|----------|
| `jbd4010_display` | `0x2C499270` |
| `xrbm_thread` | `0x2C489D94` |
| `af_thread` | `0x2C14D89E` |
| `sar_thread` | `0x2C527B00` |

---

## Recovery methodology

### BES create-site descriptor

BES CMSIS thread creation leaves a compact record in `.rodata` next to the thread name / mailbox strings:

```text
uint32_t pad[2|3];     // zeros
uint32_t magic_or_id;  // TRACE / link id (not a C string)
uint32_t stack_size;   // bytes — CMSIS osThreadAttr_t.stack_size
uint32_t priority;     // osPriority_t
uint32_t flag;         // 0 or 1 (attr bit / detached-like)
uint32_t zero;
```

Two pad lengths appear (`pad2` / `pad3`). Example — `jbd4010_display` @ file `0x42594`:

| Word | Value | Meaning |
|------|-------|---------|
| +0..+8 | `0` | pads |
| +0xC | `0x3D643428` | magic / TRACE id |
| +0x10 | `0x1000` | **stack_size = 4096** |
| +0x14 | `0x28` | **priority = 40 = osPriorityHigh** |
| +0x18 | `1` | flag |
| +0x1C | `0` | terminator |

Absolute pointers to thread-name strings are rare (PIC / TRACE hashing), so binding is by **proximity** of the descriptor to the RTOS name string (and curated review for mailbox clusters).

### Confidence tags

| Tag | Meaning |
|-----|---------|
| **recovered** | Descriptor ≤ ~0x100 from an exact thread name / unambiguous create cluster |
| **inferred** | Descriptor in a multi-thread cluster (mailboxes, panel triples, sibling attrs) |
| **unrecovered** | Inventory name with no associated descriptor |

### CMSIS priority enums (observed)

| Value | Name |
|------:|------|
| 24 | `osPriorityNormal` |
| 39 | `osPriorityAboveNormal7` |
| 40 | `osPriorityHigh` |
| 41–44 | `osPriorityHigh1` … `High4` |

Most application workers use **High (40)** or **High3 (43)**; eshell restart helpers use **Normal (24)**.

### What did *not* work alone

- Literal-pool refs to `name` at XIP `0x2C000000` / SRAM alias `0x3C000000` are almost absent for RTOS names.
- Blind `MOVW` of `0x400`/`0x1000` is too sparse / ambiguous without the descriptor table.
- Entry-function VAs are not referenced as absolute words for these creates (create sites pass Thumb entry via other means).

---

## Runtime path (eshell) — M55 and BTH

Factory / MMI → UART or `debug_i2c` → `eshell >`.

| Command | Effect |
|---------|--------|
| `dump_all_threads` | Full TCB dump (RTX-format strings also linked into M55 image) |
| `show_threads_usage_once` | Per-thread `name`, CPU %, `min-free-stack` |
| `show_threads_usage` | Periodic usage |

### Format strings (both images)

```text
stack_mem=0x%08X stack_size=%u
--- Thread name=%s cpu=%d min-free-stack=%d
     Stack Size: %u bytes
```

| Image | `stack_mem=… stack_size=%u` | `min-free-stack` | `Stack Size: %u bytes` |
|-------|----------------------------|------------------|-------------------------|
| **M55** | `0x1497C0`, `0x426C34` (dup) | `0x14950C`, `0x426988` | `0x427DC5` |
| **BTH** | `0xA7E8` | usage line @ `0xA510` | `0x140E95` |

**BTH note:** RTX5 `rtx_show_all_threads_usage` / `dump_all_threads` prints **live** `stack_size` and `prio` from the TCB. Static create-site descriptors on BTH are sparse; this leaf recovered **`restart_eshell_thread` = 1024 bytes / `osPriorityNormal`** @ BTH `0x140BC8`. Prefer the runtime dump for a full BTH stack map.

---

## Tables by subsystem (M55)

### Display / LVGL / panel

| Thread | Stack | Priority | Conf. | Attr @ |
|--------|------:|----------|-------|--------|
| `jbd4010_display` | 4096 | High (40) | recovered | `0x42594` |
| `lvgl_task_handler_thread` | **32768** | High (40) | recovered | `0x41DB00` |
| `lvgl_async` | 2048 | High2 (42) | recovered | `0x41D978` |
| `touch_job_thread` | 5120 | High4 (44) | inferred | `0x43D2C` |
| `touch_trd` | 4096 | High3 (43) | inferred | `0x43D04` |
| `sar_thread_51158` | 4096 | High4 (44) | inferred | `0x43CDC` |

### Audio / DSP

| Thread | Stack | Priority | Conf. | Attr @ |
|--------|------:|----------|-------|--------|
| `af_thread` | **16384** | High3 (43) | recovered | `0x14E510` |
| `a2dp_sink_player_thread` | **32768** | High3 (43) | recovered | `0x164B08` |
| `local_decode_thread` | 10240 | High3 (43) | recovered | `0x3E4BC` |
| `xjxr_audio_msg_handler_thread` | 2048 | High (40) | recovered | `0x3D85C` |
| `m55_dsp_tx_thread` | 4096 | High (40) | inferred | `0x163188` |
| `bth_dsp_tx_thread` | 4096 | High (40) | recovered | `0x163338` |

### BLE / bridge / RPC / StarryNet

| Thread | Stack | Priority | Conf. | Attr @ |
|--------|------:|----------|-------|--------|
| `rpc_rx_thread` | **16384** | High (40) | recovered | `0x1634BC` |
| `bth_if_client_thread` | 6144 | High (40) | recovered | `0x164128` |
| `core_bridge_rx_thread` | 4096 | High (40) | recovered | `0x147338` |
| `core_bridge_tx_thread` | 3072 | High1 (41) | inferred | `0x147364` |
| `starrynet_rx_msg_thread` | 4096 | High (40) | inferred | `0x329EC` |
| `starrynet_tx_msg_thread` | 4096 | High (40) | inferred | `0x32A14` |
| `eshell_rpc_rx_thread` | 2048 | High (40) | recovered | `0x429D44` |
| `xr_trace_task` | 4096 | AboveNormal7 (39) | recovered | `0x37924` |

### Power / sensors / touch / shell / other

| Thread | Stack | Priority | Conf. | Attr @ |
|--------|------:|----------|-------|--------|
| `xrbm_thread` | 2048 | High (40) | recovered | `0x396C4` |
| PWRS supply-changed path | 5120 | High (40) | inferred | `0x14D198` |
| `sar_thread` | 2048 | High (40) | recovered | `0x147AC4` |
| `stk501xx_thread` | 4096 | High (40) | recovered | `0x148D2C` |
| `stk501xx_cust_thread` | 2048 | High (40) | inferred | `0x148D54` |
| `stk_touch_trd` / `_51155` / `sar_thread_51155_4pad` | 4096 | High4 (44) | inferred | `0x460C4` / `0x45258` / `0x44418` |
| `eshell_thread` | **10240** | High (40) | recovered | `0x42768C` |
| `restart_eshell_thread` | 1024 | Normal (24) | inferred | `0x4278A4` |
| `aslt_thread` | 1024 | High (40) | recovered | `0x380EC` |
| `ota_checker` | 4096 | High (40) | recovered | `0x28800` |

### BTH (static)

| Thread | Stack | Priority | Conf. | Attr @ |
|--------|------:|----------|-------|--------|
| `restart_eshell_thread` | 1024 | Normal (24) | recovered | `0x140BC8` |

---

## Gaps (unrecovered)

27 inventory names still lack a bound descriptor (examples: `mcpp_srv_thread`, `fac_cmd_trd`, `async_handler`, many `*_thread_run` / mailbox-only symbols, StarryNet start helpers). Use **`dump_all_threads`** on device to fill `stack_size` / `prio` at runtime, then diff against this static table.

---

## Reproduce

```bash
python3 Reverse/firmware/analysis/rtos/limits/stacks_priorities/extract_stacks_priorities.py
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.1.2
```
