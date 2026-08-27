# Memory / Heap / PSRAM / MPU Constraints

**Leaf:** 1.2.2 (`rtos-limits`)  ·  **Binaries:** `platform_tester.bin` + `best1600_watch_bth.bin` (1.0.12.83)

**Entries:** 33  ·  **Sized (bytes field set):** 10  ·  **UNRECOVERED:** 4

## Memory map (static banners + display buffer)

| Region | Base / symbol | Size | Source |
|---|---|---|---|
| M55 NOR (XIP) | `FLASH_BASE=0x2C000000` / NC `0x28000000` | **16 MiB** (`0x1000000`) | M55 build banner |
| M55 factory NV | `__factory_start=0x28FFF000` | **4 KiB** (`0x1000`) | banner `FACT_SEC_SIZE` |
| M55 userdata | `__userdata_start=0x28FFC000` | **4 KiB** | banner `USER_SEC_SIZE` |
| M55 OTA code offset | — | **64 KiB** (`0x10000`) | `OTA_CODE_OFFSET` |
| Sensor hub NOR | `FLASH_BASE=0x34000000` / NC `0x30000000` | **1 MiB** (`0x100000`) | hub banner inside M55 image |
| BTH NOR | `FLASH_BASE=0x34000000` | **4 MiB** (`0x400000`) | BTH banner |
| BTH factory NV | `__factory_start=0x303FF000` | **4 KiB** | BTH banner |
| HiFi4 ITCM / DTCM | `0x00840000` / `0x20940000` | **256 KiB** each | DSP banner in M55 |
| JBD framebuffer | (PSRAM/SRAM buffer) | **153600** (`0x25800`) | `mov.w r2, #0x25800` @ `0x2C4985A2` |
| M55/BTH/SENS/HIFI SYS RAM + PSRAM | printed by `show memory map` | **runtime** | format strings only |

Per-core SRAM rows (`M55_ITCM_*`, `M55_DTCM_*`, `M55_SYS_RAM_*`, `BTH_RAM_*`, `SENS_RAM_*`, `PSRAM_*`) are enumerated by eshell/`show memory map` but **sizes are filled at runtime** — not present as `*_SIZE=0x...` build banners (except HiFi4 ITCM/DTCM above and `HIFI4_SRAM_SIZE=0` on the embedded DSP stub).

## OOM / allocation failure paths

| Path | Trigger | Notes |
|---|---|---|
| LVGL temp buffers | `Out of memory, can't allocate a new buffer (increase your LV_MEM_SIZE/heap size)` | From `lv_mem.c`; **LV_MEM_SIZE itself unrecovered** — `lv_mem_alloc` is `LV_MEM_CUSTOM` → heap id 4 |
| LVGL buf slots | `no more buffers. (increase LV_MEM_BUF_MAX_NUM)` | **`LV_MEM_BUF_MAX_NUM=16`** from `cmp *, #0x10` in `lv_mem_buf_get` |
| Custom/multi heap | `[%s] no memory: size=%u`, syspool shortage, `Cannot malloc any RAM` | `bes/heap` + `utils/heap` multi_heap / med_heap / syspool |
| Oversized single alloc | cmp vs **`0x106A000`** in FUN_2c47245c | Reject before malloc; not total heap size |
| FreeRTOS stack | `task %s stack overflow` | `configCHECK_FOR_STACK_OVERFLOW` |
| UsageFault | `(Stack overflow UsageFault)` | Fault pretty-printer |

## Heap stack (honesty)

1. **FreeRTOS `heap_4.c`** is linked (`pvPortMalloc` / `vPortFree` asserts). **`configTOTAL_HEAP_SIZE` is UNRECOVERED** (no `ucHeap` extent; TRACE-interned asserts — see leaf-1.1.1).
2. **BES `multi_heap`** (MCPP + utils) and **syspool** sit beside FreeRTOS; LVGL custom alloc uses heap **id 4** via FUN_2c47266c → FUN_2c47245c.
3. **`heap_5` string absent.** Do not assume heap_5 regions from SDK defaults.
4. Media path: `med_malloc` / `MED_HEAP_BLOCK_MAX_NUM` (numeric N unrecovered).

## MPU honesty (TrustZone absent)

- Source paths **`../../platform/cmsis/mpu_armv8m.c`** and **`../../platform/cmsis/mpu_cfg.c`** appear in **both** M55 and BTH images.
- Runtime string **`Warning, MPU is not setup correctly: %d`** — configuration can fail; static region descriptors were **not** recovered as a table.
- Literal ASCII **`TrustZone` is absent** from both binaries. **`SecureFault`** appears in the UsageFault/HardFault pretty-printer cluster — that is an ARMv8-M fault name, **not** evidence of TrustZone world-switch or signed OTA (same honesty as `STAR_AIR_FULL_WRITEUP.md`).
- MPU here is best read as **optional CMSIS MPU bring-up**, not a proven secure/non-secure split for the product OTA path.

