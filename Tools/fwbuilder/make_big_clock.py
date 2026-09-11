#!/usr/bin/env python3
"""Build a big clock font and patch it into platform_tester.bin (1.0.11.53).

WHAT THIS CHANGES, and why each target is safe — every claim here was verified against
the image before the patcher was written (see verify-big-clock.mjs for the gates):

  1. The clock's font-name literal at file 0x61b2c4
       "FONT_DUMMY_20" -> "FONT_EN_32_NORMAL"
     That pool word has EXACTLY ONE LDR referencing it (0x61b142), so this retargets
     the clock and nothing else. FONT_DUMMY_20 has 176 LDR sites across the UI and is
     never touched.

  2. The donor face at 0x211ba8 (reached by FONT_CN_32_NORMAL / FONT_EN_32_NORMAL)
       glyph_bitmap, glyph_dsc -> the new tables; bpp 4 -> 1
     Both donor names have ZERO non-registration users, and the face is a broken
     leftover: its bitmap blob ends after '8', so it cannot even render a '9'.
     Replacing it cannot regress anything that works today.

  3. Its cmap at 0x211b94: range_length 12 -> 13, so the range '.'..'9' becomes
     '.'..':' and the colon gets a glyph id. Without this the clock renders "0832" —
     the two largest stock faces are digit-only and this is why a naive repoint fails.

  4. The lv_font_t at 0x491d1c: line_height / base_line for the new size.

New tables go into the zero run at 0x3ec950 (2,270 bytes), which was verified to have
ZERO pointers into it and to lie outside both the HiFi4 DSP and sensor_hub sub-images.
Nothing is appended, the file length does not change, and every pointer stays in PSRAM
(0x3C...) exactly as the firmware already stores font data.

  python3 make_big_clock.py <in.bin> <out.bin> [--size 48] [--font PATH] [--dry-run]
"""
import argparse
import struct
import sys
from pathlib import Path

from PIL import Image, ImageDraw, ImageFont

BASE = 0x3BFD7CB0                  # 1.0.11.53 data base
FREE, FREE_LEN = 0x3EC950, 2270    # verified-unreferenced zero run
FACE = 0x211BA8                    # lv_font_fmt_txt_dsc_t, donor
CMAP = 0x211B94
FONTOBJ = 0x491D1C                 # lv_font_t for FONT_*_32_*
CLOCK_POOL = 0x61B2C4              # the clock's font-name literal
NAME_EN32 = 0x41A2A4               # "FONT_EN_32_NORMAL"
NAME_DUMMY20 = 0x177B0C            # "FONT_DUMMY_20"

GLYPH0 = 0x2E                      # cmap range starts at '.'
CHARS = ".ndiag"                   # placeholder, replaced below
# Codepoints the new face covers, in cmap order: '.' '/' '0'..'9' ':'
COVER = [chr(c) for c in range(0x2E, 0x3B)]
DRAWN = set("0123456789:")         # '.' and '/' become empty glyphs to save space


