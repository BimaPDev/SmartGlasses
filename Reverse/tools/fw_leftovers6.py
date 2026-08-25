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


def cstr(fo: int, lim: int = 64) -> str:
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


def show(va: int, n: int = 60, label: str = ""):
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
        if c >= n:
            break


print("=== packed strings 0x427400-0x427A00 (eshell) ===")
cur = 0x427400
while cur < 0x427A00:
    e = blob.find(b"\x00", cur)
    s = blob[cur:e]
    if s and all(32 <= b < 127 or b == 10 for b in s) and 2 <= len(s) < 80:
        print(f"  0x{cur:06X}  {s.decode()!r}")
    cur = e + 1

print("\n=== utest_uart / md / xmodem pointers ===")
for name in [b"utest_uart", b"md16", b"mw32", b"xmodem", b"eshell >"]:
    p = blob.find(name + b"\x00")
    print(f"  {name!r} @ {hex(p) if p>=0 else None}")
    if p is not None and p >= 0:
        for base in (ALIAS, BASE):
            ps = find_all(struct.pack("<I", base + p))
            if ps:
                print(f"    {hex(base+p)} {[hex(x) for x in ps[:8]]}")

print("\n=== 0x3C429c34 utest_uart lits ===")
for t in (0x3C429C34, 0x3C429C40, 0x2C429C34):
    ps = find_all(struct.pack("<I", t))
    print(f"  {hex(t)} { [hex(p) for p in ps] }")

# If we find a lit, disassemble the function that owns it
print("\n=== 0x3C42xxxx in 0x5E0000-0x670000 (possible eshell .text) ===")
n = 0
for o in range(0x5C0000, 0x670000, 4):
    v = u32(o)
    if 0x3C427000 <= v < 0x3C42A000:
        print(f"  lit@0x{o:06X} = 0x{v:08X} {cstr(v-ALIAS)!r}")
        n += 1
        if n > 30:
            break

print("\n=== fac_cmd line numbers (TRACE r2) for handler map ===")
# already have several; dump a few more function starts with their line imm
for o in range(0x5AA100, 0x5AAD00, 2):
    w = struct.unpack_from("<H", blob, o)[0]
    if w in (0xB510, 0xB530, 0xB570):
        show(BASE + o, 20, f"fac_cmd cand")
