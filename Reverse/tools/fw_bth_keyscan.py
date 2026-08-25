#!/usr/bin/env python3
"""Capstone pre-pass on BTH: long-press immediates and factory-string neighborhoods.

Does not recover the exact boot combo (that's the Ghidra call-graph). It lists
where 500/3000/5000 appear as Thumb immediates so the Ghidra pass has anchors.
"""
from __future__ import annotations

from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
from capstone.arm import ARM_INS_MOV, ARM_INS_MOVW, ARM_INS_MOVT

BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "best1600_watch_bth.bin"
BASE = 0x14000000
WANT = {500, 3000, 5000}

NAMES = [
    b"hal_key_boot_handler\x00",
    b"app_factorymode_enter\x00",
    b"app_poweron_key_init\x00",
    b"To enter test mode!!!\x00",
    b"PWR KEY DITHER!\x00",
    b"HAL_KEY_EVENT_LONGPRESS_500_MS\x00",
    b"HAL_KEY_EVENT_LONGPRESS_3000_MS\x00",
    b"HAL_KEY_EVENT_LONGPRESS_5000_MS\x00",
    b"BT_DUT_MODE\x00",
    b"!!!!!ENGINEER_MODE!!!!!\x00",
]


def main() -> None:
    blob = BIN.read_bytes()
    print("BTH %s  %d bytes  base 0x%08X" % (BIN, len(blob), BASE))
    print("\n## factory / key strings")
    for n in NAMES:
        o = blob.find(n)
        print("  %-44s file 0x%06x  VA 0x%08X  NC 0x%08X" % (
            n[:-1].decode(), o, BASE + o, 0x30000000 + o,
        ))

    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    hits = []
    i = 0x10
    while i + 4 < len(blob):
        decoded = list(md.disasm(blob[i : i + 6], BASE + i, count=1))
        if not decoded:
            i += 2
            continue
        ins = decoded[0]
        if ins.id in (ARM_INS_MOV, ARM_INS_MOVW, ARM_INS_MOVT) and len(ins.operands) >= 2:
            try:
                imm = ins.operands[1].imm
            except Exception:
                imm = None
            if imm in WANT:
                hits.append((ins.address, ins.mnemonic, ins.op_str, imm))
        i += ins.size

    print("\n## Thumb immediates 500 / 3000 / 5000 (%d hits)" % len(hits))
    for addr, mn, op, imm in hits[:60]:
        print("  0x%08x  %-8s %-20s  ; %d ms" % (addr, mn, op, imm))
    if len(hits) > 60:
        print("  … %d more" % (len(hits) - 60))


if __name__ == "__main__":
    main()
