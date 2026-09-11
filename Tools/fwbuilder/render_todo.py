#!/usr/bin/env python3
"""Render a Halliday-style todo HUD at the panel's real 640x480, from the firmware.

Not a mockup in a drawing tool: every glyph and every icon below is read out of
`platform_tester.bin` and drawn at its real size, on the real green ramp. So what you
see is what this firmware can actually put on the lens — including the ways it falls
short of the Halliday look.

  python3 render_todo.py <fw.bin> [out.png] [--items "a|b|c"] [--time 08:32]
                         [--big]   # ALSO render the target, with a font that does
                                   # not exist on the device yet

What it reads rather than assumes:
  - the per-build data base, validated against the green-ramp palettes
  - every font face, and which is genuinely the largest available
  - the real checkbox artwork (`assistant_todo_domian_done` / `_undone`)

THE HONEST LIMIT: the biggest digit in 1.0.11.53 is 27x18 px, 5.6% of panel height.
Halliday's clock is several times that. `--big` synthesises one to show the target,
and is clearly marked, because a preview that quietly invents a font would be lying
about the thing the whole exercise is meant to test.
"""
import re
import struct
import sys
from pathlib import Path

from PIL import Image, ImageDraw

from render_hud import data_base, faces, gid_for, glyph

W, H = 640, 480
GREEN = (0, 255, 64)


def rd32(d, o):
    return struct.unpack_from('<I', d, o)[0]


def cstr(d, o, m=64):
    e = o
    while e < len(d) and d[e] and e - o < m:
        e += 1
    return d[o:e].decode('latin1', 'replace')


def find_images(d, base):
    """Every IDX4 image, keyed by its descriptor offset."""
    out = {}
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
            out[o] = dict(dsc=o, w=w, h=hh, data=dp, name=None)
    return out


def name_images(d, base, imgs):
    """Resource table: adjacent {image_dsc*, name*} pointer pairs."""
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
    return {im['name']: im for im in imgs.values() if im['name']}


def decode_idx4(d, im):
    """IDX4: 64-byte palette then 2 px/byte, high nibble first, no row padding."""
    stride = (im['w'] + 1) // 2
    px = bytearray(im['w'] * im['h'])
    for y in range(im['h']):
        for x in range(im['w']):
            b = d[im['data'] + 64 + y * stride + (x >> 1)]
            px[y * im['w'] + x] = ((b >> 4) if (x & 1) == 0 else (b & 15)) * 17
    return px


def biggest_face(d, base, fl, probe='8'):
    """The largest face that actually has the glyphs — by measured glyph height."""
    best, bh = None, -1
    for f in fl:
        g = gid_for(d, base, f, ord(probe))
        if not g:
            continue
        gl = glyph(d, f, g)
        if gl['h'] > bh:
            best, bh = f, gl['h']
    return best, bh


def face_for_text(d, base, fl, text, prefer_bpp=4):
    """Smallest usable face that covers the text, preferring antialiased (bpp4)."""
    usable = [f for f in fl if all(gid_for(d, base, f, ord(c)) for c in text if c != ' ')]
    if not usable:
        raise SystemExit(f"no face covers {text!r}")
    aa = [f for f in usable if f['bpp'] == prefer_bpp]
    pool = aa or usable
    return min(pool, key=lambda f: glyph(d, f, gid_for(d, base, f, ord(text[0]))) ['h'])


