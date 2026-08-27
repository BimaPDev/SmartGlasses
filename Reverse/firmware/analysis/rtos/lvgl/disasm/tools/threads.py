#!/usr/bin/env python3
"""Final structural thread-body enumeration.

A FreeRTOS/CMSIS-RTOS2 thread body in this image is:
  * never the target of a BL and never stored as a literal code pointer
    (this build is PIC; entry addresses are materialised at run time),
  * never returns  (no reachable POP{..,PC} / BX LR / out-of-range tail call),
  * contains a backward branch (the while(1)),
  * calls at least one CMSIS-RTOS2 SVC wrapper (its blocking primitive),
  * decodes with zero undefined instructions.
"""
import json, os, struct, sys, collections
sys.path.insert(0, os.path.dirname(__file__))
import walk as W
from walk import walk, S, SS, BASE, data, N, D
from capstone import *

E = json.load(open(os.path.join(D, "edges.json")))
indeg = collections.Counter()
for s, d in E["bl"] + E["bw"]: indeg[d] += 1
blt = set(d for _, d in E["bl"])
FI = json.load(open(os.path.join(D, "fnindex.json")))
PTRT = set(int(k, 16) for k in FI["ptr"])
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)

# --- CMSIS-RTOS2 SVC wrappers ------------------------------------------------
def svc_target(va):
    """push{..}; ...; ldr ip,[pc,#k]; svc #0  -> return the svcRtxXxx address"""
    o = va - BASE
    lit = None
    for x in md.disasm(bytes(data[o:o + 0x60]), va):
        if x.mnemonic.startswith("ldr") and x.op_str.startswith("ip,") and "pc" in x.op_str:
            k = int(x.op_str.split("#")[-1].rstrip("]"), 0)
            lit = ((x.address + 4) & ~3) + k
        if x.mnemonic == "svc" and lit is not None:
            return struct.unpack_from("<I", data, lit - BASE)[0]
    return None

svc = {}
for va in S:
    if 0x2c640000 <= va < 0x2c650000:
        t = svc_target(va)
        if t: svc[va] = t

# --- walk everything, incl. gap-scan ----------------------------------------
covered = bytearray(N); prof = {}
for va in sorted(S):
    r = walk(va); prof[va] = r
    covered[r["lo"] - BASE:r["hi"] - BASE] = b"\x01" * (r["hi"] - r["lo"])
extra = []
o = 0
while o < N - 4:
    if covered[o]: o += 1; continue
    hw = struct.unpack_from("<H", data, o)[0]
    if (hw & 0xFF00) == 0xB500 or hw == 0xE92D:
        va = BASE + o; r = walk(va)
        if r["ins"] >= 12 and r["hi"] - r["lo"] > 0x30:
            extra.append(va); prof[va] = r
            covered[r["lo"] - BASE:r["hi"] - BASE] = b"\x01" * (r["hi"] - r["lo"])
            o = r["hi"] - BASE; continue
    o += 2

cand = []
for va, r in prof.items():
    if r["returns"] or r["indirect"]: continue
    if not r["backs"] or not r["bls"]: continue
    if r["ins"] < 20: continue
    if va in blt or va in PTRT: continue
    ds = set(d for _, d in r["bls"])
    blocking = sorted(ds & set(svc))
    if not blocking: continue
    cand.append((va, r, ds, blocking))
cand.sort()
# drop bodies wholly contained in an earlier candidate
keep = []
for va, r, ds, bk in cand:
    if keep and va < keep[-1][1]["hi"] and r["hi"] <= keep[-1][1]["hi"]: continue
    keep.append((va, r, ds, bk))

print("%d structural thread bodies (never-return + loop + RTOS block + unreferenced)\n" % len(keep))
LVWRAP = {0x2c606ce8,0x2c606cf4,0x2c606f34,0x2c606fa8,0x2c606ff8,0x2c607048,
          0x2c6070bc,0x2c60710c,0x2c6072b4,0x2c6072bc,0x2c62b030,0x2c62c6a0,
          0x2c62c6b0,0x2c62c730,0x2c62c770,0x2c62c7e8}
callees = collections.defaultdict(set)
for va, r in prof.items(): callees[va] = set(d for _, d in r["bls"])
def reach(fn, depth=3):
    seen = {fn}; frontier = {fn}
    for _ in range(depth):
        nxt = set()
        for f in frontier: nxt |= callees.get(f, set())
        nxt -= seen; seen |= nxt; frontier = nxt
    return seen

rows = []
for va, r, ds, bk in keep:
    lv = reach(va) & LVWRAP
    rows.append((va, r, ds, bk, len(lv)))
for va, r, ds, bk, nlv in sorted(rows, key=lambda x: -x[4]):
    print("THREAD 0x%08x..0x%08x ins=%-4d lvglwrap_reach3=%-2d block=%s" %
          (va, r["hi"], r["ins"], nlv, " ".join("0x%08x" % b for b in bk)))
json.dump({"svc": {("0x%08x" % k): ("0x%08x" % v) for k, v in svc.items()},
           "threads": [{"va": va, "lo": r["lo"], "hi": r["hi"], "ins": r["ins"],
                        "bls": sorted(ds), "blocking": bk, "lvgl_reach3": nlv}
                       for va, r, ds, bk, nlv in rows]},
          open(os.path.join(D, "threads.json"), "w"), indent=1)
