#!/usr/bin/env python3
"""Recover PIC string xrefs: ldr rt, [pc, #imm] then add rt, pc (or add.w)."""
from __future__ import annotations

import struct
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
BASE = 0x2C000000
blob = BIN.read_bytes()
SIZE = len(blob)

WATCH_OFFS = {}
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
    b"get_zen_mode\x00",
    b"set_volume\x00",
]:
    WATCH_OFFS[blob.find(s)] = s.rstrip(b"\x00").decode()

WATCH_VA = {BASE + o: n for o, n in WATCH_OFFS.items()}
WATCH_VA.update({0x28000000 + o: n for o, n in WATCH_OFFS.items()})


def u32(o: int) -> int:
    if 0 <= o <= SIZE - 4:
        return struct.unpack_from("<I", blob, o)[0]
    return 0


def main() -> None:
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    hits = []
    pic_hits = []
    # high app code + early + factory-adjacent
    regions = [(0x430000, min(SIZE, 0x675000)), (0x10, 0x20000), (0x15F000, 0x198000)]
    for start, end in regions:
        i = start & ~1
        while i + 8 < end:
            decoded = list(md.disasm(blob[i : i + 8], BASE + i, count=1))
            if not decoded:
                i += 2
                continue
            ins = decoded[0]
            m = ins.mnemonic
            op = ins.op_str
            # ldr rt, [pc, #imm]
            if m in ("ldr", "ldr.w") and "[pc" in op:
                # capstone already computed the target address in op_str sometimes as [pc, #N]
                # use operands
                if ins.operands and len(ins.operands) >= 2:
                    rt = ins.operands[0].reg
                    mem = ins.operands[1]
                    # disp is relative; capstone gives mem.disp
                    lit_va = ((ins.address + 4) & ~3) + mem.mem.disp
                    lit_off = lit_va - BASE
                    word = u32(lit_off)
                    # absolute pointer?
                    if word in WATCH_VA:
                        hits.append(("abs-lit", ins.address, word, WATCH_VA[word]))
                    file_off = word & 0x00FFFFFF
                    if file_off in WATCH_OFFS:
                        hits.append(("abs-masked", ins.address, word, WATCH_OFFS[file_off]))
                    # PIC: value is string_va - pic_base. try pic_base = aligned pc+4 and next-ins pc
                    for pic in (ins.address + ins.size + 4, (ins.address + 4) & ~3, ins.address + 4):
                        target = (pic + word) & 0xFFFFFFFF
                        if target in WATCH_VA:
                            pic_hits.append((ins.address, pic, word, target, WATCH_VA[target]))
                        t_off = (target - BASE) & 0x00FFFFFF
                        if t_off in WATCH_OFFS:
                            pic_hits.append((ins.address, pic, word, target, WATCH_OFFS[t_off]))
                        # also 0x28000000 alias
                        t2 = (0x28000000 + (target - BASE)) & 0xFFFFFFFF if BASE <= target < BASE + SIZE else None
            i += ins.size
    print(f"absolute-literal hits: {len(hits)}")
    for h in hits[:30]:
        print(" ", h)
    print(f"PIC-literal hits: {len(pic_hits)}")
    seen = set()
    for h in pic_hits:
        if h[4] in seen:
            continue
        seen.add(h[4])
        print(f"  ins 0x{h[0]:08x} pic=0x{h[1]:08x} word=0x{h[2]:08x} -> 0x{h[3]:08x} {h[4]}")


if __name__ == "__main__":
    main()
