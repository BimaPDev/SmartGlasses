#!/usr/bin/env python3
"""Resize the standby tile. One byte.

  python3 make_big_tile.py <in.bin> <out.bin> [--size 190] [--dry-run]

WHY THIS EXISTS

The standby tile is a hard 72x72, and that is what clipped the 48px clock to "3:0".
`StandByWidget`'s base constructor at 0x61B784:

    0x61b79e  movs   r2, #0x48        ; 72
    0x61b7a6  mov    r1, r2           ; width := height, so tiles are square
    0x61b7ac  strh.w r2, [r4, #0x40]  ; cached; the ring radius reads this back
    0x61b7c8  bl     lv_obj_set_size  ; overrides LV_SIZE_CONTENT

So the label asks for LV_SIZE_CONTENT and is then overruled by a fixed box.

THE PATCH: the `movs r2,#N` operand at 0x61b79e. 72 -> 190 is `48 22` -> `be 22`.

CONSTRAINTS, all checked rather than assumed:
  - MOVS imm8, so 8..255. Above 255 needs a wider encoding, i.e. CODE.
  - w and h share r2, so tiles stay SQUARE. Non-square needs CODE.
  - The row must still fit 640 px: n*size + (n-1)*10 <= 620.
  - 0x61b79e is the ONLY `movs rX,#72` in the whole row-builder region
    (0x61b700-0x61d500), so nothing else hardcodes the tile stride and the flex row
    derives positions from real widget sizes. Verified, not assumed.

RISK CLASS: identical to the font and no-rings patches, both of which flashed and
booted cleanly. One immediate operand changes value; no instruction is added, removed
or resized, so nothing downstream shifts.
"""
import argparse
import struct
import sys
from pathlib import Path

TILE_IMM = 0x61B79E
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
GAP = 10
PANEL_W = 640


def movs_imm(d, off):
    w = struct.unpack_from('<H', d, off)[0]
    if (w & 0xF800) != 0x2000:
        return None
    return (w >> 8) & 7, w & 0xFF


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--size', type=int, default=190)
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    if not 8 <= a.size <= 255:
        sys.exit(f'refusing: {a.size} is not an 8-bit MOVS operand (8..255). '
                 'A larger tile needs a wider encoding, which is CODE.')

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR — every offset here is build-specific')

    cur = movs_imm(d, TILE_IMM)
    if cur is None:
        sys.exit(f'refusing: 0x{TILE_IMM:06x} is not a MOVS — wrong image?')
    if cur[0] != 2:
        sys.exit(f'refusing: 0x{TILE_IMM:06x} targets r{cur[0]}, expected r2')
    if cur[1] != 72 and cur[1] != a.size:
        sys.exit(f'refusing: expected the stock 72, found {cur[1]} — already patched '
                 'to something else, or wrong image')

    for n in (1, 2, 3, 4):
        total = n * a.size + (n - 1) * GAP
        flag = '' if total <= PANEL_W - 20 else '   <-- OVERFLOWS'
        print(f'  {n} widget(s): row = {total:4d} px of {PANEL_W}{flag}')
    print(f'\n  tile  0x{TILE_IMM:06x}  movs r2,#{cur[1]}  ->  movs r2,#{a.size}')
    print(f'        bytes {d[TILE_IMM:TILE_IMM+2].hex(" ")} -> '
          f'{bytes([a.size, 0x22]).hex(" ")}')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    struct.pack_into('<H', d, TILE_IMM, 0x2000 | (2 << 8) | a.size)
    out = a.outfile or a.infile.replace('.bin', '_bigtile.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, 1 instruction altered)')


if __name__ == '__main__':
    main()