def draw_text(img, d, base, face, text, x, y, dim=1.0):
    """Draw a string; returns its advance width. y is the TOP of the tallest glyph."""
    gs = []
    for c in text:
        if c == ' ':
            gs.append(None)
            continue
        g = gid_for(d, base, face, ord(c))
        gs.append(glyph(d, face, g) if g else None)
    real = [g for g in gs if g]
    if not real:
        return 0
    top = max(g['oy'] + g['h'] for g in real)
    space = max(g['adv'] for g in real) / 16 * 0.4
    pen = float(x)
    for g in gs:
        if g is None:
            pen += space
            continue
        if g['px']:
            y0 = y + (top - (g['oy'] + g['h']))
            for r in range(g['h']):
                for c in range(g['w']):
                    v = g['px'][r * g['w'] + c]
                    if not v:
                        continue
                    px, py = int(pen + g['ox'] + c), int(y0 + r)
                    if 0 <= px < W and 0 <= py < H:
                        a = (v / 255) * dim
                        img.putpixel((px, py),
                                     (0, int(GREEN[1] * a), int(GREEN[2] * a)))
        pen += g['adv'] / 16
    return pen - x


def text_w(d, base, face, text):
    tot = 0.0
    for c in text:
        if c == ' ':
            tot += 4
            continue
        g = gid_for(d, base, face, ord(c))
        if g:
            tot += glyph(d, face, g)['adv'] / 16
    return tot


def blit(img, px, w, h, x, y, scale=1):
    for r in range(h):
        for c in range(w):
            v = px[r * w + c]
            if not v:
                continue
            a = v / 255
            col = (0, int(GREEN[1] * a), int(GREEN[2] * a))
            for sy in range(scale):
                for sx in range(scale):
                    X, Y = x + c * scale + sx, y + r * scale + sy
                    if 0 <= X < W and 0 <= Y < H:
                        img.putpixel((X, Y), col)


def synth_digits(img, text, x, y, size, weight):
    """A big clock the firmware does NOT have, drawn with plain rectangles.

    Deliberately crude: this is a placeholder for a font that would have to be
    generated and injected, and it should not be mistaken for a render of something
    the device can draw today.
    """
    seg = {'0': 0b1111110, '1': 0b0110000, '2': 0b1101101, '3': 0b1111001,
           '4': 0b0110011, '5': 0b1011011, '6': 0b1011111, '7': 0b1110000,
           '8': 0b1111111, '9': 0b1111011}
    dw, dh, t = size * 0.58, size, weight
    dr = ImageDraw.Draw(img)
    pen = x
    for ch in text:
        if ch == ':':
            for cy in (y + dh * 0.3, y + dh * 0.68):
                dr.rectangle([pen, cy, pen + t, cy + t], fill=GREEN)
            pen += t * 2.4
            continue
        s = seg.get(ch, 0)
        bars = [(0, 0, dw, t), (dw - t, 0, dw, dh / 2), (dw - t, dh / 2, dw, dh),
                (0, dh - t, dw, dh), (0, dh / 2, t, dh), (0, 0, t, dh / 2),
                (0, dh / 2 - t / 2, dw, dh / 2 + t / 2)]
        for i, (bx, by, bx2, by2) in enumerate(bars):
            if s & (1 << (6 - i)):
                dr.rectangle([pen + bx, y + by, pen + bx2, y + by2], fill=GREEN)
        pen += dw + size * 0.22
    return pen - x



