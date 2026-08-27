#!/usr/bin/env python3
"""Build a function index: starts = BL/B.W targets UNION thumb code pointers.
Then group every BL site by its containing function."""
import json, os, struct, bisect, collections
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
D = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm")
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
N = len(data)
E = json.load(open(os.path.join(D, "edges.json")))

blt = set(d for _, d in E["bl"]); bwt = set(d for _, d in E["bw"])
ptr = collections.defaultdict(list)
w = struct.unpack("<%dI" % (N // 4), data[:(N // 4) * 4])
for i, v in enumerate(w):
    if v & 1:
        t = v - 1
        if BASE <= t < BASE + N and not (t & 1):
            ptr[t].append(BASE + i * 4)

starts = sorted(blt | ptr.keys())
json.dump({"starts": starts,
           "ptr": {("0x%08x" % k): v for k, v in ptr.items()}},
          open(os.path.join(D, "fnindex.json"), "w"))
print("starts=%d  bl_targets=%d  code_ptr_targets=%d  ptr_only=%d" %
      (len(starts), len(blt), len(ptr), len(set(ptr) - blt)))
