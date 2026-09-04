#!/usr/bin/env python3
"""Replace a font glyph with artwork, turning a codepoint into a phone-triggerable icon.

The glasses' fonts are alpha masks on a 16-level green ramp -- structurally identical
to the IDX4 images -- so a glyph slot can hold arbitrary art. Unlike an image asset,
a glyph is drawn by putting its codepoint in a string, so the phone can trigger it
with no firmware code change.

Locates faces by struct pattern (not hardcoded offsets), so it works across builds.
In-place only: new bitmap must fit the slot's existing byte budget.

  python3 patch_glyph.py <fw.bin> <codepoint> <art.png> [out.bin] [--face medium] [--dry-run]
  codepoint: U+XXXX, 0xXXXX, or a single character
"""
import struct, sys, argparse
from pathlib import Path
from PIL import Image

DATA_FALLBACK = 0x3BFD7C0C

def derive_data_base(d):
    """0x3C000000 - this build's PSRAM copy offset, validated on the font structs."""
    import re
    best = (0, DATA_FALLBACK)
    for m in re.finditer(re.escape(struct.pack('<I', 0x3C000000)), d[:0x4000]):
        for k in range(-16, 20, 4):
            p = m.start() + k
            if p < 0 or p + 4 > len(d): continue
            v = struct.unpack_from('<I', d, p)[0]
            if 0x2C010000 <= v < 0x2C010000 + len(d):
                b = 0x3C000000 - (v - 0x2C010000)
                n = len(find_faces(d, b))
                if n > best[0]: best = (n, b)
    return best[1]

def find_faces(d, base):
    """All lv_font_fmt_txt_dsc_t structs: word[3]=bitmap, [4]=dsc, [5]=cmaps, [7]>>16 packs bpp."""
    out = []
    for o in range(0, len(d) - 32, 4):
        w = struct.unpack_from('<8I', d, o)
        if not all(0x3C000000 <= w[i] < 0x3C500000 for i in (3, 4, 5)): continue
        packed = w[7] >> 16
        cmn, bpp, fmt = packed & 0x1FF, (packed >> 9) & 0xF, (packed >> 14) & 3
        if fmt != 0 or bpp not in (1, 2, 4, 8) or not (1 <= cmn <= 64): continue
        bmp, dsc, cm = w[3] - base, w[4] - base, w[5] - base
        if not all(0 <= x < len(d) for x in (bmp, dsc, cm)): continue
        rs, rl, gs, ul, gl, ll, ty = struct.unpack_from('<IHHIIHH', d, cm)
        if rl == 0 or rl > 0x3000 or rs > 0x30000: continue
        n = 0
        for i in range(cmn):
            a, b_, c, _, _, e, t = struct.unpack_from('<IHHIIHH', d, cm + i * 20)
            n = max(n, c + (e if (t & 0xFF) in (1, 3) else b_))
        out.append(dict(struct=o, bitmap=bmp, dsc=dsc, cmaps=cm, bpp=bpp,
                        ranges=cmn, glyphs=n))
    return out

def gid_for(d, base, face, cp):
    for i in range(face['ranges']):
        rs, rl, gs, ul, gl, ll, ty = struct.unpack_from('<IHHIIHH', d, face['cmaps'] + i * 20)
        ty &= 0xFF
        if not (rs <= cp < rs + rl): continue
        if ty in (1, 3):
            if not ul: return 0
            lst = list(struct.unpack_from(f'<{ll}H', d, ul - base))
            off = cp - rs
            return gs + lst.index(off) if off in lst else 0
        return gs + (cp - rs)
    return 0

def glyph(d, face, gid):
    return struct.unpack_from('<IIHHhh', d, face['dsc'] + gid * 16)

def budget(d, face, gid):
    """Bytes available in this slot: distance to the next glyph's bitmap_index."""
    bi = glyph(d, face, gid)[0]
    nxt = glyph(d, face, gid + 1)[0] if gid + 1 < face['glyphs'] else None
    if nxt is None or nxt < bi: return None
    return nxt - bi