## Key recovered byte sizes

| Name | Bytes | Hex |
|---|---:|---|
| `m55_factory_sec_size` | 4096 | `0x1000` |
| `m55_flash_size` | 16777216 | `0x1000000` |
| `m55_ota_code_offset` | 65536 | `0x10000` |
| `sensor_hub_flash_size` | 1048576 | `0x100000` |
| `bth_flash_size` | 4194304 | `0x400000` |
| `jbd_framebuffer_bytes` | 153600 | `0x25800` |
| `LV_MEM_BUF_MAX_NUM` | 16 | `16` |
| `custom_heap_max_single_alloc` | 17211392 | `0x106a000` |
| `hifi4_itcm_size` | 262144 | `0x40000` |
| `hifi4_dtcm_size` | 262144 | `0x40000` |

## Full inventory

| Name | Value | Bytes | Region | Conf | Offset |
|---|---|---:|---|---|---|
| `m55_factory_nv_start` | 0x28FFF000 | — | flash | high | 0x6752D7 |
| `m55_factory_sec_size` | 0x1000 | 4096 | flash | high | 0x6752F2 |
| `m55_flash_base` | 0x2C000000 | — | flash | high | 0x675319 |
| `m55_flash_nc_base` | 0x28000000 | — | flash | high | 0x67532F |
| `m55_flash_size` | 0x1000000 | 16777216 | flash | high | 0x675348 |
| `m55_userdata_start` | 0x28FFC000 | — | flash | high | 0x675280 |
| `m55_ota_code_offset` | 0x10000 | 65536 | flash | high | 0x67535D |
| `sensor_hub_flash_size` | 0x100000 | 1048576 | flash | high | 0x14A749 |
| `sensor_hub_flash_base` | 0x34000000 | — | flash | high | 0x14A71A |
| `bth_factory_nv_start` | 0x303FF000 | — | flash | high | 0x1475AF |
| `bth_flash_size` | 0x400000 | 4194304 | flash | high | 0x14760E |
| `jbd_framebuffer_bytes` | 0x25800 | 153600 | framebuffer | high | 0x4985A2 |
| `lvgl_oom_buffer_message` | present | — | lvgl | high | 0x41CE98 |
| `LV_MEM_BUF_MAX_NUM` | 16 | 16 | lvgl | high | 0x62BF5C |
| `LV_MEM_SIZE` | UNRECOVERED | — | lvgl | unrecovered | 0x41CE98 |
| `lv_mem_source_path` | star_air_lvgl/src/misc/lv_mem.c | — | lvgl | high | 0x41CE48 |
| `freertos_heap_impl` | heap_4 | — | heap | high | 0x12D5F8 |
| `configTOTAL_HEAP_SIZE` | UNRECOVERED | — | heap | unrecovered | — |
| `bes_multi_heap` | present | — | heap | high | 0xAFA28 |
| `utils_multi_heap` | present | — | heap | high | 0x14744B |
| `custom_heap_max_single_alloc` | 0x106a000 | 17211392 | heap | medium | 0x4724F0 |
| `med_heap_block_max_num` | UNRECOVERED | — | heap | unrecovered | 0xAFE5E |
| `utest_ram_sram_psram` | present | — | psram | high | 0x42975A |
| `PSRAM_SIZE` | UNRECOVERED | — | psram | unrecovered | 0x42861E |
| `memory_map_sram_regions` | M55_ITCM/DTCM/SYS + HIFI4_* + BTH_RAM + SENS_RAM | — | sram | high | 0x428410 |
| `hifi4_itcm_size` | 0x40000 | 262144 | sram | high | 0x133437 |
| `hifi4_dtcm_size` | 0x40000 | 262144 | sram | high | 0x13346D |
| `mpu_armv8m_source` | platform/cmsis/mpu_armv8m.c | — | mpu | high | 0x425CC |
| `mpu_cfg_source` | platform/cmsis/mpu_cfg.c | — | mpu | high | 0x426BC |
| `mpu_setup_warning` | present | — | mpu | high | 0x426DC |
| `TrustZone_ascii` | absent | — | mpu | high | — |
| `stack_overflow_usagefault` | present | — | sram | high | 0x151B6 |
| `freertos_stack_overflow_hook` | present | — | heap | high | 0x12C08A |

## Regenerating

```bash
python3 Reverse/firmware/analysis/rtos/limits/memory_mpu/extract_memory.py
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.2.2
```
