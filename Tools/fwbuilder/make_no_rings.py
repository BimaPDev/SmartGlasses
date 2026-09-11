#!/usr/bin/env python3
"""Remove the circular ring around every standby widget. One byte.

  python3 make_no_rings.py <in.bin> <out.bin> [--width-too] [--dry-run]

WHAT DRAWS THE RING (1.0.11.53, found by disassembly, not inference)

The standby tiles are built by a generic borderless container factory at 0x6120c8
(border_width=0, radius=0), and then RE-STYLED per widget at 0x61b7cc:

    0x61b7dc  bl 0x64a628   set_style_radius(obj, height/2, 0)
    0x61b7e8  bl 0x64a544   set_style_border_color(obj, 0xFF00FF00, 0)
    0x61b7f2  bl 0x64a55c   set_style_border_width(obj, 2, 0)
    0x61b7fc  bl 0x64a550   set_style_border_opa(obj, 92, 0)

So: a 2px border at opacity 92, with radius computed as height/2.

This also explains why searching for LV_RADIUS_CIRCLE (0x7FFF) found nothing anywhere
in .text — the firmware never uses the sentinel, it computes the radius arithmetically.
That search was not broken; its premise was.

THE PATCH

border_opa 92 -> 0 at file 0x61b7f8 (`movs r1,#92` -> `movs r1,#0`, 5c 21 -> 00 21).

Opacity rather than width, deliberately: LVGL reserves border width when computing a
container's content area, so zeroing the WIDTH can reflow the contents. Zeroing the
opacity leaves every coordinate identical and simply stops the border being drawn.
--width-too also zeroes the width at 0x61b7ee, for comparison; not the default.

BLAST RADIUS — measured, not assumed

    0x61b784 (the styling function)  <- 1 caller
    0x61b950 (alloc + dispatch)      <- 6 callers, all inside the row builder
    0x61ca1c (row builder)           <- 13 callers

Nothing outside the standby row reaches it, so no other UI element changes.

RISK CLASS: same as the big-clock font patch, which flashed and booted cleanly. No
instruction is added or removed; one immediate operand changes value. The instruction
stream keeps its exact length and layout, so nothing downstream shifts.
"""
import argparse
import struct
import sys
from pathlib import Path

BORDER_OPA_IMM   = 0x61B7F8   # movs r1,#92   -> the ring's opacity
BORDER_WIDTH_IMM = 0x61B7EE   # movs r1,#2    -> the ring's thickness
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'


def movs_imm(d, off):
    """Decode `MOVS Rd,#imm8`; returns (rd, imm) or None if it isn't one."""
    w = struct.unpack_from('<H', d, off)[0]
    if (w & 0xF800) != 0x2000:
        return None
    return (w >> 8) & 7, w & 0xFF


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--width-too', action='store_true',
                    help='also zero border_width (can reflow contents; not default)')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())

    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR — every offset here is build-specific')

    opa = movs_imm(d, BORDER_OPA_IMM)
    wid = movs_imm(d, BORDER_WIDTH_IMM)
    if not opa or not wid:
        sys.exit('refusing: expected MOVS instructions are not there — wrong image?')
    if opa != (1, 92) or wid != (1, 2):
        sys.exit(f'refusing: expected r1=#92 and r1=#2, found r1=#{opa[1]} and r1=#{wid[1]} '
                 '— already patched, or wrong image')

    print(f'  border_opa    0x{BORDER_OPA_IMM:06x}  movs r1,#{opa[1]}  ->  movs r1,#0')
    if a.width_too:
        print(f'  border_width  0x{BORDER_WIDTH_IMM:06x}  movs r1,#{wid[1]}  ->  movs r1,#0')
    else:
        print(f'  border_width  0x{BORDER_WIDTH_IMM:06x}  movs r1,#{wid[1]}  (left alone — '
              'zeroing it can reflow contents)')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    struct.pack_into('<H', d, BORDER_OPA_IMM, 0x2000 | (1 << 8) | 0)
    if a.width_too:
        struct.pack_into('<H', d, BORDER_WIDTH_IMM, 0x2000 | (1 << 8) | 0)

    out = a.outfile or a.infile.replace('.bin', '_norings.bin')
    Path(out).write_bytes(bytes(d))
    n = 2 if a.width_too else 1
    print(f'\n  wrote  {out}  ({len(d):,} bytes, unchanged length, {n} instruction(s) altered)')


if __name__ == '__main__':
    main()
