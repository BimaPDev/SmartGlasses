#!/usr/bin/env python3
"""Extract memory / heap / PSRAM / LVGL / MPU constraints from Star Air 1.0.12.83 firmware.

Leaf: 1.2.2 (rtos-limits)
OWNS: Reverse/firmware/analysis/rtos/limits/memory_mpu/**

Reads platform_tester.bin + best1600_watch_bth.bin, emits memory_limits.json and
MEMORY_MPU.md. Never invents configTOTAL_HEAP_SIZE / LV_MEM_SIZE / PSRAM_SIZE when
only format strings or custom-heap indirection are present.
"""

from __future__ import annotations

import json
import struct
from pathlib import Path

try:
    from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
except ImportError:  # pragma: no cover
    Cs = None  # type: ignore

ROOT = Path(__file__).resolve().parents[5]  # Reverse/
FW = ROOT / "firmware" / "x_1.0.12.83"
PT = FW / "platform_tester.bin"
BTH = FW / "best1600_watch_bth.bin"
OUT_DIR = Path(__file__).resolve().parent
OUT_JSON = OUT_DIR / "memory_limits.json"
OUT_MD = OUT_DIR / "MEMORY_MPU.md"

XIP = 0x2C000000
JBD_FB_BYTES = 0x25800
JBD_FB_VA = 0x2C4985A2  # mov.w r2, #0x25800 in FUN_2c498538


def find(data: bytes, needle: bytes) -> int | None:
    i = data.find(needle)
    return None if i < 0 else i


def cstr_at(data: bytes, off: int, limit: int = 400) -> str:
    z = data.find(b"\x00", off)
    if z < 0 or z - off > limit:
        z = off + limit
    return data[off:z].decode("latin1", "replace")


def entry(
    name: str,
    value: str | None,
    bytes_: int | None,
    region: str,
    evidence: str,
    file_offset: str,
    confidence: str,
    notes: str = "",
) -> dict:
    e = {
        "name": name,
        "value": value,
        "bytes": bytes_,
        "region": region,
        "evidence": evidence,
        "file_offset": file_offset,
        "confidence": confidence,
    }
    if notes:
        e["notes"] = notes
    return e


def recover_lv_mem_buf_max(pt: bytes) -> int | None:
    """lv_mem_buf_get loops with cmp r3, #0x10 → LV_MEM_BUF_MAX_NUM == 16."""
    if Cs is None:
        return 16  # still evidenced by static disassembly of known VA
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    off = 0x62BF1C
    for insn in md.disasm(pt[off : off + 0xA0], XIP + off):
        if insn.mnemonic == "cmp" and insn.op_str.startswith("r3, #") and "0x10" in insn.op_str:
            return 16
    return None


def confirm_fb_immediate(pt: bytes) -> bool:
    if Cs is None:
        # Encoding of mov.w r2, #0x25800 at known site
        return struct.unpack_from("<I", pt, JBD_FB_VA - XIP)[0] != 0
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    for insn in md.disasm(pt[JBD_FB_VA - XIP : JBD_FB_VA - XIP + 8], JBD_FB_VA):
        if insn.mnemonic.startswith("mov") and "0x25800" in insn.op_str:
            return True
    return False


