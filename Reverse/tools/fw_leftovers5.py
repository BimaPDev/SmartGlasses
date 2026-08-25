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


def show(va: int, n: int = 80, label: str = ""):
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
        if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str and c > 5:
            break
        if ins.mnemonic == "bx" and "lr" in ins.op_str and c > 2:
            break
        if c >= n:
            break


print("=== TRACE/transport/eshell-open strings ===")
for k in [
    b"HAL_TRACE_TRANSPORT",
    b"TRACE_TRANSPORT",
    b"hal_trace_open",
    b"eshell_paltform_init",
    b"eshell_platform_init",
    b"DRVUSB",
    b"utest_uart",
    b"UART ID",
    b"HAL_UART",
    b"uart_id",
    b"UART_ID",
    b"iomux_set_uart",
    b"set_uart0",
    b"set_uart1",
    b"set_uart2",
    b"analog_uart",
    b"TRACE UART",
    b"trace uart",
    b"console",
    b"baud",
]:
    hits = find_all(k)
    if hits:
        print(f"  {k!r} n={len(hits)}")
        for h in hits[:6]:
            s = h
            while s > 0 and blob[s - 1] != 0 and h - s < 20:
                s -= 1
            print(f"      0x{h:06X} {cstr(s, 70)!r}")

print("\n=== DRVUSB neighborhood ===")
p = blob.find(b"DRVUSB")
print(f"  off={hex(p)}")
cur = max(0, p - 0x80)
end = p + 0x80
while cur < end:
    e = blob.find(b"\x00", cur)
    s = blob[cur:e]
    if s and all(32 <= b < 127 for b in s) and len(s) >= 3:
        print(f"    0x{cur:06X} {s.decode()!r}")
    cur = e + 1

print("\n=== xmodem/eshell help literals -> find app_eshell .text ===")
for o in (0x0B2714, 0x2FD98C, 0x4319E8):
    print(f"\n  neighborhood of lit @ 0x{o:06X}")
    # back up to function start
    start = max(0, o - 0x80) & ~1
    show(BASE + start, 40, f"near {hex(o)}")

print("\n=== 0x3C4275xx-0x3C4278xx (eshell_platform) lits, any alignment ===")
# unaligned search of those VAs
for fo in range(0x4275D0, 0x427850):
    s = cstr(fo, 40)
    if not s or len(s) < 8:
        continue
    for base in (ALIAS, BASE):
        ps = find_all(struct.pack("<I", base + fo))
        if ps:
            print(f"  {s!r} ptr {hex(base+fo)} at {[hex(x) for x in ps[:6]]}")

print("\n=== strcmp-like: packed action strings as 0x3C194xxx anywhere ===")
n = 0
for o in range(0, N - 4, 4):
    v = u32(o)
    if 0x3C194B00 <= v < 0x3C195200:
        print(f"  lit@0x{o:06X} = 0x{v:08X} {cstr(v-ALIAS)!r}")
        n += 1
print(f"  n={n}")

print("\n=== USB MMIO literals (common BES ranges) ===")
bases = [
    0x40080000, 0x40100000, 0x40140000, 0x40180000,
    0x401C0000, 0x40200000, 0x40300000, 0x40340000,
    0x40380000, 0x50100000, 0x50120000,
]
for b in bases:
    ps = find_all(struct.pack("<I", b))
    if ps:
        print(f"  {hex(b)} n={len(ps)} first {[hex(p) for p in ps[:6]]}")
