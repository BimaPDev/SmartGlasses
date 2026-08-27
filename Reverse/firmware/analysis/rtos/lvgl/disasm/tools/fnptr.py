#!/usr/bin/env python3
"""Route 3: code-pointer scan.  Thread entry functions are never BL'd; they are
handed to osThreadNew as (VA|1) literals.  Enumerate every (VA|1) word in the
image that is NOT also a BL target, then keep the ones whose body is an
infinite loop."""
import json, os, struct, bisect, collections
from capstone import *

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
blt = set(d for _, d in E["bl"])
S = sorted(blt | set(d for _, d in E["bw"]))

# every aligned word that looks like a thumb code pointer
ptr = collections.defaultdict(list)
w = struct.unpack("<%dI" % (N // 4), data[:(N // 4) * 4])
for i, v in enumerate(w):
    if not (v & 1): continue
    t = v - 1
    if t < BASE or t >= BASE + N: continue
    o = t - BASE
    if o & 1: continue
    ptr[t].append(BASE + i * 4)

def extent(va):
    i = bisect.bisect_right(S, va)
    nxt = S[i] if i < len(S) else BASE + N
    # also bound by the next code pointer target
    return va, min(nxt, va + 0x2000)

def decode(lo, hi):
    out = []; cur = lo - BASE; e = hi - BASE
    while cur < e:
        ins = list(md.disasm(bytes(data[cur:cur + 4]), BASE + cur, count=1))
        if not ins: out.append((BASE + cur, 2, "<undef>", "")); cur += 2; continue
        i = ins[0]; out.append((i.address, i.size, i.mnemonic, i.op_str)); cur += i.size
    return out

def profile(va):
    lo, hi = extent(va)
    ins = decode(lo, hi)
    bls, backs = [], []
    for a, sz, m, ops in ins:
        if m in ("bl", "blx") and ops.startswith("#"): bls.append(int(ops[1:], 0))
        if m.split('.')[0] == "b" and ops.startswith("#"):
            t = int(ops[1:], 0)
            if lo <= t < a: backs.append((a, t))
    return dict(lo=lo, hi=hi, n=len(ins), bls=bls, backs=backs, ins=ins)

cands = []
for va, sites in ptr.items():
    if va in blt: continue                      # a real callee, not an entry
    o = va - BASE
    # must start with a push{...,lr} style prologue
    hw = struct.unpack_from("<H", data, o)[0]
    if not ((hw & 0xFE00) == 0xB400 or hw == 0xE92D or (hw & 0xFFE0) == 0xE92D): continue
    if (hw & 0xFE00) == 0xB400 and not (hw & 0x0100): continue   # need LR
    p = profile(va)
    if not p["backs"]: continue
    if p["backs"][-1][0] != p["ins"][-1][0]: continue            # loop is terminal
    if not p["bls"]: continue
    cands.append((va, sites, p))

print("%d terminal-infinite-loop code-pointer targets\n" % len(cands))
out = []
for va, sites, p in sorted(cands, key=lambda c: c[2]["n"]):
    out.append(dict(va=va, ptr_sites=sites, lo=p["lo"], hi=p["hi"], n=p["n"],
                    bls=p["bls"], backs=p["backs"]))
json.dump(out, open(os.path.join(D, "fnptr_loops.json"), "w"), indent=1)
for r in out:
    print("ENTRY 0x%08x n=%-4d ptr@%s\n        bls=%s" %
          (r["va"], r["n"], " ".join("0x%08x" % s for s in r["ptr_sites"][:4]),
           " ".join("0x%08x(%d)" % (b, indeg[b]) for b in dict.fromkeys(r["bls"]))))