def rasterize(img, bpp, max_bytes):
    """Fit the image to the largest w*h whose packed size fits max_bytes."""
    img = img.convert('LA') if img.mode in ('RGBA', 'LA', 'P') else img.convert('L')
    if img.mode == 'LA':                      # composite alpha onto black
        a = img.split()[1]; l = img.split()[0]
        img = Image.eval(Image.merge('L', (l,)), lambda v: v)
        img.putalpha = None
        base = Image.new('L', a.size, 0); base.paste(l, (0, 0), a); img = base
    w, h = img.size
    scale = 1.0
    while True:
        nw, nh = max(1, int(w * scale)), max(1, int(h * scale))
        if (nw * nh * bpp + 7) // 8 <= max_bytes: break
        scale *= 0.97
        if scale < 0.02: raise SystemExit("artwork cannot be shrunk into the slot")
    im = img.resize((nw, nh), Image.LANCZOS)
    out = bytearray()
    if bpp == 4:
        px = []
        for y in range(nh):
            for x in range(nw): px.append(min(15, im.getpixel((x, y)) * 16 // 256))
        for i in range(0, len(px), 2):
            hi = px[i] << 4
            lo = px[i + 1] if i + 1 < len(px) else 0
            out.append(hi | lo)
    elif bpp == 1:
        bits = []
        for y in range(nh):
            for x in range(nw): bits.append(1 if im.getpixel((x, y)) >= 128 else 0)
        for i in range(0, len(bits), 8):
            b = 0
            for j in range(8):
                if i + j < len(bits) and bits[i + j]: b |= 1 << (7 - j)
            out.append(b)
    else:
        raise SystemExit(f"bpp {bpp} not supported")
    return bytes(out), nw, nh

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('fw'); ap.add_argument('codepoint'); ap.add_argument('art')
    ap.add_argument('out', nargs='?')
    ap.add_argument('--face', default='medium', choices=['small', 'medium', 'large'])
    ap.add_argument('--dry-run', action='store_true')
    ap.add_argument('--list-slots', type=int, metavar='N',
                    help='print the N largest reusable glyph slots and exit')
    a = ap.parse_args()

    cp = (int(a.codepoint[2:], 16) if a.codepoint.upper().startswith(('U+', '0X'))
          else ord(a.codepoint) if len(a.codepoint) == 1 else int(a.codepoint, 0))
    d = bytearray(Path(a.fw).read_bytes())
    base = derive_data_base(bytes(d))
    faces = find_faces(bytes(d), base)
    big = sorted([f for f in faces if f['glyphs'] > 1000], key=lambda f: f['glyphs'])
    if len(big) < 3: raise SystemExit(f"expected 3 full faces, found {len(big)}")
    order = {'small': None, 'medium': None, 'large': None}
    for f in big:
        cap = glyph(bytes(d), f, 34)[3]          # 'A' box height distinguishes them
        f['cap'] = cap
    big.sort(key=lambda f: f['cap'])
    order['small'], order['medium'], order['large'] = big[0], big[1], big[2]
    face = order[a.face]
    print(f"  data base {hex(base)}  |  face '{a.face}' struct {hex(face['struct'])} "
          f"bpp{face['bpp']} glyphs {face['glyphs']}")

    if a.list_slots:
        import math
        g2cp = {}
        for i in range(face['ranges']):
            rs, rl, gs, ul, gl, ll, ty = struct.unpack_from('<IHHIIHH', d, face['cmaps'] + i * 20)
            ty &= 0xFF
            if ty in (1, 3):
                if not ul: continue
                lst = list(struct.unpack_from(f'<{ll}H', d, ul - base))
                for k, off in enumerate(lst): g2cp[gs + k] = rs + off
            else:
                for k in range(rl): g2cp[gs + k] = rs + k
        rows = []
        for g in range(96, face['glyphs'] - 1):
            b = budget(bytes(d), face, g)
            if b: rows.append((b, g, g2cp.get(g)))
        rows.sort(reverse=True)
        print(f"\n  {'budget':>7} {'gid':>5} {'codepoint':>10}   max square icon")
        for b, g, c in rows[:a.list_slots]:
            side = int(math.isqrt(b * 8 // face['bpp']))
            print(f"  {b:>7} {g:>5}   U+{c:04X}     ~{side}x{side}")
        return

    gid = gid_for(bytes(d), base, face, cp)
    if not gid: raise SystemExit(f"U+{cp:04X} is not in this face's cmap — pick a mapped codepoint")
    bi, adv, bw, bh, ox, oy = glyph(bytes(d), face, gid)
    bud = budget(bytes(d), face, gid)
    print(f"  U+{cp:04X} -> gid {gid}  current box {bw}x{bh}  bitmap@{hex(face['bitmap']+bi)}  budget {bud} B")
    if not bud: raise SystemExit("could not determine a byte budget for this glyph")

    blob, nw, nh = rasterize(Image.open(a.art), face['bpp'], bud)
    print(f"  artwork fitted to {nw}x{nh} bpp{face['bpp']} = {len(blob)} B  (fits {bud} B)")
    assert len(blob) <= bud

    if a.dry_run:
        print("  --dry-run: nothing written"); return
    off = face['bitmap'] + bi
    d[off:off + len(blob)] = blob
    if len(blob) < bud: d[off + len(blob):off + bud] = b'\x00' * (bud - len(blob))
    # advance = icon width + 1px side bearing, in 1/16 px. Keeping the ORIGINAL adv_w
    # (as an earlier version did) leaves a huge gap after a smaller icon.
    new_adv = (nw + 1) * 16
    struct.pack_into('<IIHHhh', d, face['dsc'] + gid * 16, bi, new_adv, nw, nh, 0, 0)
    print(f"  advance {adv/16:.1f}px -> {new_adv/16:.1f}px")
    out = a.out or a.fw.replace('.bin', '_glyph.bin')
    Path(out).write_bytes(bytes(d))
    print(f"  wrote {out}  ({len(d)} B, unchanged)")

if __name__ == '__main__': main()
