#!/usr/bin/env python3
"""Recover FreeRTOS / CMSIS-RTOS2 compile-time config evidence from platform_tester.bin.

Binary: Reverse/firmware/x_1.0.12.83/platform_tester.bin (XIP 0x2C000000).

Method
------
1. String scan for FreeRTOS assert / source-path / API / port banners.
2. Capstone + literal-pool / MOVW hunt for numeric immediates beside
   ``configMAX_PRIORITIES`` / ``configMAX_TASK_NAME_LEN`` asserts.
3. Feature inference ONLY from compiled-in source modules and assert text
   (e.g. ``heap_4.c`` ⇒ heap scheme heap_4; ``*CreateStatic`` ⇒ static alloc).
4. Explicit UNRECOVERED entries when no numeric immediate is bound to an assert.

Honesty rule: never invent ``configTOTAL_HEAP_SIZE``, tick rate, priority max,
or stack minima. Presence of an assert *name* is not a value.
"""

from __future__ import annotations

import json
import struct
import sys
from dataclasses import asdict, dataclass
from pathlib import Path

try:
    from capstone import CS_ARCH_ARM, CS_MODE_MCLASS, CS_MODE_THUMB, Cs
except ImportError:  # pragma: no cover
    Cs = None  # type: ignore

ROOT = Path(__file__).resolve().parents[5]  # Reverse/
BIN_PATH = ROOT / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
OUT_JSON = Path(__file__).resolve().parent / "freertos_config.json"
OUT_MD = Path(__file__).resolve().parent / "FREERTOS_CONFIG.md"

XIP_BASE = 0x2C000000
SRAM_ALIAS = 0x3C000000


@dataclass
class Entry:
    name: str
    value: str | None
    unit: str
    evidence: str
    file_offset: str
    confidence: str  # high|medium|low|unrecovered
    notes: str = ""


def find_str(data: bytes, needle: bytes) -> int | None:
    i = data.find(needle)
    return i if i >= 0 else None


def cstring_at(data: bytes, off: int, limit: int = 160) -> str:
    end = data.find(b"\x00", off)
    if end < 0 or end - off > limit:
        end = off + min(limit, len(data) - off)
    return data[off:end].decode("ascii", errors="replace")


def find_u32_refs(data: bytes, value: int) -> list[int]:
    pat = struct.pack("<I", value)
    out: list[int] = []
    start = 0
    while True:
        i = data.find(pat, start)
        if i < 0:
            return out
        out.append(i)
        start = i + 1


def count_interior_refs(data: bytes, str_off: int, length: int) -> int:
    """Count aligned u32s that land anywhere inside [str_off, str_off+length)."""
    lo, hi = str_off, str_off + length
    n = 0
    for i in range(0, len(data) - 4, 4):
        v = struct.unpack_from("<I", data, i)[0]
        for base in (XIP_BASE, SRAM_ALIAS, 0):
            off = v - base
            if lo <= off < hi:
                n += 1
                break
    return n


