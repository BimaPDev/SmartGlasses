#!/usr/bin/env python3
"""Centre the standby clock inside its tile. Two bytes.

  python3 make_center_clock.py <in.bin> <out.bin> [--dry-run]

WHY

The standby row's usable height is ~92px and does NOT grow when the tile does. A 190px
tile is centred in that row, so the tile's top sits well above the visible area. The
clock label is aligned TOP_MID at y=+11, which puts it above the row entirely — only its
bottom edge shows.

Derived from a measured screenshot rather than assumed:

    clock bottom = rowCentre - 36          (tile centred; clock 11px below tile top,
                                            glyphs 48px tall)
    visible      = rowH/2 - 36  =  10      <- measured 10px of ink
              ->  rowH = 92 px

The aiBall is CENTRED in its tile and renders fine at the same tile size, which is the
control: the tile is not the problem, the alignment is. The battery element is
BOTTOM_MID and falls the same distance below the row, which is why it is invisible too.

THE PATCH

    0x61b162   02 21  movs r1,#2   LV_ALIGN_TOP_MID  ->  09 21  movs r1,#9  CENTER
    0x61b15e   0b 23  movs r3,#11  y offset          ->  00 23  movs r3,#0

A 48px clock centred in a 92px row clears by 22px, and still fits even if the row is
really 72px — so the fix does not depend on the derived number being exact.

NOT TOUCHED: the battery's BOTTOM_MID alignment at 0x61b18e. Centring the clock puts it
where the battery would also want to be; leave the battery where it is rather than
stacking two elements at one anchor.

RISK CLASS: two operands. No instruction added, removed or resized.
"""
import argparse
import struct
import sys
from pathlib import Path

ALIGN_IMM = 0x61B162     # movs r1,#2  -> LV_ALIGN_TOP_MID
Y_IMM     = 0x61B15E     # movs r3,#11 -> y offset
LV_ALIGN_TOP_MID = 2
LV_ALIGN_CENTER = 9
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'


def movs(d, off):
    w = struct.unpack_from('<H', d, off)[0]
    if (w & 0xF800) != 0x2000:
        return None
    return (w >> 8) & 7, w & 0xFF


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR — every offset here is build-specific')

    al, y = movs(d, ALIGN_IMM), movs(d, Y_IMM)
    if not al or not y:
        sys.exit('refusing: expected MOVS instructions are not there — wrong image?')
    if al != (1, LV_ALIGN_TOP_MID):
        sys.exit(f'refusing: 0x{ALIGN_IMM:06x} is movs r{al[0]},#{al[1]}, '
                 f'expected r1,#{LV_ALIGN_TOP_MID} (TOP_MID) — already patched, or wrong image')
    if y != (3, 11):
        sys.exit(f'refusing: 0x{Y_IMM:06x} is movs r{y[0]},#{y[1]}, expected r3,#11')

    print(f'  align  0x{ALIGN_IMM:06x}  movs r1,#{al[1]} TOP_MID  ->  movs r1,#{LV_ALIGN_CENTER} CENTER')
    print(f'  y      0x{Y_IMM:06x}  movs r3,#{y[1]}          ->  movs r3,#0')
    print(f'  bytes  {d[ALIGN_IMM:ALIGN_IMM+2].hex(" ")} -> 09 21   |   '
          f'{d[Y_IMM:Y_IMM+2].hex(" ")} -> 00 23')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    struct.pack_into('<H', d, ALIGN_IMM, 0x2000 | (1 << 8) | LV_ALIGN_CENTER)
    struct.pack_into('<H', d, Y_IMM, 0x2000 | (3 << 8) | 0)
    out = a.outfile or a.infile.replace('.bin', '_centred.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, 2 instructions altered)')


if __name__ == '__main__':
    main()
