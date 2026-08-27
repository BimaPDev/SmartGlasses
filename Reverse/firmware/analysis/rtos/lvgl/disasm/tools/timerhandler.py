#!/usr/bin/env python3
"""Find lv_timer_handler by its algebraic signature.

LVGL v8 lv_timer_handler() ends with the idle-percentage computation:
    busy_time  += lv_tick_elaps(handler_start);
    idle_period_time = lv_tick_elaps(idle_period_start);
    if (idle_period_time >= IDLE_MEAS_PERIOD /*500*/) {
        idle_last = (busy_time * 100) / idle_period_time;   <-- UDIV, x100
        idle_last = idle_last > 100 ? 0 : 100 - idle_last;
    }
    return time_till_next;   /* LV_NO_TIMER_READY == 0xFFFFFFFF */
So: one function containing UDIV + literal 100 + literal 500 (0x1f4) + mvn #0.
"""
import json, os, bisect, collections
from capstone import *
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
FI = json.load(open(os.path.join(D, "fnindex.json"))); S = FI["starts"]
E = json.load(open(os.path.join(D, "edges.json")))
indeg = collections.Counter()
for s, d in E["bl"] + E["bw"]: indeg[d] += 1
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)

def body(lo, hi):
    out = []; cur = lo - BASE; e = min(hi - BASE, N)
    while cur < e:
        ins = list(md.disasm(bytes(data[cur:cur + 4]), BASE + cur, count=1))
        if not ins: cur += 2; continue
        i = ins[0]; out.append(i); cur += i.size
    return out

hits = []
for k in range(len(S) - 1):
    lo, hi = S[k], min(S[k + 1], S[k] + 0x1800)
    if hi - lo < 0x40 or hi - lo > 0x1800: continue
    ins = body(lo, hi)
    txt = "\n".join("%s %s" % (i.mnemonic, i.op_str) for i in ins)
    if "udiv" not in txt: continue
    has100 = "#0x64" in txt
    has500 = "#0x1f4" in txt
    if has100 and has500:
        hits.append((lo, hi, len(ins), indeg[lo]))
print("candidates (udiv + #100 + #500):")
for lo, hi, n, deg in hits:
    print("  FN 0x%08x..0x%08x  ins=%d  indeg=%d" % (lo, hi, n, deg))
json.dump([[h[0], h[1], h[2], h[3]] for h in hits], open(os.path.join(D, "timerhandler_cands.json"), "w"))
