#!/usr/bin/env python3
"""Render the standby screen from a firmware image, BEFORE flashing it.

  python3 preview.py <fw.bin> [out.png] [--widgets time] [--time 17:39]

Feed it the exact .bin you are about to flash. It reads every layout constant out of
that image — tile size, row geometry, flex flow and alignment, padding, the clock's
font, its align immediates — then lays the row out the way lv_flex does and draws the
result at the panel's true 640x480.

WHY THIS EXISTS

Nine builds reached a working centred clock. Six of them rendered wrong on the panel in
ways that were invisible in the bytes:

  sheared glyphs          a glyph table misaligned by 3 bytes
  "/5<box>30"             the cmap range stopped at '9'
  "/6/15"                 the cmap remaps codepoints through a glyph_id_ofs_list
  clock clipped           row height 190 put it at the row's top edge
  clock vanished          4 tiles of 190px overflowed a 636px box and one wrapped away
  did not boot            main_place = CENTER(2)

Every one cost a flash to discover. Most are visible here in a second.

WHAT IT MODELS FAITHFULLY
  - codepoint -> glyph id through the cmap's glyph_id_ofs_list (NOT a dense range;
    getting this wrong is what produced "/6/15")
  - 1-bpp and 4-bpp glyph bitmaps as a continuous bitstream, no row padding
  - flex row/column, wrapping, main/cross placement, padding and gap
  - clipping of a tile's contents to the row's box

WHAT IT DOES NOT MODEL, and says so rather than guessing
  - the two behaviours observed on hardware with no static explanation:
      main_place = CENTER(2) does not boot
      row height 190 boots but pushes the clock to the row's top edge
    Both are flagged as warnings when the image asks for them.
  - anything outside the standby row.
"""
import argparse
import struct
import sys
from pathlib import Path

from PIL import Image, ImageDraw

from render_hud import data_base, faces

W, H = 640, 480
GREEN = (0, 255, 64)

# layout constants, all read from the image at these offsets
TILE = 0x61B79E          # movs r2,#72
ROW_H = 0x6167CC         # movs r2,#0x50
ROW_W = 0x6167D2         # movw r1,#0x27d1
FLOW = 0x6167EA
CROSS = 0x6167F0
MAIN = 0x6167F6
GAP = 0x616804
PAD_L = 0x616810
PAD_R = 0x61681C
CLK_Y, CLK_X, CLK_AL = 0x61B15E, 0x61B160, 0x61B162
BAT_AL = 0x61B18E
OPA = 0x61B7F8
FACE = 0x211B9C
ROW_TOP = 300            # where the row sits; measured from stock screenshots
# CALIBRATION, empirical. The row's content origin sits ~16px right of pad_left on
# hardware. Derived from ONE measurement: MIDCLOCK + "Time only" rendered ink at
# x262..414 where the uncalibrated model put it at x245..398 — same width (153px), so
# the glyph model is right and only the origin was off. Stated as a fitted constant
# rather than folded in silently; re-measure if the row setup changes.
ROW_X_CAL = 16

FLOW_N = {0:'ROW',1:'COLUMN',4:'ROW_WRAP',5:'COLUMN_WRAP',8:'ROW_REV',9:'COLUMN_REV'}
ALIGN_N = {0:'START',1:'END',2:'CENTER',3:'SPACE_EVENLY',4:'SPACE_AROUND',5:'SPACE_BETWEEN'}
LV_ALIGN = {1:'TOP_LEFT',2:'TOP_MID',3:'TOP_RIGHT',4:'BOTTOM_LEFT',5:'BOTTOM_MID',
            6:'BOTTOM_RIGHT',7:'LEFT_MID',8:'RIGHT_MID',9:'CENTER'}


def movs(d, o):
    w = struct.unpack_from('<H', d, o)[0]
    return (w & 0xFF) if (w & 0xF800) == 0x2000 else None


def movw(d, o):
    w1, w2 = struct.unpack_from('<HH', d, o)
    if (w1 & 0xFBF0) != 0xF240:
        return None
    return ((w1 & 0xF) << 12) | (((w1 >> 10) & 1) << 11) | (((w2 >> 12) & 7) << 8) | (w2 & 0xFF)


def clock_face(d, base):
    """The face the clock actually uses, with its cmap and ofs list."""
    f = [x for x in faces(d, base) if x['struct'] == FACE][0]
    cm = struct.unpack_from('<I', d, FACE + 12 + 8)[0] - base
    rs, rl, gs = struct.unpack_from('<IHH', d, cm)
    gol = struct.unpack_from('<I', d, cm + 12)[0]
    ll = struct.unpack_from('<H', d, cm + 16)[0]
    return f, dict(start=rs, rlen=rl, gid0=gs, ofs=(gol - base) if gol else None, llen=ll)


