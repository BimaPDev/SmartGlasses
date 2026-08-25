#!/usr/bin/env python3
"""Locate SplashView/StandByView draw and hardcoded M/Y/V/U immediates."""
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

# reuse raw MOVW decoder
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


def collect_pairs():
    last = {}
    pairs = []
    o = 0
    while o + 4 <= N:
        d = decode_mov_wide(o)
        if d is None:
            o += 2
            continue
        kind, rd, imm16 = d
        if kind == "movw":
            last[rd] = (o, imm16)
            o += 4
            continue
        if rd in last:
            wo, lo = last[rd]
            pairs.append((wo, rd, (imm16 << 16) | lo))
        o += 4
    return pairs


def cstr(o, lim=80):
    if not (0 <= o < N):
        return ""
    e = blob.find(b"\x00", o, min(N, o + lim))
    if e < 0:
        return ""
    try:
        return blob[o:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


def file_off(addr: int) -> int | None:
    for base in (BASE, ALIAS):
        fo = addr - base
        if 0 <= fo < N:
            return fo
    return None


pairs = collect_pairs()
print(f"pairs {len(pairs)}")

want = {}
for name in (
    b"SplashView.cpp",
    b"StandByView.cpp",
    b"StandByWidget.cpp",
    b"ConnectingView.cpp",
    b"VersionInfoView.cpp",
    b"FONT_EN_36_BOLD",
    b"FONT_EN_32_NORMAL",
    b"FONT_CN_36_BOLD",
):
    o = blob.find(name)
    want[BASE + o] = name.decode()
    want[ALIAS + o] = name.decode()
    print(f"  {name.decode():24} file=0x{o:x} VA=0x{BASE+o:x}")

print("\n=== MOVW/MOVT to those strings ===")
for wo, rd, addr in pairs:
    if addr in want:
        print(f"  movw@0x{wo:06x} r{rd} -> 0x{addr:08x} {want[addr]}")
        # dump 40 ins from a bit before
        start = max(0, wo - 32) & ~1
        for ins in md.disasm(blob[start : wo + 80], BASE + start):
            print(f"    {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}")

# Scan .text for M/Y/V/U immediates clustered
print("\n=== clustered M Y V U immediates (thumb) ===")
# scan likely code: skip giant font bitmaps. .text-ish 0x1000-0x1a0000 and 0x400000-0x5a0000?
regions = [(0x1000, 0x1C0000), (0x3F0000, 0x430000), (0x5A0000, min(N, 0x670000))]
LETTERS = {ord("M"), ord("Y"), ord("V"), ord("U"), ord("B"), ord("I"), ord("A")}
for a, b in regions:
    last: dict[int, list] = {}
    for ins in md.disasm(blob[a:b], BASE + a):
        imm = None
        if ins.mnemonic in ("movs", "mov", "movw") and ins.operands:
            try:
                # capstone: op1 may be imm
                if ins.operands[-1].type == 2:  # IMM
                    imm = ins.operands[-1].imm
            except Exception:
                pass
        if imm in LETTERS:
            last.setdefault(imm, []).append(ins.address)
            # keep last 8
            last[imm] = last[imm][-8:]
        # check cluster
        addrs = []
        for ch in (ord("M"), ord("Y"), ord("V"), ord("U")):
            if ch in last:
                addrs.append(last[ch][-1])
            else:
                addrs = []
                break
        if addrs and max(addrs) - min(addrs) <= 64:
            print(f"  MYVU cluster @ {[hex(x) for x in addrs]}")
            # prevent repeat
            last.pop(ord("M"), None)

print("\n=== StandByView.cpp neighborhood strings ===")
o = blob.find(b"StandByView.cpp")
# walk nearby cstrings
p = o - 400
end = o + 800
while p < end:
    if blob[p] == 0:
        p += 1
        continue
    if 32 <= blob[p] < 127:
        s = cstr(p, 120)
        if len(s) >= 4:
            print(f"  0x{p:x} {s[:100]!r}")
            p += len(s) + 1
            continue
    p += 1


if __name__ == "__main__":
    pass
