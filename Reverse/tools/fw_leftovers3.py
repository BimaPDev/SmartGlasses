#!/usr/bin/env python3
"""Finish en_usb callee, SystemMsg TRACE ptrs, UART/eshell pinmux."""
from __future__ import annotations

import re
import struct
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


def cstr(fo: int, lim: int = 80) -> str:
    if not (0 <= fo < N):
        return ""
    e = blob.find(b"\x00", fo, min(N, fo + lim))
    if e < 0:
        return ""
    try:
        return blob[fo:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


def find_all(pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def show(va: int, n: int = 100, label: str = ""):
    print(f"\n=== {label} @ 0x{va:08X} ===")
    o = va - BASE
    c = 0
    for ins in md.disasm(blob[o : o + n * 3], va):
        extra = ""
        if ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
            m = re.search(r"#(-?0x[0-9a-f]+|-?\d+)", ins.op_str)
            if m:
                lit = ((ins.address + 4) & ~3) + int(m.group(1), 16)
                lo = lit - BASE
                if 0 <= lo < N - 4:
                    val = u32(lo)
                    extra = f"  ; =0x{val:08X}"
                    s = cstr(val - ALIAS) or cstr(val - BASE)
                    if s:
                        extra += f" {s!r}"
                    elif 0x20000000 <= val <= 0x20FFFFFF:
                        extra += " [SRAM]"
                    elif 0x40000000 <= val <= 0x5FFFFFFF:
                        extra += " [MMIO?]"
        print(f"  0x{ins.address:08X}  {ins.mnemonic:8} {ins.op_str}{extra}")
        c += 1
        if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str and c > 5:
            break
        if ins.mnemonic == "bx" and "lr" in ins.op_str and c > 3:
            break
        if c >= n:
            break


print("=== TRACE / miss-path pointers for handleSystemMsg ===")
needles = {
    "handleSystemMsg": 0x194D54,
    "action is %s": 0x194E18,
    "no handler": 0x194F68,
    "get_device_info": 0x194E54,
    "handleScreenShot": 0x194FA8,
    "get_glass_screenshot": 0x194580,
    "eshell >": 0x4274E2,
    "eshell_platform.c": 0x4275E7,
    "app_eshell": 0x427E5F,
    "debug_i2c": 0x427824,
    "hal_trace.c": 0x145BC8,
    "hal_uart.c": 0x129E18,
    "Invalid UART ID": 0x129E44,
    "Invalid UART ID 2": 0x14B568,
    "hal_uart_open": 0x129E36,
}
for name, fo in needles.items():
    print(f"\n## {name} file 0x{fo:06X}")
    for base in (BASE, ALIAS):
        ps = find_all(struct.pack("<I", base + fo))
        if ps:
            print(f"  {hex(base+fo)} -> {[hex(p) for p in ps[:12]]}")

print("\n=== USB / vbus / cmu strings ===")
for k in [
    b"vbus usb_enable",
    b"usb_enable",
    b"USB",
    b"Type-C",
    b"typec",
    b"type-c",
    b"hal_cmu",
    b"cmu_usb",
    b"usbclk",
    b"USB_PIN",
    b"PINMUX_USB",
    b"iomux_set_analog",
    b"analog_i2c",
    b"single wire",
    b"SWD",
    b"hal_iomux",
]:
    hits = find_all(k)
    if not hits:
        continue
    print(f"  {k!r} n={len(hits)}")
    shown = 0
    for h in hits:
        s0 = h
        while s0 > 0 and blob[s0 - 1] != 0 and h - s0 < 24:
            s0 -= 1
        t = cstr(s0, 70)
        if t and shown < 8:
            print(f"      0x{h:06X}  {t!r}")
            shown += 1

show(0x2C606AA0, 50, "en_usb shared helper bit0-set path")
show(0x2C607214, 40, "getter 0x2C607214")

print("\n=== who else tail-calls 0x2C606A28? (bl/b.w encodings) ===")
# Thumb BL: F000 | imm, F800 | imm  — search for the specific target is hard.
# Search literal 0x2C606A29 (thumb) and also scan bl from fac_cmd band.
target = 0x2C606A28
# naive: disassemble fac_cmd band and record branches to target
hits = []
o = 0x5AA000
code = blob[o : 0x5AB800]
for ins in md.disasm(code, BASE + o):
    if ins.mnemonic in ("bl", "b.w", "b", "blx") and f"{target:x}" in ins.op_str.replace("0x", ""):
        hits.append((ins.address, ins.mnemonic, ins.op_str))
print("  fac_cmd-band calls:", [hex(a) for a, _, _ in hits])

print("\n=== iomux function-name strings ===")
# already saw hal_iomux_set_sens_i2c3; hunt all hal_iomux_set_
idx = 0
while True:
    p = blob.find(b"hal_iomux_set_", idx)
    if p < 0:
        break
    print(f"  0x{p:06X}  {cstr(p, 60)!r}")
    idx = p + 1

print("\n=== eshell / trace open nearby strings 0x427400-0x428200 ===")
cur = 0x427400
while cur < 0x428400:
    e = blob.find(b"\x00", cur)
    s = blob[cur:e]
    if s and all(32 <= b < 127 or b == 10 for b in s) and 3 <= len(s) < 80:
        t = s.decode("ascii")
        if any(k in t.lower() for k in ("uart", "iomux", "eshell", "trace", "pin", "baud", "console", "debug", "i2c", "open")):
            print(f"  0x{cur:06X}  {t!r}")
    cur = e + 1

print("\n=== 0x3C42xxxx ptrs (eshell .rodata) in code ===")
n = 0
for o in range(0x420000, 0x670000, 4):
    v = u32(o)
    if 0x3C427000 <= v < 0x3C429000:
        print(f"  lit@0x{o:06X} = 0x{v:08X}  {cstr(v-ALIAS)!r}")
        n += 1
        if n > 40:
            print("  ...")
            break
print(f"  count shown {n}")