def gid_of(d, cmap, ch):
    """Resolve the way the FIRMWARE does — through the ofs list, not a dense range."""
    cp = ord(ch)
    i = cp - cmap['start']
    if i < 0 or i >= cmap['rlen']:
        return None                      # outside the range -> missing-glyph box
    if cmap['ofs'] is None:
        return cmap['gid0'] + i
    if i >= cmap['llen']:
        return None                      # past the ofs list -> also missing
    return cmap['gid0'] + d[cmap['ofs'] + i]


def glyph(d, f, gid):
    o = f['dsc'] + gid * 16
    bi, adv = struct.unpack_from('<II', d, o)
    bw, bh = struct.unpack_from('<HH', d, o + 8)
    ox, oy = struct.unpack_from('<hh', d, o + 12)
    px = None
    if bw and bh:
        px = bytearray(bw * bh)
        for i in range(bw * bh):
            b = d[f['bitmap'] + bi + ((i >> 1) if f['bpp'] == 4 else (i >> 3))]
            px[i] = (((b >> 4) if (i & 1) == 0 else (b & 15)) * 17) if f['bpp'] == 4 \
                    else (((b >> (7 - (i & 7))) & 1) * 255)
    return dict(adv=adv / 16, w=bw, h=bh, ox=ox, oy=oy, px=px)


