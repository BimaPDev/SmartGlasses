#!/usr/bin/env python3
"""Structural hunt for the LVGL service loop.

Route: independent of TRACE-string interning and of osThreadNew enumeration.
Find functions that (a) contain an unconditional backward branch forming an
infinite loop, (b) have a small BL set, and (c) call into the LVGL core link
band established from hud_map/lvgl_xrefs.json wrapper VAs.
"""
import json, os, sys, collections
from capstone import *
from capstone.arm import *

BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
BIN = os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin")
data = open(BIN, "rb").read()
N = len(data)
E = json.load(open(os.path.join(D, "edges.json")))

md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)
md.detail = True

callees = collections.defaultdict(list)   # src_va -> dst
indeg = collections.Counter()
for s, d in E["bl"]:
    callees[s].append(d)
    indeg[d] += 1
for s, d in E["bw"]:
    indeg[d] += 1

starts = sorted(set(d for _, d in E["bl"]))
startset = set(starts)

def off(va): return va - BASE

def disasm_fn(va, limit=0x900):
    """Linear decode from va, stopping at an unconditional terminator that has
    no forward-reachable continuation, at the next known function start, or at
    limit bytes."""
    o = off(va)
    end = min(o + limit, N)
    out = []
    maxbranch = o
    cur = o
    while cur < end:
        chunk = data[cur:cur + 4]
        ins = list(md.disasm(bytes(chunk), BASE + cur, count=1))
        if not ins:
            out.append((BASE + cur, data[cur:cur+2].hex(), "<undef>", ""))
            cur += 2
            continue
        i = ins[0]
        out.append((i.address, data[cur:cur + i.size].hex(), i.mnemonic, i.op_str))
        # track forward branch targets so we don't stop early
        if i.group(ARM_GRP_JUMP) or i.mnemonic.startswith(("b", "cb")):
            for op in i.operands:
                if op.type == ARM_OP_IMM:
                    t = op.imm
                    if t > maxbranch + BASE:
                        maxbranch = t - BASE
        cur += i.size
        m = i.mnemonic
        term = (m in ("bx",) or
                (m.startswith("pop") and "pc" in i.op_str) or
                (m in ("b", "b.w", "b.n") and i.cc in (ARM_CC_AL, ARM_CC_INVALID)) or
                (m.startswith("ldr") and i.op_str.startswith("pc")))
        if term and cur > maxbranch:
            break
        if BASE + cur in startset and cur > maxbranch and len(out) > 3:
            break
    return out

def analyse(va):
    ins = disasm_fn(va)
    if not ins:
        return None
    lo, hi = va, ins[-1][0]
    back = []   # unconditional backward branches inside the body
    bls = []
    for a, b, m, ops in ins:
        if m in ("bl", "blx") and ops.startswith("#"):
            bls.append(int(ops[1:], 0))
        if m in ("b", "b.w", "b.n") and ops.startswith("#"):
            t = int(ops[1:], 0)
            if lo <= t <= a:
                back.append((a, t))
    return dict(va=va, end=hi, n=len(ins), back=back, bls=bls, ins=ins)

# ---- LVGL core band -------------------------------------------------------
WRAP = [0x2c606ce8,0x2c606cf4,0x2c606f34,0x2c606fa8,0x2c606ff8,0x2c607048,
        0x2c6070bc,0x2c60710c,0x2c6072b4,0x2c6072bc,0x2c62b030,0x2c62c6a0,
        0x2c62c6b0,0x2c62c730,0x2c62c770,0x2c62c7e8]
# grow the band: contiguous run of call targets around the wrappers
lo_i = starts.index(min(WRAP)) if min(WRAP) in startset else 0
band_lo, band_hi = min(WRAP), max(WRAP)
# extend by contiguity: walk down/up while gap between consecutive starts < 0x2000
si = starts.index(min(WRAP))
i = si
while i > 0 and starts[i] - starts[i-1] < 0x1200:
    i -= 1
band_lo = starts[i]
j = starts.index(max(WRAP))
while j < len(starts) - 1 and starts[j+1] - starts[j] < 0x1200:
    j += 1
band_hi = starts[j]
print("LVGL core band (contiguity-grown): 0x%08x - 0x%08x  (%d fn starts)" %
      (band_lo, band_hi, sum(1 for s in starts if band_lo <= s <= band_hi)))

# ---- candidates ------------------------------------------------------------
cands = []
for s in starts:
    if band_lo <= s <= band_hi:
        continue                      # thread body is app code, not core
    r = analyse(s)
    if not r or not r["back"]:
        continue
    if not r["bls"]:
        continue
    # infinite loop: last instruction is the backward branch (no code after)
    lastb = r["back"][-1]
    if lastb[0] != r["end"]:
        continue
    if len(r["bls"]) > 12:
        continue
    intoband = [b for b in r["bls"] if band_lo <= b <= band_hi]
    cands.append((s, r, intoband))

print("\n%d infinite-loop functions with <=12 BLs" % len(cands))
hits = [c for c in cands if c[2]]
print("%d of them call into the LVGL core band\n" % len(hits))
for s, r, ib in sorted(hits, key=lambda c: -len(c[2])):
    print("FN 0x%08x .. 0x%08x  ins=%d  loop@0x%08x->0x%08x" %
          (s, r["end"], r["n"], r["back"][-1][0], r["back"][-1][1]))
    for b in r["bls"]:
        tag = " <-- LVGL band" if band_lo <= b <= band_hi else ""
        print("    BL 0x%08x  indeg=%d%s" % (b, indeg[b], tag))
    print()
json.dump({"band_lo": band_lo, "band_hi": band_hi,
           "cands": [[c[0], c[1]["end"], c[1]["bls"], c[2]] for c in cands]},
          open(os.path.join(D, "scan.json"), "w"))
