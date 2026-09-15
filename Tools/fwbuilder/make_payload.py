#!/usr/bin/env python3
"""Compile a C payload and detour the firmware's font path through it.

  python3 make_payload.py <payload.c> <in.bin> <out.bin> [--dry-run]

This is the toolchain end of the project: C in, flashable image out. It composes
fwcc.py (compile, with no linker -- see that file) with the detour that
test_psram_exec.py proved works on hardware.

WHAT IT DOES

  1. compiles <payload.c> to a flat Thumb blob with no relocations
  2. writes it into the free PSRAM hole at file 0x3EC950 (VA 0x3C3C4600)
  3. repoints get_glyph_bitmap on EVERY lv_font_t at the blob

The payload's first function must have the signature

      const uint8_t *stub(const void *font, uint32_t letter);

and must be first in the file, because the blob is entered at offset 0.

ALWAYS PAIR IT WITH A BOOT MARKER. Run make_no_rings.py over the image first. The
rings then answer "did my image boot?" independently of whether the payload runs,
which is the difference between a readable result and an ambiguous one:

    rings gone + payload's effect visible   it ran
    rings gone + display normal             booted, payload did not run
    rings still there                       faulted, A/B rolled back

The first PSRAM test shipped without a marker and came back unreadable -- "normal
display" meant either "never ran" or "crashed and rolled back", which are opposite
answers. See FIELD_NOTES 8c.

CONFIRMED: PSRAM executes (hardware, 2026-09-15). What is NOT yet confirmed is that
COMPILED code works there -- only 12 hand-assembled bytes have ever run. That is what
the first payload built with this tool is for.
"""
import argparse
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
import fwcc  # noqa: E402

BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
DSC_FN, BMP_FN = 0x2C67B659, 0x2C67B5F1
HOLE, HOLE_LEN = 0x3EC950, 0x3ED22E - 0x3EC950
DATA_DELTA, CODE_DELTA = 0x3BFD7CB0, 0x2C010000
PSRAM_LO, PSRAM_HI = 0x028350, 0x4A1270
NO_RINGS = 0x61B7F8


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('source')
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR')

    blob, _ = fwcc.build(Path(a.source), max_size=HOLE_LEN)

    # --- find every font, which also proves the struct layout ---------------------
    fonts = [o for o in range(PSRAM_LO, PSRAM_HI - 8, 4)
             if struct.unpack_from('<I', d, o)[0] == DSC_FN
             and struct.unpack_from('<I', d, o + 4)[0] == BMP_FN]
    if not fonts:
        sys.exit('refusing: found no lv_font_t with the expected callback pair')

    # --- guards: which callback is which, by opcode ------------------------------
    bmp_file = (BMP_FN & ~1) - CODE_DELTA
    dsc_file = (DSC_FN & ~1) - CODE_DELTA
    if struct.unpack_from('<H', d, bmp_file)[0] != 0x2909:
        sys.exit(f'refusing: file 0x{bmp_file:06X} does not open `cmp r1,#9` -- that is '
                 f'not get_glyph_bitmap, and r1 is not the letter there')
    if struct.unpack_from('<H', d, dsc_file)[0] != 0xE92D:
        sys.exit(f'refusing: file 0x{dsc_file:06X} is not the get_glyph_dsc prologue')
    if any(d[HOLE:HOLE + HOLE_LEN]):
        sys.exit(f'refusing: the hole at 0x{HOLE:06X} is not empty -- already patched?')

    stub_va = HOLE + DATA_DELTA
    new_ptr = stub_va | 1

    marker = d[NO_RINGS] == 0
    print(f'  payload      {a.source}')
    print(f'  blob         {len(blob)} bytes -> file 0x{HOLE:06X} (VA 0x{stub_va:08X}), '
          f'{HOLE_LEN - len(blob)} bytes of the hole left')
    print(f'  fonts        {len(fonts)} lv_font_t, get_glyph_bitmap -> 0x{new_ptr:08X}')
    print(f'  boot marker  no-rings is {"PRESENT" if marker else "ABSENT"}'
          f'{"" if marker else "  <-- run make_no_rings.py FIRST, or the result is ambiguous"}')
    lines = fwcc.disasm(blob, stub_va)
    if lines:
        print('  disassembly:')
        for l in lines:
            print('    ' + l.strip())

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return
    if not marker:
        sys.exit('refusing: no boot marker. Without it, "display looks normal" means '
                 'either the payload never ran OR the device faulted and A/B rolled '
                 'back -- opposite answers that a photograph cannot tell apart. '
                 'Run make_no_rings.py over the image first.')

    d[HOLE:HOLE + len(blob)] = blob
    for f in fonts:
        struct.pack_into('<I', d, f + 4, new_ptr)

    out = a.outfile or a.infile.replace('.bin', '_payload.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, '
          f'{len(blob)} bytes of COMPILED CODE + {len(fonts)} pointers)')


if __name__ == '__main__':
    main()