def render_glyph(font, ch, target_h):
    """1-bit bitmap plus LVGL box metrics, tightly cropped."""
    pad = target_h
    img = Image.new('L', (pad * 2, pad * 2), 0)
    ImageDraw.Draw(img).text((pad // 2, pad // 2), ch, fill=255, font=font)
    bbox = img.getbbox()
    if not bbox:
        return None
    g = img.crop(bbox)
    # threshold to 1bpp; a clock wants crisp edges, and bpp1 is what fits
    px = g.point(lambda v: 255 if v >= 110 else 0)
    return px, bbox


def pack_bpp1(img):
    """LVGL bpp1: one continuous MSB-first bitstream over w*h pixels, no row padding."""
    w, h = img.size
    px = img.load()
    out = bytearray((w * h + 7) // 8)
    for i in range(w * h):
        if px[i % w, i // w]:
            out[i >> 3] |= 0x80 >> (i & 7)
    return bytes(out)


def build(size, font_path):
    font = ImageFont.truetype(font_path, size)
    # Measure a digit to get the common baseline/box height.
    ref, refbox = render_glyph(font, '8', size)
    digit_h = ref.size[1]

    glyphs, blob = {}, bytearray()
    for ch in COVER:
        if ch not in DRAWN:
            glyphs[ch] = dict(bi=0, w=0, h=0, ox=0, oy=0, adv=int(size * 0.30 * 16))
            continue
        r = render_glyph(font, ch, size)
        if r is None:
            glyphs[ch] = dict(bi=0, w=0, h=0, ox=0, oy=0, adv=int(size * 0.30 * 16))
            continue
        img, bbox = r
        w, h = img.size
        # Baseline-relative y offset: digits sit on the baseline (oy=0); the colon
        # is raised so it centres between the digits rather than sinking to the floor.
        oy = 0 if ch != ':' else max(0, (digit_h - h) // 2)
        bi = len(blob)
        blob += pack_bpp1(img)
        glyphs[ch] = dict(bi=bi, w=w, h=h, ox=1, oy=oy, adv=0)

    # TABULAR FIGURES. SF is proportional — '1' is 19px wide against '4' at 36 — and a
    # clock drawn with proportional digits visibly jitters as the time changes. Give
    # every digit the same advance and centre its bitmap inside it, so 11:11 and 08:32
    # occupy identical width. The colon keeps its own (narrow) advance.
    digits = [c for c in COVER if c.isdigit()]
    cell = max(glyphs[c]['w'] for c in digits) + max(2, int(size * 0.08))
    for ch in COVER:
        g = glyphs[ch]
        if ch.isdigit():
            g['adv'] = cell * 16
            g['ox'] = (cell - g['w']) // 2
        elif ch == ':':
            g['adv'] = int((g['w'] + max(2, size * 0.14)) * 16)
            g['ox'] = 1
        else:
            g['adv'] = int(size * 0.30 * 16)

    # glyph_dsc: index 0 reserved, then one per covered codepoint
    dsc = bytearray(16)
    for ch in COVER:
        g = glyphs[ch]
        dsc += struct.pack('<IIHHhh', g['bi'], g['adv'], g['w'], g['h'], g['ox'], g['oy'])
    return bytes(blob), bytes(dsc), glyphs, digit_h


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile'); ap.add_argument('outfile', nargs='?')
    ap.add_argument('--size', type=int, default=0, help='0 = pick the largest that fits')
    ap.add_argument('--font', default='/System/Library/Fonts/SFNS.ttf')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())

    # Sanity: refuse to run against anything but the build these offsets belong to.
    if b'Flyme XR 1.0.11.53.20241126_Air_intl_FR' not in d:
        sys.exit("refusing: this image is not 1.0.11.53_Air_intl_FR; every offset here "
                 "is build-specific")
    if struct.unpack_from('<I', d, CLOCK_POOL)[0] != NAME_DUMMY20 + BASE:
        sys.exit("refusing: clock pool word is not FONT_DUMMY_20 — already patched, or "
                 "wrong image")

    sizes = [a.size] if a.size else list(range(72, 31, -2))
    chosen = None
    for s in sizes:
        blob, dsc, glyphs, digit_h = build(s, a.font)
        if len(blob) + len(dsc) <= FREE_LEN:
            chosen = (s, blob, dsc, glyphs, digit_h)
            break
    if not chosen:
        sys.exit("no size fits the free run")
    size, blob, dsc, glyphs, digit_h = chosen

    blob_at = FREE
    dsc_at = FREE + len(blob)
    total = len(blob) + len(dsc)

    print(f"  font          {a.font}")
    print(f"  size          {size}pt -> digit height {digit_h}px "
          f"({100 * digit_h / 480:.1f}% of panel)")
    print(f"  bitmaps       {len(blob):5d} B  @file 0x{blob_at:06x}")
    print(f"  glyph_dsc     {len(dsc):5d} B  @file 0x{dsc_at:06x}  ({len(COVER) + 1} entries)")
    print(f"  total         {total:5d} B  of {FREE_LEN} free  "
          f"({FREE_LEN - total} spare)")
    print(f"  colon         {'present' if glyphs[':']['w'] else 'MISSING'}  "
          f"box {glyphs[':']['w']}x{glyphs[':']['h']}")

    if a.dry_run:
        print("\n  --dry-run: nothing written")
        return

    # Guard: the destination must still be all zeros.
    if any(d[FREE:FREE + FREE_LEN]):
        sys.exit("refusing: destination run is not zero-filled")

    d[blob_at:blob_at + len(blob)] = blob
    d[dsc_at:dsc_at + len(dsc)] = dsc

    # face: repoint tables, switch bpp 4 -> 1
    struct.pack_into('<I', d, FACE + 0, blob_at + BASE)     # glyph_bitmap
    struct.pack_into('<I', d, FACE + 4, dsc_at + BASE)      # glyph_dsc
    packed = struct.unpack_from('<H', d, FACE + 18)[0]
    struct.pack_into('<H', d, FACE + 18, (packed & ~(0xF << 9)) | (1 << 9))

    # cmap: extend '.'..'9' to '.'..':' so the colon has a glyph id
    struct.pack_into('<H', d, CMAP + 4, len(COVER))         # range_length
    struct.pack_into('<H', d, CMAP + 16, len(COVER))        # list_length

    # lv_font_t: line_height / base_line for the new size
    struct.pack_into('<H', d, FONTOBJ + 8, digit_h + max(4, digit_h // 8))
    struct.pack_into('<H', d, FONTOBJ + 10, 2)

    # the clock's font name
    struct.pack_into('<I', d, CLOCK_POOL, NAME_EN32 + BASE)

    out = a.outfile or (a.infile.replace('.bin', '_bigclock.bin'))
    Path(out).write_bytes(bytes(d))
    print(f"\n  wrote         {out}  ({len(d):,} bytes, unchanged length)")


if __name__ == '__main__':
    main()
