#!/usr/bin/env python3
"""Enumerate every never-returning looping function in the image, including
ones that are not referenced by any BL or literal pointer (thread bodies in
this PIC build are referenced neither way - see FINDINGS)."""
import json, os, struct, sys, bisect
sys.path.insert(0, os.path.dirname(__file__))
from walk import walk, S, SS, BASE, data, N, D
import collections

E = json.load(open(os.path.join(D, "edges.json")))
indeg = collections.Counter()
for s, d in E["bl"] + E["bw"]: indeg[d] += 1

covered = bytearray(N)
prof = {}
for va in S:
    r = walk(va)
    prof[va] = r
    covered[r["lo"] - BASE:r["hi"] - BASE] = b"\x01" * (r["hi"] - r["lo"])
print("covered %d / %d bytes by walking %d known starts" % (sum(covered), N, len(S)))

# gap-scan for unreferenced function prologues
extra = []
o = 0
while o < N - 4:
    if covered[o]:
        o += 1; continue
    hw = struct.unpack_from("<H", data, o)[0]
    if (hw & 0xFF00) == 0xB500 or hw == 0xE92D:
        va = BASE + o
        r = walk(va)
        if r["ins"] >= 8 and r["hi"] - r["lo"] > 0x20:
            extra.append(va); prof[va] = r
            covered[r["lo"] - BASE:r["hi"] - BASE] = b"\x01" * (r["hi"] - r["lo"])
            o = r["hi"] - BASE
            continue
    o += 2
print("gap-scan found %d additional function bodies" % len(extra))

noret = []
for va, r in prof.items():
    if r["returns"] == 0 and r["indirect"] == 0 and r["backs"] and r["bls"]:
        noret.append(va)
noret.sort()
print("%d never-returning looping functions\n" % len(noret))
json.dump({"noret": noret, "extra_starts": extra,
           "prof": {("0x%08x" % k): {"lo": v["lo"], "hi": v["hi"], "ins": v["ins"],
                                     "returns": v["returns"], "indirect": v["indirect"],
                                     "bls": sorted(set(d for _, d in v["bls"])),
                                     "nbacks": len(v["backs"])}
                    for k, v in prof.items()}},
          open(os.path.join(D, "noret.json"), "w"))
for va in noret:
    r = prof[va]
    print("0x%08x..0x%08x ins=%-4d indeg=%-3d bls=%s" %
          (va, r["hi"], r["ins"], indeg[va],
           " ".join("0x%08x" % d for d in sorted(set(d for _, d in r["bls"])))))