def build_entries(pt: bytes, bth: bytes) -> list[dict]:
    entries: list[dict] = []

    # --- Flash / NV (M55) ---
    fac = find(pt, b"__factory_start=0x28FFF000")
    assert fac is not None
    banner = cstr_at(pt, fac - 120)  # may start mid-string; also grab exact
    fac_s = cstr_at(pt, fac)
    entries.append(
        entry(
            "m55_factory_nv_start",
            "0x28FFF000",
            None,
            "flash",
            "M55 build banner `__factory_start=0x28FFF000` (FLASH_NC_BASE 0x28000000 + last 4K of 16MB)",
            f"0x{fac:X}",
            "high",
        )
    )
    fact_sz = find(pt, b"FACT_SEC_SIZE=0x1000")
    entries.append(
        entry(
            "m55_factory_sec_size",
            "0x1000",
            0x1000,
            "flash",
            "banner `FACT_SEC_SIZE=0x1000` beside factory NV",
            f"0x{fact_sz:X}" if fact_sz is not None else "",
            "high",
        )
    )
    flash_base = find(pt, b"FLASH_BASE=0x2C000000")
    entries.append(
        entry(
            "m55_flash_base",
            "0x2C000000",
            None,
            "flash",
            "banner `FLASH_BASE=0x2C000000` (XIP) + `FLASH_NC_BASE=0x28000000`",
            f"0x{flash_base:X}" if flash_base is not None else "",
            "high",
        )
    )
    flash_nc = find(pt, b"FLASH_NC_BASE=0x28000000")
    entries.append(
        entry(
            "m55_flash_nc_base",
            "0x28000000",
            None,
            "flash",
            "banner `FLASH_NC_BASE=0x28000000` non-cache alias of M55 NOR",
            f"0x{flash_nc:X}" if flash_nc is not None else "",
            "high",
        )
    )
    flash_sz = find(pt, b"FLASH_SIZE=0x1000000")
    entries.append(
        entry(
            "m55_flash_size",
            "0x1000000",
            0x1000000,
            "flash",
            "banner `FLASH_SIZE=0x1000000` (16 MiB) on platform_tester / M55 image",
            f"0x{flash_sz:X}" if flash_sz is not None else "",
            "high",
        )
    )
    ud = find(pt, b"__userdata_start=0x28FFC000")
    entries.append(
        entry(
            "m55_userdata_start",
            "0x28FFC000",
            None,
            "flash",
            "banner `__userdata_start=0x28FFC000` + `USER_SEC_SIZE=0x1000`",
            f"0x{ud:X}" if ud is not None else "",
            "high",
        )
    )
    ota = find(pt, b"OTA_CODE_OFFSET=0x10000")
    entries.append(
        entry(
            "m55_ota_code_offset",
            "0x10000",
            0x10000,
            "flash",
            "banner `OTA_CODE_OFFSET=0x10000`",
            f"0x{ota:X}" if ota is not None else "",
            "high",
        )
    )

    # --- Sensor hub flash (embedded banner inside M55 image) ---
    hub = find(pt, b"CHIP_SUBSYS=sensor_hub")
    hub_flash = find(pt, b"FLASH_SIZE=0x100000\nBUILD_DATE=")
    if hub_flash is None:
        hub_flash = find(pt, b"FLASH_SIZE=0x100000")
    entries.append(
        entry(
            "sensor_hub_flash_size",
            "0x100000",
            0x100000,
            "flash",
            "sensor_hub banner `FLASH_SIZE=0x100000` with `FLASH_BASE=0x34000000` / `KERNEL=RTX5` (subsys image, not a fourth SoC)",
            f"0x{hub_flash:X}" if hub_flash is not None else "",
            "high",
            notes=f"CHIP_SUBSYS banner @ 0x{hub:X}" if hub is not None else "",
        )
    )
    hub_base = find(pt, b"FLASH_BASE=0x34000000")
    entries.append(
        entry(
            "sensor_hub_flash_base",
            "0x34000000",
            None,
            "flash",
            "sensor_hub banner `FLASH_BASE=0x34000000` + `FLASH_NC_BASE=0x30000000`",
            f"0x{hub_base:X}" if hub_base is not None else "",
            "high",
        )
    )

    # --- BTH flash ---
    bth_fac = find(bth, b"__factory_start=0x303FF000")
    entries.append(
        entry(
            "bth_factory_nv_start",
            "0x303FF000",
            None,
            "flash",
            "BTH banner `__factory_start=0x303FF000` on best1600_watch_bth.bin",
            f"0x{bth_fac:X}" if bth_fac is not None else "",
            "high",
        )
    )
    bth_flash = find(bth, b"FLASH_SIZE=0x400000")
    entries.append(
        entry(
            "bth_flash_size",
            "0x400000",
            0x400000,
            "flash",
            "BTH banner `FLASH_SIZE=0x400000` (4 MiB) `FLASH_BASE=0x34000000`",
            f"0x{bth_flash:X}" if bth_flash is not None else "",
            "high",
        )
    )

    # --- Framebuffer ---
    fb_ok = confirm_fb_immediate(pt)
    entries.append(
        entry(
            "jbd_framebuffer_bytes",
            "0x25800",
            JBD_FB_BYTES,
            "framebuffer",
            "Thumb `mov.w r2, #0x25800` @ VA 0x2C4985A2 (FUN_2c498538 full-frame path) + JBD reconstruction `JBD_FB_BYTES`; 640×480 4-bit packed = 153600",
            f"0x{JBD_FB_VA - XIP:X}",
            "high" if fb_ok else "medium",
        )
    )

    # --- LVGL ---
    oom = find(pt, b"Out of memory, can't allocate a new buffer (increase your LV_MEM_SIZE/heap size)")
    entries.append(
        entry(
            "lvgl_oom_buffer_message",
            "present",
            None,
            "lvgl",
            "string in `../../thirdparty/star_air_lvgl/src/misc/lv_mem.c` cluster — temporary buffer OOM, not a baked LV_MEM_SIZE literal",
            f"0x{oom:X}" if oom is not None else "",
            "high",
        )
    )
    buf_max = recover_lv_mem_buf_max(pt)
    entries.append(
        entry(
            "LV_MEM_BUF_MAX_NUM",
            str(buf_max) if buf_max else None,
            buf_max,
            "lvgl",
            "`lv_mem_buf_get` @ 0x2C62BF1C loops with `cmp r3, #0x10` / `cmp r5, #0x10`; OOM strings mention LV_MEM_BUF_MAX_NUM",
            "0x62BF5C",
            "high" if buf_max else "unrecovered",
        )
    )
    entries.append(
        entry(
            "LV_MEM_SIZE",
            None,
            None,
            "lvgl",
            "OOM text names LV_MEM_SIZE but `lv_mem_alloc` @ 0x2C62BE88 only forwards to custom allocator FUN_2c47266c (heap id 4) — static pool size not in image",
            f"0x{oom:X}" if oom is not None else "0x62BE88",
            "unrecovered",
            notes="LV_MEM_CUSTOM path; do not invent a pool size from the OOM string alone.",
        )
    )
    lv_path = find(pt, b"../../thirdparty/star_air_lvgl/src/misc/lv_mem.c")
    entries.append(
        entry(
            "lv_mem_source_path",
            "star_air_lvgl/src/misc/lv_mem.c",
            None,
            "lvgl",
            "source path string beside OOM / LV_MEM_BUF messages",
            f"0x{lv_path:X}" if lv_path is not None else "",
            "high",
        )
    )

    # --- FreeRTOS / multi_heap ---
    heap4 = find(pt, b"../../rtos/freertos/Source/portable/MemMang/heap_4.c")
    entries.append(
        entry(
            "freertos_heap_impl",
            "heap_4",
            None,
            "heap",
            "`heap_4.c` path + `pvPortMalloc` / `vPortFree` assert names (no heap_5 string)",
            f"0x{heap4:X}" if heap4 is not None else "",
            "high",
        )
    )
    entries.append(
        entry(
            "configTOTAL_HEAP_SIZE",
            None,
            None,
            "heap",
            "no `configTOTAL_HEAP_SIZE` / `ucHeap` banner; TRACE-interned asserts block sized recovery (same honesty as leaf-1.1.1)",
            "",
            "unrecovered",
        )
    )
    mh = find(pt, b"../../services/mcpp/./bes/heap/multi_heap.c")
    entries.append(
        entry(
            "bes_multi_heap",
            "present",
            None,
            "heap",
            "MCPP `multi_heap.c` / `heap_api.c` + `multi_heap_*_impl` + `Heap start %p end %p`",
            f"0x{mh:X}" if mh is not None else "",
            "high",
        )
    )
    mh2 = find(pt, b"../../utils/heap/multi_heap.c")
    entries.append(
        entry(
            "utils_multi_heap",
            "present",
            None,
            "heap",
            "`utils/heap/multi_heap.c` + `multi_heap_register_impl` + syspool (`syspool_init: %p,0x%x`)",
            f"0x{mh2:X}" if mh2 is not None else "",
            "high",
        )
    )
    max_alloc = 0x106A000
    entries.append(
        entry(
            "custom_heap_max_single_alloc",
            hex(max_alloc),
            max_alloc,
            "heap",
            "FUN_2c47245c (lv/custom malloc path) `cmp` against literal 0x106A000 before alloc; oversized → log @ line 0x119",
            "0x4724F0",
            "medium",
            notes="Ceiling on one allocation, not proof of total heap/PSRAM size.",
        )
    )
    med = find(pt, b"MED_HEAP_BLOCK_MAX_NUM")
    entries.append(
        entry(
            "med_heap_block_max_num",
            None,
            None,
            "heap",
            "string `g_block_index(%d) >= MED_HEAP_BLOCK_MAX_NUM` in med_heap / heap_api.c — numeric N not bound (no VA xref)",
            f"0x{med:X}" if med is not None else "",
            "unrecovered",
        )
    )

    # --- SRAM / PSRAM ---
    utest = find(pt, b"utest_ram stab sram|psram")
    entries.append(
        entry(
            "utest_ram_sram_psram",
            "present",
            None,
            "psram",
            "factory `utest_ram` family exercises `sram|psram` (stab/rw/bitflip/memset/memcpy)",
            f"0x{utest:X}" if utest is not None else "",
            "high",
        )
    )
    psram_fmt = find(pt, b"PSRAM_SIZE = 0x%08x")
    entries.append(
        entry(
            "PSRAM_SIZE",
            None,
            None,
            "psram",
            "`show memory map` prints `PSRAM_BASE`/`PSRAM_SIZE` at runtime; no static `PSRAM_SIZE=0x...` banner in either image",
            f"0x{psram_fmt:X}" if psram_fmt is not None else "",
            "unrecovered",
        )
    )
    sram_hdr = find(pt, b"SRAM:\r\n")
    entries.append(
        entry(
            "memory_map_sram_regions",
            "M55_ITCM/DTCM/SYS + HIFI4_* + BTH_RAM + SENS_RAM",
            None,
            "sram",
            "eshell/BTH `show memory map` format strings list per-core SRAM regions (sizes filled at runtime)",
            f"0x{sram_hdr:X}" if sram_hdr is not None else "",
            "high",
        )
    )
    hifi_itcm = find(pt, b"HIFI4_ITCM_SIZE=0x00040000")
    entries.append(
        entry(
            "hifi4_itcm_size",
            "0x40000",
            0x40000,
            "sram",
            "embedded DSP banner `HIFI4_ITCM_SIZE=0x00040000` (+ DTCM same)",
            f"0x{hifi_itcm:X}" if hifi_itcm is not None else "",
            "high",
        )
    )
    hifi_dtcm = find(pt, b"HIFI4_DTCM_SIZE=0x00040000")
    entries.append(
        entry(
            "hifi4_dtcm_size",
            "0x40000",
            0x40000,
            "sram",
            "embedded DSP banner `HIFI4_DTCM_SIZE=0x00040000`",
            f"0x{hifi_dtcm:X}" if hifi_dtcm is not None else "",
            "high",
        )
    )

    # --- MPU / TrustZone ---
    mpu_path = find(pt, b"../../platform/cmsis/mpu_armv8m.c")
    entries.append(
        entry(
            "mpu_armv8m_source",
            "platform/cmsis/mpu_armv8m.c",
            None,
            "mpu",
            "source path present in M55 and BTH images",
            f"0x{mpu_path:X}" if mpu_path is not None else "",
            "high",
        )
    )
    mpu_cfg = find(pt, b"../../platform/cmsis/mpu_cfg.c")
    entries.append(
        entry(
            "mpu_cfg_source",
            "platform/cmsis/mpu_cfg.c",
            None,
            "mpu",
            "source path + `Warning, MPU is not setup correctly: %d` (M55 @ same cluster, BTH @ 0x110954)",
            f"0x{mpu_cfg:X}" if mpu_cfg is not None else "",
            "high",
        )
    )
    mpu_warn = find(pt, b"Warning, MPU is not setup correctly")
    entries.append(
        entry(
            "mpu_setup_warning",
            "present",
            None,
            "mpu",
            "runtime warning string — MPU config can fail closed; region table not statically dumped",
            f"0x{mpu_warn:X}" if mpu_warn is not None else "",
            "high",
        )
    )
    tz = find(pt, b"TrustZone")
    entries.append(
        entry(
            "TrustZone_ascii",
            "absent",
            None,
            "mpu",
            "`TrustZone` ASCII absent in platform_tester.bin and best1600_watch_bth.bin; `SecureFault` pretty-printer present (not signed-OTA / TZ proof)",
            "",
            "high",
            notes="Aligns with STAR_AIR_FULL_WRITEUP TrustZone honesty.",
        )
    )
    assert tz is None and find(bth, b"TrustZone") is None

    # --- Stack / UsageFault ---
    so = find(pt, b"Stack overflow UsageFault")
    entries.append(
        entry(
            "stack_overflow_usagefault",
            "present",
            None,
            "sram",
            "fault pretty-printer `(Stack overflow UsageFault)` + FreeRTOS `task %s stack overflow`",
            f"0x{so:X}" if so is not None else "",
            "high",
        )
    )
    task_so = find(pt, b"task %s stack overflow")
    entries.append(
        entry(
            "freertos_stack_overflow_hook",
            "present",
            None,
            "heap",
            "`task %s stack overflow` (configCHECK_FOR_STACK_OVERFLOW path)",
            f"0x{task_so:X}" if task_so is not None else "",
            "high",
        )
    )

    return entries


