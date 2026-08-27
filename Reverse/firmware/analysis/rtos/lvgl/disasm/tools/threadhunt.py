#!/usr/bin/env python3
"""Structural thread-body hunt.

Premise (no strings, no osThreadNew needed):
  * A thread entry function is referenced ONLY as a (VA|1) code pointer -
    it is never the target of a BL.
  * Its body is a while(1) loop, so it contains an unconditional backward
    branch and never falls out.
Rank the resulting set by whether it reaches the LVGL core (the band that
holds the 17 verified lv_* wrappers) within 2 call levels.
"""
import json, os, bisect, collections
from capstone import *
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
FI = json.load(open(os.path.join(D, "fnindex.json")))
S = FI["starts"]; PTR = {int(k, 16): v for k, v in FI["ptr"].items()}
E = json.load(open(os.path.join(D, "edges.json")))
blt = set(d for _, d in E["bl"])
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)

def owner(va):
    i = bisect.bisect_right(S, va) - 1
    return S[i] if i >= 0 else None

calls = collections.defaultdict(set)
callers = collections.defaultdict(set)
for s, d in E["bl"] + E["bw"]:
    o = owner(s)
    if o is None: continue
    calls[o].add(d); callers[d].add(o)

WRAP = {0x2c606ce8,0x2c606cf4,0x2c606f34,0x2c606fa8,0x2c606ff8,0x2c607048,
        0x2c6070bc,0x2c60710c,0x2c6072b4,0x2c6072bc,0x2c62b030,0x2c62c6a0,
        0x2c62c6b0,0x2c62c730,0x2c62c770,0x2c62c7e8}

def bodyloop(va):
    """decode from va to next start; return (n_ins, backward_branches, bls)"""
    i = bisect.bisect_right(S, va)
    hi = min(S[i] if i < len(S) else BASE + N, va + 0x1200)
    cur = va - BASE; e = hi - BASE
    backs = []; bls = []; n = 0; last = va
    while cur < e:
        ins = list(md.disasm(bytes(data[cur:cur + 4]), BASE + cur, count=1))
        if not ins: cur += 2; continue
        i2 = ins[0]; n += 1; last = i2.address
        m, ops = i2.mnemonic, i2.op_str
        if m in ("bl", "blx") and ops.startswith("#"): bls.append(int(ops[1:], 0))
        if m.split('.')[0] == "b" and ops.startswith("#"):
            t = int(ops[1:], 0)
            if va <= t < i2.address: backs.append((i2.address, t))
        cur += i2.size
    return n, backs, bls, hi

# ---- prologue check --------------------------------------------------------
import struct
def has_prologue(va):
    hw = struct.unpack_from("<H", data, va - BASE)[0]
    return (hw & 0xFF00) == 0xB500 or hw == 0xE92D or (hw & 0xFF80) == 0xB080

cands = []
for va in sorted(set(PTR) - blt):
    if not has_prologue(va): continue
    n, backs, bls, hi = bodyloop(va)
    if not backs or not bls or n < 6: continue
    cands.append(dict(va=va, n=n, hi=hi, backs=backs, bls=sorted(set(bls)),
                      ptr_sites=PTR[va]))
print("%d ptr-only looping functions (candidate thread bodies)" % len(cands))

# reachability to the LVGL wrapper set within 2 levels
def reach2(fn):
    lv = set()
    l1 = calls.get(fn, set())
    lv |= (l1 & WRAP)
    for c in l1:
        lv |= (calls.get(c, set()) & WRAP)
    return lv

scored = []
for c in cands:
    lv = reach2(c["va"])
    scored.append((len(lv), c, lv))
scored.sort(key=lambda x: -x[0])
print("with LVGL-wrapper reachability<=2:", sum(1 for s in scored if s[0]))
for k, c, lv in scored[:15]:
    print("  0x%08x n=%-4d lvwrap=%d" % (c["va"], c["n"], k))

json.dump(cands, open(os.path.join(D, "thread_cands.json"), "w"), indent=1)

# ---- indeg==1 LVGL-core functions whose only caller is a ptr-only loop fn ---
print("\n=== indeg==1 functions whose sole caller is a ptr-only looping fn ===")
cset = {c["va"] for c in cands}
for d, cs in sorted(callers.items()):
    if len(cs) != 1: continue
    c = next(iter(cs))
    if c not in cset: continue
    n, backs, bls, hi = bodyloop(d)
    print("  callee 0x%08x (ins=%d, bls=%d) <- thread 0x%08x" % (d, n, len(set(bls)), c))
