#!/usr/bin/env python3
"""Reshape the standby widget row. Every knob is one immediate.

  python3 make_flex_layout.py <in.bin> <out.bin> [--flow ROW_WRAP] [--main START]
        [--cross CENTER] [--gap 10] [--pad-left 2] [--pad-right 2]
        [--row-h 80] [--row-w CONTENT] [--dry-run]

WHERE THIS LIVES

The row machinery (0x61ca1c / 0x61b950 / 0x61b784) positions nothing, because it does
not have to: the row's PARENT is an LVGL flex container and flex computes every tile's x
at layout time. That parent is built in StandByView at 0x6167bc (one caller, 0x616fa0),
stored at StandByView+0x94, and handed to StandByWidgetManager at 0x616844 — which keeps
it at manager+0, the `[r7]` createWidget reads.

    0x6167cc  movs r2,#0x50    row height = 80
    0x6167d2  movw r1,#0x27d1  row width  = LV_SIZE_CONTENT
    0x6167ea  movs r1,#4       flex_flow   = ROW_WRAP
    0x6167f0  movs r3,#2       cross/track = CENTER
    0x6167f6  movs r1,#0       main_place  = START
    0x616804  movs r1,#0x0a    pad_column (gap between tiles)
    0x616810  movs r1,#2       pad_left
    0x61681c  movs r1,#2       pad_right

TRAP WORTH REMEMBERING: lv_obj_set_style_layout (0x64a640) has ZERO launcher callers,
which once produced the wrong conclusion "the row is not a flex layout". The launcher
reaches it THROUGH lv_obj_set_flex_flow (0x669b14), which tail-calls it.

WHAT THIS CANNOT DO

It cannot give the clock, battery, weather and date independent x/y. There is no
per-widget coordinate to patch — StandByWidgetManager issues zero align/size/style calls
(positive control: the same scan finds 42 in the adjacent StandByWidget.cpp) — and flex
overwrites child coordinates on every layout pass anyway. A Halliday-style corner layout
is two-axis; this is one flex line. Corners need CODE.

RISK CLASS: operand-only. Every write is an immediate inside an instruction that already
runs, and no instruction changes width.
"""
import argparse
import struct
import sys
from pathlib import Path

ROW_H   = 0x6167CC   # movs r2,#0x50
ROW_W   = 0x6167D2   # movw r1,#0x27d1
FLOW    = 0x6167EA   # movs r1,#4
CROSS   = 0x6167F0   # movs r3,#2
MAIN    = 0x6167F6   # movs r1,#0
GAP     = 0x616804   # movs r1,#0x0a
PAD_L   = 0x616810   # movs r1,#2
PAD_R   = 0x61681C   # movs r1,#2
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'

FLOW_V  = {'ROW':0,'COLUMN':1,'ROW_WRAP':4,'COLUMN_WRAP':5,
           'ROW_REVERSE':8,'COLUMN_REVERSE':9}
ALIGN_V = {'START':0,'END':1,'CENTER':2,'SPACE_EVENLY':3,'SPACE_AROUND':4,'SPACE_BETWEEN':5}
LV_SIZE_CONTENT = 0x27D1
STOCK = {ROW_H:0x50, FLOW:4, CROSS:2, MAIN:0, GAP:0x0a, PAD_L:2, PAD_R:2}


def movs(d, off):
    w = struct.unpack_from('<H', d, off)[0]
    return ((w >> 8) & 7, w & 0xFF) if (w & 0xF800) == 0x2000 else None


def movw_imm(d, off):
    w1, w2 = struct.unpack_from('<HH', d, off)
    if (w1 & 0xFBF0) != 0xF240:
        return None, None
    i, imm4, imm3, imm8 = (w1 >> 10) & 1, w1 & 0xF, (w2 >> 12) & 7, w2 & 0xFF
    return (imm4 << 12) | (i << 11) | (imm3 << 8) | imm8, (w2 >> 8) & 0xF