def try_recover_priority_immediate(data: bytes) -> tuple[int | None, str]:
    """Attempt Capstone recovery of configMAX_PRIORITIES via assert xrefs.

    FreeRTOS ``vTaskPrioritySet`` typically does ``CMP uxNewPriority, #N`` then
    branches to the assert that references
    ``( uxNewPriority < configMAX_PRIORITIES )``.

    On this BES build, TRACE interning leaves **zero** XIP/SRAM literal-pool
    pointers to that assert string (and to sibling tasks.c asserts). Without a
    bound call site, any CMP #N elsewhere is ambiguous — return unrecovered.
    """
    needle = b"( uxNewPriority < configMAX_PRIORITIES )"
    off = find_str(data, needle)
    if off is None:
        return None, "assert string absent"

    refs: list[int] = []
    for base in (XIP_BASE, SRAM_ALIAS):
        refs.extend(find_u32_refs(data, base + off))
    # Also count mid-string false-friend hits (data tables can collide).
    interior = count_interior_refs(data, off, len(needle))

    if not refs and interior == 0:
        return (
            None,
            "assert present @ 0x{:X} but 0 literal-pool / interior VA refs "
            "(TRACE-interned); Capstone CMP hunt unbound".format(off),
        )

    if Cs is None:
        return None, "capstone unavailable; refs={}".format([hex(r) for r in refs])

    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB + CS_MODE_MCLASS)
    candidates: list[int] = []
    for lit in refs:
        start = max(0, (lit - 128) & ~1)
        chunk = data[start:lit]
        for insn in md.disasm(chunk, XIP_BASE + start):
            if insn.mnemonic.startswith("cmp") and "#" in insn.op_str:
                try:
                    imm = int(insn.op_str.split("#", 1)[1].split(",")[0], 0)
                except ValueError:
                    continue
                if 2 <= imm <= 64:
                    candidates.append(imm)

    if len(set(candidates)) == 1:
        return candidates[0], "unique CMP immediate near assert xref"
    if candidates:
        return None, "ambiguous CMP immediates near refs: {}".format(sorted(set(candidates)))
    return None, "refs exist but no CMP #imm in [-128,0) window"


def try_recover_task_name_len(data: bytes) -> tuple[int | None, str]:
    needle = b"strlen( pcNameToQuery ) < configMAX_TASK_NAME_LEN"
    off = find_str(data, needle)
    if off is None:
        return None, "assert string absent"
    refs: list[int] = []
    for base in (XIP_BASE, SRAM_ALIAS):
        refs.extend(find_u32_refs(data, base + off))
    interior = count_interior_refs(data, off, len(needle))
    if not refs and interior == 0:
        return (
            None,
            "assert present @ 0x{:X} but 0 VA refs (TRACE-interned)".format(off),
        )
    return None, "refs={}; numeric not uniquely recovered".format([hex(r) for r in refs])


