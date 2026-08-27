#!/usr/bin/env python3
import json, os, sys, struct, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from walk2 import walk, STARTS, SS, BASE, data, D, md
from capstone import *

# ---------- CMSIS-RTOS2 SVC wrappers ----------------------------------------
def svc_target(va):
    o = va - BASE; lit = None
    for x in md.disasm(bytes(data[o:o + 0x60]), va):
        if x.mnemonic.startswith("ldr") and x.op_str.startswith("ip,") and "pc" in x.op_str:
            try: k = int(x.op_str.split("#")[-1].rstrip("]"), 0)
            except ValueError: continue
            lit = ((x.address + 4) & ~3) + k
        if x.mnemonic == "svc":
            return struct.unpack_from("<I", data, lit - BASE)[0] if lit else -1
    return None
svc = {}
for va in STARTS:
    if 0x2c640000 <= va < 0x2c652000:
        t = svc_target(va)
        if t: svc[va] = t

# ---------- walk everything --------------------------------------------------
prof = {}
for va in STARTS:
    prof[va] = walk(va)
calls = {va: set(d for _, d in r["bls"]) for va, r in prof.items()}
callers = collections.defaultdict(set)
for va, cs in calls.items():
    for d in cs: callers[d].add(va)

# ---------- LVGL band from the wrapper callee closure -----------------------
WRAP = [0x2c606ce8,0x2c606cf4,0x2c606f34,0x2c606fa8,0x2c606ff8,0x2c607048,
        0x2c6070bc,0x2c60710c,0x2c6072b4,0x2c6072bc,0x2c62b030,0x2c62c6a0,
        0x2c62c6b0,0x2c62c730,0x2c62c770,0x2c62c7e8]
clo = set(WRAP); frontier = set(WRAP)
for _ in range(4):
    nx = set()
    for f in frontier: nx |= calls.get(f, set())
    nx -= clo; clo |= nx; frontier = nx
inband = sorted(x for x in clo if 0x2c5f0000 <= x < 0x2c675000)
print("wrapper callee closure(4): %d fns, %d in 0x2c5f0000-0x2c675000, span 0x%08x-0x%08x"
      % (len(clo), len(inband), min(inband), max(inband)))

# ---------- never-returning loop bodies -------------------------------------
noret = []
for va, r in prof.items():
    if r["returns"] or r["indirect"] or r["undef"]: continue
    if not r["backs"] or not r["bls"]: continue
    if r["ins"] < 15: continue
    noret.append(va)
noret.sort()
print("\n%d never-returning looping functions" % len(noret))

def reach(fn, depth=4):
    seen = {fn}; fr = {fn}
    for _ in range(depth):
        nx = set()
        for f in fr: nx |= calls.get(f, set())
        nx -= seen; seen |= nx; fr = nx
    return seen

print("\n%-12s %-8s %-5s %-6s %-6s %s" % ("ENTRY", "END", "INS", "CALLRS", "LVGL", "BLOCKING"))
rows = []
for va in noret:
    r = prof[va]
    ds = calls[va]
    bk = sorted(ds & set(svc))
    lv = len(reach(va) & set(WRAP))
    rows.append((va, r, ds, bk, lv))
for va, r, ds, bk, lv in sorted(rows, key=lambda x: (-x[4], x[0])):
    if not bk and lv == 0: continue
    print("0x%08x   0x%06x %-5d %-6d %-6d %s" %
          (va, r["hi"] & 0xffffff, r["ins"], len(callers.get(va, ())), lv,
           " ".join("0x%08x" % b for b in bk)))
json.dump({"svc": {("0x%08x" % k): ("0x%08x" % v) for k, v in svc.items()},
           "noret": ["0x%08x" % v for v in noret],
           "rows": [{"va": "0x%08x" % va, "hi": "0x%08x" % r["hi"], "ins": r["ins"],
                     "callers": len(callers.get(va, ())),
                     "lvgl_reach4": lv, "blocking": ["0x%08x" % b for b in bk],
                     "callees": ["0x%08x" % d for d in sorted(ds)]}
                    for va, r, ds, bk, lv in rows]},
          open(os.path.join(D, "final.json"), "w"), indent=1)
