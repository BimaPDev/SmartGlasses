#!/usr/bin/env python3
"""Raw Thumb-2 MOVW/MOVT scanner — no linear disassembly.

Encodings (LE halfwords):
  MOVW: hw1 = 0xF240 | (i<<10) | imm4
        hw2 = (imm3<<12) | (rd<<8) | imm8
  MOVT: same with 0xF2C0
  imm16 = imm4:i:imm3:imm8
"""
from __future__ import annotations

import struct
from collections import defaultdict
from pathlib import Path

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
blob = BIN.read_bytes()
N = len(blob)
BASE = 0x2C000000
ALIAS = 0x3C000000


def cstr(o: int, lim: int = 64) -> str:
    if o < 0 or o >= N:
        return ""
    e = blob.find(b"\x00", o, min(N, o + lim))
    if e < 0:
        return ""
    try:
        return blob[o:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


def decode_mov_wide(o: int) -> tuple[str, int, int] | None:
    """Return (kind, rd, imm16) or None. kind in {movw, movt}."""
    if o + 4 > N:
        return None
    hw1, hw2 = struct.unpack_from("<HH", blob, o)
    op = hw1 & 0xFBF0
    if op == 0xF240:
        kind = "movw"
    elif op == 0xF2C0:
        kind = "movt"
    else:
        return None
    i = (hw1 >> 10) & 1
    imm4 = hw1 & 0xF
    imm3 = (hw2 >> 12) & 7
    rd = (hw2 >> 8) & 0xF
    imm8 = hw2 & 0xFF
    imm16 = (imm4 << 12) | (i << 11) | (imm3 << 8) | imm8
    return kind, rd, imm16


pairs: list[tuple[int, int, int]] = []  # (movw_off, rd, addr32)
pending: dict[int, tuple[int, int]] = {}  # rd -> (off, low16)

# also keep last 8 movw per rd in case other insns sit between
last_movw: dict[int, tuple[int, int]] = {}

o = 0
while o + 4 <= N:
    d = decode_mov_wide(o)
    if d is None:
        o += 2
        continue
    kind, rd, imm16 = d
    if kind == "movw":
        last_movw[rd] = (o, imm16)
        o += 4
        continue
    # movt
    if rd in last_movw:
        wo, lo = last_movw[rd]
        addr = (imm16 << 16) | lo
        pairs.append((wo, rd, addr))
    o += 4

print(f"MOVW/MOVT pairs: {len(pairs)}")

# histogram of high 8 bits
hi = defaultdict(int)
for _, _, a in pairs:
    hi[a >> 24] += 1
print("high-byte histogram (top):")
for k, v in sorted(hi.items(), key=lambda x: -x[1])[:16]:
    print(f"  0x{k:02X}......  x{v}")

targets = {
    "en_usb 2C": 0x2C1605E8,
    "en_usb 3C": 0x3C1605E8,
    "set_sn 3C": 0x3C15FDBC,
    "eshell> 2C": 0x2C4274E2,
    "eshell> 3C": 0x3C4274E2,
    "handleSystemMsg 2C": 0x2C194D54,
    "handleSystemMsg 3C": 0x3C194D54,
    "no handler 2C": 0x2C182B64,
    "no handler 3C": 0x3C182B64,
    "hal_uart_open 2C": 0x2C129E36,
    "hal_uart_open 3C": 0x3C129E36,
    "get_glass_screenshot 2C": 0x2C194580,
    "get_glass_screenshot 3C": 0x3C194580,
    "id_lookup": 0x2C5E33F0,
    "set_sn handler": 0x2C5AA114,
}
print("\n=== exact target hits ===")
by_addr = defaultdict(list)
for wo, rd, addr in pairs:
    by_addr[addr].append((wo, rd))
    by_addr[addr | 1].append((wo, rd))
    by_addr[addr & ~1].append((wo, rd))
for name, t in targets.items():
    hits = by_addr.get(t, [])
    print(f"  {name:28} 0x{t:08X}  n={len(hits)}  offs={[hex(h[0]) for h in hits[:8]]}")

print("\n=== MOVW/MOVT into fac_cmd string window (file 0x15F000-0x161000) ===")
for wo, rd, addr in pairs:
    for base in (BASE, ALIAS):
        fo = addr - base
        if 0x15F000 <= fo < 0x161000:
            s = cstr(fo)
            print(f"  movw@0x{wo:06X} r{rd} -> 0x{addr:08X}  {s!r}")

print("\n=== MOVW/MOVT into UART/eshell string windows ===")
windows = [
    (0x129000, 0x12B000, "hal_uart.c strings"),
    (0x014400, 0x014800, "hal_iomux strings"),
    (0x145800, 0x145A00, "hal_iomux copy2"),
    (0x427000, 0x42A000, "eshell prompt/utest"),
    (0x182000, 0x196000, "launcher/system msg"),
]
for wo, rd, addr in pairs:
    for base in (BASE, ALIAS, 0):
        fo = addr - base if base else addr
        if fo < 0 or fo >= N:
            continue
        for a, b, lab in windows:
            if a <= fo < b:
                s = cstr(fo)
                if s:
                    print(f"  [{lab}] movw@0x{wo:06X} r{rd} -> 0x{addr:08X}  {s!r}")
                break

print("\n=== sample of pairs whose target is a C string (first 40 in .text) ===")
n = 0
for wo, rd, addr in pairs:
    if not (0x430000 <= wo < 0x670000):
        continue
    for base in (BASE, ALIAS):
        fo = addr - base
        if 0 <= fo < N:
            s = cstr(fo, 48)
            if s and len(s) >= 4 and s.isprintable():
                print(f"  movw@0x{wo:06X} r{rd} -> 0x{addr:08X}  {s!r}")
                n += 1
                break
    if n >= 40:
        break