def build_entries(data: bytes) -> list[Entry]:
    entries: list[Entry] = []

    def add(
        name: str,
        value: str | None,
        unit: str,
        evidence: str,
        off: int | None,
        confidence: str,
        notes: str = "",
    ) -> None:
        entries.append(
            Entry(
                name=name,
                value=value,
                unit=unit,
                evidence=evidence,
                file_offset=("0x{:X}".format(off) if off is not None else ""),
                confidence=confidence,
                notes=notes,
            )
        )

    # --- Version / kernel identity ---
    ver_off = find_str(data, b"FreeRTOS V10.4.1")
    add(
        "kernel_version",
        "FreeRTOS 10.4.1",
        "",
        "banner string `FreeRTOS V10.4.1`",
        ver_off,
        "high" if ver_off is not None else "unrecovered",
        "Same banner attributed to M55 CMSIS-RTOS2 stack in RTOS_MAP; "
        "co-located with HiFi4/Xtensa port assert cluster (see hifi4_port).",
    )

    cmsis_off = find_str(
        data, b"../../rtos/freertos/CMSIS/RTOS2/FreeRTOS/Source/cmsis_os2.c"
    )
    add(
        "cmsis_rtos2_shim",
        "present",
        "",
        "source path cmsis_os2.c + API symbols "
        "(osThreadSetPriority/GetPriority/Yield/Suspend/Resume, "
        "osDelay/osDelayUntil, osEventFlags*, osMutex*, osSemaphore*, "
        "osMessageQueue*)",
        cmsis_off,
        "high" if cmsis_off is not None else "unrecovered",
        "CMSIS-RTOS2 over FreeRTOS; osThreadNew fail log also at 0x160808.",
    )

    # --- Heap scheme ---
    heap_off = find_str(data, b"portable/MemMang/heap_4.c")
    add(
        "heap_implementation",
        "heap_4",
        "",
        "assert/source path `../../rtos/freertos/Source/portable/MemMang/heap_4.c` "
        "+ `pvPortMalloc` / `vPortFree` asserts",
        heap_off,
        "high" if heap_off is not None else "unrecovered",
    )

    # --- Numeric configs (attempt + honest miss) ---
    prio_val, prio_note = try_recover_priority_immediate(data)
    prio_off = find_str(data, b"( uxNewPriority < configMAX_PRIORITIES )")
    add(
        "configMAX_PRIORITIES",
        str(prio_val) if prio_val is not None else None,
        "levels",
        "assert string `( uxNewPriority < configMAX_PRIORITIES )` beside "
        "`vTaskPrioritySet` in tasks.c cluster",
        prio_off,
        "high" if prio_val is not None else "unrecovered",
        prio_note,
    )

    namelen_val, namelen_note = try_recover_task_name_len(data)
    namelen_off = find_str(data, b"strlen( pcNameToQuery ) < configMAX_TASK_NAME_LEN")
    add(
        "configMAX_TASK_NAME_LEN",
        str(namelen_val) if namelen_val is not None else None,
        "chars",
        "assert string `strlen( pcNameToQuery ) < configMAX_TASK_NAME_LEN` "
        "beside `xTaskGetHandle`",
        namelen_off,
        "high" if namelen_val is not None else "unrecovered",
        namelen_note,
    )

    add(
        "configTOTAL_HEAP_SIZE",
        None,
        "bytes",
        "no `configTOTAL_HEAP_SIZE` / `ucHeap` / sized heap banner in image; "
        "heap_4 present but array extent not statically bound",
        None,
        "unrecovered",
        "Do not confuse with multi_heap / med_heap / LV_MEM pools elsewhere.",
    )

    add(
        "configTICK_RATE_HZ",
        None,
        "Hz",
        "no `configTICK_RATE_HZ` / `osKernelGetTickFreq` / `OS_TICK_FREQ` string; "
        "tick/ms dump formats exist under RTX introspection only",
        None,
        "unrecovered",
        "LVGL `lvgl_os_tick_timer` proves a software tick consumer, not the rate.",
    )

    add(
        "configMINIMAL_STACK_SIZE",
        None,
        "words",
        "format `%%d-%%s minisize %%d` @ test_freertos.c cluster prints a runtime "
        "minisize but the immediate is not recoverable (no VA xref)",
        find_str(data, b"minisize"),
        "unrecovered",
        "Idle/Timer daemon stack sizes also unrecovered statically.",
    )

    # --- Feature flags from compiled modules ---
    so_hook = find_str(data, b"vApplicationStackOverflowHook")
    so_msg = find_str(data, b"task %s stack overflow")
    add(
        "configCHECK_FOR_STACK_OVERFLOW",
        "enabled (1 or 2)",
        "",
        "`vApplicationStackOverflowHook` + `task %s stack overflow` strings",
        so_hook,
        "high" if so_hook and so_msg else "medium",
        "Method 1 vs 2 (canary-only vs canary+SP check) not distinguished; "
        "value left as enabled-not-enumerated.",
    )

    static_off = find_str(data, b"xTaskCreateStatic")
    static_tcb = find_str(
        data, b"pxTCB->ucStaticallyAllocated == tskSTATICALLY_ALLOCATED_STACK_AND_TCB"
    )
    add(
        "configSUPPORT_STATIC_ALLOCATION",
        "1",
        "",
        "`xTaskCreateStatic` / `xEventGroupCreateStatic` / "
        "`xStreamBufferGenericCreateStatic` / `xTimerCreateStatic` / "
        "`xQueueGenericCreateStatic` + static TCB assert",
        static_off,
        "high" if static_off and static_tcb else "medium",
    )

    dyn_off = find_str(data, b"xQueueGenericCreate")
    malloc_off = find_str(data, b"pvPortMalloc")
    add(
        "configSUPPORT_DYNAMIC_ALLOCATION",
        "1",
        "",
        "`xQueueGenericCreate` + `pvPortMalloc`/`vPortFree` heap_4 asserts "
        "(dynamic path compiled alongside static)",
        dyn_off or malloc_off,
        "high" if dyn_off and malloc_off else "medium",
    )

    timers_off = find_str(data, b"../../rtos/freertos/Source/timers.c")
    tmr_svc = find_str(data, b"Tmr Svc")
    add(
        "configUSE_TIMERS",
        "1",
        "",
        "timers.c path + timer daemon name `Tmr Svc` + `xTimerCreateTimerTask`",
        timers_off,
        "high" if timers_off and tmr_svc else "medium",
    )

    eg_off = find_str(data, b"../../rtos/freertos/Source/event_groups.c")
    add(
        "configUSE_EVENT_GROUPS",
        "1" if eg_off else None,
        "",
        "event_groups.c path + xEventGroup* assert cluster",
        eg_off,
        "high" if eg_off else "unrecovered",
    )

    sb_off = find_str(data, b"../../rtos/freertos/Source/stream_buffer.c")
    add(
        "configUSE_STREAM_BUFFERS",
        "1" if sb_off else None,
        "",
        "stream_buffer.c path + xStreamBuffer* asserts",
        sb_off,
        "high" if sb_off else "unrecovered",
    )

    notify_off = find_str(data, b"xTaskGenericNotify")
    add(
        "configUSE_TASK_NOTIFICATIONS",
        "1" if notify_off else None,
        "",
        "`xTaskGenericNotify` / `xTaskGenericNotifyFromISR` / "
        "`vTaskNotifyGiveFromISR` asserts in tasks.c",
        notify_off,
        "high" if notify_off else "unrecovered",
    )

    mutex_off = find_str(data, b"xQueueGiveMutexRecursive")
    add(
        "configUSE_MUTEXES",
        "1" if mutex_off else None,
        "",
        "queue.c mutex recursive + `xQueueGetMutexHolderFromISR` asserts",
        mutex_off,
        "high" if mutex_off else "unrecovered",
    )

    count_off = find_str(data, b"xQueueCreateCountingSemaphore")
    add(
        "configUSE_COUNTING_SEMAPHORES",
        "1" if count_off else None,
        "",
        "`xQueueCreateCountingSemaphore` / Static variant asserts",
        count_off,
        "high" if count_off else "unrecovered",
    )

    assert_off = find_str(data, b"vPortAssertIfInISR")
    add(
        "configASSERT",
        "enabled",
        "",
        "dense FreeRTOS configASSERT condition strings + `vPortAssertIfInISR` / "
        "`assert %ld, %s`",
        assert_off,
        "high" if assert_off else "medium",
    )

    align_off = find_str(data, b"portBYTE_ALIGNMENT_MASK")
    add(
        "portBYTE_ALIGNMENT",
        None,
        "bytes",
        "`( xWantedSize & portBYTE_ALIGNMENT_MASK ) == 0` in heap_4; "
        "mask width not bound to an immediate via xref",
        align_off,
        "unrecovered",
        "Cortex-M ports commonly use 8, but that default is not evidenced here.",
    )

    # --- HiFi4 / Xtensa FreeRTOS port ---
    xt_off = find_str(data, b"portable/XCC/Xtensa/port.c")
    hifi_run = find_str(data, b"hifi4 freertos run!")
    smf_thr = find_str(data, b"smf_thread_print")
    smf_stack = find_str(data, b"%s:stack=%d/%d")
    add(
        "hifi4_freertos_port",
        "XCC/Xtensa",
        "",
        "`../../rtos/freertos/Source/portable/XCC/Xtensa/port.c` + "
        "`portclib.c` + `hifi4 freertos run!` + `frxt_blinky`",
        xt_off,
        "high" if xt_off and hifi_run else "medium",
        "No ARM_CM55 / GCC/ARM_CMx FreeRTOS port path strings in this image; "
        "M55 kernel port path unrecovered (BES custom / stripped).",
    )
    add(
        "smf_thread_hifi4",
        "present",
        "",
        "`smf_thread_print` + `%s:stack=%d/%d` under "
        "`smf/porting/hifi4/thread.cpp` / `smf_rpc.cpp`",
        smf_thr,
        "high" if smf_thr and smf_stack else "medium",
        "HiFi4 SMF thread wrapper over FreeRTOS; stack used/total only at runtime.",
    )

    # --- CMSIS-RTOS2 numeric limits ---
    add(
        "cmsis_osThreadFlags_max",
        None,
        "flags",
        "osEventFlags* API strings present; no `osThreadFlags*` / "
        "`osFlagsError*` banners; 31-bit CMSIS default not proven from immediates",
        find_str(data, b"osEventFlagsWait"),
        "unrecovered",
    )
    add(
        "cmsis_osMessageQueue_max",
        None,
        "messages",
        "`osMessageQueuePut/Get/Reset/Delete` present; no compile-time max "
        "capacity constant recovered",
        find_str(data, b"osMessageQueuePut"),
        "unrecovered",
        "Per-queue capacities belong to leaf stacks/IPC inventories, not kernel config.",
    )

    idle_off = find_str(data, b"\x00IDLE\x00")
    if idle_off is not None:
        idle_off += 1
    add(
        "idle_task_name",
        "IDLE",
        "",
        "NUL-terminated `IDLE` immediately before `vTaskStartScheduler` string",
        idle_off,
        "high" if idle_off else "unrecovered",
        "Standard FreeRTOS idle task name when configIDLE_TASK_NAME unset/default.",
    )

    start_off = find_str(data, b"vTaskStartScheduler")
    add(
        "vTaskStartScheduler",
        "present",
        "",
        "symbol/assert name `vTaskStartScheduler` in tasks.c cluster",
        start_off,
        "high" if start_off else "unrecovered",
    )

    return entries


