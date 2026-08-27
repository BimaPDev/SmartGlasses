#!/usr/bin/env python3
"""Hunt PC-relative / literal-pool refs to VGLite/GPU strings in platform_tester.bin."""
import struct
from collections import defaultdict

BIN = "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
XIP = 0x2C000000
FLASH = 0x3C000000
# some BES images also use 0x28000000 / 0x0C000000 aliases
ALIASES = [0x2C000000, 0x3C000000, 0x28000000, 0x0C000000, 0x00000000]

TARGETS = {
    0x41B144: "vglite_img_decode_error",
    0x41B194: "lv_draw_bes_img_decoded",
    0x41B108: "lv_gpu_bes.c",
    0x41B1AC: "lv_draw_vglite_line.c",
    0x41B234: "lv_gpu_bes_draw_bezier_line",
    0x41DE6C: "lv_port_disp_speedup_bgra8888.c",
    0x41DF78: "disp_flush_area",
    0x041DE0: "jbd013_api.c",
    0x133768: "vg_lite_options.h",
    0x133AAA: "vg_lite_get_cmdbuf_info",
    0x133B2C: "gpu_port.c",
}

with open(BIN, "rb") as f:
    data = f.read()
N = len(data)
print(f"bin size={N}")

# 1) raw 32-bit LE hits of VA / file-offset / aliases
print("\n=== raw 32-bit LE pointer hits ===")
for off, name in TARGETS.items():
    vas = [base + off for base in ALIASES]
    vas.append(off)  # raw file offset
    for va in vas:
        pat = struct.pack("<I", va & 0xFFFFFFFF)
        hits = []
        start = 0
        while True:
            i = data.find(pat, start)
            if i < 0:
                break
            hits.append(i)
            start = i + 1
        if hits:
            print(f"  {name} va=0x{va:08X}: {len(hits)} hits @ {[hex(h) for h in hits[:20]]}")

# 2) Thumb T1 ldr rd, [pc, #imm]  01001 ddd iiiiiiii
#    target_literal_addr = align4(pc+4) + imm*4
print("\n=== Thumb ldr [pc] / adr resolving to target VAs ===")
wanted = set()
for off in TARGETS:
    for base in ALIASES:
        wanted.add((base + off) & 0xFFFFFFFF)
    wanted.add(off)

# Also accept literals that are the file offset as signed/unsigned
hits_pc = []

def aligned_pc(insn_off):
    # Thumb PC for adr/ldr = align4(addr+4)
    return (XIP + insn_off + 4) & ~3

# Scan 16-bit aligned
for i in range(0, N - 4, 2):
    hw = data[i] | (data[i + 1] << 8)
    # ldr T1: 01001ddd iiiiiiii
    if (hw & 0xF800) == 0x4800:
        imm = hw & 0xFF
        lit = aligned_pc(i) + imm * 4
        lit_off = lit - XIP
        if 0 <= lit_off <= N - 4:
            val = struct.unpack_from("<I", data, lit_off)[0]
            if val in wanted:
                hits_pc.append(("ldrT1", i, lit_off, val))
            # PIC: val + aligned_pc == wanted
            s = (val + aligned_pc(i)) & 0xFFFFFFFF
            if s in wanted:
                hits_pc.append(("ldrT1+pc", i, lit_off, val, s))
            s2 = (val + lit) & 0xFFFFFFFF
            if s2 in wanted:
                hits_pc.append(("ldrT1+litpc", i, lit_off, val, s2))

    # adr T1: 10100 ddd iiiiiiii  -> rd = align4(pc+4) + imm*4
    if (hw & 0xF800) == 0xA000:
        imm = hw & 0xFF
        dest = aligned_pc(i) + imm * 4
        if dest in wanted:
            hits_pc.append(("adrT1", i, dest))

# Thumb-2 ldr.w rt, [pc, #imm]  F8DF | Rt imm12   encoding T2
# 1111 1000 1101 1111 | rrrr iiii iiii iiii   (add=1, U)
# also F85F for sub
for i in range(0, N - 6, 2):
    hw1 = data[i] | (data[i + 1] << 8)
    hw2 = data[i + 2] | (data[i + 3] << 8)
    # ldr.w rt, [pc, #imm12]  F8DF / F85F
    if hw1 in (0xF8DF, 0xF85F):
        rt = (hw2 >> 12) & 0xF
        imm12 = hw2 & 0xFFF
        add = hw1 == 0xF8DF
        pc = aligned_pc(i)
        lit = pc + imm12 if add else pc - imm12
        lit_off = lit - XIP
        if 0 <= lit_off <= N - 4:
            val = struct.unpack_from("<I", data, lit_off)[0]
            if val in wanted:
                hits_pc.append(("ldr.w", i, lit_off, val))
            s = (val + pc) & 0xFFFFFFFF
            if s in wanted:
                hits_pc.append(("ldr.w+pc", i, lit_off, val, s))

    # addw rd, pc, #imm12   F2A0 | 0 imm3 rd imm8   encoding: F2A0 0xxx
    # ADD (immediate) T4: 11110 i 100010 S 1111 | 0 imm3 rd imm8  -> addw rd, pc, #imm
    # 11110 i 101010 0 1111 = addw (no S)
    if (hw1 & 0xFBFF) == 0xF20F:  # addw rd, pc (i in bit 10)
        i10 = (hw1 >> 10) & 1
        imm3 = (hw2 >> 12) & 7
        rd = (hw2 >> 8) & 0xF
        imm8 = hw2 & 0xFF
        # actually need to check opcode more carefully
    # adr.w  T2/T3: addw/subw rd, pc, #imm12
    # ADDW: 11110 i 100000 1111 | 0 imm3 rd imm8  (F200 | i<<10 | 0x0F)
    if (hw1 & 0xFB0F) == 0xF20F and (hw2 & 0x8000) == 0:
        i10 = (hw1 >> 10) & 1
        imm3 = (hw2 >> 12) & 7
        imm8 = hw2 & 0xFF
        imm12 = (i10 << 11) | (imm3 << 8) | imm8
        dest = aligned_pc(i) + imm12
        if dest in wanted:
            hits_pc.append(("addw_pc", i, dest))
    if (hw1 & 0xFB0F) == 0xF2AF and (hw2 & 0x8000) == 0:
        i10 = (hw1 >> 10) & 1
        imm3 = (hw2 >> 12) & 7
        imm8 = hw2 & 0xFF
        imm12 = (i10 << 11) | (imm3 << 8) | imm8
        dest = aligned_pc(i) - imm12
        if dest in wanted:
            hits_pc.append(("subw_pc", i, dest))

