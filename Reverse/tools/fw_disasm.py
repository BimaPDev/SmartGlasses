#!/usr/bin/env python3
"""Local-only BES1600 M55 analysis of platform_tester.bin.

Load address recovered from the reset trampoline:
  file+0x10: ldr r0, [pc, #0x44] ; bx r0
  literal at +0x58 = 0x2C000115  → FLASH XIP base 0x2C000000
"""
from __future__ import annotations

import re
import struct
from collections import defaultdict
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BASE = 0x2C000000
BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
OUT = Path(__file__).resolve().parents[1] / "firmware" / "analysis"
blob = BIN.read_bytes()
SIZE = len(blob)
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
md.detail = False


def va(off: int) -> int:
    return BASE + off


def off(va_: int) -> int | None:
    if BASE <= va_ < BASE + SIZE:
        return va_ - BASE
    return None


def u32(o: int) -> int:
    return struct.unpack_from("<I", blob, o)[0]


def find_all(pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def string_at(o: int) -> str:
    e = blob.find(b"\x00", o)
    return blob[o:e].decode("ascii", "replace")


def xrefs_to_va(target: int) -> list[int]:
    """File offsets of little-endian pointers to target (and Thumb |1)."""
    hits = []
    for t in (target, target | 1, target & ~1):
        hits.extend(find_all(struct.pack("<I", t)))
    return sorted(set(hits))


def disasm(o: int, count: int = 40) -> list[str]:
    lines = []
    for i, ins in enumerate(md.disasm(blob[o : o + 8 * count], va(o))):
        if i >= count:
            break
        lines.append(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}")
    return lines


def nearest_func_start(o: int, back: int = 0x200) -> int:
    """Heuristic: previous PUSH {...,lr} / PUSH.W {...,lr}."""
    start = max(0, (o - back) & ~1)
    best = o & ~1
    for i in range(o & ~1, start, -2):
        w = blob[i : i + 2]
        # push {rlist, lr}  b5xx  (16-bit) or e92d xxxx (32-bit)
        if w[1] == 0xB5:
            best = i
            break
        if i + 3 < SIZE and blob[i] == 0x2D and blob[i + 1] == 0xE9:
            best = i
            break
        if i + 3 < SIZE and blob[i] == 0x4F and blob[i + 1] == 0xF0 and blob[i + 2] == 0x00 and blob[i + 3] == 0x00:
            # nop.w — skip
            continue
    return best


def strings(n=4):
    for m in re.finditer(rb"[\x20-\x7e]{%d,}" % n, blob):
        yield m.start(), m.group().decode("ascii")


def main():
    OUT.mkdir(exist_ok=True)
    report = []
    p = report.append

    p("# platform_tester.bin disassembly notes (1.0.12.83)")
    p("")
    p(f"- file: `{BIN}` ({SIZE} bytes)")
    p(f"- load address: `0x{BASE:08X}` (M55 FLASH XIP)")
    p(f"- reset vector trampoline @ `0x{va(0x10):08X}` → `0x{u32(0x58):08X}`")
    p("")

    # Confirm entry disasm
    p("## Reset trampoline")
    p("```")
    p("\n".join(disasm(0x10, 12)))
    p("```")
    p("")

    actions = [
        "handleSystemMsg",
        "get_device_info",
        "set_demo_mode",
        "get_demo_mode",
        "get_glass_screenshot",
        "get_glass_log",
        "show_screenshot_save_result",
        "screenshot",
        "do_recovery",
        "set_zen_mode",
        "set_volume",
        "en_usb",
        "enable usb",
        "fac_cmd",
        "eshell : argc_num=%d, exe_cmd=%s, help_info=%s",
        "hal_uart_open",
        "debug_i2c",
        "launcher_standby_demo_mode",
        "Demo Mode Open",
        "no handler for action %s",
    ]

    p("## String VAs and pointer xrefs")
    p("")
    p("| string | file off | VA | #ptr xrefs | xref offs (first 6) |")
    p("|---|---:|---:|---:|---|")
    str_map = {}
    for s, *_ in [(a,) for a in actions]:
        o = blob.find(s.encode("ascii") + b"\x00")
        if o < 0:
            o = blob.find(s.encode("ascii"))
        if o < 0:
            p(f"| `{s}` | — | — | 0 | not present |")
            continue
        x = xrefs_to_va(va(o))
        str_map[s] = (o, x)
        xs = ", ".join(f"`0x{h:x}`" for h in x[:6]) or "—"
        p(f"| `{s}` | `0x{o:x}` | `0x{va(o):08X}` | {len(x)} | {xs} |")
    p("")

    # handleSystemMsg: dump literal pool + function
    p("## handleSystemMsg")
    p("")
    hs = blob.find(b"handleSystemMsg\x00")
    p(f"Name string at `0x{va(hs):08X}`.")
    # The "no handler" string is the miss path
    miss = blob.find(b"[Launcher]MessageModel handleSystemMsg no handler for action %s\x00")
    p(f"Miss-path format string at `0x{va(miss):08X}`, ptr xrefs: "
      + ", ".join(f"`0x{x:x}`" for x in xrefs_to_va(va(miss))[:8]))
    p("")

    # Collect all packed action strings around the table
    ident = re.compile(rb"([a-z][a-z0-9_]{3,40})\x00")
    table_region = (0x194BCC, 0x194F70)
    p("### Packed action names (file 0x194bcc–0x194f70) and their pointer xrefs")
    p("")
    p("| action | VA | #xrefs | first xref |")
    p("|---|---:|---:|---|")
    action_xrefs = {}
    for m in ident.finditer(blob[table_region[0] : table_region[1]]):
        name = m.group(1).decode()
        o = table_region[0] + m.start()
        xs = xrefs_to_va(va(o))
        action_xrefs[name] = (o, xs)
        first = f"`0x{xs[0]:x}`" if xs else "—"
        p(f"| `{name}` | `0x{va(o):08X}` | {len(xs)} | {first} |")
    p("")

    # Cluster xrefs: tables of consecutive pointers
    p("### Consecutive pointer tables that cite those actions")
    p("")
    all_ptr_offs = []
    for name, (o, xs) in action_xrefs.items():
        for x in xs:
            all_ptr_offs.append((x, name, o))
    all_ptr_offs.sort()
    # group runs spaced by 4/8/12/16
    runs = []
    if all_ptr_offs:
        run = [all_ptr_offs[0]]
        for prev, cur in zip(all_ptr_offs, all_ptr_offs[1:]):
            gap = cur[0] - prev[0]
            if 4 <= gap <= 32:
                run.append(cur)
            else:
                if len(run) >= 3:
                    runs.append(run)
                run = [cur]
        if len(run) >= 3:
            runs.append(run)
    for run in runs:
        p(f"Table at file `0x{run[0][0]:x}` (VA `0x{va(run[0][0]):08X}`), {len(run)} hits, stride ~{run[1][0]-run[0][0]}:")
        p("```")
        start = run[0][0] - 16
        end = run[-1][0] + 32
        start = max(0, start & ~3)
        for o in range(start, min(end, SIZE - 3), 4):
            w = u32(o)
            label = ""
            of = off(w & ~1)
            if of is not None:
                s = string_at(of)
                if 3 < len(s) < 60 and all(32 <= ord(c) < 127 for c in s):
                    label = f"  ; \"{s}\""
                elif BASE <= w < BASE + SIZE:
                    label = "  ; code/data"
            mark = ""
            if any(o == r[0] for r in run):
                mark = " <<<"
            p(f"  {va(o):08x}: {w:08x}{label}{mark}")
        p("```")
        p("")

    # Disassemble around miss-path xref (likely inside handleSystemMsg)
    miss_x = xrefs_to_va(va(miss))
    if miss_x:
        fn = nearest_func_start(miss_x[0], 0x800)
        p(f"### Function containing miss-path string (heuristic start `0x{va(fn):08X}`, xref `0x{va(miss_x[0]):08X}`)")
        p("```")
        p("\n".join(disasm(fn, 80)))
        p("```")
        p("")
        p("Literal pool / nearby 32-bit words around the xref:")
        p("```")
        base_o = miss_x[0] & ~3
        for o in range(base_o - 0x80, base_o + 0x80, 4):
            if 0 <= o < SIZE - 3:
                w = u32(o)
                of = off(w & ~1)
                extra = ""
                if of is not None:
                    s = string_at(of)
                    if 3 < len(s) < 80 and all(32 <= ord(c) < 127 for c in s):
                        extra = f"  ; \"{s[:70]}\""
                p(f"  {va(o):08x}: {w:08x}{extra}")
        p("```")
        p("")

    # screenshot / log
    p("## Screenshot + log handlers")
    p("")
    for name in (
        "get_glass_screenshot",
        "get_glass_log",
        "show_screenshot_save_result",
        "[Launcher]MessageModel::handleScreenShot called",
        "[Launcher]MessageModel::handleGetLog called, get uuid failed",
    ):
        o = blob.find(name.encode())
        if o < 0:
            p(f"- `{name}`: missing")
            continue
        xs = xrefs_to_va(va(o))
        p(f"- `{name}` VA `0x{va(o):08X}` xrefs={len(xs)} first={xs[:4]}")
        if xs:
            fn = nearest_func_start(xs[0], 0x400)
            p(f"  heuristic fn `0x{va(fn):08X}`")
            p("  ```")
            p("  " + "\n  ".join(disasm(fn, 24)))
            p("  ```")
    p("")

    # fac_cmd table
    p("## fac_cmd name/help pairs as a pointer table")
    p("")
    fac_names = [
        "set_sn", "get_sn", "en_usb", "mmi_run", "close_eshell",
        "set_bt_mac", "sensor_cali", "sys_reset", "show_pic",
    ]
    for name in fac_names:
        o = blob.find(name.encode() + b"\x00")
        # prefer the one in the 0x15fdbc table
        cand = [h for h in find_all(name.encode() + b"\x00") if 0x15F000 < h < 0x162000]
        o = cand[0] if cand else o
        xs = xrefs_to_va(va(o)) if o >= 0 else []
        p(f"- `{name}` off `0x{o:x}` VA `0x{va(o):08X}` xrefs={xs[:6]}")
    p("")

    # Walk from set_sn pointer into a struct array
    set_sn_o = [h for h in find_all(b"set_sn\x00") if 0x15F000 < h < 0x162000]
    if set_sn_o:
        xs = xrefs_to_va(va(set_sn_o[0]))
        p(f"set_sn xrefs: {[hex(x) for x in xs]}")
        if xs:
            # dump 16-byte records around first xref
            x0 = xs[0]
            p("```")
            for o in range((x0 - 64) & ~3, x0 + 0x200, 4):
                w = u32(o)
                of_ = off(w & ~1)
                extra = ""
                if of_ is not None:
                    s = string_at(of_)
                    if 2 < len(s) < 60 and all(32 <= ord(c) < 127 for c in s):
                        extra = f"  ; \"{s}\""
                    elif BASE <= (w & ~1) < BASE + SIZE:
                        extra = "  ; ptr"
                p(f"  {va(o):08x}: {w:08x}{extra}")
            p("```")
    p("")

    # en_usb
    p("## en_usb")
    p("")
    en = [h for h in find_all(b"en_usb\x00") if 0x15F000 < h < 0x162000]
    if en:
        xs = xrefs_to_va(va(en[0]))
        p(f"name @ `0x{va(en[0]):08X}` xrefs={ [hex(x) for x in xs] }")
        help_o = blob.find(b"enable usb\x00", 0x15F000)
        p(f"help @ `0x{va(help_o):08X}` xrefs={ [hex(x) for x in xrefs_to_va(va(help_o))] }")
        if xs:
            # nearby function pointer in same record
            rec = xs[0]
            p("record words:")
            p("```")
            for o in range(rec - 16, rec + 32, 4):
                w = u32(o)
                extra = ""
                of_ = off(w & ~1)
                if of_ is not None:
                    s = string_at(of_)
                    if 2 < len(s) < 50 and all(32 <= ord(c) < 127 for c in s):
                        extra = f"  ; \"{s}\""
                    else:
                        extra = "  ; ptr/code"
                p(f"  {va(o):08x}: {w:08x}{extra}")
            p("```")
            # try to find handler: often name, help, handler in 12 or 16 byte struct
            for stride in (12, 16, 20, 24):
                handler = u32(rec + 8) if stride >= 12 else 0
            # dump a few candidate code ptrs in the record
            for delta in range(0, 24, 4):
                w = u32(rec + delta)
                if (w & ~1) >= BASE and off(w & ~1) is not None:
                    tgt = w & ~1
                    # skip if it's a string
                    s = string_at(off(tgt))
                    if all(32 <= ord(c) < 127 for c in s[:8]) and len(s) > 2:
                        continue
                    p(f"Possible handler at `0x{w:08X}` (record+{delta}):")
                    p("```")
                    p("\n".join(disasm(off(tgt), 50)))
                    p("```")
                    p("")

    # UART
    p("## UART / debug console")
    p("")
    for name in (
        b"hal_uart_open\x00",
        b"eshell_paltform_init open=%d\x00",
        b"debug_i2c\x00",
        b"eshell >\x00",
        b"../../platform/hal/hal_uart.c\x00",
        b"../../utils/eshell/eshell_platform.c\x00",
    ):
        o = blob.find(name)
        if o < 0:
            p(f"- {name!r} missing")
            continue
        xs = xrefs_to_va(va(o))
        p(f"- `{name.decode()}` VA `0x{va(o):08X}` xrefs={len(xs)} { [hex(x) for x in xs[:6]] }")
        if xs:
            fn = nearest_func_start(xs[0], 0x300)
            p(f"  heuristic fn `0x{va(fn):08X}`")
            p("  ```")
            p("  " + "\n  ".join(disasm(fn, 30)))
            p("  ```")
    p("")

    # IOMUX / UART ID immediates near eshell_platform
    plat = blob.find(b"../../utils/eshell/eshell_platform.c\x00")
    if plat >= 0:
        xs = xrefs_to_va(va(plat))
        p(f"eshell_platform.c xrefs (likely assert/log sites): {[hex(x) for x in xs[:10]]}")
        if xs:
            fn = nearest_func_start(xs[0], 0x200)
            p(f"### eshell_platform around first xref, fn `0x{va(fn):08X}`")
            p("```")
            p("\n".join(disasm(fn, 60)))
            p("```")
    p("")

    # demo mode
    p("## Demo-mode strings (not BLE actions)")
    p("")
    for name in (b"launcher_standby_demo_mode\x00", b"Demo Mode Open\x00"):
        o = blob.find(name)
        xs = xrefs_to_va(va(o)) if o >= 0 else []
        p(f"- `{name.decode()}` VA `0x{va(o):08X}` xrefs={ [hex(x) for x in xs] }")
        if xs:
            fn = nearest_func_start(xs[0], 0x200)
            p(f"  heuristic fn `0x{va(fn):08X}`")
            p("  ```")
            p("  " + "\n  ".join(disasm(fn, 28)))
            p("  ```")
    p("")

    # OTA md5
    p("## OTA verify strings")
    p("")
    for name in (
        b"ota failed to check transfer file md5\x00",
        b"ota failed to check written flash md5\x00",
        b"ota failed to update magic number\x00",
        b"ota_check_and_change_boot_type succeed\x00",
        b"init_xjxr_ota_checker\x00",
    ):
        o = blob.find(name)
        if o < 0:
            p(f"- missing {name!r}")
            continue
        xs = xrefs_to_va(va(o))
        p(f"- `{name.decode()}` VA `0x{va(o):08X}` xrefs={ [hex(x) for x in xs[:5]] }")
    p("")

    text = "\n".join(report) + "\n"
    outp = OUT / "platform_tester_1.0.12.83_disasm.md"
    outp.write_text(text)
    print(f"wrote {outp} ({len(text)} bytes)")
    print(f"load base 0x{BASE:08X} size {SIZE}")


if __name__ == "__main__":
    main()