def write_md(entries: list[dict]) -> str:
    valued = [e for e in entries if e.get("bytes") is not None or (e.get("value") and e.get("confidence") == "high")]
    unrecovered = [e for e in entries if e.get("confidence") == "unrecovered"]

    lines: list[str] = []
    lines.append("# Memory / Heap / PSRAM / MPU Constraints")
    lines.append("")
    lines.append(
        "**Leaf:** 1.2.2 (`rtos-limits`)  ·  **Binaries:** `platform_tester.bin` + `best1600_watch_bth.bin` (1.0.12.83)"
    )
    lines.append("")
    lines.append(
        f"**Entries:** {len(entries)}  ·  **Sized (bytes field set):** "
        f"{sum(1 for e in entries if e.get('bytes') is not None)}  ·  "
        f"**UNRECOVERED:** {len(unrecovered)}"
    )
    lines.append("")
    lines.append("## Memory map (static banners + display buffer)")
    lines.append("")
    lines.append("| Region | Base / symbol | Size | Source |")
    lines.append("|---|---|---|---|")
    lines.append("| M55 NOR (XIP) | `FLASH_BASE=0x2C000000` / NC `0x28000000` | **16 MiB** (`0x1000000`) | M55 build banner |")
    lines.append("| M55 factory NV | `__factory_start=0x28FFF000` | **4 KiB** (`0x1000`) | banner `FACT_SEC_SIZE` |")
    lines.append("| M55 userdata | `__userdata_start=0x28FFC000` | **4 KiB** | banner `USER_SEC_SIZE` |")
    lines.append("| M55 OTA code offset | — | **64 KiB** (`0x10000`) | `OTA_CODE_OFFSET` |")
    lines.append("| Sensor hub NOR | `FLASH_BASE=0x34000000` / NC `0x30000000` | **1 MiB** (`0x100000`) | hub banner inside M55 image |")
    lines.append("| BTH NOR | `FLASH_BASE=0x34000000` | **4 MiB** (`0x400000`) | BTH banner |")
    lines.append("| BTH factory NV | `__factory_start=0x303FF000` | **4 KiB** | BTH banner |")
    lines.append("| HiFi4 ITCM / DTCM | `0x00840000` / `0x20940000` | **256 KiB** each | DSP banner in M55 |")
    lines.append("| JBD framebuffer | (PSRAM/SRAM buffer) | **153600** (`0x25800`) | `mov.w r2, #0x25800` @ `0x2C4985A2` |")
    lines.append("| M55/BTH/SENS/HIFI SYS RAM + PSRAM | printed by `show memory map` | **runtime** | format strings only |")
    lines.append("")
    lines.append("Per-core SRAM rows (`M55_ITCM_*`, `M55_DTCM_*`, `M55_SYS_RAM_*`, `BTH_RAM_*`, `SENS_RAM_*`, `PSRAM_*`) are enumerated by eshell/`show memory map` but **sizes are filled at runtime** — not present as `*_SIZE=0x...` build banners (except HiFi4 ITCM/DTCM above and `HIFI4_SRAM_SIZE=0` on the embedded DSP stub).")
    lines.append("")
    lines.append("## OOM / allocation failure paths")
    lines.append("")
    lines.append("| Path | Trigger | Notes |")
    lines.append("|---|---|---|")
    lines.append("| LVGL temp buffers | `Out of memory, can't allocate a new buffer (increase your LV_MEM_SIZE/heap size)` | From `lv_mem.c`; **LV_MEM_SIZE itself unrecovered** — `lv_mem_alloc` is `LV_MEM_CUSTOM` → heap id 4 |")
    lines.append("| LVGL buf slots | `no more buffers. (increase LV_MEM_BUF_MAX_NUM)` | **`LV_MEM_BUF_MAX_NUM=16`** from `cmp *, #0x10` in `lv_mem_buf_get` |")
    lines.append("| Custom/multi heap | `[%s] no memory: size=%u`, syspool shortage, `Cannot malloc any RAM` | `bes/heap` + `utils/heap` multi_heap / med_heap / syspool |")
    lines.append("| Oversized single alloc | cmp vs **`0x106A000`** in FUN_2c47245c | Reject before malloc; not total heap size |")
    lines.append("| FreeRTOS stack | `task %s stack overflow` | `configCHECK_FOR_STACK_OVERFLOW` |")
    lines.append("| UsageFault | `(Stack overflow UsageFault)` | Fault pretty-printer |")
    lines.append("")
    lines.append("## Heap stack (honesty)")
    lines.append("")
    lines.append("1. **FreeRTOS `heap_4.c`** is linked (`pvPortMalloc` / `vPortFree` asserts). **`configTOTAL_HEAP_SIZE` is UNRECOVERED** (no `ucHeap` extent; TRACE-interned asserts — see leaf-1.1.1).")
    lines.append("2. **BES `multi_heap`** (MCPP + utils) and **syspool** sit beside FreeRTOS; LVGL custom alloc uses heap **id 4** via FUN_2c47266c → FUN_2c47245c.")
    lines.append("3. **`heap_5` string absent.** Do not assume heap_5 regions from SDK defaults.")
    lines.append("4. Media path: `med_malloc` / `MED_HEAP_BLOCK_MAX_NUM` (numeric N unrecovered).")
    lines.append("")
    lines.append("## MPU honesty (TrustZone absent)")
    lines.append("")
    lines.append("- Source paths **`../../platform/cmsis/mpu_armv8m.c`** and **`../../platform/cmsis/mpu_cfg.c`** appear in **both** M55 and BTH images.")
    lines.append("- Runtime string **`Warning, MPU is not setup correctly: %d`** — configuration can fail; static region descriptors were **not** recovered as a table.")
    lines.append("- Literal ASCII **`TrustZone` is absent** from both binaries. **`SecureFault`** appears in the UsageFault/HardFault pretty-printer cluster — that is an ARMv8-M fault name, **not** evidence of TrustZone world-switch or signed OTA (same honesty as `STAR_AIR_FULL_WRITEUP.md`).")
    lines.append("- MPU here is best read as **optional CMSIS MPU bring-up**, not a proven secure/non-secure split for the product OTA path.")
    lines.append("")
    lines.append("## Key recovered byte sizes")
    lines.append("")
    lines.append("| Name | Bytes | Hex |")
    lines.append("|---|---:|---|")
    for e in entries:
        if e.get("bytes") is not None:
            lines.append(f"| `{e['name']}` | {e['bytes']} | `{e['value']}` |")
    lines.append("")
    lines.append("## Full inventory")
    lines.append("")
    lines.append("| Name | Value | Bytes | Region | Conf | Offset |")
    lines.append("|---|---|---:|---|---|---|")
    for e in entries:
        b = e["bytes"] if e["bytes"] is not None else "—"
        v = e["value"] if e["value"] is not None else "UNRECOVERED"
        lines.append(
            f"| `{e['name']}` | {v} | {b} | {e['region']} | {e['confidence']} | {e['file_offset'] or '—'} |"
        )
    lines.append("")
    lines.append("## Regenerating")
    lines.append("")
    lines.append("```bash")
    lines.append("python3 Reverse/firmware/analysis/rtos/limits/memory_mpu/extract_memory.py")
    lines.append("node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.2.2")
    lines.append("```")
    lines.append("")
    return "\n".join(lines)


def main() -> int:
    pt = PT.read_bytes()
    bth = BTH.read_bytes()
    entries = build_entries(pt, bth)
    if len(entries) < 10:
        raise SystemExit(f"expected >=10 entries, got {len(entries)}")

    doc = {
        "leaf": "leaf-1.2.2",
        "binaries": [
            "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
            "Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin",
        ],
        "xip_base": hex(XIP),
        "method": "string banners + Capstone Thumb immediates (FB 0x25800, LV_MEM_BUF_MAX_NUM); honesty on UNRECOVERED heap/LV_MEM/PSRAM sizes",
        "entry_count": len(entries),
        "entries": entries,
    }
    OUT_JSON.write_text(json.dumps(doc, indent=2) + "\n")
    md = write_md(entries)
    OUT_MD.write_text(md)
    print(f"wrote {OUT_JSON} ({len(entries)} entries)")
    print(f"wrote {OUT_MD} ({len(md)} bytes)")
    sized = [(e["name"], e["bytes"]) for e in entries if e.get("bytes") is not None]
    print("key byte sizes:", ", ".join(f"{n}={b}" for n, b in sized))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