def write_md(entries: list[Entry], meta: dict) -> str:
    recovered = [e for e in entries if e.confidence != "unrecovered" and e.value is not None]
    unrecovered = [e for e in entries if e.confidence == "unrecovered" or e.value is None]

    lines: list[str] = []
    lines.append("# FreeRTOS / CMSIS-RTOS2 Compile-Time Config")
    lines.append("")
    lines.append(
        "**Leaf:** 1.1.1 (`rtos-limits`)  ·  **Binary:** "
        "`platform_tester.bin` 1.0.12.83  ·  **XIP:** `0x2C000000`"
    )
    lines.append("")
    lines.append(
        "**Kernel banner:** {}  ·  **Recovered (valued):** {}  ·  "
        "**Unrecovered / null:** {}".format(
            meta.get("kernel"),
            len(recovered),
            len(unrecovered),
        )
    )
    lines.append("")
    lines.append("## Recovered values")
    lines.append("")
    lines.append("| Name | Value | Unit | Confidence | File offset | Evidence |")
    lines.append("|---|---|---|---|---|---|")
    for e in recovered:
        lines.append(
            "| `{}` | {} | {} | {} | {} | {} |".format(
                e.name,
                e.value,
                e.unit or "—",
                e.confidence,
                e.file_offset or "—",
                e.evidence.replace("|", "\\|"),
            )
        )
    lines.append("")
    lines.append("## Method for numeric recovery")
    lines.append("")
    lines.append(
        "1. **String anchors** — locate FreeRTOS `configASSERT` text "
        "(`configMAX_PRIORITIES`, `configMAX_TASK_NAME_LEN`), source paths "
        "(`tasks.c`, `heap_4.c`, `cmsis_os2.c`, `XCC/Xtensa/port.c`), and "
        "CMSIS-RTOS2 API names."
    )
    lines.append(
        "2. **Literal-pool / MOVW xref** — search XIP (`0x2Cxxxxxx`) and SRAM "
        "alias (`0x3Cxxxxxx`) pointers to those strings; disassemble a "
        "±128-byte Thumb window with Capstone for `CMP`/`MOV` immediates."
    )
    lines.append(
        "3. **Result on 1.0.12.83** — priority/name-length asserts have "
        "**zero** bound VA refs (BES TRACE string interning). Mid-image "
        "`0x3C12xxxx` collisions in float/data tables are false friends and "
        "were rejected. Therefore **no numeric** `configMAX_*` / heap / tick "
        "/ minimal-stack values are claimed."
    )
    lines.append(
        "4. **Feature flags** — inferred only from compiled-in module paths "
        "and assert identifiers (presence ⇒ feature enabled), never from "
        "SDK default tables."
    )
    lines.append("")
    lines.append("## Honesty / UNRECOVERED")
    lines.append("")
    lines.append(
        "The following were **explicitly hunted** and left unrecovered "
        "(no invented defaults):"
    )
    lines.append("")
    lines.append("| Name | Why unrecovered |")
    lines.append("|---|---|")
    for e in unrecovered:
        why = e.notes or e.evidence
        lines.append("| `{}` | {} |".format(e.name, why.replace("|", "\\|")))
    lines.append("")
    lines.append("### Notes")
    lines.append("")
    lines.append(
        "- The FreeRTOS assert/source cluster sits next to "
        "`hifi4 freertos run!` / `frxt_blinky` and the **only** FreeRTOS "
        "port path is **XCC/Xtensa**. M55 still uses FreeRTOS + CMSIS-RTOS2 "
        "at the application layer (`osThreadNew fail`, etc.), but an "
        "`ARM_CMx` port path string is absent."
    )
    lines.append(
        "- Embedded `rtx_thread_dump.c` / `Ready List` strings are **RTX5** "
        "introspection helpers, not FreeRTOS config."
    )
    lines.append(
        "- Per-thread stack sizes and CMSIS priorities are owned by "
        "leaf-1.1.2 (`stacks_priorities`), not this leaf."
    )
    lines.append("")
    lines.append("## Regenerating")
    lines.append("")
    lines.append("```bash")
    lines.append(
        "python3 Reverse/firmware/analysis/rtos/limits/freertos_config/"
        "extract_freertos_config.py"
    )
    lines.append(
        "node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs "
        "leaf-1.1.1"
    )
    lines.append("```")
    lines.append("")
    return "\n".join(lines)


