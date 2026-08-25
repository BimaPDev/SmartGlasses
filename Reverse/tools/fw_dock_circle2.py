#!/usr/bin/env python3
"""Find StandByWidget code via literal pools, ADDW offsets, and 0x7FFF radius sites."""
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


NEEDLES = {
    "StandByWidget.cpp": 0x1994B0,
    "createNormalWidget": 0x1997A4,
    "createNormalWidget fail": 0x1997B8,
    "createTextWidget": 0x1997EC,
    "customTimeAndBattery": 0x199860,
    "createWeather1x2": 0x1998B8,
    "aiBall": 0x199790,
    "weather_1x1": 0x199798,
    "StandByWidgetManager": 0x199914,
    "createWidget": 0x199B10,
    "createDefaultWidgets": 0x199C80,
}

CLUSTER_LO, CLUSTER_HI = 0x199490, 0x199F00


def find_all(pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def dump(va: int, n: int = 48, label: str = "") -> None:
    print(f"\n=== {label} @ 0x{va:08X} ===")
    o = va - BASE
    if o < 0 or o >= N:
        print("  (out of file)")
        return
    c = 0
    for ins in md.disasm(blob[o : o + n * 4], va):
        extra = ""
        if "pc" in ins.op_str and ins.mnemonic.startswith("ldr"):
            try:
                disp = ins.operands[1].mem.disp
                lit = ((ins.address + 4) & ~3) + disp
                val = u32(lit - BASE)
                extra = f"  ; =0x{val:08X}"
                s = cstr(val - ALIAS) or cstr(val - BASE)
                if s:
                    extra += f" {s!r}"
            except Exception:
                pass
        print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}{extra}")
        c += 1
        if c >= n:
            break


def decode_movw(o: int):
    if o + 4 > N:
        return None
    hw1, hw2 = struct.unpack_from("<HH", blob, o)
    op = hw1 & 0xFBF0
    if op != 0xF240:
        return None
    i = (hw1 >> 10) & 1
    imm4 = hw1 & 0xF
    imm3 = (hw2 >> 12) & 7
    rd = (hw2 >> 8) & 0xF
    imm8 = hw2 & 0xFF
    imm16 = (imm4 << 12) | (i << 11) | (imm3 << 8) | imm8
    return rd, imm16


