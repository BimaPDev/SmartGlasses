#!/usr/bin/env python3
"""Full linear Thumb sweep of app .text for MOVW+MOVT → known rodata."""
from __future__ import annotations

from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
from capstone.arm import ARM_INS_MOVT, ARM_INS_MOVW

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
BASE = 0x2C000000
blob = BIN.read_bytes()

WATCH = {}
for s in [
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
    b"mmi_run\x00",
    b"eshell >\x00",
]:
    WATCH[blob.find(s)] = s.rstrip(b"\x00").decode()


def sweep(start: int, end: int) -> None:
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    last: dict[int, tuple[int, int]] = {}
    hits = []
    near = []
    i = start & ~1
    nins = 0
    while i + 4 < end:
        decoded = list(md.disasm(blob[i : i + 6], BASE + i, count=1))
        if not decoded:
            i += 2
            continue
        ins = decoded[0]
        nins += 1
        if ins.id == ARM_INS_MOVW and ins.operands:
            last[ins.operands[0].reg] = (ins.address, ins.operands[1].imm & 0xFFFF)
        elif ins.id == ARM_INS_MOVT and ins.operands:
            rd = ins.operands[0].reg
            prev = last.get(rd)
            if prev and ins.address - prev[0] <= 64:
                val = ((ins.operands[1].imm & 0xFFFF) << 16) | prev[1]
                fo = val & 0x00FFFFFF
                if fo in WATCH:
                    hits.append((ins.address, val, WATCH[fo], i))
                elif 0x194000 <= fo <= 0x198000 or 0x15FD80 <= fo <= 0x160800:
                    near.append((ins.address, val, fo))
        i += ins.size
    print(f"region 0x{start:x}-0x{end:x}: {nins} ins, hits {len(hits)}, near {len(near)}")
    for addr, val, name, _ in hits[:40]:
        print(f"  HIT 0x{addr:08x}  val=0x{val:08x}  {name}")
    # unique near
    seen = set()
    for addr, val, fo in near[:30]:
        if fo in seen:
            continue
        seen.add(fo)
        s = blob[fo : fo + 40].split(b"\x00", 1)[0]
        try:
            txt = s.decode("ascii")
        except UnicodeDecodeError:
            txt = repr(s)
        print(f"  near 0x{addr:08x} val=0x{val:08x} off=0x{fo:x} {txt!r}")


if __name__ == "__main__":
    for k, v in WATCH.items():
        print(f"  watch 0x{k:06x} {v}")
    print()
    sweep(0x430000, min(len(blob), 0x675000))
    sweep(0x10, 0x20000)
    sweep(0x120000, 0x160000)
