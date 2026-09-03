#!/usr/bin/env python3
"""Extract compiled-in LVGL fonts from Star Air platform_tester.bin.

v2 vs v1: reads the REAL glyph_bitmap / glyph_dsc / cmaps pointers out of the
lv_font_fmt_txt_dsc_t struct instead of scanning for them. v1 landed 1-2 bytes
late on glyph_bitmap and papered over the resulting 8-bit shift with
row_shift/row_rotate heuristics; none of that is needed here.
"""
import struct, json, sys
from pathlib import Path
from PIL import Image

FW   = Path(__file__).resolve().parent
BIN  = FW / "x_1.0.12.83/platform_tester.bin"
OUT  = FW / "analysis/fonts_v2"
DATA = 0x3BFD7C0C            # PSRAM copy base: runtime VA = file_off + DATA

# name -> (lv_font_fmt_txt_dsc_t file offset, bpp)
FACES = {"small": (0x2fd65c, 1), "medium": (0x2015e8, 4), "large": (0x19d0e0, 1)}

d = BIN.read_bytes()
def fo(va): return va - DATA

class Face:
    def __init__(self, name, st, bpp):
        self.name, self.bpp = name, bpp
        w = struct.unpack_from("<8I", d, st)
        self.bmp  = fo(w[3])          # glyph_bitmap
        self.dsc  = fo(w[4])          # glyph_dsc
        self.cmap = fo(w[5])          # cmaps
        packed = w[7] >> 16
        self.cmap_num      = packed & 0x1FF        # 34
        self.bpp_declared  = (packed >> 9) & 0xF   # cross-check vs FACES
        self.bitmap_format = (packed >> 14) & 3    # 0 = PLAIN (not RLE)
        assert self.bpp_declared == bpp, f"{name}: bpp {self.bpp_declared} != {bpp}"
        assert self.bitmap_format == 0, f"{name}: bitmap_format {self.bitmap_format} != PLAIN"
        # lv_font_fmt_txt_cmap_t is 20 B. type 0/2 = FORMAT0 (dense, gid = gs + cp-rs);
        # type 1/3 = SPARSE, only list_length glyphs exist, listed in unicode_list (u16 each).
        self.ranges = []
        for i in range(self.cmap_num):
            o = self.cmap + i * 20
            rs, rl, gs, ul, gl, ll, ty = struct.unpack_from("<IHHIIHH", d, o)
            ty &= 0xFF
            ulist = None
            if ty in (1, 3) and ul:
                base = fo(ul)
                ulist = list(struct.unpack_from(f"<{ll}H", d, base))
            self.ranges.append((rs, rl, gs, ty, ll, ulist))
        self.nglyph = max(gs + (ll if ty in (1, 3) else rl)
                          for rs, rl, gs, ty, ll, ulist in self.ranges)

    def gid(self, cp):
        for rs, rl, gs, ty, ll, ulist in self.ranges:
            if not (rs <= cp < rs + rl): continue
            if ty in (1, 3):
                if ulist is None: return 0
                off = cp - rs
                try: return gs + ulist.index(off)
                except ValueError: return 0
            return gs + (cp - rs)
        return 0

    def dscof(self, gid):
        return struct.unpack_from("<IIHHhh", d, self.dsc + gid * 16)

    def pixels(self, gid):
        bi, adv, bw, bh, ox, oy = self.dscof(gid)
        if bw == 0 or bh == 0: return [], 0, 0, ox, oy, adv
        n = (bw * bh * self.bpp + 7) // 8
        b = d[self.bmp + bi : self.bmp + bi + n]
        px = []
        for i in range(bw * bh):
            if self.bpp == 1:
                px.append(((b[i >> 3] >> (7 - (i & 7))) & 1) * 255)
            else:
                v = (b[i >> 1] >> 4) if (i & 1) == 0 else (b[i >> 1] & 15)
                px.append(v * 17)
        return px, bw, bh, ox, oy, adv

    def text(self, s, pad=6, scale=1):
        gs = [self.pixels(self.gid(ord(c))) for c in s]
        gs = [g for g in gs if g[1] or g[5]]
        if not gs: return None
        top = max(oy + bh for _, bw, bh, ox, oy, _ in gs)
        bot = min(oy for _, bw, bh, ox, oy, _ in gs)
        H, W = top - bot, sum(round(g[5] / 16) for g in gs) + 8
        img = Image.new("L", (W, H), 0)
        pen = 0
        for px, bw, bh, ox, oy, adv in gs:
            y0 = top - (oy + bh)
            for r in range(bh):
                for c in range(bw):
                    x, y = pen + ox + c, y0 + r
                    if 0 <= x < W and 0 <= y < H:
                        img.putpixel((x, y), max(img.getpixel((x, y)), px[r * bw + c]))
            pen += round(adv / 16)
        img = img.crop((0, 0, min(pen + 8, W), H))
        if scale > 1: img = img.resize((img.width*scale, img.height*scale), Image.NEAREST)
        return img

    def atlas(self, cps, cols=32, scale=2):
        cells = []
        for cp in cps:
            g = self.gid(cp)
            if g == 0: continue
            px, bw, bh, ox, oy, adv = self.pixels(g)
            cells.append((px, bw, bh, ox, oy, adv))
        if not cells: return None
        cw = max(max(bw + max(ox,0), round(adv/16)) for _, bw, bh, ox, oy, adv in cells) + 2
        top = max(oy + bh for _, bw, bh, ox, oy, _ in cells)
        bot = min(oy for _, bw, bh, ox, oy, _ in cells)
        chh = top - bot + 2
        rows = (len(cells) + cols - 1) // cols
        img = Image.new("L", (cw * cols, chh * rows), 0)
        for i, (px, bw, bh, ox, oy, adv) in enumerate(cells):
            cx, cy = (i % cols) * cw + 1, (i // cols) * chh + 1
            y0 = top - (oy + bh)
            for r in range(bh):
                for c in range(bw):
                    x, y = cx + ox + c, cy + y0 + r
                    if 0 <= x < img.width and 0 <= y < img.height:
                        img.putpixel((x, y), px[r * bw + c])
        return img.resize((img.width*scale, img.height*scale), Image.NEAREST)

OUT.mkdir(parents=True, exist_ok=True)
meta = {"source": BIN.name, "note": "bases read from lv_font_fmt_txt_dsc_t; no row_shift heuristics", "faces": []}
SAMPLE = "Hamburgefonstiv 0123456789"
for name, (st, bpp) in FACES.items():
    f = Face(name, st, bpp)
    caps = [f.dscof(f.gid(c))[3] for c in b"AEHIT"]
    meta["faces"].append({
        "name": name, "bpp": bpp,
        "glyph_dsc_off": hex(f.dsc), "glyph_bitmap_off": hex(f.bmp), "cmaps_off": hex(f.cmap),
        "glyph_count": f.nglyph, "bitmap_format": f.bitmap_format, "cmap_ranges": [
            {"start": hex(rs), "len": rl, "gid_start": gs, "type": ty, "sparse_list_len": (ll if ty in (1,3) else None)} for rs, rl, gs, ty, ll, ul in f.ranges],
        "cap_height_px": max(caps),
    })
    f.text(SAMPLE, scale=3).save(OUT / f"{name}_sample.png")
    f.atlas(range(0x20, 0x7F)).save(OUT / f"{name}_ascii.png")
    lat = [c for c in range(0xA0, 0x250) if f.gid(c)]
    if lat: f.atlas(lat).save(OUT / f"{name}_latin_ext.png")
    # raw, correctly-based data
    last = max(f.dscof(g)[0] + (f.dscof(g)[2]*f.dscof(g)[3]*bpp + 7)//8 for g in range(1, f.nglyph))
    (OUT / f"{name}_glyph_bitmap.bin").write_bytes(d[f.bmp:f.bmp+last])
    (OUT / f"{name}_glyph_dsc.bin").write_bytes(d[f.dsc:f.dsc + f.nglyph*16])
    print(f"{name:7} bpp{bpp} glyphs={f.nglyph:5} cap={max(caps)}px "
          f"bitmap@{hex(f.bmp)} ({last} B) ranges={len(f.ranges)}")

# CJK sample if the fonts cover it
for name, (st, bpp) in FACES.items():
    f = Face(name, st, bpp)
    cjk = "".join(c for c in "小溪你好中文字体" if f.gid(ord(c)))
    if cjk:
        f.text(cjk, scale=3).save(OUT / f"{name}_cjk.png")
        print(f"  {name}: CJK covered -> {cjk}")

(OUT / "manifest_v2.json").write_text(json.dumps(meta, indent=2))
print("\nwrote", OUT)