def measure(d, f, cmap, text):
    gs, miss = [], []
    for ch in text:
        g = gid_of(d, cmap, ch)
        if g is None:
            miss.append(ch); gs.append(None); continue
        gs.append(glyph(d, f, g))
    wpx = sum(g['adv'] for g in gs if g) + 18 * len(miss)   # box glyph ~18px
    real = [g for g in gs if g and g['h']]
    hpx = max(g['h'] for g in real) if real else 0
    return gs, wpx, hpx, miss


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fw'); ap.add_argument('out', nargs='?', default='preview.png')
    ap.add_argument('--widgets', default='time',
                    help='comma list: time,weather,weekday,aiball,steps')
    ap.add_argument('--time', default='17:39')
    a = ap.parse_args()

    d = Path(a.fw).read_bytes()
    base = data_base(d)
    warn = []

    tile = movs(d, TILE)
    row_h = movs(d, ROW_H)
    row_w = movw(d, ROW_W)
    flow, cross, main = movs(d, FLOW), movs(d, CROSS), movs(d, MAIN)
    gap, pl, pr = movs(d, GAP), movs(d, PAD_L), movs(d, PAD_R)
    clk_al, clk_x, clk_y = movs(d, CLK_AL), movs(d, CLK_X), movs(d, CLK_Y)
    rings = movs(d, OPA)

    content_w = (W if row_w == 0x27D1 else row_w) - pl - pr
    names = [w.strip() for w in a.widgets.split(',') if w.strip()]
    n = len(names)

    print(f"  read from {Path(a.fw).name}:")
    print(f"    tile        {tile}x{tile}")
    print(f"    row         {'CONTENT' if row_w==0x27D1 else row_w} x {row_h}"
          f"   pads {pl}/{pr}  gap {gap}")
    print(f"    flow        {FLOW_N.get(flow,flow)}   main {ALIGN_N.get(main,main)}"
          f"   cross {ALIGN_N.get(cross,cross)}")
    print(f"    clock       align {LV_ALIGN.get(clk_al,clk_al)} x={clk_x} y={clk_y}")
    print(f"    rings       {'off' if rings==0 else f'opa {rings}'}")

    # ---- known-bad values observed on hardware ------------------------------------
    if main == 2:
        warn.append("main_place = CENTER(2) DOES NOT BOOT on this device (observed; "
                    "SPACE_BETWEEN(5) at the same offset is fine). Use pad_left to centre.")
    if row_h > 120:
        warn.append(f"row height {row_h} > 120: on hardware, 190 booted but pushed the "
                    "clock to the row's TOP EDGE and clipped it. Stock 80 renders in full.")

    # ---- flex: does the row fit? ---------------------------------------------------
    column = flow in (1, 5, 9)
    span = n * tile + (n - 1) * gap
    axis = row_h if column else content_w
    if span > axis:
        warn.append(f"{n} tile(s) need {span}px on the "
                    f"{'vertical' if column else 'horizontal'} axis but only {axis}px "
                    f"is available — flex will WRAP one onto a line the row hides. "
                    f"This is what made the clock 'vanish'.")

    # ---- lay the tiles out ----------------------------------------------------------
    if column:
        xs = [pl + ROW_X_CAL] * n
        ys = [ROW_TOP + i * (tile + gap) for i in range(n)]
    else:
        if main == 5 and n > 1:          # SPACE_BETWEEN
            step = (content_w - n * tile) / (n - 1)
            xs = [pl + ROW_X_CAL + i * (tile + step) for i in range(n)]
        elif main == 2:                  # CENTER (will not boot, but preview it anyway)
            xs = [pl + ROW_X_CAL + (content_w - span) / 2 + i * (tile + gap) for i in range(n)]
        else:                            # START
            xs = [pl + ROW_X_CAL + i * (tile + gap) for i in range(n)]
        ys = [ROW_TOP + (row_h - tile) / 2] * n

    img = Image.new('RGB', (W, H), (0, 0, 0))
    dr = ImageDraw.Draw(img)
    f, cmap = clock_face(d, base)
    gs, tw, th, miss = measure(d, f, cmap, a.time)
    if miss:
        warn.append(f"characters with NO glyph: {miss} — LVGL draws a hollow box. "
                    "Check the cmap range_length AND list_length.")
    # collisions: two clock characters resolving to the same glyph
    seen = {}
    for ch in set(a.time):
        g = gid_of(d, cmap, ch)
        if g is not None and g in seen:
            warn.append(f"'{ch}' and '{seen[g]}' both resolve to glyph {g} — they will "
                        "render identically. This produced \"/6/15\" from \"06:15\".")
        if g is not None:
            seen[g] = ch

    rowbox = (0, ROW_TOP, W, ROW_TOP + row_h)
    dr.rectangle([rowbox[0], rowbox[1], rowbox[2] - 1, rowbox[3] - 1], outline=(0, 46, 18))

    for i, name in enumerate(names):
        tx, ty = xs[i], ys[i]
        clip = (max(tx, 0), ROW_TOP, min(tx + tile, W), ROW_TOP + row_h)
        if rings:
            dr.ellipse([tx, ty, tx + tile - 1, ty + tile - 1],
                       outline=(0, int(92 * rings / 255), int(23 * rings / 255)), width=2)
        if name != 'time':
            dr.text((tx + tile / 2 - 12, ty + tile / 2 - 6), name[:4], fill=(0, 150, 40))
            continue
        # the clock label, placed by its own align immediates inside the tile
        if clk_al == 9:      lx, ly = tx + (tile - tw) / 2, ty + (tile - th) / 2
        elif clk_al == 2:    lx, ly = tx + (tile - tw) / 2, ty + clk_y
        elif clk_al == 5:    lx, ly = tx + (tile - tw) / 2, ty + tile - th - clk_y
        else:                lx, ly = tx + clk_x, ty + clk_y
        pen = lx
        for g in gs:
            if g is None:
                dr.rectangle([pen, ly, pen + 16, ly + th], outline=GREEN)
                pen += 18; continue
            if g['px']:
                top = max(x['oy'] + x['h'] for x in gs if x and x['h'])
                y0 = ly + (top - (g['oy'] + g['h']))
                for r in range(g['h']):
                    for c in range(g['w']):
                        v = g['px'][r * g['w'] + c]
                        if not v: continue
                        X, Y = int(pen + g['ox'] + c), int(y0 + r)
                        if not (clip[0] <= X < clip[2] and clip[1] <= Y < clip[3]): continue
                        if 0 <= X < W and 0 <= Y < H:
                            img.putpixel((X, Y), (0, int(255 * v / 255), int(64 * v / 255)))
            pen += g['adv']
        # Report the INK extent, not the advance box. A screenshot measures ink, and
        # reporting the advance box is exactly how an 18px error slipped through on the
        # real build: the first glyph's left bearing and the last glyph's trailing
        # advance both sit outside the ink.
        pen2, ink_lo, ink_hi = lx, None, None
        for g in gs:
            if g is None: pen2 += 18; continue
            if g['w']:
                a0, a1 = pen2 + g['ox'], pen2 + g['ox'] + g['w']
                ink_lo = a0 if ink_lo is None else min(ink_lo, a0)
                ink_hi = a1 if ink_hi is None else max(ink_hi, a1)
            pen2 += g['adv']
        print(f"\n    clock '{a.time}'")
        print(f"      tile      x{tx:.0f}..{tx+tile:.0f}")
        print(f"      advance   x{lx:.0f}..{lx+tw:.0f}  ({tw:.0f}px)")
        print(f"      INK       x{ink_lo:.0f}..{ink_hi:.0f}  ({ink_hi-ink_lo:.0f}px)  "
              f"centre {(ink_lo+ink_hi)/2:.0f}   <- compare this to a screenshot")
        if abs((ink_lo+ink_hi)/2 - W/2) > 8:
            warn.append(f"clock ink centre is {(ink_lo+ink_hi)/2:.0f}, panel centre is "
                        f"{W//2} — off by {abs((ink_lo+ink_hi)/2 - W/2):.0f}px. "
                        f"pad_left {pl - round((ink_lo+ink_hi)/2 - W/2)} would centre it.")

    img.save(a.out)
    print(f"\n  wrote {a.out}")
    if warn:
        print(f"\n  {len(warn)} WARNING(S):")
        for w in warn:
            print(f"    ! {w}")
    else:
        print("\n  no warnings")


if __name__ == '__main__':
    main()
