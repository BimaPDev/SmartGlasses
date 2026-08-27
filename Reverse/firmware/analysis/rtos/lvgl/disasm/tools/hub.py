#!/usr/bin/env python3
"""lv_timer_handler is the LVGL hub: exactly ONE caller, and that caller is a
while(1) loop that also blocks on an RTOS primitive.  Enumerate every callee
with in-degree 1 whose sole caller contains an unconditional backward branch."""
import json, os, bisect, collections, struct
from capstone import *
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
FI = json.load(open(os.path.join(D, "fnindex.json"))); S = FI["starts"]
E = json.load(open(os.path.join(D, "edges.json")))
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS)

def owner(va):
    i = bisect.bisect_right(S, va) - 1
    return S[i] if i >= 0 else None

calls = collections.defaultdict(list); callers = collections.defaultdict(set)
for s, d in E["bl"]:
    o = owner(s)
    calls[o].append((s, d)); callers[d].add(o)

CACHE = {}
def prof(va):
    if va in CACHE: return CACHE[va]
    i = bisect.bisect_right(S, va)
    hi = min(S[i] if i < len(S) else BASE + N, va + 0x2000)
    cur = va - BASE; e = hi - BASE
    backs = []; bls = []; n = 0
    while cur < e:
        ins = list(md.disasm(bytes(data[cur:cur + 4]), BASE + cur, count=1))
        if not ins: cur += 2; continue
        x = ins[0]; n += 1
        if x.mnemonic in ("bl",) and x.op_str.startswith("#"): bls.append(int(x.op_str[1:], 0))
        if x.mnemonic.split('.')[0] == "b" and x.op_str.startswith("#"):
            t = int(x.op_str[1:], 0)
            if va <= t < x.address: backs.append((x.address, t))
        cur += x.size
    r = (n, backs, bls, hi)
    CACHE[va] = r
    return r

# RTOS SVC wrappers: push{...}; ...; ldr ip,[pc,#x]; svc #0
def is_svc_wrapper(va):
    n, backs, bls, hi = prof(va)
    cur = va - BASE; e = min(hi - BASE, cur + 0x80)
    for x in md.disasm(bytes(data[cur:e]), va):
        if x.mnemonic == "svc": return True
    return False

svc = set()
for va in S:
    if 0x2c640000 <= va < 0x2c650000 and is_svc_wrapper(va): svc.add(va)
print("CMSIS-RTOS2 SVC wrappers found in 0x2c640000-0x2c650000: %d" % len(svc))

LO, HI = 0x2c4a0000, 0x2c675000
out = []
for d, cs in callers.items():
    if len(cs) != 1: continue
    if not (LO <= d < HI): continue
    c = next(iter(cs))
    if c is None: continue
    nc, backs, bls, hic = prof(c)
    if not backs: continue
    nd, _, bld, hid = prof(d)
    if nd < 60: continue                      # lv_timer_handler is large
    blocking = sorted(set(bls) & svc)
    if not blocking: continue
    out.append((d, nd, c, nc, sorted(set(bls)), blocking))
print("\n%d large indeg-1 callees whose sole caller loops AND blocks on an SVC wrapper:\n" % len(out))
for d, nd, c, nc, bls, blocking in sorted(out, key=lambda r: r[3]):
    print("CALLEE 0x%08x ins=%-4d   <- CALLER 0x%08x ins=%-4d" % (d, nd, c, nc))
    print("      caller bls: %s" % " ".join(("*0x%08x" if b in svc else "0x%08x") % b for b in bls))
json.dump([[d, nd, c, nc, bls, bk] for d, nd, c, nc, bls, bk in out], open(os.path.join(D, "hub.json"), "w"))
json.dump(sorted(svc), open(os.path.join(D, "svc_wrappers.json"), "w"))
