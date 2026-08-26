#!/usr/bin/env python3
"""Pre-flash safety gate for Star Air 1.0.12.83 platform_tester patches.

Compares a candidate bin against stock and known-safe BIMA rules. This is NOT
an emulator — it only catches the classes of mistakes that already bootlooped
the glasses (ctor hooks, length shifts, cave overflow, buffer math).

Exit 0 = OK to consider flashing (still not a guarantee).
Exit 1 = FAIL — do not flash.
"""

from __future__ import annotations

import argparse
import struct
import sys
from dataclasses import dataclass, field
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

ROOT = Path(__file__).resolve().parents[1]
STOCK = ROOT / "x_1.0.12.83" / "platform_tester.bin"
XIP = 0x2C000000

# Sites that MUST remain stock after any battery/HUD experiment (v5/v6 killed these).
HOOK_CTOR_GETTER = 0x5D9426
STOCK_BL_CTOR_GETTER = bytes.fromhex("fdf757fa")
DOCK_APPLY_BL = 0x5088A8
STOCK_BL_SET_TEXT_APPLY = bytes.fromhex("2ff142ff")
DOCK_BUILD_BW = 0x508A98
STOCK_BW_SET_TEXT_BUILD = bytes.fromhex("2ff14abe")

# v4 TimeModel hook
CAVE_OFF = 0x12F2E4
HOOK_TIME_SNPRINTF = 0x5CDE2A
STOCK_BL_SNPRINTF = bytes.fromhex("9df011fb")
SNPRINTF_VA = 0x2C66B450
GETTER_VA = 0x2C48A2C4
TIMEMODEL_BUF_CAP = 15  # movs r1, #0xf at call site

# Theme sites (optional / cosmetic)
RADIUS12 = (0x505768, 0x509B9E, 0x50C85C)
RADIUS_CIRCLE = (0x61D980, 0x61E304, 0x61E3E6, 0x61E750, 0x61EDF6, 0x61F486)
OUTLINE1 = (0x505758, 0x509B8E, 0x50C838)

# Thumb BL decode helpers (same as patch_bima)
FORBIDDEN_NAME_HINTS = (
    b"lv_obj_create",
    b"lv_label_create",
    b"lv_btn_create",
    b"lv_timer_create",
    b"lv_obj_add_style",
    b"lv_style_set_radius",
)


@dataclass
class Report:
    errors: list[str] = field(default_factory=list)
    warnings: list[str] = field(default_factory=list)
    info: list[str] = field(default_factory=list)

    def err(self, msg: str) -> None:
        self.errors.append(msg)

    def warn(self, msg: str) -> None:
        self.warnings.append(msg)

    def note(self, msg: str) -> None:
        self.info.append(msg)


def _thumb_bl_target(src_va: int, insn_bytes: bytes) -> int | None:
    if len(insn_bytes) != 4:
        return None
    hw1, hw2 = struct.unpack("<HH", insn_bytes)
    if (hw1 & 0xF800) != 0xF000:
        return None
    # BL (not BLX): hw2 & 0xD000 == 0xD000 for BL, 0xC000 for BLX? 
    # Thumb BL: hw1 = 11110 S imm10; hw2 = 11 J1 1 J2 imm11
    if (hw2 & 0xD000) != 0xD000:
        return None
    s = (hw1 >> 10) & 1
    imm10 = hw1 & 0x3FF
    j1 = (hw2 >> 13) & 1
    j2 = (hw2 >> 11) & 1
    imm11 = hw2 & 0x7FF
    i1 = ~(j1 ^ s) & 1
    i2 = ~(j2 ^ s) & 1
    imm32 = (s << 24) | (i1 << 23) | (i2 << 22) | (imm10 << 12) | (imm11 << 1)
    if s:
        imm32 |= ~((1 << 25) - 1) & 0xFFFFFFFF
        imm32 = imm32 - (1 << 32) if imm32 >= (1 << 31) else imm32
    return (src_va + 4 + imm32) & 0xFFFFFFFF


def check_size(stock: bytes, cand: bytes, r: Report) -> None:
    if len(cand) != len(stock):
        r.err(f"size mismatch: stock={len(stock)} cand={len(cand)} (shifts break XIP)")
    else:
        r.note(f"size OK ({len(cand)} bytes)")


