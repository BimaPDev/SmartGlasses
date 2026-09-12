#!/usr/bin/env python3
"""EXPERIMENT: is data appended past the image end mapped and readable?

  python3 test_append.py <in.bin> <out.bin> [--dry-run]

THE QUESTION

Adding code to this firmware needs somewhere to put it. There is no unused gap inside
the image (no XIP .text cave), so the only candidate is appending past the end — roughly
423 KB of OTA bank headroom sits there. Whether the device MAPS that space is unknown,
and it is the single fact that decides whether the CODE tier is reachable at all.

THE DESIGN

Do not append code. Append DATA THAT EXISTING CODE ALREADY READS, and watch the panel.

This copies the clock face's glyph bitmap to just past the image end and repoints the
face's `glyph_bitmap` field at the new address. Nothing else changes. The firmware's own
font renderer then does the reading, so no new instructions are needed and there is no
hook to get wrong.

    appended at file 0x6B7648  ->  VA 0x2CE?????   (VA = file + 0x2C010000)

That VA lands in the XIP .text region, which is where injected code would also have to
live — so a positive result is evidence for both readable AND executable, since the same
mapping covers both.

READING THE RESULT

  clock renders normally   the region is mapped and readable. The CODE route is open,
                           and the next step is a detour into appended space.
  clock renders garbage    the address resolves somewhere else. Route closed as designed.
  device does not boot     the read faults. A/B rollback recovers it; route closed.

SAFETY

The original bitmap is left in place, so the only change is one pointer. A/B rollback has
already caught two non-booting builds in this project, so the downside is a reflash.
"""
import argparse
import struct
import sys
from pathlib import Path

FACE = 0x211B9C + 12        # lv_font_fmt_txt_dsc_t: +0 glyph_bitmap, +4 glyph_dsc
CODE_VA = 0x2C010000
DATA_DELTA = 0x3BFD7CB0
BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
BANK = 7 * 1024 * 1024 + 123 * 1024


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile'); ap.add_argument('outfile', nargs='?')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR')

    orig_len = len(d)
    bm_ptr = struct.unpack_from('<I', d, FACE)[0]
    dsc_ptr = struct.unpack_from('<I', d, FACE + 4)[0]
    bm_off = bm_ptr - DATA_DELTA
    dsc_off = dsc_ptr - DATA_DELTA
    if not (0 <= bm_off < orig_len and 0 <= dsc_off < orig_len):
        sys.exit('refusing: the face pointers do not resolve — wrong image?')
    if dsc_off <= bm_off:
        sys.exit('refusing: expected glyph_dsc to follow glyph_bitmap')
    bm_len = dsc_off - bm_off          # the bitmap blob runs up to the descriptor array

    pad = (-orig_len) % 4
    new_off = orig_len + pad
    new_va = new_off + CODE_VA

    print(f'  image length      {orig_len:,} bytes')
    print(f'  glyph_bitmap      file 0x{bm_off:06X}  VA 0x{bm_ptr:08X}  ({bm_len} bytes)')
    print(f'  append at         file 0x{new_off:06X}  VA 0x{new_va:08X}'
          f'   ({pad} byte(s) of alignment padding)')
    print(f'  new length        {new_off + bm_len:,} bytes'
          f'   ({BANK - (new_off + bm_len):,} still free in the bank)')
    print(f'\n  the ONE change: glyph_bitmap 0x{bm_ptr:08X} -> 0x{new_va:08X}')
    print(f'  (a DATA-region pointer becomes a .text-region pointer)')

    if new_off + bm_len > BANK:
        sys.exit('refusing: the appended image would not fit the OTA bank')
    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    d += b'\x00' * pad
    d += d[bm_off:bm_off + bm_len]          # copy, do not move — the original stays put
    struct.pack_into('<I', d, FACE, new_va)

    out = a.outfile or a.infile.replace('.bin', '_append.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes — LONGER than the input by {len(d)-orig_len})')
    print('  NOTE: this is the first build in this project whose LENGTH changes.')


if __name__ == '__main__':
    main()
