# FreeRTOS / CMSIS-RTOS2 Compile-Time Config

**Leaf:** 1.1.1 (`rtos-limits`)  ·  **Binary:** `platform_tester.bin` 1.0.12.83  ·  **XIP:** `0x2C000000`

**Kernel banner:** FreeRTOS 10.4.1  ·  **Recovered (valued):** 17  ·  **Unrecovered / null:** 8

## Recovered values

| Name | Value | Unit | Confidence | File offset | Evidence |
|---|---|---|---|---|---|
| `kernel_version` | FreeRTOS 10.4.1 | — | high | 0x12BECC | banner string `FreeRTOS V10.4.1` |
| `cmsis_rtos2_shim` | present | — | high | 0x12BE5D | source path cmsis_os2.c + API symbols (osThreadSetPriority/GetPriority/Yield/Suspend/Resume, osDelay/osDelayUntil, osEventFlags*, osMutex*, osSemaphore*, osMessageQueue*) |
| `heap_implementation` | heap_4 | — | high | 0x12D613 | assert/source path `../../rtos/freertos/Source/portable/MemMang/heap_4.c` + `pvPortMalloc` / `vPortFree` asserts |
| `configCHECK_FOR_STACK_OVERFLOW` | enabled (1 or 2) | — | high | 0x12BA86 | `vApplicationStackOverflowHook` + `task %s stack overflow` strings |
| `configSUPPORT_STATIC_ALLOCATION` | 1 | — | high | 0x12CAA1 | `xTaskCreateStatic` / `xEventGroupCreateStatic` / `xStreamBufferGenericCreateStatic` / `xTimerCreateStatic` / `xQueueGenericCreateStatic` + static TCB assert |
| `configSUPPORT_DYNAMIC_ALLOCATION` | 1 | — | high | 0x12D0AA | `xQueueGenericCreate` + `pvPortMalloc`/`vPortFree` heap_4 asserts (dynamic path compiled alongside static) |
| `configUSE_TIMERS` | 1 | — | high | 0x12C862 | timers.c path + timer daemon name `Tmr Svc` + `xTimerCreateTimerTask` |
| `configUSE_EVENT_GROUPS` | 1 | — | high | 0x12C1BD | event_groups.c path + xEventGroup* assert cluster |
| `configUSE_STREAM_BUFFERS` | 1 | — | high | 0x12C412 | stream_buffer.c path + xStreamBuffer* asserts |
| `configUSE_TASK_NOTIFICATIONS` | 1 | — | high | 0x12CF5C | `xTaskGenericNotify` / `xTaskGenericNotifyFromISR` / `vTaskNotifyGiveFromISR` asserts in tasks.c |
| `configUSE_MUTEXES` | 1 | — | high | 0x12D1C2 | queue.c mutex recursive + `xQueueGetMutexHolderFromISR` asserts |
| `configUSE_COUNTING_SEMAPHORES` | 1 | — | high | 0x12D1FC | `xQueueCreateCountingSemaphore` / Static variant asserts |
| `configASSERT` | enabled | — | high | 0x12BE99 | dense FreeRTOS configASSERT condition strings + `vPortAssertIfInISR` / `assert %ld, %s` |
| `hifi4_freertos_port` | XCC/Xtensa | — | high | 0x12D7AB | `../../rtos/freertos/Source/portable/XCC/Xtensa/port.c` + `portclib.c` + `hifi4 freertos run!` + `frxt_blinky` |
| `smf_thread_hifi4` | present | — | high | 0xC5F55 | `smf_thread_print` + `%s:stack=%d/%d` under `smf/porting/hifi4/thread.cpp` / `smf_rpc.cpp` |
| `idle_task_name` | IDLE | — | high | 0x12CBEC | NUL-terminated `IDLE` immediately before `vTaskStartScheduler` string |
| `vTaskStartScheduler` | present | — | high | 0x12CBF1 | symbol/assert name `vTaskStartScheduler` in tasks.c cluster |

## Method for numeric recovery

1. **String anchors** — locate FreeRTOS `configASSERT` text (`configMAX_PRIORITIES`, `configMAX_TASK_NAME_LEN`), source paths (`tasks.c`, `heap_4.c`, `cmsis_os2.c`, `XCC/Xtensa/port.c`), and CMSIS-RTOS2 API names.
2. **Literal-pool / MOVW xref** — search XIP (`0x2Cxxxxxx`) and SRAM alias (`0x3Cxxxxxx`) pointers to those strings; disassemble a ±128-byte Thumb window with Capstone for `CMP`/`MOV` immediates.
3. **Result on 1.0.12.83** — priority/name-length asserts have **zero** bound VA refs (BES TRACE string interning). Mid-image `0x3C12xxxx` collisions in float/data tables are false friends and were rejected. Therefore **no numeric** `configMAX_*` / heap / tick / minimal-stack values are claimed.
4. **Feature flags** — inferred only from compiled-in module paths and assert identifiers (presence ⇒ feature enabled), never from SDK default tables.

## Honesty / UNRECOVERED

The following were **explicitly hunted** and left unrecovered (no invented defaults):

| Name | Why unrecovered |
|---|---|
| `configMAX_PRIORITIES` | assert present @ 0x12CB89 but 0 literal-pool / interior VA refs (TRACE-interned); Capstone CMP hunt unbound |
| `configMAX_TASK_NAME_LEN` | assert present @ 0x12CC9A but 0 VA refs (TRACE-interned) |
| `configTOTAL_HEAP_SIZE` | Do not confuse with multi_heap / med_heap / LV_MEM pools elsewhere. |
| `configTICK_RATE_HZ` | LVGL `lvgl_os_tick_timer` proves a software tick consumer, not the rate. |
| `configMINIMAL_STACK_SIZE` | Idle/Timer daemon stack sizes also unrecovered statically. |
| `portBYTE_ALIGNMENT` | Cortex-M ports commonly use 8, but that default is not evidenced here. |
| `cmsis_osThreadFlags_max` | osEventFlags* API strings present; no `osThreadFlags*` / `osFlagsError*` banners; 31-bit CMSIS default not proven from immediates |
| `cmsis_osMessageQueue_max` | Per-queue capacities belong to leaf stacks/IPC inventories, not kernel config. |

### Notes

- The FreeRTOS assert/source cluster sits next to `hifi4 freertos run!` / `frxt_blinky` and the **only** FreeRTOS port path is **XCC/Xtensa**. M55 still uses FreeRTOS + CMSIS-RTOS2 at the application layer (`osThreadNew fail`, etc.), but an `ARM_CMx` port path string is absent.
- Embedded `rtx_thread_dump.c` / `Ready List` strings are **RTX5** introspection helpers, not FreeRTOS config.
- Per-thread stack sizes and CMSIS priorities are owned by leaf-1.1.2 (`stacks_priorities`), not this leaf.

## Regenerating

```bash
python3 Reverse/firmware/analysis/rtos/limits/freertos_config/extract_freertos_config.py
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.1.1
```