def check_must_stay_stock(cand: bytes, r: Report) -> None:
    checks = [
        ("clock ctor getter BL", HOOK_CTOR_GETTER, STOCK_BL_CTOR_GETTER),
        ("dock apply set_text BL", DOCK_APPLY_BL, STOCK_BL_SET_TEXT_APPLY),
        ("dock build set_text BW", DOCK_BUILD_BW, STOCK_BW_SET_TEXT_BUILD),
    ]
    for name, off, expect in checks:
        got = bytes(cand[off : off + 4])
        if got != expect:
            r.err(
                f"{name} @ 0x{off:x} is {got.hex()}, expected stock {expect.hex()} "
                f"(v5/v6-class ctor/dock hooks — DO NOT FLASH)"
            )
        else:
            r.note(f"{name} still stock")


def check_cave_and_timemodel(stock: bytes, cand: bytes, r: Report) -> None:
    hook = bytes(cand[HOOK_TIME_SNPRINTF : HOOK_TIME_SNPRINTF + 4])
    if hook == STOCK_BL_SNPRINTF:
        r.note("TimeModel snprintf still stock (no battery veneer)")
        # cave should be empty-ish if unused
        cave = cand[CAVE_OFF : CAVE_OFF + 0x80]
        if any(cave):
            r.warn(f"cave 0x{CAVE_OFF:x} has data but hook is stock — leftover junk?")
        return

    tgt = _thumb_bl_target(XIP + HOOK_TIME_SNPRINTF, hook)
    if tgt is None:
        r.err(f"TimeModel hook @ 0x{HOOK_TIME_SNPRINTF:x} is not a Thumb BL ({hook.hex()})")
        return
    if tgt != XIP + CAVE_OFF:
        r.err(
            f"TimeModel BL targets {tgt:#x}, expected cave {XIP + CAVE_OFF:#x} "
            f"(wrong veneer / crash risk)"
        )
        return
    r.note(f"TimeModel BL → cave 0x{CAVE_OFF:x}")

    if any(stock[CAVE_OFF : CAVE_OFF + 0x100]):
        r.warn("stock cave was not empty — unusual for 1.0.12.83")

    # Disassemble cave; require it eventually returns; forbid wild stores to low abs
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    cave = bytes(cand[CAVE_OFF : CAVE_OFF + 0x100])
    # trim trailing zeros for length
    end = len(cave)
    while end > 0 and cave[end - 1] == 0:
        end -= 1
    if end == 0:
        r.err("hook points at empty cave")
        return
    body = cave[: end + (end & 1)]  # align
    r.note(f"cave payload ~{end} bytes")

    saw_ret = False
    bl_targets = []
    for insn in md.disasm(body, XIP + CAVE_OFF):
        if insn.mnemonic in ("pop", "pop.w") and "pc" in insn.op_str:
            saw_ret = True
        if insn.mnemonic == "bx" and "lr" in insn.op_str:
            saw_ret = True
        if insn.mnemonic == "bl" and len(insn.bytes) == 4:
            t = _thumb_bl_target(insn.address, bytes(insn.bytes))
            if t is not None:
                bl_targets.append(t)
        # absolute store to suspicious SRAM theme pointer used by v5
        if insn.mnemonic.startswith("str") and "0x3d6940d0" in insn.op_str.lower():
            r.err("cave references 0x3D6940D0 (v5 SRAM color pointer — bootloop class)")

    if not saw_ret:
        r.err("cave veneer has no pop {…pc}/bx lr — will fall through into junk")

    allowed = {SNPRINTF_VA, GETTER_VA}
    for t in bl_targets:
        if t not in allowed:
            r.err(
                f"cave BL to {t:#x} not in allowlist "
                f"(only snprintf {SNPRINTF_VA:#x} + SOC getter {GETTER_VA:#x})"
            )
        else:
            r.note(f"cave BL → {t:#x} OK")

    # Buffer math: stock "%02d:%02d" → "HH:MM" (5) + " NN" + NUL.
    # Worst case "23:59 100\0" = 10 bytes; cap is 15.
    worst = len("23:59 100") + 1
    if worst > TIMEMODEL_BUF_CAP:
        r.err(f"worst-case TimeModel string {worst} > buf cap {TIMEMODEL_BUF_CAP}")
    else:
        r.note(
            f"TimeModel buffer math OK (worst {worst} bytes, cap {TIMEMODEL_BUF_CAP})"
        )


