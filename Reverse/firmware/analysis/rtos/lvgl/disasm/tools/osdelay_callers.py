#!/usr/bin/env python3
import json, os, bisect, collections
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
E = json.load(open(os.path.join(D, "edges.json")))
FI = json.load(open(os.path.join(D, "fnindex.json")))
S = FI["starts"]; ptr = FI["ptr"]

def owner(va):
    i = bisect.bisect_right(S, va) - 1
    return S[i] if i >= 0 else None

fn_calls = collections.defaultdict(list)
for s, d in E["bl"] + E["bw"]:
    o = owner(s)
    if o is not None: fn_calls[o].append((s, d))

OSDELAY = 0x2c6444fc
LV_LO, LV_HI = 0x2c5f0000, 0x2c640000   # provisional LVGL core band
rows = []
for fn, calls in fn_calls.items():
    ds = [d for _, d in calls]
    if OSDELAY not in ds: continue
    lv = sorted(set(d for d in ds if LV_LO <= d < LV_HI))
    rows.append((fn, len(calls), lv, sorted(set(ds))))
print("%d functions call osDelay(0x2c6444fc)" % len(rows))
hits = [r for r in rows if r[2]]
print("%d of those also call into 0x%x-0x%x\n" % (len(hits), LV_LO, LV_HI))
for fn, nc, lv, ds in sorted(hits, key=lambda r: r[1]):
    isptr = ("0x%08x" % fn) in ptr
    print("FN 0x%08x calls=%-3d ptr_target=%s  lvgl_callees=%s" %
          (fn, nc, isptr, " ".join("0x%08x" % x for x in lv[:8])))