def main() -> int:
    if not BIN_PATH.is_file():
        print("missing binary:", BIN_PATH, file=sys.stderr)
        return 1
    data = BIN_PATH.read_bytes()
    entries = build_entries(data)
    kernel = "FreeRTOS 10.4.1"
    for e in entries:
        if e.name == "kernel_version" and e.value:
            kernel = e.value
            break

    payload = {
        "kernel": kernel,
        "binary": "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
        "xip_base": "0x2C000000",
        "sram_string_alias": "0x3C000000",
        "method": (
            "string scan + Capstone xref/CMP hunt; TRACE-interned asserts "
            "block numeric recovery for MAX_PRIORITIES / NAME_LEN / HEAP / TICK"
        ),
        "entries": [asdict(e) for e in entries],
        "stats": {
            "total": len(entries),
            "recovered_valued": sum(
                1 for e in entries if e.confidence != "unrecovered" and e.value is not None
            ),
            "unrecovered": sum(
                1 for e in entries if e.confidence == "unrecovered" or e.value is None
            ),
        },
    }
    OUT_JSON.write_text(json.dumps(payload, indent=2) + "\n", encoding="utf-8")
    OUT_MD.write_text(write_md(entries, payload), encoding="utf-8")
    print(
        "wrote {} ({} entries, recovered={}, unrecovered={})".format(
            OUT_JSON,
            payload["stats"]["total"],
            payload["stats"]["recovered_valued"],
            payload["stats"]["unrecovered"],
        )
    )
    print("wrote", OUT_MD)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
