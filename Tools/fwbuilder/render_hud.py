#!/usr/bin/env python3
"""Render what the glasses' panel WOULD show, from a (patched) platform_tester.bin.

Not an emulator. It reads the same data the firmware reads — font tables, glyph
bitmaps, and the layout constants baked into the widget constructor — and draws the
result at the panel's real 640x480 on the real green ramp. That is enough to check a
font swap, a glyph patch or a repositioned clock BEFORE flashing anything.

  python3 render_hud.py <fw.bin> [out.png] [--text 08:32]

What it reads from the image, rather than assuming:
  - the per-build data base (validated against the green-ramp palettes)
  - which face the clock selects (the font-name pointer in its constructor)
  - the align mode and x/y offsets (the MOVS immediates in that constructor)
  - the glyph metrics and bitmaps of the selected face
"""
import struct, sys, re
from pathlib import Path
from PIL import Image

W, H = 640, 480                      # JBD013 panel, hardcoded in its init
CODE = 0x2C010000

def rd32(d, o): return struct.unpack_from('<I', d, o)[0]
def rd16(d, o): return struct.unpack_from('<H', d, o)[0]

def cstr(d, o, m=200):
    e = o
    while e < len(d) and d[e] and e - o < m: e += 1
    return d[o:e].decode('latin1', 'replace')

def palette_ok(d, f):
    if f < 0 or f + 64 > len(d): return False
    e = [tuple(d[f+i:f+i+4]) for i in range(0, 64, 4)]
    a = [x[3] for x in e]
    return e[0][3] == 0 and a == sorted(a) and a[-1] >= 200 and len({x[:3] for x in e[1:]}) == 1

