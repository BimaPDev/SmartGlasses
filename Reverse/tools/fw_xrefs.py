#!/usr/bin/env python3
"""Find how 1.0.12.83 platform_tester.bin references rodata strings."""
from __future__ import annotations

import struct
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
from capstone.arm import ARM_INS_MOVT, ARM_INS_MOVW

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
BASE = 0x2C000000
blob = BIN.read_bytes()

NAMES = [
    b"handleSystemMsg\x00",
    b"get_device_info\x00",
    b"get_glass_screenshot\x00",
    b"get_glass_log\x00",
    b"en_usb\x00",
    b"enable usb\x00",
    b"launcher_standby_demo_mode\x00",
    b"Demo Mode Open\x00",
    b"set_sn\x00",
    b"hal_uart_open\x00",
    b"eshell_paltform_init open=%d\x00",
    b"debug_i2c\x00",
    b"fac_cmd\x00",
    b"[Launcher]MessageModel handleSystemMsg no handler for action %s\x00",
    b"[Launcher]MessageModel::handleScreenShot called\x00",
]


def main() -> None:
    want = {}
    for n in NAMES:
        o = blob.find(n)
        label = n.rstrip(b"\x00").decode()
        print(f"{label:70} off=0x{o:06x}")
        for base in (BASE, 0x28000000, 0x0C000000, 0x10000000, 0x18000000):
            want[base + o] = label

    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    last_movw: dict[int, tuple[int, int]] = {}
    hits = []
    regions = [
        (0x10, 0x1A0000),
        (0x1A0000, 0x280000),
        (0x400000, 0x430000),
    ]
    scanned = 0
    for start, end in regions:
        for ins in md.disasm(blob[start:end], BASE + start):
            scanned += 1
            if ins.id == ARM_INS_MOVW and ins.operands:
                last_movw[ins.operands[0].reg] = (ins.address, ins.operands[1].imm)
            elif ins.id == ARM_INS_MOVT and ins.operands:
                rd = ins.operands[0].reg
                hi = ins.operands[1].imm
                prev = last_movw.get(rd)
                if not prev:
                    continue
                la, lo = prev
                if ins.address - la > 24:
                    continue
                val = (hi << 16) | lo
                if val in want or (0x2C160000 <= val <= 0x2C162800) or (
                    0x2C194000 <= val <= 0x2C198000
                ):
                    hits.append((ins.address, val, want.get(val, "?")))
    print(f"\nscanned {scanned} ins, hits {len(hits)}")
    for addr, val, name in hits[:80]:
        print(f"  {addr:08x}  0x{val:08x}  {name}")

    # unaligned 3-byte offset search for handleSystemMsg
    o = blob.find(b"handleSystemMsg\x00")
    pat = struct.pack("<I", o)[:3]
    print(f"\n3-byte LE offset {pat.hex()} for handleSystemMsg @ 0x{o:x}")
    idx = 0
    n = 0
    while n < 12:
        p = blob.find(pat, idx)
        if p < 0:
            break
        word = struct.unpack_from("<I", blob, p)[0] if p + 4 <= len(blob) else None
        print(f"  file 0x{p:x}  word={word:#010x}" if word is not None else f"  file 0x{p:x}")
        idx = p + 1
        n += 1


if __name__ == "__main__":
    main()
