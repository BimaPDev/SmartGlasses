#!/usr/bin/env python3
"""Generate a big clock face by CLONING a stock face's byte structure.

  python3 make_clock_font.py <in.bin> <out.bin> [--size auto] [--font PATH] [--dry-run]

WHY A CLONE RATHER THAN A FIX

The previous injected face renders sheared on the device: the firmware reads 37-px rows
where the descriptor says 36. Four hypotheses were tested and ruled out (format flags,
pointer rounding, cmap off-by-one, adv_w), so the cause is unidentified — see
.unlazy/font/GATES.md, where F3/F4/F5 are recorded as abandoned.

Rather than chase it, this builds the tables to match a face the device ALREADY renders
correctly, field for field and alignment for alignment. That replaces an unknown defect
with a known-good template.

ONE DEFECT IS KNOWN AND IS FIXED HERE: the old glyph_dsc array sat at 0x3ed0cb,
misaligned by 3. Every stock face's dsc is 4-byte aligned. Whether or not that caused
the shear, it is wrong, and every table this writes is aligned.

SPACE IS THE BINDING CONSTRAINT

Exactly one zero run exists in the PSRAM data region OUTSIDE the DSP/sensor_hub
forbidden union: 0x3EC950-0x3ED22E, 2,270 bytes. Everything larger sits inside the
sub-images and must never be written. So the face is sized to FIT rather than to a
number picked in advance, and the tool reports the size it achieved.

LAYOUT WRITTEN (all 4-byte aligned, in this order)
    glyph_bitmap   continuous bitstream, no row padding, MSB first
    glyph_dsc      16-byte entries {u32 bitmap_index; u32 adv_w; u16 box_w, box_h;
                                    i16 ofs_x, ofs_y}   <- the vendor's layout, NOT
                                    LVGL's packed 8-byte one; verified against stock
    cmap           20-byte, type 0 dense, U+0030..U+003A ('0'-'9' and ':')
"""
import argparse
import struct
import sys
from pathlib import Path

from PIL import Image, ImageDraw, ImageFont

FACE = 0x211B9C          # the donor face struct (scan offset; real struct at +12)
FONT_OBJ = 0x491D1C      # its lv_font_t
CLOCK_FONT_LIT = 0x61B2C4   # the clock ctor's FONT_* name literal
NAME_EN_32 = 0x41A2A4       # "FONT_EN_32_NORMAL" -> resolves to the donor face
NAME_DUMMY_20 = 0x177B0C    # "FONT_DUMMY_20" -> the stock 14px face
HOLE_LO, HOLE_HI = 0x3EC950, 0x3ED22E
DATA_DELTA = 0x3BFD7CB0
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
CHARS = "./0123456789:"
CP_LO = 0x2E             # '.'; the donor's EXISTING cmap is U+002E..U+003A, 13 entries,
                         # and this set is chosen to match it so the cmap is not touched
DEFAULT_FONT = "/System/Library/Fonts/Helvetica.ttc"