def main() -> None:
    print("=== exact 32-bit pointers to StandByWidget strings ===")
    for name, fo in NEEDLES.items():
        for label, va in (("2C", BASE + fo), ("3C", ALIAS + fo), ("off", fo)):
            hits = find_all(struct.pack("<I", va))
            if hits:
                print(f"  {name:24} {label}=0x{va:08x} n={len(hits)} @ {[hex(h) for h in hits[:8]]}")

    print("\n=== literal-pool words pointing into cluster 0x199490-0x199f00 ===")
    hits2c, hits3c, hits_off = [], [], []
    for i in range(0, N - 4, 4):
        w = u32(i)
        if BASE + CLUSTER_LO <= w < BASE + CLUSTER_HI:
            hits2c.append((i, w))
        elif ALIAS + CLUSTER_LO <= w < ALIAS + CLUSTER_HI:
            hits3c.append((i, w))
        elif CLUSTER_LO <= w < CLUSTER_HI and not (0x199000 <= i < 0x19A000):
            hits_off.append((i, w))
    print(f"  2C={len(hits2c)}  3C={len(hits3c)}  raw-off={len(hits_off)}")
    for tag, hits in (("2C", hits2c), ("3C", hits3c), ("off", hits_off)):
        for i, w in hits[:40]:
            fo = (w - BASE) if tag == "2C" else ((w - ALIAS) if tag == "3C" else w)
            print(f"    {tag} pool@0x{i:06x} -> 0x{w:08x} {cstr(fo)!r}")

    print("\n=== pool words at cluster round bases ===")
    for fo in (0x199000, 0x199400, 0x199490, 0x1994B0, 0x198000, 0x190000, 0x180000):
        for label, va in (("2C", BASE + fo), ("3C", ALIAS + fo)):
            hits = find_all(struct.pack("<I", va))
            if hits:
                print(f"  {label}+0x{fo:x} n={len(hits)} @{[hex(h) for h in hits[:6]]}")

    print("\n=== ADDW/SUBW whose dest VA (if Rn were cluster-ish) ===")
    # Thumb-2 ADDW: F2?0 / F6?0 ... actually ADDW T4: 11110 i 10000 S Rn | 0 imm3 Rd imm8
    # We instead decode with capstone in dense .text and look for add/addw/adr
    # with imm matching deltas among needles.
    deltas = {}
    fos = list(NEEDLES.values())
    names = {v: k for k, v in NEEDLES.items()}
    for a in fos:
        for b in fos:
            d = b - a
            if 0 < d <= 0xFFF:
                deltas.setdefault(d, []).append((names[a], names[b]))

    regions = [(0x10, 0x19D000), (0x430000, min(N, 0x675000))]
    addw_hits = []
    for start, end in regions:
        i = start & ~1
        while i + 4 < end:
            decoded = list(md.disasm(blob[i : i + 6], BASE + i, count=1))
            if not decoded:
                i += 2
                continue
            ins = decoded[0]
            if ins.mnemonic in ("addw", "subw", "add.w", "adr", "adr.w") and ins.operands:
                try:
                    if ins.operands[-1].type == 2:  # IMM
                        imm = ins.operands[-1].imm & 0xFFFFFFFF
                        if imm in deltas or imm in names:
                            addw_hits.append((ins.address, ins.mnemonic, ins.op_str, imm))
                except Exception:
                    pass
            i += ins.size

    print(f"  addw-like with needle deltas: {len(addw_hits)}")
    for a, mn, op, imm in addw_hits[:50]:
        extra = deltas.get(imm, names.get(imm, ""))
        print(f"    0x{a:08x}  {mn:8} {op}  imm=0x{imm:x} {extra}")

    print("\n=== MOVW #0x7FFF followed by BL within 12 ins, outside LVGL draw 0x60xxxx ===")
    sites = []
    o = 0
    while o + 4 <= N:
        d = decode_movw(o)
        if d and d[1] == 0x7FFF:
            sites.append((o, d[0]))
            o += 4
        else:
            o += 2

    interesting = []
    for fo, rd in sites:
        va = BASE + fo
        # skip likely LVGL internals
        if 0x600000 <= fo < 0x640000:
            continue
        window = blob[fo : fo + 48]
        bls = []
        for ins in md.disasm(window, va):
            if ins.mnemonic in ("bl", "blx"):
                bls.append((ins.address, ins.op_str))
        interesting.append((va, rd, bls[:3]))

    print(f"  0x7FFF MOVW total={len(sites)} outside-60xxxx={len(interesting)}")
    for va, rd, bls in interesting:
        print(f"    0x{va:08x} r{rd}  BLs={bls}")
        dump(va - 16 if va > BASE + 16 else va, n=20, label=f"7FFF r{rd}")

    print("\n=== lv_obj_set_style_radius-like: MOVW 0x7FFF then movs r2,#0 then BL ===")
    npat = 0
    for fo, rd in sites:
        # look at next 8 instructions
        for ins in md.disasm(blob[fo : fo + 32], BASE + fo):
            pass  # printed in previous
        seq = list(md.disasm(blob[fo : fo + 40], BASE + fo))
        mnems = [x.mnemonic for x in seq[:8]]
        ops = [x.op_str for x in seq[:8]]
        joined = " | ".join(f"{m} {o}" for m, o in zip(mnems, ops))
        if "movs" in mnems[:6] and "#0" in " ".join(ops[:6]):
            if 0x600000 <= fo < 0x640000:
                continue
            print(f"  0x{BASE+fo:08x}  {joined[:160]}")
            npat += 1
    print(f"  pattern count (excl lvgl core)={npat}")


if __name__ == "__main__":
    main()