def write_movw(d, off, val, rd):
    if not 0 <= val <= 0xFFFF:
        sys.exit(f'refusing: {val} does not fit a MOVW immediate')
    i, imm4 = (val >> 11) & 1, (val >> 12) & 0xF
    imm3, imm8 = (val >> 8) & 7, val & 0xFF
    struct.pack_into('<HH', d, off, 0xF240 | (i << 10) | imm4, (imm3 << 12) | (rd << 8) | imm8)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile'); ap.add_argument('outfile', nargs='?')
    ap.add_argument('--flow', default='ROW_WRAP', choices=sorted(FLOW_V))
    ap.add_argument('--main', default='START', choices=sorted(ALIGN_V))
    ap.add_argument('--cross', default='CENTER', choices=sorted(ALIGN_V))
    ap.add_argument('--gap', type=int, default=10)
    ap.add_argument('--pad-left', type=int, default=2)
    ap.add_argument('--pad-right', type=int, default=2)
    ap.add_argument('--row-h', type=int, default=80)
    ap.add_argument('--row-w', default='CONTENT',
                    help="'CONTENT' for LV_SIZE_CONTENT, or a pixel width (e.g. 640)")
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR — every offset here is build-specific')

    # refuse unless the image is either stock here, or already carries our own values
    for off, want in STOCK.items():
        m = movs(d, off)
        if not m:
            sys.exit(f'refusing: 0x{off:06x} is not a MOVS — wrong image?')
    rw, rw_rd = movw_imm(d, ROW_W)
    if rw is None or rw_rd != 1:
        sys.exit(f'refusing: 0x{ROW_W:06x} is not `movw r1,#imm` — wrong image?')

    for name, v in (('gap', a.gap), ('pad-left', a.pad_left), ('pad-right', a.pad_right),
                    ('row-h', a.row_h)):
        if not 0 <= v <= 255:
            sys.exit(f'refusing: --{name} {v} must be 0..255 (MOVS imm8)')

    row_w = LV_SIZE_CONTENT if a.row_w.upper() == 'CONTENT' else int(a.row_w)
    if row_w != LV_SIZE_CONTENT and not 1 <= row_w <= 640:
        sys.exit(f'refusing: --row-w {row_w} must be 1..640 (the panel) or CONTENT')

    # geometry sanity: a COLUMN flow needs vertical room for the tiles
    if FLOW_V[a.flow] in (1, 5, 9):
        need = 4 * 72 + 3 * a.gap
        if a.row_h < need:
            print(f'  NOTE: column flow with 4 tiles of 72px needs ~{need}px of row '
                  f'height; --row-h is {a.row_h}. Tiles will be clipped or wrapped.')

    rev = {v: k for k, v in FLOW_V.items()}
    reva = {v: k for k, v in ALIGN_V.items()}
    print(f"  flow        0x{FLOW:06x}  {rev.get(movs(d,FLOW)[1],'?'):14} -> {a.flow}")
    print(f"  main_place  0x{MAIN:06x}  {reva.get(movs(d,MAIN)[1],'?'):14} -> {a.main}")
    print(f"  cross/track 0x{CROSS:06x}  {reva.get(movs(d,CROSS)[1],'?'):14} -> {a.cross}")
    print(f"  gap         0x{GAP:06x}  {movs(d,GAP)[1]:<14} -> {a.gap}")
    print(f"  pad_left    0x{PAD_L:06x}  {movs(d,PAD_L)[1]:<14} -> {a.pad_left}")
    print(f"  pad_right   0x{PAD_R:06x}  {movs(d,PAD_R)[1]:<14} -> {a.pad_right}")
    print(f"  row height  0x{ROW_H:06x}  {movs(d,ROW_H)[1]:<14} -> {a.row_h}")
    print(f"  row width   0x{ROW_W:06x}  "
          f"{'CONTENT' if rw==LV_SIZE_CONTENT else rw:<14} -> "
          f"{'CONTENT' if row_w==LV_SIZE_CONTENT else row_w}")

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    for off, rd, val in ((FLOW,1,FLOW_V[a.flow]), (MAIN,1,ALIGN_V[a.main]),
                         (CROSS,3,ALIGN_V[a.cross]), (GAP,1,a.gap),
                         (PAD_L,1,a.pad_left), (PAD_R,1,a.pad_right), (ROW_H,2,a.row_h)):
        struct.pack_into('<H', d, off, 0x2000 | (rd << 8) | val)
    write_movw(d, ROW_W, row_w, 1)

    out = a.outfile or a.infile.replace('.bin', '_flex.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, 8 immediates set)')


if __name__ == '__main__':
    main()
