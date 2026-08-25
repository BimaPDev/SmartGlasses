#!/usr/bin/env python3
from __future__ import annotations

import struct
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
blob = BIN.read_bytes()
N = len(blob)
BASE = 0x2C000000
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
md.detail = True


def cstr(fo: int, lim: int = 70) -> str:
    if not (0 <= fo < N):
        return ""
    e = blob.find(b"\x00", fo, min(N, fo + lim))
    if e < 0:
        return ""
    try:
        return blob[fo:e].decode("ascii")
    except UnicodeDecodeError:
        return repr(blob[fo : fo + 20])


def decode_mov_wide(o: int):
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


def in_cluster(fo: int) -> bool:
    return 0x199490 <= fo < 0x199F00


def main() -> None:
    print("=== MOVW/MOVT full addresses into StandByWidget cluster ===")
    last = {}
    o = 0x400000
    while o + 4 < min(N, 0x675000):
        d = decode_mov_wide(o)
        if not d:
            o += 2
            continue
        kind, rd, imm16 = d
        if kind == "movw":
            last[rd] = (o, imm16)
            o += 4
            continue
        if rd in last:
            wo, lo = last[rd]
            full = (imm16 << 16) | lo
            for base in (0x2C000000, 0x3C000000):
                fo = full - base
                if in_cluster(fo):
                    print(f"  movw@0x{wo:06x} movt@0x{o:06x} r{rd}=0x{full:08x}  {cstr(fo)!r}")
        o += 4

    print("\n=== MOVW imm + 0x190000 / 0x199000 in cluster ===")
    o = 0x400000
    while o + 4 < min(N, 0x675000):
        d = decode_mov_wide(o)
        if not d or d[0] != "movw":
            o += 2
            continue
        rd, imm = d[1], d[2]
        for b in (0x190000, 0x199000, 0x198000, 0):
            fo = b + imm
            if in_cluster(fo):
                print(f"  0x{o:06x} VA 0x{BASE+o:08x} r{rd} #0x{imm:x} +0x{b:x} -> 0x{fo:x} {cstr(fo)!r}")
        o += 4

    print("\n======== dump 0x2C4AA000 (createDefaultWidgets MOVW) ========")
    start = 0x4A9E00
    n = 0
    for ins in md.disasm(blob[start : start + 0x600], BASE + start):
        extra = ""
        d = decode_mov_wide(ins.address - BASE)
        if d and d[0] == "movw":
            imm = d[2]
            for b in (0x190000, 0x199000, 0x198000):
                fo = b + imm
                if 0x199000 <= fo < 0x19A000:
                    extra = f"  ; {cstr(fo)!r}"
        print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}{extra}")
        n += 1
        if n >= 200:
            break

    print("\n======== dump 0x2C46FA00 (updateWeather fail MOVW) ========")
    start = 0x46F900
    n = 0
    for ins in md.disasm(blob[start : start + 0x400], BASE + start):
        extra = ""
        d = decode_mov_wide(ins.address - BASE)
        if d and d[0] == "movw":
            imm = d[2]
            for b in (0x190000, 0x199000, 0x198000):
                fo = b + imm
                if 0x199000 <= fo < 0x19A000:
                    extra = f"  ; {cstr(fo)!r}"
        print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}{extra}")
        n += 1
        if n >= 120:
            break


if __name__ == "__main__":
    main()
