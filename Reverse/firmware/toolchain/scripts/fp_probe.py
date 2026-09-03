import sys, collections
from capstone import *
path, start, length = sys.argv[1], int(sys.argv[2],16), int(sys.argv[3],16)
blob = open(path,"rb").read()[start:start+length]
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS); md.skipdata = True
fp = collections.Counter(); special = collections.Counter()
for i in md.disasm(blob, start):
    m = i.mnemonic
    if m.startswith("v"): fp[m] += 1
    if m in ("wls","dls","le","letp","dlstp","wlstp","vctp","vpst","bf","bfl","bfx"): special[m]+=1
print("--- ARMv8.1-M / Helium specific (expect 0 if not M55-targeted) ---")
print(dict(special) or "  NONE FOUND")
print("--- FP mnemonics (top 30) ---")
for k,v in fp.most_common(30): print(f"  {k:16s} {v}")
d64 = sum(v for k,v in fp.items() if k.endswith(".f64"))
d32 = sum(v for k,v in fp.items() if k.endswith(".f32"))
print(f"\n  .f64 (double-precision) = {d64}")
print(f"  .f32 (single-precision) = {d32}")