def draw_clock(img, d, base, face, text, x, y, h):
    """Draw HH:MM, substituting two squares when the face has no ':' glyph."""
    dr = ImageDraw.Draw(img)
    pen = float(x)
    has_colon = bool(gid_for(d, base, face, ord(':')))
    for ch in text:
        if ch == ':' and not has_colon:
            t = max(2, h // 7)
            for cy in (y + h * 0.28, y + h * 0.66):
                dr.rectangle([pen, cy, pen + t, cy + t], fill=GREEN)
            pen += t * 2.6
            continue
        pen += draw_text(img, d, base, face, ch, pen, y)
    return pen - x


def render(d, items, clock, big=False):
    base = data_base(d)
    fl = faces(d, base)
    imgs = find_images(d, base)
    named = name_images(d, base, imgs)

    done = named.get('assistant_todo_domian_done')
    undone = named.get('assistant_todo_domian_undone')
    if not (done and undone):
        raise SystemExit("checkbox artwork not found")

    img = Image.new('RGB', (W, H), (0, 0, 0))
    dr = ImageDraw.Draw(img)

    big_face, big_h = biggest_face(d, base, fl)
    body = face_for_text(d, base, fl, "ABCdefgh 0123")
    small = min(fl, key=lambda f: (glyph(d, f, gid_for(d, base, f, ord('8')))['h']
                                   if gid_for(d, base, f, ord('8')) else 99))

    M = 40                       # margin
    if big:
        ch = synth_digits(img, clock, M, 34, 96, 13)
        clock_bottom = 34 + 96
    else:
        # The two largest faces are DIGIT-ONLY — 24px and 27px carry no ':' and no
        # letters at all. So the colon is drawn as two squares, which is not a cheat:
        # LVGL draws those as ordinary objects, exactly as the battery pill is drawn.
        # Without this the clock renders as "08 32".
        ch = draw_clock(img, d, base, big_face, clock, M, 40, big_h)
        clock_bottom = 40 + big_h

    # Date, baseline-aligned to the clock's foot.
    draw_text(img, d, base, small, "MON 11 SEP", M + ch + 18, clock_bottom - 12, dim=0.65)

    y = clock_bottom + 26
    dr.line([(M, y), (W - M, y)], fill=(0, 90, 24), width=1)

    y += 18
    draw_text(img, d, base, small, "TODAY", M, y, dim=0.65)
    y += 22

    # Rows. The icons are 8x8 in the firmware — genuinely small for this panel — so
    # they are drawn 2x, which LVGL can do with image zoom. Native size is what the
    # stock todo view uses.
    step = 34
    for i, (text, checked) in enumerate(items):
        if y + step > H - M:
            draw_text(img, d, base, small, f"+{len(items) - i} more", M, y, dim=0.5)
            break
        icon = done if checked else undone
        blit(img, decode_idx4(d, icon), icon['w'], icon['h'], M, y + 3, scale=2)
        draw_text(img, d, base, body, text, M + icon['w'] * 2 + 14, y,
                  dim=0.55 if checked else 1.0)
        if checked:                                  # strike-through
            tw = text_w(d, base, body, text)
            ly = y + 8
            dr.line([(M + icon['w'] * 2 + 14, ly),
                     (M + icon['w'] * 2 + 14 + tw, ly)], fill=(0, 120, 32), width=1)
        y += step

    if big:
        draw_text(img, d, base, small, "SYNTHETIC FONT - NOT ON DEVICE",
                  M, H - M + 6, dim=0.5)
    return img, big_h, (done['w'], done['h'])


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        raise SystemExit(2)
    path = sys.argv[1]
    out = sys.argv[2] if len(sys.argv) > 2 and not sys.argv[2].startswith('-') else 'todo.png'
    clock = "08:32"
    if '--time' in sys.argv:
        clock = sys.argv[sys.argv.index('--time') + 1]
    raw = ("Squats 5x5|Bench press 3x8|Deadlift 1x5|Pull-ups 3x10|Stretch 10 min")
    if '--items' in sys.argv:
        raw = sys.argv[sys.argv.index('--items') + 1]
    items = [(t.strip().lstrip('+'), t.strip().startswith('+')) for t in raw.split('|')]

    d = Path(path).read_bytes()
    img, big_h, icon = render(d, items, clock, big='--big' in sys.argv)
    img.save(out)

    print(f"  panel          {W}x{H}")
    print(f"  largest digit  {big_h}px  ({100 * big_h / H:.1f}% of panel height)")
    print(f"  checkbox art   {icon[0]}x{icon[1]} (drawn 2x)")
    print(f"  items          {len(items)}")
    print(f"  wrote          {out}")
    if '--big' not in sys.argv:
        print("\n  This is what the firmware CAN draw today. For the Halliday clock,")
        print("  rerun with --big to see the target — that one needs a font injected.")


if __name__ == '__main__':
    main()
