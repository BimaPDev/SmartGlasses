#!/usr/bin/env python3
"""Render the standby row as the firmware would draw it, for a given tile size.

  python3 render_standby.py <fw.bin> <out.png> [--tile 72] [--widgets time,weather,weekday]
                            [--rings] [--time 04:57]

Answers one question before anything is flashed: if the tile size at 0x61b79e changes
from 72 to N, what actually appears on the lens?

Everything is read from the image — the font faces, the glyph bitmaps, the real
checkbox/weather artwork — and drawn at the panel's true 640x480 on the green ramp.

WHAT IS SIMULATED, and how faithfully:
  - tile geometry: square, side = the `movs r2,#N` operand at 0x61b79e (w and h share
    r2, so tiles cannot be made non-square without CODE)
  - the ring: radius = side/2, 2px, opacity 92 — drawn unless --rings is omitted
  - the row: tiles laid out left to right with the flex gap measured from a stock shot
  - clipping: contents are clipped to the tile, which is what produced "3:0"

NOT simulated: the flex layout's own reflow rules when tiles no longer fit the panel.
If the row overflows 640px this marks it, rather than guessing what LVGL would do.
"""
import argparse
import re
import struct
import sys
from pathlib import Path

from PIL import Image, ImageDraw

from render_hud import data_base, faces, gid_for, glyph

W, H = 640, 480
GREEN = (0, 255, 64)
GAP = 10                      # measured between tiles on a stock 4-widget shot
ROW_BOTTOM = 380              # baseline of the row on a stock shot


def rd32(d, o):
    return struct.unpack_from('<I', d, o)[0]


def cstr(d, o, m=64):
    e = o
    while e < len(d) and d[e] and e - o < m:
        e += 1
    return d[o:e].decode('latin1', 'replace')


