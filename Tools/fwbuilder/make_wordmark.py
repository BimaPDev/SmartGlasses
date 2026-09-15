#!/usr/bin/env python3
"""Replace the power-off wordmark (the "MYVU" logotype) with your own.

  python3 make_wordmark.py <in.bin> <out.bin> [--text BIMA] [--preview out.png]
        [--stroke 5] [--tracking 11] [--widths 31,7,35,33] [--dry-run]

RISK CLASS: pure data. The descriptor is not touched, the palette is not touched, the
image length does not change, and no instruction is altered anywhere. Only the 2,592
bytes of pixel payload are rewritten. This is the safest tier of patch in this project
-- strictly safer than the confirmed no-rings patch, which at least changed an operand
an instruction reads.

WHERE IT LIVES (1.0.11.53)

    descriptor  file 0x413450   09 40 82 04 | 60 0a 00 00 | 40 b1 3e 3c
                                cf=9 w=144 h=36 | data_size=2656 | data=0x3C3EB140
    data        file 0x413490   [64 B palette][2592 B pixels]

THE TRAP THAT COST THE MOST TIME HERE -- the data delta is PER BUILD:

    1.0.12.83   file = VA - 0x3BFD7C0C      <- the constant in CLAUDE.md
    1.0.11.53   file = VA - 0x3BFD7CB0      <- this build, 164 bytes different

Using 12.83's constant on an 11.53 image lands 164 bytes late: you get a palette of
all zeros and a bitmap shifted by ~2.3 rows, which still renders as a recognisable
wordmark and so looks almost right. Almost-right is the expensive kind of wrong. The
guard below refuses unless the palette it finds is a real alpha ramp.

FORMAT (cf=9, LV_IMG_CF_INDEXED_4BIT)

    palette   16 entries x 4 bytes, (B, G, R, A), at data[0:64]
    pixels    row-major 4bpp, stride (w+1)//2 = 72, EVEN x = HIGH nibble
    no row padding beyond the stride

Use `decode_idx4_rowmajor` semantics, NOT `decode_idx4_strips` from
analysis/extract_lvgl_idx4.py -- the "112 px vertical strip" theory in that file is a
wrong-offset artifact, as CLAUDE.md records. For a 144 px image the two disagree.

WHAT THE PALETTE TELLS YOU

    index  0        (0,   0, 0,   0)     transparent
    index  1..15    (0, 255, 0,  16..255) pure green, alpha ramp

Every entry is the same green and only alpha climbs, which means THE PANEL IS
MONOCHROME GREEN and the 4 bits are an alpha level, not a colour. So a replacement
only needs an anti-aliased alpha mask -- there is no colour to choose, and quantising
means matching each pixel's alpha to the nearest palette alpha. Rewriting the palette
would be pointless at best; this script never does.

MATCHING THE STOCK LETTERING

Measured off the stock bitmap, so a replacement sits in the same optical space:

    ink bbox      x 2..141, y 3..32      cap height 30 px
    stroke        6-7 px (horizontal runs across the mid row)
    letters       M x2..32, Y x41..70, V x79..108, U x117..141
    pitch         ~38 px, gaps ~8 px

BIMA is drawn a touch lighter (5 px) than MYVU's 7 px on purpose: M, Y, V and U have
no enclosed counters, while B and A do. At 30 px cap height a 7 px stroke closes the
B's bowls into slits -- it renders as a filled blob on the panel. 5 px keeps the
counters open at the size this is actually displayed.
"""
import argparse
import struct
import sys
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw

BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
DSC = 0x413450                 # lv_img_dsc_t for the wordmark
DELTA_1153 = 0x3BFD7CB0        # data VA -> file, THIS build only
W, H = 144, 36
STRIDE = (W + 1) // 2          # 72
PIX_LEN = STRIDE * H           # 2592
SS = 8                         # supersample factor for drawing
TOP, BOT = 3, 32               # the stock cap band, inclusive
CAP = BOT - TOP + 1            # 30


def read_dsc(d):
    """Decode the image descriptor, or exit with why it cannot be trusted."""
    hdr, size, ptr = struct.unpack_from('<III', d, DSC)
    cf, w, h = hdr & 0x1F, (hdr >> 10) & 0x7FF, (hdr >> 21) & 0x7FF
    if (cf, w, h) != (9, W, H):
        sys.exit(f'refusing: descriptor says cf={cf} {w}x{h}, expected cf=9 {W}x{H}')
    if size != 64 + PIX_LEN:
        sys.exit(f'refusing: data_size {size}, expected {64 + PIX_LEN}')
    off = ptr - DELTA_1153
    if not 0 <= off < len(d) - size:
        sys.exit(f'refusing: data ptr 0x{ptr:08X} does not resolve in this image')
    return off, ptr


def check_palette(d, off):
    """The palette must be a real alpha ramp on one colour.

    This is the gate that catches the per-build delta mistake: with 12.83's constant
    the 64 bytes here are all zero, which is not a ramp, and we stop instead of
    writing 2.3 rows out of place.
    """
    pal = np.frombuffer(d[off:off + 64], dtype=np.uint8).reshape(16, 4)
    alphas = pal[:, 3].astype(int)
    if alphas[0] != 0:
        sys.exit(f'refusing: palette[0] alpha is {alphas[0]}, expected 0 (transparent)')
    if not np.all(np.diff(alphas) > 0):
        sys.exit('refusing: palette alpha is not strictly increasing -- this is not '
                 'the wordmark palette. Wrong build, or the wrong delta constant '
                 '(11.53 uses 0x3BFD7CB0, not 12.83\'s 0x3BFD7C0C).')
    if alphas[15] != 255:
        sys.exit(f'refusing: palette[15] alpha is {alphas[15]}, expected 255')
    return pal


