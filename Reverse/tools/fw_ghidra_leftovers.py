#!/usr/bin/env python3
"""Capstone/struct hunt for fac_cmd table, en_usb, UART, handleSystemMsg.

Does not depend on Ghidra having disassembled the image.
"""
from __future__ import annotations

import struct
from collections import defaultdict
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

BASE = 0x2C000000
ALIAS = 0x3C000000
BIN = Path(__file__).resolve().parents[1] / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
blob = BIN.read_bytes()
N = len(blob)
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
md.detail = True


def u32(o: int) -> int:
    return struct.unpack_from("<I", blob, o)[0]


def find_all(pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def cstr(o: int, lim: int = 80) -> str:
    e = blob.find(b"\x00", o, o + lim)
    if e < 0:
        return ""
    try:
        return blob[o:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


def off_of(va: int) -> int | None:
    for b in (BASE, ALIAS, 0x28000000):
        if b <= va < b + N:
            return va - b
    return None


def is_thumb_fn(v: int) -> bool:
    return (v & 1) == 1 and BASE <= (v & ~1) < BASE + N


def is_rodata_ptr(v: int) -> bool:
    o = off_of(v)
    return o is not None and 0 < o < N - 1


print("=== packed fac_cmd name/help pairs around en_usb ===")
# already known: 0x1605E8 en_usb / 0x1605F0 enable usb
for o in range(0x1605C0, 0x160660):
    s = cstr(o)
    if s:
        print(f"  0x{o:06X}  {s!r}")

print("\n=== pointers to en_usb / enable usb / packed blob start ===")
needles = {
    "en_usb": 0x1605E8,
    "enable usb": 0x1605F0,
    "exit_mmi": 0x1605FC,
    "set_sn": 0x15FDBC,
    "write sn cmd": 0x15FDC4,
    "fac_cmd": 0x15FD98,
    "eshell >": 0x4274E2,
    "handleSystemMsg": 0x194D54,
    "no handler": None,
}
# find "no handler for action"
nh = blob.find(b"no handler for action")
print(f"  'no handler for action' file off = {hex(nh) if nh>=0 else None}")
if nh >= 0:
    needles["no handler"] = nh

for name, fo in needles.items():
    if fo is None:
        continue
    print(f"\n### {name} @ 0x{fo:06X}")
    for base in (BASE, ALIAS, 0x28000000, 0):
        for tb in (base + fo, (base + fo) | 1):
            ps = find_all(struct.pack("<I", tb))
            if ps:
                print(f"    ptr 0x{tb:08X}: {[hex(p) for p in ps[:8]]}")

print("\n=== consecutive 0x3C rodata-ptr runs (possible cmd tables) ===")
runs = []
i = 0
while i + 4 <= N:
    v = u32(i)
    if (v & 0xFF000000) == 0x3C000000 and is_rodata_ptr(v):
        j, cnt, ptrs = i, 0, []
        while j + 4 <= N:
            w = u32(j)
            if (w & 0xFF000000) == 0x3C000000 and is_rodata_ptr(w):
                ptrs.append((j, w))
                cnt += 1
                j += 4
            else:
                break
        if cnt >= 4:
            runs.append((i, cnt, ptrs[:12]))
        i = j
    else:
        i += 4
runs.sort(key=lambda x: -x[1])
for off, cnt, ptrs in runs[:20]:
    sample = []
    for fo, w in ptrs[:6]:
        s = cstr(w - ALIAS, 40)
        sample.append(s if s else hex(w))
    print(f"  file 0x{off:06X}  x{cnt}  sample={sample}")

print("\n=== 12/16-byte records: name_ptr(0x3C) + help_ptr(0x3C) + thumb_fn ===")
hits = []
for i in range(0, N - 12, 4):
    a, b, c = u32(i), u32(i + 4), u32(i + 8)
    if (a & 0xFF000000) != 0x3C000000:
        continue
    if not is_rodata_ptr(a):
        continue
    name = cstr(a - ALIAS, 32)
    if not name or not name.isascii() or not (name.replace("_", "").isalnum()):
        continue
    if len(name) < 3:
        continue
    help_s = ""
    handler = 0
    stride = 0
    if (b & 0xFF000000) == 0x3C000000 and is_rodata_ptr(b) and is_thumb_fn(c):
        help_s = cstr(b - ALIAS, 48)
        handler = c
        stride = 12
    elif is_thumb_fn(b):
        handler = b
        stride = 8
    else:
        d = u32(i + 12) if i + 12 < N else 0
        if (b & 0xFF000000) == 0x3C000000 and is_thumb_fn(d):
            help_s = cstr(b - ALIAS, 48)
            handler = d
            stride = 16
        else:
            continue
    hits.append((i, stride, name, help_s, handler))

# cluster hits
print(f"  total candidate records: {len(hits)}")
# show ones matching factory names
want = {"en_usb", "set_sn", "get_sn", "check_tp", "goto_sleep", "mmi_help", "sys_reset"}
for rec in hits:
    if rec[2] in want:
        print(f"  HIT {rec}")

# print neighborhood clusters (runs of records within 0x200)
if hits:
    print("\n  first 30 records:")
    for rec in hits[:30]:
        print(f"    0x{rec[0]:06X} stride={rec[1]:2} {rec[2]!r:24} help={rec[3]!r:32} h=0x{rec[4]:08X}")
