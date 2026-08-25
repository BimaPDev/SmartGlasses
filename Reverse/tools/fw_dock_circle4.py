#!/usr/bin/env python3
"""Dump createNormalWidget dispatcher callees and hunt radius/size chrome."""
from __future__ import annotations

import struct
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
blob = BIN.read_bytes()
N = len(blob)
BASE = 0x2C000000
ALIAS = 0x3C000000
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
md.detail = True


def u32(o: int) -> int:
    return struct.unpack_from("<I", blob, o)[0]


def cstr(fo: int, lim: int = 60) -> str:
    if not (0 <= fo < N):
        return ""
    e = blob.find(b"\x00", fo, min(N, fo + lim))
    if e < 0:
        return ""
    try:
        return blob[fo:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


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


def dump_func(start: int, max_ins: int = 120, label: str = "") -> None:
    print(f"\n======== {label} @ 0x{BASE+start:08x} ========")
    n = 0
    for ins in md.disasm(blob[start : start + 0x800], BASE + start):
        extra = ""
        if ins.mnemonic.startswith("ldr") and "pc" in ins.op_str:
            try:
                disp = ins.operands[1].mem.disp
                lit = ((ins.address + 4) & ~3) + disp
                val = u32(lit - BASE)
                extra = f"  ; =0x{val:08x}"
                fo = val - BASE if BASE <= val < BASE + N else (val - ALIAS if ALIAS <= val < ALIAS + N else None)
                if fo is not None:
                    s = cstr(fo)
                    if s:
                        extra += f" {s!r}"
            except Exception:
                pass
        d = decode_mov_wide(ins.address - BASE)
        if d and d[0] == "movw":
            extra += f"  ; #0x{d[2]:x}"
            if d[2] == 0x7FFF:
                extra += " LV_RADIUS_CIRCLE/LV_COORD_MAX"
        if ins.mnemonic in ("bl", "blx"):
            extra += " CALL"
        print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}{extra}")
        n += 1
        if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str and n > 6:
            break
        if n >= max_ins:
            break


def scan_7fff_and_size(start: int, span: int = 0x400) -> None:
    hits = []
    end = min(N, start + span)
    for ins in md.disasm(blob[start:end], BASE + start):
        d = decode_mov_wide(ins.address - BASE)
        if d and d[2] == 0x7FFF:
            hits.append(f"  MOVW 0x7FFF @ 0x{ins.address:08x} {ins.mnemonic} {ins.op_str}")
        if ins.mnemonic in ("movs", "mov") and ins.operands:
            try:
                if ins.operands[-1].type == 2:
                    imm = ins.operands[-1].imm
                    if imm in (0x28, 0x2A, 0x2C, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3C, 0x40, 0x48, 0x4C):
                        hits.append(f"  size-ish #{imm} @ 0x{ins.address:08x} {ins.mnemonic} {ins.op_str}")
            except Exception:
                pass
    if hits:
        print(f"  chrome hints in 0x{BASE+start:08x}+{span:x}:")
        for h in hits[:40]:
            print(h)


def main() -> None:
    dump_func(0x4A72E4, 80, "createNormalWidget dispatcher")
    for va, name in (
        (0x4A0F4C, "case4 tail"),
        (0x4A4988, "case2 tail"),
        (0x49E72C, "case3 tail"),
        (0x4A578C, "alloc helper"),
        (0x4A62BC, "weather callee"),
        (0x4A6030, "sibling tail"),
        (0x4A5E10, "weather helper 0x48"),
    ):
        dump_func(va, 90, name)
        scan_7fff_and_size(va, 0x300)

    print("\n=== BLs of alloc helper 0x2c4a578c (first 30 sites) ===")
    # thumb bl encoding is messy; capstone walk dense region
    n = 0
    start = 0x490000
    for ins in md.disasm(blob[start:0x4B0000], BASE + start):
        if ins.mnemonic == "bl" and ins.op_str == "#0x2c4a578c":
            print(f"  from 0x{ins.address:08x}")
            n += 1
            if n >= 30:
                break
    print(f"  shown {n}")


if __name__ == "__main__":
    main()