def draw_text(text, stroke, widths, tracking):
    """Draw `text` as a 144x36 anti-aliased alpha mask, matched to the stock metrics.

    Letters are built from primitives rather than a system font: the stock face is a
    custom geometric one, and what has to match is the stroke weight and the cap band,
    which a font would not give without hinting fights at 30 px.
    """
    if len(text) != len(widths):
        sys.exit(f'refusing: {len(text)} characters but {len(widths)} widths')
    w, h = W * SS, H * SS
    im = Image.new('L', (w, h), 0)
    dr = ImageDraw.Draw(im)
    s = stroke * SS
    top, cap = TOP * SS, CAP * SS
    bot = top + cap - 1
    ink = sum(widths) + tracking * (len(text) - 1)
    if ink > W:
        sys.exit(f'refusing: the glyphs need {ink}px but the image is {W}px wide')
    x = (W - ink) // 2 * SS

    def stem(cx):
        dr.rectangle([cx, top, cx + s - 1, bot], fill=255)

    for ch, bw in zip(text.upper(), widths):
        bp = bw * SS
        if ch == 'B':
            stem(x)
            waist = top + cap * 47 // 100      # upper bowl a shade smaller, as usual
            for ty, by, rw in ((top, waist, bp * 92 // 100), (waist, bot, bp)):
                dr.rounded_rectangle([x, ty, x + rw - 1, by],
                                     radius=(by - ty) * 38 // 100,
                                     outline=255, width=s)
        elif ch == 'I':
            stem(x + (bp - s) // 2)
        elif ch == 'M':
            stem(x)
            stem(x + bp - s)
            mid, vee = x + bp // 2, top + cap * 58 // 100
            dr.polygon([(x + s, top), (mid, vee), (x + bp - s, top),
                        (x + bp - s, top + s), (mid, vee + s), (x + s, top + s)],
                       fill=255)
        elif ch == 'A':
            apex, flat = x + bp // 2, s * 45 // 100
            dr.polygon([(apex - flat, top), (apex + flat, top), (x + bp - 1, bot),
                        (x + bp - 1 - s, bot), (apex, top + s * 12 // 10),
                        (x + s, bot), (x, bot)], fill=255)
            cb = top + cap * 68 // 100
            dr.rectangle([x + bp * 19 // 100, cb, x + bp * 81 // 100, cb + s - 1],
                         fill=255)
        else:
            sys.exit(f'refusing: no glyph for {ch!r}. This draws B, I, M and A; add a '
                     f'branch above for anything else.')
        x += bp + tracking * SS
    return np.array(im.resize((W, H), Image.LANCZOS)).clip(0, 255)


def quantise(mask, pal):
    """Alpha mask -> palette indices, by nearest palette alpha.

    The ramp is not perfectly linear (…,191,222,239,255), so nearest-match beats
    alpha>>4, which would skew the top end and thin the strokes.
    """
    alphas = pal[:, 3].astype(int)
    return np.abs(mask[:, :, None].astype(int) - alphas[None, None, :]).argmin(axis=2)


def pack(idx):
    """Indices -> 4bpp row-major bytes. Even x is the HIGH nibble."""
    hi = idx[:, 0::2].astype(np.uint8)
    lo = idx[:, 1::2].astype(np.uint8)
    return ((hi << 4) | lo).tobytes()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--text', default='BIMA')
    ap.add_argument('--stroke', type=int, default=5)
    ap.add_argument('--tracking', type=int, default=11)
    ap.add_argument('--widths', default='31,7,35,33')
    ap.add_argument('--preview', help='write a PNG of the result, in the panel colour')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR -- every offset here is '
                 'build-specific, and the data delta differs between builds')

    off, ptr = read_dsc(d)
    pal = check_palette(d, off)
    widths = [int(v) for v in a.widths.split(',')]

    mask = draw_text(a.text, a.stroke, widths, a.tracking)
    idx = quantise(mask, pal)
    payload = pack(idx)
    if len(payload) != PIX_LEN:
        sys.exit(f'internal: packed {len(payload)} bytes, expected {PIX_LEN}')

    ys, xs = np.where(idx >= 8)
    print(f'  descriptor   file 0x{DSC:06X}   cf=9 {W}x{H}')
    print(f'  data         file 0x{off:06X}   VA 0x{ptr:08X}  '
          f'(delta 0x{DELTA_1153:08X})')
    print(f'  palette      16 entries, green, alpha {pal[0][3]}..{pal[15][3]}  UNTOUCHED')
    print(f'  pixels       file 0x{off + 64:06X}  {PIX_LEN} bytes rewritten')
    print(f'  text         {a.text!r}  stroke {a.stroke}  tracking {a.tracking}  '
          f'widths {widths}')
    print(f'  ink bbox     x {xs.min()}..{xs.max()}  y {ys.min()}..{ys.max()}'
          f'      (stock: x 2..141  y 3..32)')

    if a.preview:
        rgba = np.dstack([np.zeros_like(mask), np.full_like(mask, 255),
                          np.zeros_like(mask), mask]).astype(np.uint8)
        Image.fromarray(rgba, 'RGBA').resize((W * 4, H * 4), Image.NEAREST) \
             .save(a.preview)
        print(f'  preview      {a.preview}')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    d[off + 64:off + 64 + PIX_LEN] = payload
    out = a.outfile or a.infile.replace('.bin', '_wordmark.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, '
          f'{PIX_LEN} data bytes altered, 0 instructions)')


if __name__ == '__main__':
    main()
