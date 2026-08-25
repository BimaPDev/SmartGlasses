#!/usr/bin/env python3
"""en_usb body, UART iomux, handleSystemMsg packed table."""
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


def show(va: int, n: int = 90, label: str = ""):
    print(f"\n=== {label} @ 0x{va:08X} ===")
    o = va - BASE
    if o < 0 or o >= N:
        print("  out of image")
        return
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
        print(f"  0x{ins.address:08X}  {ins.mnemonic:8} {ins.op_str}{extra}")
        c += 1
        if ins.mnemonic in ("pop", "pop.w") and "pc" in ins.op_str:
            break
        if ins.mnemonic == "bx" and "lr" in ins.op_str:
            break
        if c >= n:
            break


print("=== hex around en_usb packed strings ===")
for o in range(0x1605D0, 0x160630, 16):
    hx = blob[o : o + 16].hex()
    asc = "".join(chr(b) if 32 <= b < 127 else "." for b in blob[o : o + 16])
    print(f"  {o:06X}  {hx}  {asc}")

print("\n=== TRACE file-path literals used by fac_cmd ===")
for fo in (0x15F6F4, 0x16021C, 0x160720):
    # back up to start of string
    s = fo
    while s > 0 and blob[s - 1] != 0:
        s -= 1
    print(f"  pointed 0x{fo:06X}  strstart 0x{s:06X}  {cstr(s, 80)!r}")

print("\n=== search USB-related ASCII ===")
keys = [
    b"hal_usb",
    b"usbphy",
    b"usb_open",
    b"USB_ID",
    b"analog_usb",
    b"usb_en",
    b"enable usb",
    b"USB_DETECT",
    b"usb_pin",
    b"hal_cmu_usb",
    b"USBPHY",
    b"usb_serial",
    b"gadget",
    b"CDC_ACM",
    b"en_usb",
]
for k in keys:
    hits = find_all(k)
    print(f"  {k!r:24} n={len(hits)}  {[hex(h) for h in hits[:8]]}")
    for h in hits[:3]:
        # show surrounding string
        s = h
        while s > 0 and blob[s - 1] != 0 and h - s < 40:
            s -= 1
        print(f"      {cstr(s, 70)!r}")

show(0x2C606A28, 80, "tail-call from en_usb 0x2C606A28")
show(0x2C5AAB48, 40, "en_usb stub")

print("\n=== handleSystemMsg string + packed actions ===")
h = blob.find(b"handleSystemMsg")
print(f"  handleSystemMsg @ {hex(h)}")
# original write-up: 0x194bcc-0x194f58
for start, end in [(0x194B00, 0x195000), (h - 0x200 if h >= 0 else 0, (h or 0) + 0x400)]:
    print(f"\n  -- dump strings {hex(start)}-{hex(end)} --")
    cur = start
    while cur < end:
        e = blob.find(b"\x00", cur)
        if e < 0:
            break
        s = blob[cur:e]
        if s and all(32 <= b < 127 for b in s) and len(s) >= 3:
            print(f"    0x{cur:06X}  {s.decode('ascii')!r}")
        cur = e + 1

print("\n=== iomux / uart related strings ===")
pats = [
    b"hal_iomux_set_uart",
    b"iomux_set_uart",
    b"HAL_IOMUX_FUNC_UART",
    b"HAL_UART_ID_",
    b"uart0",
    b"uart1",
    b"UART0",
    b"UART1",
    b"UART2",
    b"eshell uart",
    b"eshell_uart",
    b"console uart",
    b"TRACE_BAUD",
    b"hal_trace_open",
    b"hal_uart_open",
    b"debug uart",
    b"LOG_UART",
    b"trace uart",
]
for k in pats:
    hits = find_all(k)
    if hits:
        print(f"  {k!r} n={len(hits)}")
        for h in hits[:6]:
            s = h
            while s > 0 and blob[s - 1] != 0 and h - s < 30:
                s -= 1
            print(f"      @0x{h:06X}  {cstr(s, 70)!r}")

print("\n=== code near iomux literals 0x524B00 (likely hal_iomux_best1600.o) ===")
# find functions that load 0x3C1458B0 (path) or 0x3C1458F0
for t in (0x3C1458B0, 0x3C1458F0, 0x3C0144E4, 0x3C0144C8):
    ps = find_all(struct.pack("<I", t))
    print(f"  ptr {hex(t)} -> {[hex(p) for p in ps]}")

# dump strings around 0x1458B0
print("\n  strings near 0x145880:")
cur = 0x145880
while cur < 0x145C00:
    e = blob.find(b"\x00", cur)
    s = blob[cur:e]
    if s and all(32 <= b < 127 or b == 10 for b in s) and 4 <= len(s) < 80:
        print(f"    0x{cur:06X}  {s.decode('ascii')!r}")
    cur = e + 1
