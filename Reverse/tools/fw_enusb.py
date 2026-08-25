#!/usr/bin/env python3
"""Disassemble fac_cmd around en_usb literals; find UART open id; find handleSystemMsg."""
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


print("=== 0x3C16xxxx words in fac_cmd code 0x5AA000-0x5AB400 ===")
for o in range(0x5AA000, 0x5AB400, 4):
    v = u32(o)
    if (v & 0xFFFF0000) == 0x3C160000:
        fo = v - ALIAS
        print(f"  lit @0x{o:06X} = 0x{v:08X}  {cstr(fo)!r}")

print("\n=== exact 0x3C1605E8 / 0x3C1605F0 anywhere ===")
for t in (0x3C1605E8, 0x3C1605F0, 0x2C1605E8, 0x3C1605FC):
    ps = find_all(struct.pack("<I", t))
    print(f"  {hex(t)} -> {[hex(p) for p in ps]}")

print("\n=== nearby words 0x5AAB00-0x5AAC40 ===")
for o in range(0x5AAB00, 0x5AAC40, 4):
    v = u32(o)
    extra = ""
    if (v & 0xFF000000) in (0x3C000000, 0x2C000000):
        fo = v & 0xFFFFFF
        s = cstr(fo)
        extra = f"  {s!r}" if s else ""
    print(f"  0x{o:06X}: 0x{v:08X}{extra}")


def show(va: int, n: int = 80, label: str = ""):
    print(f"\n=== {label} @ 0x{va:08X} ===")
    o = va - BASE
    c = 0
    for ins in md.disasm(blob[o : o + n * 2], va):
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
        if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str:
            break
        if ins.mnemonic == "bx" and "lr" in ins.op_str:
            break
        if c >= n:
            break


# find push {lr} near 0x5AAB00
print("\n=== push-lr candidates 0x5AAA80-0x5AAC00 ===")
for o in range(0x5AAA80, 0x5AAC00, 2):
    w = struct.unpack_from("<H", blob, o)[0]
    if (w & 0xFF00) == 0xB500:
        print(f"  push@0x{BASE+o:08X}  insn=0x{w:04X}")

show(0x2C5AAB14, 60, "0x2C5AAB14 (prior walk)")
show(0x2C5AAB80, 70, "0x2C5AAB80")

# UART: search ALL 0x3C12xxxx pointing at hal_uart strings
print("\n=== pointers into hal_uart string blob 0x129E00-0x12A080 ===")
# scan entire file for words in that range under 0x3C
count = 0
for o in range(0, N - 4, 4):
    v = u32(o)
    if 0x3C129E00 <= v < 0x3C12A100 or 0x3C14B560 <= v < 0x3C14B6C0:
        print(f"  ptr@0x{o:06X} = 0x{v:08X}  {cstr(v-ALIAS)!r}")
        count += 1
print(f"  total {count}")

print("\n=== pointers into iomux strings 0x0144E0-0x014700 and 0x145880-0x145A00 ===")
count = 0
for o in range(0, N - 4, 4):
    v = u32(o)
    if 0x3C0144C0 <= v < 0x014800 + ALIAS or 0x3C145880 <= v < 0x3C145A00:
        s = cstr(v - ALIAS)
        if s:
            print(f"  ptr@0x{o:06X} = 0x{v:08X}  {s!r}")
            count += 1
            if count > 40:
                print("  ...")
                break
print(f"  shown {count}")

print("\n=== pointers into eshell_platform strings ===")
for name in [b"eshell_platform.c", b"eshell >", b"app_eshell", b"debug_i2c"]:
    p = blob.find(name + b"\x00")
    if p < 0:
        p = blob.find(name)
    print(f"  {name!r} @ {hex(p) if p>=0 else None}")
    if p >= 0:
        for base in (BASE, ALIAS):
            ps = find_all(struct.pack("<I", base + p))
            if ps:
                print(f"    {hex(base+p)} -> {[hex(x) for x in ps[:10]]}")

print("\n=== 'no handler for action' neighborhood as packed actions ===")
o = blob.find(b"no handler for action")
print(f"  off={hex(o)}")
# dump 0x200 before and after as strings
start = max(0, o - 0x400)
end = min(N, o + 0x200)
cur = start
while cur < end:
    e = blob.find(b"\x00", cur)
    s = blob[cur:e]
    if s and all(32 <= b < 127 or b in (10, 13) for b in s):
        try:
            t = s.decode("ascii")
            if len(t) >= 3:
                print(f"  0x{cur:06X}  {t!r}")
        except UnicodeDecodeError:
            pass
    cur = e + 1