def named_images(d, base):
    imgs = {}
    for o in range(0, len(d) - 12, 4):
        h = rd32(d, o)
        if (h & 0x1F) != 9 or ((h >> 5) & 7):
            continue
        w, hh = (h >> 10) & 0x7FF, (h >> 21) & 0x7FF
        if not (4 <= w <= 1024 and 4 <= hh <= 1024):
            continue
        if rd32(d, o + 4) != 64 + ((w + 1) // 2) * hh:
            continue
        dp = rd32(d, o + 8) - base
        if 0 <= dp < len(d):
            imgs[o] = dict(w=w, h=hh, data=dp, name=None)
    out = {}
    for o in range(0, len(d) - 8, 4):
        a, b = rd32(d, o), rd32(d, o + 4)
        if not (0x3C000000 <= a < 0x3C500000 and 0x3C000000 <= b < 0x3C500000):
            continue
        im = imgs.get(a - base)
        if not im or im['name']:
            continue
        s = cstr(d, b - base)
        if re.fullmatch(r'[A-Za-z][A-Za-z0-9_]{2,60}', s):
            im['name'] = s
            out[s] = im
    return out


def decode_idx4(d, im):
    stride = (im['w'] + 1) // 2
    px = bytearray(im['w'] * im['h'])
    for y in range(im['h']):
        for x in range(im['w']):
            b = d[im['data'] + 64 + y * stride + (x >> 1)]
            px[y * im['w'] + x] = ((b >> 4) if (x & 1) == 0 else (b & 15)) * 17
    return px


def pick_face(d, base, fl, text, biggest=False):
    usable = [f for f in fl if all(gid_for(d, base, f, ord(c)) for c in text)]
    if not usable:
        raise SystemExit(f"no face covers {text!r}")
    key = lambda f: glyph(d, f, gid_for(d, base, f, ord(text[0])))['h']
    return max(usable, key=key) if biggest else min(usable, key=key)


def measure(d, base, face, text):
    wpx = sum(glyph(d, face, gid_for(d, base, face, ord(c)))['adv'] / 16 for c in text)
    gs = [glyph(d, face, gid_for(d, base, face, ord(c))) for c in text]
    real = [g for g in gs if g['w']]
    top = max(g['oy'] + g['h'] for g in real)
    hpx = top - min(g['oy'] for g in real)
    return wpx, hpx, top


def draw_text(img, d, base, face, text, x, y, clip=None, dim=1.0):
    """Draw at x,y (y = top of the tallest glyph). `clip` is an (x0,y0,x1,y1) box."""
    gs = [glyph(d, face, gid_for(d, base, face, ord(c))) for c in text]
    real = [g for g in gs if g['w']]
    if not real:
        return
    top = max(g['oy'] + g['h'] for g in real)
    pen = float(x)
    for g in gs:
        if g['px']:
            y0 = y + (top - (g['oy'] + g['h']))
            for r in range(g['h']):
                for c in range(g['w']):
                    v = g['px'][r * g['w'] + c]
                    if not v:
                        continue
                    px, py = int(pen + g['ox'] + c), int(y0 + r)
                    if clip and not (clip[0] <= px < clip[2] and clip[1] <= py < clip[3]):
                        continue          # the tile clips its contents — this is the bug
                    if 0 <= px < W and 0 <= py < H:
                        a = (v / 255) * dim
                        img.putpixel((px, py), (0, int(GREEN[1] * a), int(GREEN[2] * a)))
        pen += g['adv'] / 16


def blit(img, px, w, h, x, y, clip=None, scale=1):
    for r in range(h):
        for c in range(w):
            v = px[r * w + c]
            if not v:
                continue
            col = (0, int(GREEN[1] * v / 255), int(GREEN[2] * v / 255))
            for sy in range(scale):
                for sx in range(scale):
                    X, Y = x + c * scale + sx, y + r * scale + sy
                    if clip and not (clip[0] <= X < clip[2] and clip[1] <= Y < clip[3]):
                        continue
                    if 0 <= X < W and 0 <= Y < H:
                        img.putpixel((X, Y), col)


def render(d, tile, widgets, rings, clock):
    base = data_base(d)
    fl = faces(d, base)
    named = named_images(d, base)
    img = Image.new('RGB', (W, H), (0, 0, 0))
    dr = ImageDraw.Draw(img)

    n = len(widgets)
    total = n * tile + (n - 1) * GAP
    overflow = total > W - 20
    x0 = 20 if overflow else (W - total) // 2 if n > 1 else 20
    y0 = ROW_BOTTOM - tile

    # the clock face: biggest that still has a colon
    big = pick_face(d, base, fl, clock, biggest=True)
    small = pick_face(d, base, fl, "8")

    for i, kind in enumerate(widgets):
        tx = x0 + i * (tile + GAP)
        box = (tx, y0, tx + tile, y0 + tile)
        if rings:
            dr.ellipse([tx, y0, tx + tile - 1, y0 + tile - 1],
                       outline=(0, 92, 23), width=2)
        if kind == 'time':
            tw, th, _ = measure(d, base, big, clock)
            draw_text(img, d, base, big, clock,
                      tx + (tile - tw) / 2, y0 + tile * 0.30, clip=box)
            bat = named.get('launcher_standby_battery_60')
            if bat:
                blit(img, decode_idx4(d, bat), bat['w'], bat['h'],
                     int(tx + (tile - bat['w'] * 2) / 2), int(y0 + tile * 0.66),
                     clip=box, scale=2)
        elif kind == 'weather':
            tw, th, _ = measure(d, base, small, "77")
            draw_text(img, d, base, small, "77", tx + (tile - tw) / 2 - 4,
                      y0 + tile * 0.34, clip=box)
            ic = named.get('weather_cloudy_day_24_24')
            if ic:
                blit(img, decode_idx4(d, ic), ic['w'], ic['h'],
                     int(tx + (tile - ic['w']) / 2), int(y0 + tile * 0.58), clip=box)
        elif kind == 'weekday':
            for j, t in enumerate(("12", "Fri.")):
                tw, _, _ = measure(d, base, small, t)
                draw_text(img, d, base, small, t, tx + (tile - tw) / 2,
                          y0 + tile * (0.32 + 0.22 * j), clip=box)
    return img, overflow, total


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fw')
    ap.add_argument('out')
    ap.add_argument('--tile', type=int, default=72)
    ap.add_argument('--widgets', default='time')
    ap.add_argument('--rings', action='store_true')
    ap.add_argument('--time', default='04:57')
    a = ap.parse_args()

    if not 8 <= a.tile <= 255:
        sys.exit('tile must be 8..255 — it is a MOVS imm8 operand at 0x61b79e')

    d = Path(a.fw).read_bytes()
    widgets = [w.strip() for w in a.widgets.split(',') if w.strip()]
    img, overflow, total = render(d, a.tile, widgets, a.rings, a.time)
    img.save(a.out)
    print(f"  tile      {a.tile}x{a.tile} px   (0x61b79e: movs r2,#{a.tile})")
    print(f"  widgets   {len(widgets)}: {', '.join(widgets)}")
    print(f"  row width {total} px of {W}" + ("   ** OVERFLOWS THE PANEL **" if overflow else ""))
    print(f"  rings     {'drawn' if a.rings else 'off (border_opa=0)'}")
    print(f"  wrote     {a.out}")


if __name__ == '__main__':
    main()
