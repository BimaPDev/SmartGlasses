#!/usr/bin/env python3
"""LVGL band  =  0x2C5FE000 .. 0x2C630000  (established by taking the callee
closure of the 16 pre-verified lv_* wrapper VAs).

The LVGL service thread must: live OUTSIDE that band (it is application code),
call INTO it, loop, and block on a CMSIS-RTOS2 SVC wrapper."""
import json, os, sys, struct, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from walk2 import walk, STARTS, BASE, data, D, md

LO, HI = 0x2C5FE000, 0x2C630000

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
svc = {va: svc_target(va) for va in STARTS if 0x2c640000 <= va < 0x2c652000 and svc_target(va)}

prof = {va: walk(va) for va in STARTS}
calls = {va: set(d for _, d in r["bls"]) for va, r in prof.items()}
callers = collections.defaultdict(set)
for va, cs in calls.items():
    for d in cs: callers[d].add(va)

rows = []
for va, r in prof.items():
    if LO <= va < HI: continue
    if not r["backs"]: continue
    ds = calls[va]
    band = sorted(d for d in ds if LO <= d < HI)
    if not band: continue
    bk = sorted(ds & set(svc))
    if not bk: continue
    rows.append((va, r, ds, band, bk))
print("%d looping non-band functions that call INTO the LVGL band and block on an SVC wrapper\n" % len(rows))
for va, r, ds, band, bk in sorted(rows, key=lambda x: x[1]["ins"]):
    print("FN 0x%08x..0x%08x ins=%-4d callers=%-2d ret=%d ind=%d" %
          (va, r["hi"], r["ins"], len(callers.get(va, ())), r["returns"], r["indirect"]))
    print("   into-band: %s" % " ".join("0x%08x(%d callers)" % (b, len(callers.get(b, ()))) for b in band))
    print("   blocking : %s" % " ".join("0x%08x" % b for b in bk))
    print("   all      : %s" % " ".join("0x%08x" % d for d in sorted(ds)))
    print()
json.dump([{"va": "0x%08x" % va, "hi": "0x%08x" % r["hi"], "ins": r["ins"],
            "into_band": ["0x%08x" % b for b in band],
            "blocking": ["0x%08x" % b for b in bk],
            "callees": ["0x%08x" % d for d in sorted(ds)]} for va, r, ds, band, bk in rows],
          open(os.path.join(D, "lvgl_thread_cands.json"), "w"), indent=1)
