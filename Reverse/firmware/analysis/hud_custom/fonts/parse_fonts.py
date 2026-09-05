#!/usr/bin/env python3
"""LEAF 1.4 - LVGL font parser for platform_tester.bin (star-air 1.0.12.83).

Address model:  CODE VA = file + 0x2C010000 ;  DATA file = VA - 0x3BFD7C0C
"""
import struct, json, os, sys

ROOT = os.path.dirname(os.path.abspath(__file__))
BIN  = os.path.join(ROOT, '..', '..', '..', 'x_1.0.12.83', 'platform_tester.bin')
D    = 0x3BFD7C0C            # DATA: file = VA - D
CODE = 0x2C010000

B = open(BIN, 'rb').read()

def u8(o):  return B[o]
def u16(o): return struct.unpack_from('<H', B, o)[0]
def i16(o): return struct.unpack_from('<h', B, o)[0]
def u32(o): return struct.unpack_from('<I', B, o)[0]
def p(o):
    v = u32(o)
    return None if v == 0 else v - D

CMAP_TYPES = {0: 'FORMAT0_FULL', 1: 'SPARSE_FULL', 2: 'FORMAT0_TINY', 3: 'SPARSE_TINY'}

class Face:
    def __init__(self, dsc_off):
        self.dsc = dsc_off
        self.bitmap    = p(dsc_off + 0)
        self.glyph_dsc = p(dsc_off + 4)
        self.cmaps     = p(dsc_off + 8)
        self.kern_dsc  = p(dsc_off + 12)
        self.kern_scale = u16(dsc_off + 16)
        packed = u16(dsc_off + 18)
        self.cmap_num      = packed & 0x1FF
        self.bpp           = (packed >> 9) & 0xF
        self.kern_classes  = (packed >> 13) & 1
        self.bitmap_format = (packed >> 14) & 3
        self.packed = packed
        self.ranges = []
        for i in range(self.cmap_num):
            c = self.cmaps + 20 * i
            self.ranges.append(dict(
                off=c,
                range_start=u32(c),
                range_length=u16(c + 4),
                glyph_id_start=u16(c + 6),
                unicode_list=p(c + 8),
                glyph_id_ofs_list=p(c + 12),
                list_length=u16(c + 16),
                type=u16(c + 18),
            ))
        # build codepoint -> glyph id
        self.cp2gid = {}
        for r in self.ranges:
            t = r['type']
            if t in (0, 2):        # dense
                n = r['range_length']
                for k in range(n):
                    gid = r['glyph_id_start'] + k
                    if t == 0 and r['glyph_id_ofs_list'] is not None:
                        gid = r['glyph_id_start'] + u8(r['glyph_id_ofs_list'] + k)
                    self.cp2gid[r['range_start'] + k] = gid
            else:                  # sparse: list_length entries
                n = r['list_length']
                for k in range(n):
                    cp = r['range_start'] + u16(r['unicode_list'] + 2 * k)
                    if t == 1 and r['glyph_id_ofs_list'] is not None:
                        gid = r['glyph_id_start'] + u16(r['glyph_id_ofs_list'] + 2 * k)
                    else:
                        gid = r['glyph_id_start'] + k
                    self.cp2gid[cp] = gid
        self.max_gid = max(self.cp2gid.values()) if self.cp2gid else 0
        self.nglyph = self.max_gid + 1     # incl. glyph 0 (not-found)

    def gdsc(self, gid):
        o = self.glyph_dsc + 16 * gid
        return dict(bitmap_index=u32(o), adv_w=u32(o + 4),
                    box_w=u16(o + 8), box_h=u16(o + 10),
                    ofs_x=i16(o + 12), ofs_y=i16(o + 14))

    def bitmap_bytes(self, gid):
        g = self.gdsc(gid)
        nbits = g['box_w'] * g['box_h'] * self.bpp
        nb = (nbits + 7) // 8
        st = self.bitmap + g['bitmap_index']
        return g, B[st:st + nb]

    def render(self, gid):
        """return (w, h, [[level 0..(2^bpp-1)]]) """
        g, raw = self.bitmap_bytes(gid)
        w, h, bpp = g['box_w'], g['box_h'], self.bpp
        rows = []
        bit = 0
        for y in range(h):
            row = []
            for x in range(w):
                byte = raw[bit >> 3] if (bit >> 3) < len(raw) else 0
                sh = 8 - bpp - (bit & 7)
                row.append((byte >> sh) & ((1 << bpp) - 1))
                bit += bpp
            rows.append(row)
        return w, h, rows

    def bitmap_span(self):
        """total glyph-bitmap bytes = end of last glyph's data"""
        end = 0
        for gid in range(self.nglyph):
            g = self.gdsc(gid)
            nb = (g['box_w'] * g['box_h'] * self.bpp + 7) // 8
            end = max(end, g['bitmap_index'] + nb)
        return end


# --- lv_font_t discovery -------------------------------------------------
GET_BM, GET_DSC = 0x2c639aa5, 0x2c639a3d
FONTS = []
for off in range(0, len(B) - 8, 4):
    if u32(off) == GET_BM and u32(off + 4) == GET_DSC:
        FONTS.append(off)

def font_info(f):
    return dict(off=f,
                line_height=u16(f + 8), base_line=u16(f + 10),
                subpx=u8(f + 12),
                underline_position=struct.unpack_from('<b', B, f + 13)[0],
                underline_thickness=struct.unpack_from('<b', B, f + 14)[0],
                dsc=p(f + 16), fallback=p(f + 20))

if __name__ == '__main__':
    for f in FONTS:
        i = font_info(f)
        fa = Face(i['dsc'])
        print('font@%06x lh=%-3d bl=%-3d dsc=%06x bpp=%d cmaps=%d glyphs=%d fb=%s'
              % (f, i['line_height'], i['base_line'], i['dsc'], fa.bpp,
                 fa.cmap_num, fa.nglyph,
                 ('%06x' % i['fallback']) if i['fallback'] else '-'))