def data_base(d):
    """0x3C000000 - this build's PSRAM copy offset, chosen by palette validity."""
    best = (0, 0x3BFD7C0C)
    for m in re.finditer(re.escape(struct.pack('<I', 0x3C000000)), d[:0x4000]):
        for k in range(-16, 20, 4):
            p = m.start() + k
            if p < 0 or p + 4 > len(d): continue
            v = rd32(d, p)
            if CODE <= v < CODE + len(d):
                b = 0x3C000000 - (v - CODE)
                n = 0
                for o in range(0, len(d) - 12, 4):
                    h = rd32(d, o)
                    if (h & 0x1F) != 9 or ((h >> 5) & 7): continue
                    w_, h_ = (h >> 10) & 0x7FF, (h >> 21) & 0x7FF
                    if not (4 <= w_ <= 1024 and 4 <= h_ <= 1024): continue
                    if rd32(d, o + 4) != 64 + ((w_ + 1) // 2) * h_: continue
                    if palette_ok(d, rd32(d, o + 8) - b): n += 1
                if n > best[0]: best = (n, b)
    return best[1]

def faces(d, base):
    out = []
    for o in range(0, len(d) - 32, 4):
        w = [rd32(d, o + i * 4) for i in (3, 4, 5, 7)]
        if not all(0x3C000000 <= v < 0x3C500000 for v in w[:3]): continue
        packed = w[3] >> 16
        cmaps, bpp, fmt = packed & 0x1FF, (packed >> 9) & 0xF, (packed >> 14) & 3
        if fmt or bpp not in (1, 2, 4, 8) or not (1 <= cmaps <= 64): continue
        bmp, dsc, cm = w[0] - base, w[1] - base, w[2] - base
        if not all(0 <= x < len(d) for x in (bmp, dsc, cm)): continue
        rs, rl = rd32(d, cm), rd16(d, cm + 4)
        if not rl or rl > 0x3000 or rs > 0x30000: continue
        rngs = []
        for i in range(cmaps):
            b = cm + i * 20
            rngs.append(dict(start=rd32(d, b), len=rd16(d, b + 4), gid=rd16(d, b + 6),
                             ulist=rd32(d, b + 8), listLen=rd16(d, b + 16),
                             type=rd16(d, b + 18) & 0xFF))
        out.append(dict(struct=o, bitmap=bmp, dsc=dsc, bpp=bpp, ranges=rngs))
    return out

def gid_for(d, base, f, cp):
    for r in f['ranges']:
        if not (r['start'] <= cp < r['start'] + r['len']): continue
        if r['type'] in (1, 3):
            if not r['ulist']: return 0
            off, b = cp - r['start'], r['ulist'] - base
            for k in range(r['listLen']):
                if rd16(d, b + k * 2) == off: return r['gid'] + k
            return 0
        return r['gid'] + (cp - r['start'])
    return 0

def glyph(d, f, g):
    o = f['dsc'] + g * 16
    bi, adv = rd32(d, o), rd32(d, o + 4)
    bw, bh = rd16(d, o + 8), rd16(d, o + 10)
    ox = struct.unpack_from('<h', d, o + 12)[0]
    oy = struct.unpack_from('<h', d, o + 14)[0]
    px = None
    if bw and bh:
        px = bytearray(bw * bh)
        for i in range(bw * bh):
            b = d[f['bitmap'] + bi + ((i >> 1) if f['bpp'] == 4 else (i >> 3))]
            px[i] = (((b >> 4) if (i & 1) == 0 else (b & 15)) * 17) if f['bpp'] == 4 \
                    else (((b >> (7 - (i & 7))) & 1) * 255)
    return dict(adv=adv, w=bw, h=bh, ox=ox, oy=oy, px=px)


def font_objects(d, base, fl):
    """Find lv_font_t records: a struct whose dsc field points at a known face."""
    by_dsc = {f['dsc']: f for f in fl}
    out = []
    for o in range(0, len(d) - 40, 4):
        v = rd32(d, o + 16)
        if not (0x3C000000 <= v < 0x3C500000): continue
        f = by_dsc.get(v - base)
        if not f: continue
        fb = rd32(d, o + 20)
        out.append(dict(at=o, face=f,
                        line_height=struct.unpack_from('<h', d, o + 8)[0],
                        base_line=struct.unpack_from('<h', d, o + 10)[0],
                        fallback=fb if 0x2C000000 <= fb < 0x2D000000 else None))
    return out

def resolve_font(d, base, fl, objs, fname, text):
    """Follow the fallback chain until a font actually has the glyphs we need."""
    have = lambda f: all(gid_for(d, base, f, ord(c)) for c in text)
    # objects whose face is a stub (few glyphs) fall back; prefer a chain that resolves
    for o in objs:
        if have(o['face']) and o['face']['bpp'] == 4:
            return o['face'], o['line_height']
    for o in objs:
        if have(o['face']):
            return o['face'], o['line_height']
    usable = [f for f in fl if have(f)]
    if not usable: raise SystemExit("no face covers " + repr(text))
    return usable[0], None

def clock_layout(d, base):
    """Read the clock constructor: which font, and lv_obj_align(mode, x, y)."""
    i = d.find(b'customTimeAndBatteryWidget\x00')
    if i < 0: raise SystemExit("clock widget string not found")
    # its ctor references the FONT_* name; find the font-name pool word near the
    # 'launcher_standby_battery_empty' reference, which sits in the same pool.
    be = d.find(b'launcher_standby_battery_empty\x00')
    bref = [m.start() for m in re.finditer(re.escape(struct.pack('<I', be + base)), d)]
    fname, fptr_at = None, None
    for br in bref:
        for o in range(br - 0x40, br + 0x40, 4):
            if o < 0 or o + 4 > len(d): continue
            v = rd32(d, o)
            if not (0x3C000000 <= v < 0x3C500000): continue
            s = cstr(d, v - base, 40)
            if s.startswith('FONT_'):
                fname, fptr_at = s, o
                break
        if fname: break
    if not fname: raise SystemExit("could not find the clock's font selection")
    # the single instruction that loads that pool word, then the MOVS trio after it
    align = x = y = None
    for f in range(max(0, fptr_at - 4200), fptr_at, 2):
        v = rd16(d, f)
        if (v & 0xF800) != 0x4800: continue          # LDR Rd,[pc,#imm8]
        pool = (((f + CODE) + 4) & ~3) + (v & 0xFF) * 4 - CODE
        if pool != fptr_at: continue
        movs = []
        for k in range(f, min(f + 48, len(d) - 2), 2):
            w2 = rd16(d, k)
            if (w2 & 0xF800) == 0x2000:              # MOVS Rd,#imm8
                movs.append(((w2 >> 8) & 7, w2 & 0xFF))
        reg = {r: im for r, im in movs}
        align, x, y = reg.get(1), reg.get(2), reg.get(3)
        break
    return fname, align, x, y

def main():
    if len(sys.argv) < 2: print(__doc__); raise SystemExit(2)
    path = sys.argv[1]
    out = sys.argv[2] if len(sys.argv) > 2 and not sys.argv[2].startswith('-') else 'hud.png'
    text = "08:32"
    if '--text' in sys.argv: text = sys.argv[sys.argv.index('--text') + 1]

    d = Path(path).read_bytes()
    base = data_base(d)
    fname, align, x_ofs, y_ofs = clock_layout(d, base)
    fl = faces(d, base)

    # Resolve FONT_* -> face through the lv_font_t table, NOT by guessing.
    # An lv_font_t is {get_glyph_bitmap, get_glyph_dsc, line_height, base_line, ...,
    # dsc*, fallback*}; the DUMMY faces are 2-glyph stubs whose fallback points at the
    # real CN face, which is why a size heuristic picks the wrong one.
    objs = font_objects(d, base, fl)
    face, lh = resolve_font(d, base, fl, objs, fname, text)

    gs = [glyph(d, face, gid_for(d, base, face, ord(c))) for c in text]
    width = sum(g['adv'] / 16 for g in gs)
    top = max(g['oy'] + g['h'] for g in gs)
    height = top - min(g['oy'] for g in gs)

    ALIGN = {1: 'TOP_LEFT', 2: 'TOP_MID', 3: 'TOP_RIGHT', 4: 'BOTTOM_LEFT',
             5: 'BOTTOM_MID', 6: 'BOTTOM_RIGHT', 7: 'LEFT_MID', 8: 'RIGHT_MID', 9: 'CENTER'}
    a = ALIGN.get(align, f'?{align}')
    if a.endswith('MID') and a.startswith('TOP'):   ox0, oy0 = (W - width) / 2, 0
    elif a == 'CENTER':                              ox0, oy0 = (W - width) / 2, (H - height) / 2
    elif a.startswith('BOTTOM'):                     ox0, oy0 = (W - width) / 2, H - height
    else:                                            ox0, oy0 = 0, 0
    ox0 += (x_ofs or 0); oy0 += (y_ofs or 0)

    img = Image.new('RGB', (W, H), (0, 0, 0))
    pen = ox0
    for g in gs:
        if g['px']:
            y0 = oy0 + (top - (g['oy'] + g['h']))
            for r in range(g['h']):
                for c in range(g['w']):
                    v = g['px'][r * g['w'] + c]
                    if not v: continue
                    px, py = int(pen + g['ox'] + c), int(y0 + r)
                    if 0 <= px < W and 0 <= py < H:
                        img.putpixel((px, py), (0, min(255, int(v * 1.05)), 40))
        pen += g['adv'] / 16
    img.save(out)

    print(f"  panel        {W}x{H}")
    print(f"  clock font   {fname} -> face struct 0x{face['struct']:x}, bpp{face['bpp']}"
          + (f", line_height={lh}" if lh else ""))
    print(f"  align        {a}  x_ofs={x_ofs}  y_ofs={y_ofs}")
    print(f"  text         {text!r}  ->  {width:.1f} x {height} px"
          f"  ({100*width/W:.1f}% of width, {100*height/H:.1f}% of height)")
    print(f"  drawn at     x={ox0:.1f}  y={oy0:.1f}")
    print(f"  wrote        {out}")

if __name__ == '__main__':
    main()
