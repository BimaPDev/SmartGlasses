#!/usr/bin/env python3
"""Map string-ID lookups, dump ID tables, xref __FILE__ literals for uart/iomux."""
from __future__ import annotations

import re
import struct
from collections import defaultdict
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BASE = 0x2C000000
ALIAS = 0x3C000000
BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
blob = BIN.read_bytes()
N = len(blob)
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
md.detail = True


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


def cstr(o: int, lim: int = 80) -> str:
    if not (0 <= o < N):
        return ""
    e = blob.find(b"\x00", o, min(N, o + lim))
    if e < 0:
        return ""
    try:
        return blob[o:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


def off_of(va: int) -> int | None:
    for b in (BASE, ALIAS, 0x28000000):
        if b <= va < b + N:
            return va - b
    return None


def dis(va: int, nbytes: int = 200):
    o = off_of(va)
    if o is None:
        return
    for ins in md.disasm(blob[o : o + nbytes], va):
        extra = ""
        if ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
            m = re.search(r"#(-?0x[0-9a-f]+|-?\d+)", ins.op_str)
            if m:
                lit = ((ins.address + 4) & ~3) + int(m.group(1), 16)
                lo = off_of(lit)
                if lo is not None:
                    val = u32(lo)
                    extra = f"  ; =0x{val:08X}"
                    s = cstr(val - ALIAS) or cstr(val - BASE)
                    if s:
                        extra += f"  {s!r}"
        yield ins, extra


print("=== disasm lookup helper 0x2C5E32BC ===")
for ins, extra in dis(0x2C5E32BC, 120):
    print(f"  0x{ins.address:08X}  {ins.mnemonic:8} {ins.op_str}{extra}")
    if ins.mnemonic == "pop" and "pc" in ins.op_str:
        # might be multiple returns; keep going a bit
        if ins.address > 0x2C5E3300:
            pass

print("\n=== continue helper after first pop ===")
for ins, extra in dis(0x2C5E32D8, 80):
    print(f"  0x{ins.address:08X}  {ins.mnemonic:8} {ins.op_str}{extra}")
    if ins.address > 0x2C5E3340:
        break

print("\n=== 0x2C5E3458 (mode-2 count fn) ===")
for ins, extra in dis(0x2C5E3458, 80):
    print(f"  0x{ins.address:08X}  {ins.mnemonic:8} {ins.op_str}{extra}")
    if ins.mnemonic == "pop" and "pc" in ins.op_str:
        break
    if ins.mnemonic == "bx" and "lr" in ins.op_str:
        break

# dump table at 0x3C43FD64
print("\n=== table @ file 0x43FD64 (mode2 from helper) first 20 ===")
o = 0x43FD64
for i in range(20):
    k, v = u32(o + i * 8), u32(o + i * 8 + 4)
    sk = cstr(k - ALIAS) or cstr(k - BASE) or hex(k)
    sv = cstr(v - ALIAS) or cstr(v - BASE) or hex(v)
    print(f"  [{i:3}] key=0x{k:08X} ({sk!s:.40})  val=0x{v:08X} ({sv!s:.40})")

print("\n=== __FILE__ / format-string pointer xrefs (0x3C) ===")
files = {
    "hal_uart.c": blob.find(b"../../platform/hal/hal_uart.c\x00"),
    "hal_iomux_best1600.c a": blob.find(b"../../platform/hal/best1600/hal_iomux_best1600.c\x00"),
    "hal_uart.c 2": None,
}
# all occurrences
for name in [
    b"../../platform/hal/hal_uart.c",
    b"../../platform/hal/best1600/hal_iomux_best1600.c",
    b"eshell_platform",
    b"hal_usb",
    b"hal_usbhost",
    b"analog_usb",
]:
    idx = 0
    print(f"\n## {name.decode(errors='replace')}")
    while True:
        p = blob.find(name, idx)
        if p < 0:
            break
        print(f"  str @ 0x{p:06X}")
        for base in (BASE, ALIAS):
            ps = find_all(struct.pack("<I", base + p))
            if ps:
                print(f"    ptr {hex(base+p)} -> {[hex(x) for x in ps[:12]]}")
        idx = p + 1

print("\n=== walk fac_cmd functions 0x5AA000-0x5AC000: collect 0x3C string lits ===")
# recursive-ish: disassemble from each even addr that looks like push lr, until pop pc
o = 0x5A9F00
seen = set()
funcs = []
while o < 0x5AC000:
    # push {..., lr} = 0xB5xx
    w = struct.unpack_from("<H", blob, o)[0]
    if (w & 0xFF00) == 0xB500:
        va = BASE + o
        lits = []
        end = o
        for ins, extra in dis(va, 400):
            if extra:
                lits.append(extra)
            if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str:
                end = ins.address - BASE
                break
            if ins.address - va > 0x180:
                end = ins.address - BASE
                break
        funcs.append((o, end, lits))
        o = max(end, o) + 2
    else:
        o += 2

print(f"  candidate funcs: {len(funcs)}")
for fo, end, lits in funcs:
    interesting = [x for x in lits if any(k in x.lower() for k in ("usb", "sn", "uart", "eshell", "mmi", "sleep", "cmd", "enable", "set_", "get_"))]
    if interesting or any("0x3c16" in x.lower() or "0x3c15f" in x.lower() for x in lits):
        print(f"\n  func 0x{BASE+fo:08X}-0x{BASE+end:08X}")
        for x in lits:
            print(f"    {x.strip()}")
