#!/usr/bin/env python3
"""Locate StandByWidget circle chrome: PIC xrefs + 0x7FFF (LV_RADIUS_CIRCLE)."""
from __future__ import annotations

import struct
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
BASE = 0x2C000000
blob = BIN.read_bytes()
N = len(blob)

NEEDLES = [
    b"createNormalWidget\x00",
    b"createTextWidget\x00",
    b"customTimeAndBatteryWidget\x00",
    b"createWeather1x2Widget\x00",
    b"StandByWidget.cpp\x00",
    b"weather_1x1\x00",
    b"aiBall\x00",
]


def u32(o: int) -> int:
    if 0 <= o <= N - 4:
        return struct.unpack_from("<I", blob, o)[0]
    return 0


def main() -> None:
    watch_off = {}
    for s in NEEDLES:
        o = blob.find(s)
        print(f"  {s.rstrip(chr(0).encode()).decode():32} file=0x{o:x} VA=0x{BASE+o:x}")
        watch_off[o] = s.rstrip(b"\x00").decode()
    watch_va = {BASE + o: n for o, n in watch_off.items()}
    watch_va.update({0x3C000000 + o: n for o, n in watch_off.items()})

    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    skip = [(0x19D000, 0x1E6200), (0x201000, 0x2E2E00), (0x2FD000, 0x31DC00), (0x373000, 0x3F8000)]

    def skipped(i: int) -> bool:
        return any(a <= i < b for a, b in skip)

    pic: list[tuple] = []
    abs_hits: list[tuple] = []
    regions = [(0x10, 0x19D000), (0x1E6200, 0x201000), (0x2E2E00, 0x2FD000), (0x31DC00, 0x373000), (0x3F8000, min(N, 0x675000))]
    for start, end in regions:
        i = start & ~1
        while i + 8 < end:
            if skipped(i):
                i += 2
                continue
            decoded = list(md.disasm(blob[i : i + 8], BASE + i, count=1))
            if not decoded:
                i += 2
                continue
            ins = decoded[0]
            if ins.mnemonic in ("ldr", "ldr.w") and ins.operands and len(ins.operands) >= 2:
                try:
                    mem = ins.operands[1]
                    lit_va = ((ins.address + 4) & ~3) + mem.mem.disp
                    word = u32(lit_va - BASE)
                except Exception:
                    i += ins.size
                    continue
                if word in watch_va:
                    abs_hits.append((ins.address, word, watch_va[word]))
                for pic_base in (ins.address + ins.size + 4, (ins.address + 4) & ~3, ins.address + 4):
                    target = (pic_base + word) & 0xFFFFFFFF
                    if target in watch_va:
                        pic.append((ins.address, target, watch_va[target]))
            i += ins.size

    print(f"\nabs hits {len(abs_hits)}  pic hits {len(pic)}")
    seen = set()
    addrs = []
    for a, va, name in abs_hits + pic:
        key = (a, name)
        if key in seen:
            continue
        seen.add(key)
        addrs.append(a)
        print(f"  0x{a:08x} -> {name} (0x{va:08x})")

    # 0x7FFF as Thumb movw / movs-imm16 near those hits
    print("\n=== 0x7FFF immediates in ±0x400 of widget xrefs ===")
    md2 = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md2.detail = True
    for a in sorted(set(addrs)):
        fo = a - BASE
        lo = max(0, (fo - 0x400) & ~1)
        hi = min(N, fo + 0x400)
        hits7 = []
        for ins in md2.disasm(blob[lo:hi], BASE + lo):
            if not ins.operands:
                continue
            for op in ins.operands:
                if op.type == 2 and (op.imm & 0xFFFF) == 0x7FFF:
                    hits7.append(f"    {ins.address:08x}  {ins.mnemonic} {ins.op_str}")
        if hits7:
            print(f"  near xref 0x{a:08x}:")
            print("\n".join(hits7[:12]))

    print("\n=== dump 80 ins at first createNormalWidget xref ===")
    if addrs:
        a = min(addrs)
        fo = a - BASE
        start = max(0, (fo - 0x40) & ~1)
        n = 0
        for ins in md2.disasm(blob[start : start + 0x180], BASE + start):
            print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}")
            n += 1
            if n >= 80:
                break


if __name__ == "__main__":
    main()
