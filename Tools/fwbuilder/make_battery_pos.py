#!/usr/bin/env python3
"""Move the battery icon inside the clock tile.

  python3 make_battery_pos.py <in.bin> <out.bin> [--align CENTER] [--x 0] [--y -9] [--dry-run]

WHY THIS AND NOT "MOVE THE BATTERY WIDGET"

The battery is NOT a standby widget. It is a child object drawn inside the clock tile by
customTimeAndBatteryWidget (0x61b110), so it can only be placed relative to that tile —
it cannot go to a screen corner on its own. That distinction is the whole answer to
"why can't mine look like the Halliday": those are five independently placed elements;
this firmware has one row of tiles, and the battery lives inside one of them.

Within the tile, though, all three arguments are immediates:

    0x61b188  6f f0 08 03   mvn  r3, #8    y = ~8 = -9     (MVN.W, 4 bytes)
    0x61b18c  00 22         movs r2, #0    x = 0           (MOVS,  2 bytes)
    0x61b18e  05 21         movs r1, #5    align = BOTTOM_MID
    0x61b192                bl   lv_obj_align

A 190px tile leaves plenty of room, so this is worth having.

ENCODING NOTE — the one place this is not a pure operand edit. `y` is MVN.W, which can
only express NEGATIVE values (y = -(imm+1)). A positive y needs MOV.W, which is ALSO
4 bytes (4f f0 NN 03), so the instruction width and registers are unchanged and nothing
downstream shifts. That is the same safety property every shipped patch has relied on.

The battery ICON size (12x24 at 0x61b1a0/0x61b1a2) is deliberately NOT touched here.
"""
import argparse
import struct
import sys
from pathlib import Path

Y_IMM     = 0x61B188     # MVN.W r3,#8   -> y = -9
X_IMM     = 0x61B18C     # MOVS r2,#0
ALIGN_IMM = 0x61B18E     # MOVS r1,#5    -> LV_ALIGN_BOTTOM_MID
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'

ALIGN = {'TOP_LEFT':1,'TOP_MID':2,'TOP_RIGHT':3,'BOTTOM_LEFT':4,'BOTTOM_MID':5,
         'BOTTOM_RIGHT':6,'LEFT_MID':7,'RIGHT_MID':8,'CENTER':9}
STOCK_Y, STOCK_X, STOCK_ALIGN = -9, 0, 5


def movs(d, off):
    w = struct.unpack_from('<H', d, off)[0]
    return ((w >> 8) & 7, w & 0xFF) if (w & 0xF800) == 0x2000 else None


def read_y(d):
    """Decode the 4-byte y instruction; returns (value, kind)."""
    w1, w2 = struct.unpack_from('<HH', d, Y_IMM)
    imm = ((w1 >> 10) & 1) << 11 | ((w2 >> 12) & 7) << 8 | (w2 & 0xFF)
    # ThumbExpandImm with rotate 0 for small values, which is all we emit or expect
    if (w1 & 0xFBEF) == 0xF06F:
        return -(imm + 1), 'MVN.W'
    if (w1 & 0xFBEF) == 0xF04F:
        return imm, 'MOV.W'
    return None, '?'


def write_y(d, val):
    """Emit MVN.W for negative, MOV.W for >= 0. Both are exactly 4 bytes."""
    if val < 0:
        imm = -val - 1
        if not 0 <= imm <= 255:
            sys.exit(f'refusing: y={val} is out of range for a 4-byte MVN.W')
        struct.pack_into('<HH', d, Y_IMM, 0xF06F, 0x0300 | imm)
    else:
        if not 0 <= val <= 255:
            sys.exit(f'refusing: y={val} is out of range for a 4-byte MOV.W')
        struct.pack_into('<HH', d, Y_IMM, 0xF04F, 0x0300 | val)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--align', default='BOTTOM_MID', choices=sorted(ALIGN))
    ap.add_argument('--x', type=int, default=0)
    ap.add_argument('--y', type=int, default=-9)
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR — every offset here is build-specific')

    if not 0 <= a.x <= 255:
        sys.exit(f'refusing: x={a.x} must be 0..255 (MOVS imm8; negative x needs a wider encoding)')

    x, al = movs(d, X_IMM), movs(d, ALIGN_IMM)
    y, kind = read_y(d)
    if not x or not al or y is None:
        sys.exit('refusing: the expected instructions are not there — wrong image?')
    if (y, x[1], al[1]) != (STOCK_Y, STOCK_X, STOCK_ALIGN):
        sys.exit(f'refusing: found y={y} x={x[1]} align={al[1]}, expected the stock '
                 f'{STOCK_Y}/{STOCK_X}/{STOCK_ALIGN} — already patched, or wrong image')
    if al[0] != 1 or x[0] != 2:
        sys.exit(f'refusing: registers are r{al[0]}/r{x[0]}, expected r1/r2')

    rev = {v: k for k, v in ALIGN.items()}
    print(f'  align  0x{ALIGN_IMM:06x}  {rev[al[1]]:12} -> {a.align}')
    print(f'  x      0x{X_IMM:06x}  {x[1]:12} -> {a.x}')
    print(f'  y      0x{Y_IMM:06x}  {y:<12} -> {a.y}   ({kind} -> '
          f'{"MVN.W" if a.y < 0 else "MOV.W"}, both 4 bytes)')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    struct.pack_into('<H', d, ALIGN_IMM, 0x2000 | (1 << 8) | ALIGN[a.align])
    struct.pack_into('<H', d, X_IMM, 0x2000 | (2 << 8) | a.x)
    write_y(d, a.y)

    out = a.outfile or a.infile.replace('.bin', '_battpos.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, 3 instructions altered)')


if __name__ == '__main__':
    main()