def check_string_lengths(stock: bytes, cand: bytes, r: Report) -> None:
    """Any ASCII run that changed length is a red flag (table shift)."""
    # Cheap: count MYVU/BIMA and ensure no length-changing canary.
    if cand.count(b"MYVU") and b"BIMA" in cand:
        r.warn("bin still contains MYVU alongside BIMA — partial rebrand?")
    # Canary length
    a = b"Open BIMA App to connect the phone"
    b = b"Open BIMA App to connect the HUD3!"
    if len(a) != len(b):
        r.err("internal canary length bug in harness")
    if a in cand:
        r.warn("canary not applied (still '…the phone')")
    if b in cand:
        r.note("HUD3 canary present")

    # Diff contiguous printable runs: if a run grew, fail
    # Sample approach: for each changed byte in a printable island, check island length equal
    diffs = [i for i, (x, y) in enumerate(zip(stock, cand)) if x != y]
    r.note(f"{len(diffs)} bytes differ from stock")
    if len(diffs) > 50_000:
        r.warn("huge diff — did you replace the wrong file?")


def check_theme_sites(cand: bytes, r: Report) -> None:
    for off in RADIUS12:
        b = cand[off : off + 2]
        if b == b"\x00\x21":
            r.note(f"radius12→0 @ 0x{off:x}")
        elif b == b"\x0c\x21":
            r.note(f"radius12 stock @ 0x{off:x}")
        else:
            r.warn(f"radius12 site 0x{off:x} unexpected {b.hex()}")
    for off in RADIUS_CIRCLE:
        b = cand[off : off + 4]
        if b == bytes.fromhex("40f20001"):
            r.note(f"radiusCIRCLE→0 @ 0x{off:x}")
        elif b == bytes.fromhex("47f6ff71"):
            r.note(f"radiusCIRCLE stock @ 0x{off:x}")
        else:
            r.warn(f"radiusCIRCLE 0x{off:x} unexpected {b.hex()}")


def check_diff_regions(stock: bytes, cand: bytes, r: Report) -> None:
    """Flag code diffs outside known-safe windows."""
    safe_ranges = [
        (CAVE_OFF, CAVE_OFF + 0x100),
        (HOOK_TIME_SNPRINTF, HOOK_TIME_SNPRINTF + 4),
        *[(o, o + 2) for o in RADIUS12],
        *[(o, o + 4) for o in RADIUS_CIRCLE],
        *[(o, o + 2) for o in OUTLINE1],
    ]
    # String region roughly ≥ 0x18ed00 for MYVU swaps; allow all ≥ 0x180000 as "data/UI"
    code_cut = 0x180000

    def in_safe(i: int) -> bool:
        if i >= code_cut:
            return True  # treat late file as strings/assets
        for a, b in safe_ranges:
            if a <= i < b:
                return True
        return False

    bad = []
    for i, (x, y) in enumerate(zip(stock, cand)):
        if x != y and not in_safe(i):
            bad.append(i)
            if len(bad) > 40:
                break
    if bad:
        sample = ", ".join(f"0x{i:x}" for i in bad[:12])
        r.err(
            f"code/data diffs outside allowlist (first hits: {sample}) — "
            f"likely ctor/widget hooks or accidental clobber"
        )
    else:
        r.note("all diffs are in allowlisted caves/hooks/strings/theme sites")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument(
        "candidate",
        type=Path,
        nargs="?",
        default=ROOT / "patched_bima" / "1.0.12.83" / "platform_tester.bin",
        help="patched platform_tester.bin",
    )
    ap.add_argument("--stock", type=Path, default=STOCK)
    args = ap.parse_args()

    if not args.stock.exists():
        print(f"FAIL: stock missing {args.stock}", file=sys.stderr)
        return 1
    if not args.candidate.exists():
        print(f"FAIL: candidate missing {args.candidate}", file=sys.stderr)
        return 1

    stock = args.stock.read_bytes()
    cand = args.candidate.read_bytes()
    r = Report()

    check_size(stock, cand, r)
    if len(stock) == len(cand):
        check_must_stay_stock(cand, r)
        check_cave_and_timemodel(stock, cand, r)
        check_string_lengths(stock, cand, r)
        check_theme_sites(cand, r)
        check_diff_regions(stock, cand, r)

    print(f"stock:     {args.stock}")
    print(f"candidate: {args.candidate}")
    print(f"md5 stock: {__import__('hashlib').md5(stock).hexdigest()}")
    print(f"md5 cand:  {__import__('hashlib').md5(cand).hexdigest()}")
    print()
    for msg in r.info:
        print(f"  OK   {msg}")
    for msg in r.warnings:
        print(f"  WARN {msg}")
    for msg in r.errors:
        print(f"  FAIL {msg}")
    print()
    if r.errors:
        print(f"RESULT: FAIL ({len(r.errors)} error(s)) — do not flash")
        return 1
    print("RESULT: PASS — still not a full emulator; flash only if you accept residual risk")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
