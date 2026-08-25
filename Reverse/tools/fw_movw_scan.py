#!/usr/bin/env python3
"""Linear-ish Thumb sweep: recover MOVW+MOVT addresses that point at known strings."""
from __future__ import annotations

import struct
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
from capstone.arm import ARM_INS_MOVT, ARM_INS_MOVW

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
BASE = 0x2C000000
blob = BIN.read_bytes()

STRINGS = [
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
    b"eshell cmd is not exist.\x00",
    b"mmi_run\x00",
]


def prologues(start: int, end: int) -> list[int]:
    out = []
    i = start & ~1
    while i + 4 < end:
        # 16-bit push {…, lr}  xx b5
        if blob[i + 1] == 0xB5:
            out.append(i)
            i += 2
            continue
        # 32-bit push.w  2d e9
        if blob[i] == 0x2D and blob[i + 1] == 0xE9:
            out.append(i)
            i += 4
            continue
        i += 2
    return out


def main() -> None:
    off_to_name = {}
    for s in STRINGS:
        o = blob.find(s)
        off_to_name[o] = s.rstrip(b"\x00").decode()
        print(f"  {off_to_name[o]!r:70} file 0x{o:06x}")

    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True

    regions = [(0x10, 0x20000), (0x130000, 0x150000), (0x430000, min(len(blob), 0x675000))]
    hits = []
    nfn = 0
    for a, z in regions:
        fns = prologues(a, z)
        nfn += len(fns)
        for fn in fns:
            last: dict[int, tuple[int, int]] = {}
            chunk = blob[fn : fn + 0x180]
            for ins in md.disasm(chunk, BASE + fn):
                if ins.id == ARM_INS_MOVW and ins.operands:
                    last[ins.operands[0].reg] = (ins.address, ins.operands[1].imm & 0xFFFF)
                elif ins.id == ARM_INS_MOVT and ins.operands:
                    rd = ins.operands[0].reg
                    prev = last.get(rd)
                    if not prev:
                        continue
                    la, lo = prev
                    if ins.address - la > 32:
                        continue
                    val = ((ins.operands[1].imm & 0xFFFF) << 16) | lo
                    file_off = val & 0x00FFFFFF
                    # match exact file offset of a watched string, any high byte
                    if file_off in off_to_name:
                        hits.append((fn, ins.address, val, off_to_name[file_off]))
                    # also keep fac_cmd / eshell windows
                    elif 0x15FDBC <= file_off <= 0x160800 or 0x194000 <= file_off <= 0x198000:
                        hits.append((fn, ins.address, val, f"near {file_off:#x}"))
    print(f"\nfunctions scanned: {nfn}, hits: {len(hits)}")
    seen = set()
    for fn, addr, val, name in hits:
        key = (val, name)
        if key in seen:
            continue
        seen.add(key)
        print(f"  fn 0x{BASE+fn:08x}  at 0x{addr:08x}  constructed 0x{val:08x}  {name}")

    # dump a hit function if any
    if hits:
        fn, addr, val, name = hits[0]
        print(f"\n--- first hit function file 0x{fn:x} ({name}) ---")
        n = 0
        for ins in md.disasm(blob[fn : fn + 0x120], BASE + fn):
            print(f"  {ins.address:08x}  {ins.mnemonic} {ins.op_str}")
            n += 1
            if n >= 50:
                break


if __name__ == "__main__":
    main()
