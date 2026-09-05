#!/usr/bin/env python3
"""Render every LVGL face found in platform_tester.bin to PNG."""
import os, sys, json
from PIL import Image, ImageDraw
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from parse_fonts import Face, FONTS, font_info, B, CMAP_TYPES

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'renders')
os.makedirs(OUT, exist_ok=True)
SCALE = 3
GREEN = (0, 255, 0)

def draw_string(face, text, pad=6, scale=SCALE, use=None):
    """use: optional fallback Face for glyphs missing in `face`"""
    items = []
    for ch in text:
        cp = ord(ch)
        f = face
        gid = face.cp2gid.get(cp)
        if gid is None and use is not None:
            f, gid = use, use.cp2gid.get(cp)
        if gid is None:
            items.append((None, None, 8)); continue
        g = f.gdsc(gid)
        items.append((f, gid, g['adv_w'] / 16.0))
    total_w = int(sum(i[2] for i in items)) + 2 * pad
    lh = max(face.gdsc(g).get('box_h', 0) for g in range(face.nglyph)) if face.nglyph else 20
    # canvas: use line_height-ish
    maxh = 0; maxup = 0; maxdn = 0
    for f, gid, adv in items:
        if f is None: continue
        g = f.gdsc(gid)
        maxup = max(maxup, g['box_h'] + g['ofs_y'])
        maxdn = max(maxdn, -g['ofs_y'])
    H = maxup + maxdn + 2 * pad
    img = Image.new('RGB', (max(total_w, 1), max(H, 1)), (10, 10, 10))
    px = img.load()
    x = float(pad)
    base = pad + maxup
    for f, gid, adv in items:
        if f is not None:
            w, h, rows = f.render(gid)
            g = f.gdsc(gid)
            maxv = (1 << f.bpp) - 1
            ox = int(x) + g['ofs_x']
            oy = base - g['box_h'] - g['ofs_y']
            for yy in range(h):
                for xx in range(w):
                    v = rows[yy][xx]
                    if not v: continue
                    X, Y = ox + xx, oy + yy
                    if 0 <= X < img.width and 0 <= Y < img.height:
                        a = v / maxv
                        px[X, Y] = (0, int(255 * a), 0)
        x += adv
    return img.resize((img.width * scale, img.height * scale), Image.NEAREST)

def grid(face, cps, cols=16, scale=2, label=''):
    cells = []
    for cp in cps:
        gid = face.cp2gid.get(cp)
        if gid is None: continue
        w, h, rows = face.render(gid)
        cells.append((cp, w, h, rows))
    if not cells: return None
    cw = max(c[1] for c in cells) + 3
    ch = max(c[2] for c in cells) + 3
    rowsn = (len(cells) + cols - 1) // cols
    img = Image.new('RGB', (cw * cols, ch * rowsn), (10, 10, 10))
    px = img.load()
    maxv = (1 << face.bpp) - 1
    for i, (cp, w, h, rows) in enumerate(cells):
        cx = (i % cols) * cw + 1
        cy = (i // cols) * ch + 1
        for yy in range(h):
            for xx in range(w):
                v = rows[yy][xx]
                if v: px[cx + xx, cy + yy] = (0, int(255 * v / maxv), 0)
    return img.resize((img.width * scale, img.height * scale), Image.NEAREST)