print(f"pc-rel hits: {len(hits_pc)}")
for h in hits_pc[:50]:
    print(" ", h)

# 3) MOVW/MOVT construction of target VAs
# MOVW T3: 11110 i 100100 imm4 | 0 imm3 rd imm8
# MOVT T1: 11110 i 101100 imm4 | 0 imm3 rd imm8
print("\n=== MOVW/MOVT pairs targeting string VAs ===")

def decode_movw_t(hw1, hw2, is_movt):
    # 11110 i 10x100 imm4 | 0 imm3 rd imm8
    i10 = (hw1 >> 10) & 1
    imm4 = hw1 & 0xF
    imm3 = (hw2 >> 12) & 7
    rd = (hw2 >> 8) & 0xF
    imm8 = hw2 & 0xFF
    imm16 = (imm4 << 12) | (i10 << 11) | (imm3 << 8) | imm8
    return rd, imm16

movw = {}  # (off, rd) -> imm16
movt = {}
for i in range(0, N - 4, 2):
    hw1 = data[i] | (data[i + 1] << 8)
    hw2 = data[i + 2] | (data[i + 3] << 8)
    if (hw1 & 0xFBF0) == 0xF240 and (hw2 & 0x8000) == 0:
        rd, imm = decode_movw_t(hw1, hw2, False)
        movw[i] = (rd, imm)
    if (hw1 & 0xFBF0) == 0xF2C0 and (hw2 & 0x8000) == 0:
        rd, imm = decode_movw_t(hw1, hw2, True)
        movt[i] = (rd, imm)

# pair movw/movt on same rd within 16 bytes
pair_hits = []
movt_by_rd = defaultdict(list)
for off, (rd, imm) in movt.items():
    movt_by_rd[rd].append((off, imm))

for off, (rd, lo) in movw.items():
    for toff, hi in movt_by_rd.get(rd, []):
        if 0 < abs(toff - off) <= 16:
            va = (hi << 16) | lo
            if va in wanted:
                pair_hits.append((off, toff, rd, va))

print(f"movw/movt pairs: {len(pair_hits)}")
for h in pair_hits[:30]:
    print(f"  movw@{h[0]:x} movt@{h[1]:x} r{h[2]} -> 0x{h[3]:08X}")

# 4) scan ALL 4-byte aligned words equal to target; already done in #1

# 5) literal = target - (XIP+off)  i.e. relative offset from file pos
print("\n=== literals equal to (target_va - nearby_pc) within ±4k ===")
rel_hits = []
# precompute all 4-aligned words
# too many; only check words that look like small-ish deltas to our targets
# target_va - word = some code pc nearby
for off, name in TARGETS.items():
    for base in (XIP, FLASH):
        tva = base + off
        # scan words; if tva-word is a valid code address within 8KB of the word, flag it
        # word at file position p, value v, if tva-v is near XIP+p
        # that's v = tva - (XIP+p + delta) = (tva-XIP-p) - delta = (off-p)-delta for XIP
        pass

# Faster: for each target, for each 4-aligned p, v = word[p]
# if (tva - v) is in [XIP+p-4096, XIP+p+4096] then PIC add
for p in range(0, N - 3, 4):
    v = struct.unpack_from("<I", data, p)[0]
    for tva in list(wanted):
        code = (tva - v) & 0xFFFFFFFF
        # code should be near this literal (typical pool is 0..1024 after insn)
        if abs((code - (XIP + p)) & 0xFFFFFFFF) < 0x800 or abs((code - (XIP + p)) & 0xFFFFFFFF) > 0xFFFFF800:
            # filter out the raw pointer case (v==tva => code=0)
            if v == tva:
                continue
            if 0 <= (code - XIP) < N:
                rel_hits.append((p, v, tva, code))

print(f"rel-delta hits (noisy): {len(rel_hits)}")
# cluster by target
by_t = defaultdict(list)
for h in rel_hits:
    by_t[h[2]].append(h)
for tva, hs in by_t.items():
    print(f"  target 0x{tva:08X}: {len(hs)}  first={hs[:5]}")

print("\nDONE")
