#!/usr/bin/env python3
"""Whole-image Thumb BL / B.W edge extraction for platform_tester.bin.

Position-independent halfword pattern decode (same encoding rules as
hud_map/lvgl_xrefs.json), so it does not depend on correct function
boundaries.  Produces edges.json: {"bl": [[src_va,dst_va],...], "bw": [...]}
"""
import json, struct, sys, os

BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
BIN = os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin")
OUT = os.path.join(ROOT, "Reverse/firmware/analysis/rtos/lvgl/disasm/edges.json")

def main():
    data = open(BIN, "rb").read()
    n = len(data)
    hw = struct.unpack("<%dH" % (n // 2), data[: (n // 2) * 2])
    bl = []
    bw = []
    for i in range(len(hw) - 1):
        h1 = hw[i]
        if (h1 & 0xF800) != 0xF000:
            continue
        h2 = hw[i + 1]
        t = h2 & 0xD000
        if t != 0xD000 and t != 0x9000:
            continue
        S = (h1 >> 10) & 1
        imm10 = h1 & 0x3FF
        J1 = (h2 >> 13) & 1
        J2 = (h2 >> 11) & 1
        imm11 = h2 & 0x7FF
        I1 = (~(J1 ^ S)) & 1
        I2 = (~(J2 ^ S)) & 1
        off = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1)
        if S:
            off -= 1 << 25
        src = i * 2
        dst = src + 4 + off
        if dst < 0 or dst >= n or (dst & 1):
            continue
        (bl if t == 0xD000 else bw).append([BASE + src, BASE + dst])
    json.dump({"base": BASE, "size": n, "bl": bl, "bw": bw}, open(OUT, "w"))
    print("bl=%d bw=%d -> %s" % (len(bl), len(bw), OUT))

if __name__ == "__main__":
    main()