def render_glyphs(path, size):
    """Rasterise CHARS at `size` px, 1-bit, trimmed. Returns metrics + bitmaps."""
    f = ImageFont.truetype(path, size)
    asc, desc = f.getmetrics()
    out = []
    for ch in CHARS:
        w = int(f.getlength(ch))
        img = Image.new('L', (max(w, size) + size, asc + desc), 0)
        ImageDraw.Draw(img).text((size // 2, 0), ch, font=f, fill=255)
        bb = img.point(lambda v: 255 if v >= 128 else 0).getbbox()
        if bb is None:
            out.append(dict(ch=ch, bw=0, bh=0, ox=0, oy=0, adv=w, bits=[]))
            continue
        x0, y0, x1, y1 = bb
        crop = img.crop(bb).point(lambda v: 1 if v >= 128 else 0)
        bits = list(crop.getdata())
        out.append(dict(ch=ch, bw=x1 - x0, bh=y1 - y0,
                        ox=x0 - size // 2,
                        oy=asc - y1,                 # baseline-relative, like stock
                        adv=w, bits=bits))
    return out, asc, desc


def pack(gl):
    """Continuous bitstream, MSB first, no row padding — the stock format."""
    blob = bytearray()
    for g in gl:
        g['index'] = len(blob)
        if not g['bits']:
            continue
        acc = bytearray((len(g['bits']) + 7) // 8)
        for i, v in enumerate(g['bits']):
            if v:
                acc[i >> 3] |= 1 << (7 - (i & 7))
        blob += acc
    return bytes(blob)


def build(size, fontpath):
    gl, asc, desc = render_glyphs(fontpath, size)
    blob = pack(gl)
    bm_len = (len(blob) + 3) & ~3
    dsc_len = (len(gl) + 1) * 16          # +1 for the reserved gid 0
    total = bm_len + dsc_len
    return gl, asc, desc, blob, bm_len, dsc_len, total


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--size', default='auto')
    ap.add_argument('--font', default=DEFAULT_FONT)
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR')

    budget = HOLE_HI - HOLE_LO
    if a.size == 'auto':
        chosen = None
        for s in range(64, 15, -1):
            r = build(s, a.font)
            if r[6] <= budget:
                chosen, size = r, s
                break
        if not chosen:
            sys.exit('refusing: no size fits the 2,270-byte hole')
    else:
        size = int(a.size)
        chosen = build(size, a.font)
        if chosen[6] > budget:
            sys.exit(f'refusing: size {size} needs {chosen[6]} B, hole is {budget} B')
    gl, asc, desc, blob, bm_len, dsc_len, total = chosen

    bm_at = HOLE_LO
    dsc_at = bm_at + bm_len
    cmap_at = None                     # the existing cmap is reused untouched
    assert bm_at % 4 == 0 and dsc_at % 4 == 0, 'alignment'
    assert dsc_at + dsc_len <= HOLE_HI, 'overruns the hole'

    tall = max(g['bh'] for g in gl)
    print(f'  font       {Path(a.font).name} @ {size}px')
    print(f'  glyphs     {len(gl)} ({CHARS})  tallest {tall}px  widest {max(g["bw"] for g in gl)}px')
    print(f'  space      bitmap {len(blob)}B -> {bm_len}B (pad), dsc {dsc_len}B, cmap 20B'
          f'  = {total}B of {budget}B')
    print(f'  layout     bitmap 0x{bm_at:06x}  dsc 0x{dsc_at:06x}  (4-byte aligned); '
          f'cmap + kern_dsc left as the donor had them')
    print(f'  metrics    ascent {asc} descent {desc} -> line_height {asc + desc}')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    # wipe the hole so nothing of the old font survives to confuse a later reader
    d[HOLE_LO:HOLE_HI] = b'\x00' * (HOLE_HI - HOLE_LO)
    d[bm_at:bm_at + len(blob)] = blob

    # glyph_dsc: gid 0 is the reserved "not found" entry, all zero
    ent = bytearray(16)
    d[dsc_at:dsc_at + 16] = ent
    for i, g in enumerate(gl):
        o = dsc_at + (i + 1) * 16
        struct.pack_into('<IIHHhh', d, o, g['index'], int(round(g['adv'] * 16)),
                         g['bw'], g['bh'], g['ox'], g['oy'])

    # DO NOT write a new cmap and DO NOT null kern_dsc.
    #
    # Established by diffing a booting image against a crashing one: v2 kept the donor's
    # ORIGINAL cmap (0x3c1e9844) and kern_dsc (0x3c1ea120) and boots; v3 replaced the
    # cmap and set kern_dsc = NULL and does not boot. A null kern_dsc dereferenced
    # without a guard is a boot-time fault, and the existing cmap already describes
    # exactly U+002E..U+003A -> gid 1.., which is why CHARS matches that range.
    s = FACE + 12
    struct.pack_into('<II', d, s, bm_at + DATA_DELTA, dsc_at + DATA_DELTA)
    packed = (1 & 0x1FF) | (1 << 9) | (0 << 13) | (0 << 14)    # cmaps=1 bpp=1 fmt=plain
    struct.pack_into('<H', d, s + 18, packed)

    # Extend the EXISTING cmap in place to cover ':'. Stock covers U+002E..U+0039 —
    # twelve codepoints, NO colon — so a clock rendered "05:30" as "05<box>30". v2 did
    # exactly this (same cmap address, length 12 -> 13) and boots; v3 RELOCATED the cmap
    # and did not. Change the length field, never the pointer.
    cmap_off = struct.unpack_from('<I', d, FACE + 12 + 8)[0] - DATA_DELTA
    cstart, clen, cgid = struct.unpack_from('<IHH', d, cmap_off)
    assert cstart == CP_LO, f'cmap starts at U+{cstart:04X}, expected U+{CP_LO:04X}'
    if clen < len(CHARS):
        struct.pack_into('<H', d, cmap_off + 4, len(CHARS))
        print(f'  cmap 0x{cmap_off:06x}: range_length {clen} -> {len(CHARS)} '
              f'(now covers U+{cstart:04X}..U+{cstart + len(CHARS) - 1:04X}, i.e. through ":")')

    # lv_font_t: keep base_line at the donor's value (2). v2 used 2 and boots; v3 used
    # the typeface descent (15) and does not. Only line_height grows for taller glyphs.
    struct.pack_into('<h', d, FONT_OBJ + 8, max(g['bh'] for g in gl) + 8)

    # point the standby clock at this face. The ctor loads a FONT_* NAME literal, so
    # this swaps which name it asks for rather than touching the font manager.
    cur = struct.unpack_from('<I', d, CLOCK_FONT_LIT)[0]
    if cur == NAME_DUMMY_20 + DATA_DELTA:
        struct.pack_into('<I', d, CLOCK_FONT_LIT, NAME_EN_32 + DATA_DELTA)
        print(f'  clock font literal 0x{CLOCK_FONT_LIT:06x}: FONT_DUMMY_20 -> FONT_EN_32_NORMAL')
    elif cur == NAME_EN_32 + DATA_DELTA:
        print(f'  clock font literal already points at FONT_EN_32_NORMAL')
    else:
        sys.exit(f'refusing: 0x{CLOCK_FONT_LIT:06x} = 0x{cur:08x}, expected a known FONT_* name')

    out = a.outfile or a.infile.replace('.bin', '_clockfont.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length)')


if __name__ == '__main__':
    main()
