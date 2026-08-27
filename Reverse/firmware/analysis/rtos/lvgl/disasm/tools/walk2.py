#!/usr/bin/env python3
"""Function-body walker driven by the Ghidra function-entry list.

Ghidra's *entry points* are reliable here; its *bodies* are not (this PIC image
defeats its flow follower in places), so we take only the entry set and
recompute each body ourselves with an exact recursive descent.
"""
import json, os, struct, collections, sys
from capstone import *
from capstone.arm import *

BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)
md.detail = True

STARTS = []
for ln in open(os.path.join(D, "ghidra_functions.txt")):
    p = ln.split()
    if p: STARTS.append(int(p[0], 16))
STARTS = sorted(set(STARTS))
SS = set(STARTS)

def walk(entry, cap=0x4000):
    seen = set(); wl = [entry]
    bls = []; backs = []
    returns = 0; indirect = 0; undef = 0
    lo = hi = entry
    while wl:
        a = wl.pop()
        while True:
            if a in seen: break
            if not (entry <= a < entry + cap): break
            o = a - BASE
            if o < 0 or o + 4 > N: break
            ins = list(md.disasm(bytes(data[o:o + 4]), a, count=1))
            if not ins: undef += 1; break
            i = ins[0]; seen.add(a)
            lo = min(lo, a); hi = max(hi, a + i.size)
            m, ops = i.mnemonic, i.op_str
            nxt = a + i.size
            if m in ("bl", "blx"):
                if ops.startswith("#"): bls.append((a, int(ops[1:], 0)))
                else: indirect += 0
                a = nxt; continue
            if m in ("tbb", "tbh"): indirect += 1; break
            if m == "pop" and "pc" in ops: returns += 1; break
            if m == "bx":
                if ops.strip() == "lr": returns += 1
                else: indirect += 1
                break
            if m.startswith("cb"):
                t = int(ops.split("#")[-1], 0)
                if t not in seen: wl.append(t)
                if t < a: backs.append((a, t))
                a = nxt; continue
            base = m.split(".")[0]
            if base == "b" or (len(base) == 3 and base[0] == "b" and base not in ("bic","bfi","bfc","bkpt")):
                if not ops.startswith("#"): indirect += 1; break
                t = int(ops[1:], 0)
                cond = i.cc not in (ARM_CC_AL, ARM_CC_INVALID)
                if t < a and entry <= t: backs.append((a, t))
                if t in SS and t != entry:
                    returns += 1                       # tail call to another fn
                    if cond: a = nxt; continue
                    break
                if not (entry <= t < entry + cap):
                    returns += 1
                    if cond: a = nxt; continue
                    break
                if t not in seen: wl.append(t)
                if cond: a = nxt; continue
                break
            if m.startswith("ldr") and ops.startswith("pc"): indirect += 1; break
            if m in ("udf", "hlt"): break
            a = nxt
    return dict(entry=entry, lo=lo, hi=hi, ins=len(seen),
                bls=bls, backs=backs, returns=returns,
                indirect=indirect, undef=undef)

if __name__ == "__main__":
    for x in sys.argv[1:]:
        r = walk(int(x, 0))
        r["bls"] = ["0x%08x->0x%08x" % t for t in r["bls"]]
        r["backs"] = ["0x%08x->0x%08x" % t for t in r["backs"]]
        for k in ("entry", "lo", "hi"): r[k] = hex(r[k])
        print(json.dumps(r, indent=1))
