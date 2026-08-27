#!/usr/bin/env python3
"""Recursive-descent function body walker + no-return (while(1)) detector.

A thread body never returns: no reachable POP{..,PC} / BX LR / tail-call-out.
That is a far cleaner discriminator than address-range heuristics.
"""
import json, os, bisect, collections, struct, sys
from capstone import *
from capstone.arm import *
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
FI = json.load(open(os.path.join(D, "fnindex.json"))); S = FI["starts"]; SS = set(S)
E = json.load(open(os.path.join(D, "edges.json")))
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)
md.detail = True

RET = ("bx", "pop")

def walk(entry, cap=0x3000):
    seen = set(); wl = [entry]; bls = []; backs = []
    returns = 0; indirect = 0; lo = hi = entry; undef = 0
    while wl:
        a = wl.pop()
        while True:
            if a in seen: break
            if not (entry - 0x40 <= a < entry + cap): break
            o = a - BASE
            if o < 0 or o + 4 > N: break
            ins = list(md.disasm(bytes(data[o:o + 4]), a, count=1))
            if not ins:
                undef += 1; break
            i = ins[0]; seen.add(a)
            lo = min(lo, a); hi = max(hi, a + i.size)
            m, ops = i.mnemonic, i.op_str
            nxt = a + i.size
            if m in ("bl", "blx"):
                if ops.startswith("#"): bls.append((a, int(ops[1:], 0)))
                a = nxt; continue
            if m == "pop" and "pc" in ops: returns += 1; break
            if m == "bx":
                if ops.strip() == "lr": returns += 1
                else: indirect += 1
                break
            if m.startswith("cb"):                        # cbz/cbnz
                t = int(ops.split("#")[-1], 0)
                if t not in seen: wl.append(t)
                if t < a: backs.append((a, t))
                a = nxt; continue
            base = m.split(".")[0]
            if base == "b" or (base.startswith("b") and len(base) == 3 and base != "bic"):
                if not ops.startswith("#"):
                    indirect += 1; break
                t = int(ops[1:], 0)
                cond = i.cc not in (ARM_CC_AL, ARM_CC_INVALID)
                if t < a: backs.append((a, t))
                if not (entry - 0x40 <= t < entry + cap):
                    returns += 1                          # tail call out
                    if not cond: break
                    a = nxt; continue
                if t in SS and t != entry and t > hi:
                    pass                                  # likely tail call
                if t not in seen: wl.append(t)
                if cond: a = nxt; continue
                break
            if m.startswith("ldr") and ops.startswith("pc"): indirect += 1; break
            if m == "udf" or m == "<undef>": break
            a = nxt
    return dict(entry=entry, lo=lo, hi=hi, ins=len(seen), bls=bls, backs=backs,
                returns=returns, indirect=indirect)

if __name__ == "__main__":
    if len(sys.argv) > 1:
        for a in sys.argv[1:]:
            r = walk(int(a, 0))
            r2 = dict(r); r2["bls"] = ["0x%08x->0x%08x" % b for b in r["bls"]]
            r2["backs"] = ["0x%08x->0x%08x" % b for b in r["backs"]]
            r2["lo"] = hex(r2["lo"]); r2["hi"] = hex(r2["hi"]); r2["entry"] = hex(r2["entry"])
            print(json.dumps(r2, indent=1))
