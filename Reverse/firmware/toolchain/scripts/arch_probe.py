#!/usr/bin/env python3
"""Profile the firmware instruction mix to recover the compiler target flags."""
import sys, collections
from capstone import *

path = sys.argv[1]
start = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x1000
length = int(sys.argv[3], 16) if len(sys.argv) > 3 else 0x300000

data = open(path, "rb").read()
blob = data[start:start + length]

md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
md.detail = False
md.skipdata = True

cats = collections.Counter()
mnem = collections.Counter()
ok = 0
for i in md.disasm(blob, start):
    ok += 1
    m = i.mnemonic
    mnem[m] += 1
    if m.startswith("vldr") or m.startswith("vstr") or m.startswith("vmov") or \
       m.startswith("vadd") or m.startswith("vmul") or m.startswith("vsub") or \
       m.startswith("vdiv") or m.startswith("vcvt") or m.startswith("vcmp") or \
       m.startswith("vsqrt") or m.startswith("vneg") or m.startswith("vabs"):
        cats["vfp_float"] += 1
        if "q" in i.op_str.lower().split(",")[0]:
            cats["mve_qreg"] += 1
    if m.startswith("vctp") or m.startswith("vpst") or m.startswith("dlstp") or \
       m.startswith("letp") or m.startswith("wlstp"):
        cats["mve_helium"] += 1
    if m in ("wls", "dls", "le"):
        cats["v81m_lowoverhead_loop"] += 1
    if m.startswith("it"):
        cats["it_block"] += 1
    if m in ("cbz", "cbnz"):
        cats["cbz"] += 1
    if m in ("bl", "blx"):
        cats["call"] += 1
    if m == "push" or m == "pop":
        cats["push_pop"] += 1
    if m.startswith("ldrd") or m.startswith("strd"):
        cats["ldrd"] += 1
    if m in ("sdiv", "udiv"):
        cats["hwdiv"] += 1
    if m.startswith("tbb") or m.startswith("tbh"):
        cats["tablebranch"] += 1
    if m.startswith("mrs") or m.startswith("msr") or m in ("cps", "isb", "dsb", "dmb"):
        cats["sysreg"] += 1
    if m.startswith("sg") or m.startswith("bxns") or m.startswith("blxns"):
        cats["cmse_tz"] += 1

print(f"file={path} window=0x{start:x}..0x{start+length:x}  decoded={ok}")
print("\n-- target-relevant categories --")
for k, v in sorted(cats.items(), key=lambda x: -x[1]):
    print(f"  {k:26s} {v}")
print("\n-- top 25 mnemonics --")
for k, v in mnem.most_common(25):
    print(f"  {k:12s} {v}")
