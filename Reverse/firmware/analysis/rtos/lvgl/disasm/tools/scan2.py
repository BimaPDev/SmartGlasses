#!/usr/bin/env python3
"""Tight-extent structural hunt: small infinite-loop thread bodies."""
import json, os, bisect, collections
from capstone import *
from capstone.arm import *

BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
E = json.load(open(os.path.join(D, "edges.json")))
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS); md.detail = True

indeg = collections.Counter()
for s, d in E["bl"]: indeg[d] += 1
for s, d in E["bw"]: indeg[d] += 1
starts = sorted(set(d for _, d in E["bl"]) | set(d for _, d in E["bw"]))
S = starts

def extent(va):
    i = bisect.bisect_right(S, va)
    nxt = S[i] if i < len(S) else BASE + N
    return va, min(nxt, va + 0x4000)

def decode(va, end):
    out = []; cur = va - BASE; e = end - BASE
    while cur < e:
        ins = list(md.disasm(bytes(data[cur:cur + 4]), BASE + cur, count=1))
        if not ins:
            out.append((BASE + cur, 2, "<undef>", data[cur:cur+2].hex())); cur += 2; continue
        i = ins[0]; out.append((i.address, i.size, i.mnemonic, i.op_str)); cur += i.size
    return out

def profile(va):
    lo, hi = extent(va)
    ins = decode(lo, hi)
    bls, backs = [], []
    for a, sz, m, ops in ins:
        if m in ("bl", "blx") and ops.startswith("#"): bls.append(int(ops[1:], 0))
        if m.rstrip('.wn') == "b" and ops.startswith("#"):
            t = int(ops[1:], 0)
            if lo <= t < a: backs.append((a, t))
    return dict(lo=lo, hi=hi, n=len(ins), ins=ins, bls=bls, backs=backs)

res = []
for va in S:
    p = profile(va)
    if p["n"] > 90 or p["n"] < 4: continue
    if not p["backs"]: continue
    lastins = p["ins"][-1]
    # infinite loop: the last real instruction is the backward branch
    if p["backs"][-1][0] != lastins[0]: continue
    if not p["bls"]: continue
    res.append(p)

print("%d tight infinite-loop functions (4..90 ins, >=1 BL)\n" % len(res))
json.dump([{k: v for k, v in p.items() if k != "ins"} for p in res],
          open(os.path.join(D, "loopfns.json"), "w"), indent=1)
for p in sorted(res, key=lambda p: p["n"]):
    print("FN 0x%08x..0x%08x n=%d indeg=%d bls=%s" %
          (p["lo"], p["hi"], p["n"], indeg[p["lo"]],
           " ".join("0x%08x(%d)" % (b, indeg[b]) for b in dict.fromkeys(p["bls"]))))
