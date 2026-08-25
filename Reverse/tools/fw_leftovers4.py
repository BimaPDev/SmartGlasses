#!/usr/bin/env python3
from __future__ import annotations

import re
import struct
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


def cstr(fo: int, lim: int = 80) -> str:
    if not (0 <= fo < N):
        return ""
    e = blob.find(b"\x00", fo, min(N, fo + lim))
    if e < 0:
        return ""
    try:
        return blob[fo:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


def find_all(pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def show(va: int, n: int = 70, label: str = ""):
    print(f"\n=== {label} @ 0x{va:08X} ===")
    o = va - BASE
    c = 0
    for ins in md.disasm(blob[o : o + n * 3], va):
        extra = ""
        if ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
            m = re.search(r"#(-?0x[0-9a-f]+|-?\d+)", ins.op_str)
            if m:
                lit = ((ins.address + 4) & ~3) + int(m.group(1), 16)
                lo = lit - BASE
                if 0 <= lo < N - 4:
                    val = u32(lo)
                    extra = f"  ; =0x{val:08X}"
                    s = cstr(val - ALIAS) or cstr(val - BASE)
                    if s:
                        extra += f" {s!r}"
        print(f"  0x{ins.address:08X}  {ins.mnemonic:8} {ins.op_str}{extra}")
        c += 1
        if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str and c > 4:
            break
        if ins.mnemonic == "bx" and "lr" in ins.op_str and c > 2:
            break
        if c >= n:
            break


print("=== pointers to eshell_platform strings (all aliases, whole file) ===")
for name, fo in [
    ("eshell_paltform_init open=%d", 0x427610),
    ("eshell_platform.c", 0x4275D4),
    ("eshell >", 0x4274E2),
    ("eshell : get char=%c", 0x4274EC),
    ("eshell_thread", 0x4275FC),
    ("debug_i2c", 0x427824),
]:
    print(f"\n## {name} @ 0x{fo:06X}")
    for base in (0, BASE, ALIAS, 0x28000000, 0x0C000000, 0x24000000):
        ps = find_all(struct.pack("<I", base + fo))
        if ps:
            print(f"  base {hex(base)} -> {[hex(p) for p in ps[:10]]}")

print("\n=== 0x3C427xxx literals anywhere ===")
n = 0
for o in range(0, N - 4, 4):
    v = u32(o)
    if 0x3C427400 <= v < 0x3C428800:
        print(f"  lit@0x{o:06X} = 0x{v:08X}  {cstr(v-ALIAS)!r}")
        n += 1
        if n >= 50:
            print("  ...")
            break
print(f"  n={n}")

show(0x2C607DF0, 50, "side-effect from flag-set bit0 0x2C607DF0")
show(0x2C606BA4, 40, "lookup 0x2C606BA4 (arg 0x60001)")

print("\n=== UART driver band around 0x530C00 literals ===")
for o in range(0x530B80, 0x530D00, 4):
    v = u32(o)
    extra = ""
    if (v & 0xFF000000) == 0x3C000000:
        extra = f"  {cstr(v-ALIAS)!r}"
    print(f"  0x{o:06X}: 0x{v:08X}{extra}")

# find push-lr before 0x530C00
print("\n=== push-lr near 0x530800-0x531000 ===")
for o in range(0x52F800, 0x531200, 2):
    w = struct.unpack_from("<H", blob, o)[0]
    if w == 0xB510 or w == 0xB530 or w == 0xB570 or w == 0xB5F0:
        # only if nearby literal is uart-related
        pass

# disassemble likely uart_open: search 0x52E000-0x532000 for functions loading 0x3C14B568
print("\n=== ldr-lits in 0x52E000-0x533000 pointing at uart strings ===")
o = 0x52E000
for ins in md.disasm(blob[o:0x533000], BASE + o):
    if ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
        m = re.search(r"#(-?0x[0-9a-f]+|-?\d+)", ins.op_str)
        if not m:
            continue
        lit = ((ins.address + 4) & ~3) + int(m.group(1), 16)
        lo = lit - BASE
        if 0 <= lo < N - 4:
            val = u32(lo)
            fo = val - ALIAS if (val & 0xFF000000) == 0x3C000000 else val - BASE
            if 0x14B500 <= fo <= 0x14B800 or 0x129E00 <= fo <= 0x12A100:
                print(f"  0x{ins.address:08X}  {ins.mnemonic} {ins.op_str}  ; {cstr(fo)!r}")

print("\n=== iomux first blob strings 0x0144C0-0x014800 ===")
cur = 0x0144C0
while cur < 0x014800:
    e = blob.find(b"\x00", cur)
    s = blob[cur:e]
    if s and all(32 <= b < 127 or b == 10 for b in s) and 4 <= len(s) < 90:
        print(f"  0x{cur:06X}  {s.decode('ascii')!r}")
    cur = e + 1
