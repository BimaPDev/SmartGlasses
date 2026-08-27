#!/usr/bin/env python3
import sys, os, struct
from capstone import *
BASE = 0x2C000000
ROOT = "/Users/bimap/Documents/Coding/SmartGlasses"
data = open(os.path.join(ROOT, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"), "rb").read()
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN | CS_MODE_MCLASS); md.detail = True
va = int(sys.argv[1], 0); n = int(sys.argv[2], 0) if len(sys.argv) > 2 else 0x100
cur = va - BASE; e = cur + n
while cur < e:
    ins = list(md.disasm(bytes(data[cur:cur+4]), BASE+cur, count=1))
    if not ins:
        print("0x%08x  %-12s  .hword 0x%04x" % (BASE+cur, data[cur:cur+2].hex(), struct.unpack_from('<H',data,cur)[0])); cur += 2; continue
    i = ins[0]
    print("0x%08x  %-12s  %-8s %s" % (i.address, data[cur:cur+i.size].hex(), i.mnemonic, i.op_str))
    cur += i.size
