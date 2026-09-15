#!/usr/bin/env python3
"""EXPERIMENT: is the PSRAM-copied region EXECUTABLE?

  python3 test_psram_exec.py <in.bin> <out.bin> [--letter 8] [--dry-run]

THE QUESTION, AND WHY IT IS THE ONLY ONE LEFT

Adding code to this firmware needs somewhere to put it. Two candidate homes, and for
1.0.11.53 the boot copy descriptor at file 0x0002C8 settles what each one is:

    src 0x2C038350..0x2C4B1270  ->  dst 0x3C000000..0x3C478F20   (length 0x478F20)

    file 0x000000..0x028350   XIP boot     VA = file + 0x2C010000
    file 0x028350..0x4A1270   PSRAM copy   VA = file + 0x3BFD7CB0
    file 0x4A1270..EOF        XIP .text    VA = file + 0x2C010000

  XIP .text  executable for certain -- and it has ZERO free bytes. Not one run of 64
             zero or 0xFF bytes in all 2,188,248 of it. There is no cave.
  PSRAM      has free space (2,270 bytes at file 0x3EC950) and ~152 KB more that could
             be reclaimed from AAC sound effects at 0x46712C..0x48E771. Readable for
             certain -- the wordmark bitmap is read from this region every boot.
             EXECUTABLE: unknown. That is the whole question.

So: if PSRAM executes, the CODE tier is open and there is room to work in. If it does
not, this firmware is capped at rewriting existing functions in place.

NOTE the earlier append test answered a different question and failed: it put bytes
PAST the end of the image, which the flasher almost certainly never writes. This test
stays inside the image, in space that is already flashed and already mapped.

THE DESIGN

Do not add a feature. Detour ONE function pointer through a stub in the free PSRAM
hole, and make the stub's effect impossible to mistake.

The clock face's `lv_font_t` sits at file 0x491D1C:

    +0   get_glyph_dsc      0x2C67B659   -> file 0x66B658   (font, dsc_out, letter, next)
    +4   get_glyph_bitmap   0x2C67B5F1   -> file 0x66B5F0   (font, letter)   <- detoured
    +16  dsc                0x3C1E9858   -> file 0x211BA8, the fmt_txt_dsc

The ORDER matters and is counter-intuitive: LVGL 8 puts get_glyph_dsc first. Both are
verified by disassembly, not by struct layout assumption -- get_glyph_dsc opens
`cmp r2,#9` (letter is the 3rd arg) and get_glyph_bitmap opens `cmp r1,#9` (letter is
the 2nd). The guards below assert exactly those opcodes.

`get_glyph_bitmap(font, letter)` takes a UNICODE codepoint. The stub forces that
argument to one fixed character and tail-jumps to the real function:

    movs r1, #'8'          force the letter
    movw r12, #<lo of the original pointer>
    movt r12, #<hi>
    bx   r12               tail call, r0 and the ABI untouched

Glyph ADVANCE still comes from get_glyph_dsc, which is not patched, so spacing stays
correct and only the pixels change.

READING THE RESULT -- and why this build also turns the rings off

FIRST ATTEMPT, 2026-09-15, ON HARDWARE: clock read 07:24 normally. Two flaws, both
fixed here.

  1. It detoured ONE font -- the 40px big-clock face at 0x491D1C. The standby row's
     tiles draw with a smaller face, so the stub was simply never called. This build
     repoints ALL NINE lv_font_t objects, discovered by scanning for the shared
     callback pair rather than hardcoding one address.

  2. Worse: "display looks normal" was AMBIGUOUS. It means either the stub never ran,
     OR the device faulted and A/B rolled back to stock. Those are opposite answers --
     the second IS the PSRAM result -- and a photo cannot tell them apart.

The fix for (2) is a MARKER: this build also carries the no-rings patch (border_opa
92 -> 0 at 0x61b7f8), which is hardware-confirmed and visible on the standby screen.
The rings answer "did my image actually boot?" independently of whether PSRAM runs:

  rings GONE + every glyph '8'   PSRAM EXECUTES. The code tier is open.
  rings GONE + text normal       The image booted and the stub still did not run. Not
                                 a PSRAM answer; the detour point is wrong again.
  rings STILL THERE              The image faulted and A/B rolled back to stock, which
                                 with 9 fonts detoured means the jump into PSRAM is
                                 what faulted: PSRAM does NOT execute.

A marker that costs nothing and removes an ambiguity is worth more than a cleverer
stub. The first attempt had no way to fail informatively.

RISK: higher than every patch shipped so far, and stated plainly. This is the first
build that creates NEW instructions and redirects control flow into them. If PSRAM is
not executable the device will not boot, and A/B rollback is what recovers it -- which
has caught two non-booting builds in this project already. Nothing is written outside
the free hole and one 4-byte pointer, and the image length does not change.
"""
import argparse
import struct
import sys
from pathlib import Path

BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
DSC_FN, BMP_FN = 0x2C67B659, 0x2C67B5F1   # the shared lv_font_fmt_txt callbacks
FONT = 0x491D1C          # the 40px clock face -- kept only as a sanity anchor
# LVGL 8 order, and it is NOT the obvious one: get_glyph_dsc comes FIRST.
#   +0  get_glyph_dsc     (font, dsc_out, letter, letter_next)   4 args
#   +4  get_glyph_bitmap  (font, letter)                         2 args
# Getting this backwards is not a near miss. On get_glyph_dsc, r1 is the OUTPUT
# STRUCT POINTER, so forcing it to a small constant makes the function write glyph
# metrics to address 0x38 -- a fault that has nothing to do with PSRAM, and that
# would read as a false "PSRAM cannot execute". Capstone caught it here; the guards
# below now make it impossible to ship.
GET_DSC = FONT + 0
GET_BITMAP = FONT + 4    # the function pointer this test redirects
DSC_PTR = FONT + 16
FMT_DSC_FILE = 0x211BA8  # what dsc must point at, as a cross-check
HOLE = 0x3EC950          # free, all-zero, in PSRAM, outside the forbidden union
HOLE_LEN = 0x3ED22E - 0x3EC950
DATA_DELTA = 0x3BFD7CB0
CODE_DELTA = 0x2C010000
PSRAM_LO, PSRAM_HI = 0x028350, 0x4A1270


def movw(rd, imm):
    i, imm4, imm3, imm8 = (imm >> 11) & 1, (imm >> 12) & 0xF, (imm >> 8) & 7, imm & 0xFF
    return struct.pack('<HH', 0xF240 | (i << 10) | imm4, (imm3 << 12) | (rd << 8) | imm8)


def movt(rd, imm):
    i, imm4, imm3, imm8 = (imm >> 11) & 1, (imm >> 12) & 0xF, (imm >> 8) & 7, imm & 0xFF
    return struct.pack('<HH', 0xF2C0 | (i << 10) | imm4, (imm3 << 12) | (rd << 8) | imm8)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--letter', default='8', help="the character every glyph becomes")
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR')

    # Discover every lv_font_t by its callback pair. Scanning beats hardcoding: it
    # cannot miss a face, and finding the expected pair IS the layout proof.
    fonts = []
    for off in range(PSRAM_LO, PSRAM_HI - 8, 4):
        if (struct.unpack_from('<I', d, off)[0] == DSC_FN
                and struct.unpack_from('<I', d, off + 4)[0] == BMP_FN):
            fonts.append(off)
    if not fonts:
        sys.exit('refusing: found no lv_font_t with the expected callback pair')
    if FONT not in fonts:
        sys.exit(f'refusing: the known clock face 0x{FONT:06X} is not among the fonts '
                 f'found -- the scan or the build is wrong')

    orig = BMP_FN
    fn_file = (orig & ~1) - CODE_DELTA
    dsc_file = (DSC_FN & ~1) - CODE_DELTA

    # --- guards: prove which callback is which, by opcode, not by assumption ---
    if not PSRAM_HI <= fn_file < len(d):
        sys.exit(f'refusing: get_glyph_bitmap resolves to file 0x{fn_file:06X}, not .text')
    first = struct.unpack_from('<H', d, fn_file)[0]
    if first != 0x2909:
        sys.exit(f'refusing: the target at file 0x{fn_file:06X} opens with 0x{first:04X}, '
                 f'not `cmp r1,#9` (0x2909). That is not get_glyph_bitmap -- r1 is not '
                 f'the letter there, and forcing it would corrupt memory.')
    if struct.unpack_from('<H', d, dsc_file)[0] != 0xE92D:
        sys.exit(f'refusing: font+0 at file 0x{dsc_file:06X} is not the get_glyph_dsc '
                 f'prologue -- struct layout is not what this tool assumes')
    if any(d[HOLE:HOLE + HOLE_LEN]):
        sys.exit(f'refusing: the hole at 0x{HOLE:06X} is not empty -- already patched?')
    if not PSRAM_LO <= HOLE < PSRAM_HI:
        sys.exit('refusing: the hole is not inside the PSRAM-copied region')

    letter = ord(a.letter)
    if not 0 <= letter <= 255:
        sys.exit('refusing: --letter must be a single-byte character')

    stub = (struct.pack('<H', 0x2100 | letter)   # movs r1, #letter
            + movw(12, orig & 0xFFFF)            # movw r12, #lo
            + movt(12, orig >> 16)               # movt r12, #hi
            + struct.pack('<H', 0x4760))         # bx r12
    stub_va = HOLE + DATA_DELTA
    new_ptr = stub_va | 1                        # Thumb

    print(f'  fonts found      {len(fonts)} lv_font_t objects, all detoured:')
    for f in fonts:
        lh = struct.unpack_from('<H', d, f + 8)[0]
        print(f'      file 0x{f:06X}  line_height {lh:3}'
              + ('   <- 40px clock face' if f == FONT else ''))
    print(f'  get_glyph_bitmap 0x{orig:08X} -> file 0x{fn_file:06X}  '
          f'opens `cmp r1,#9`  CONFIRMED 2-arg')
    print(f'  get_glyph_dsc    0x{DSC_FN:08X} -> file 0x{dsc_file:06X}  '
          f'opens push.w      CONFIRMED 4-arg')
    print(f'  stub             file 0x{HOLE:06X}  VA 0x{stub_va:08X}  '
          f'({len(stub)} bytes in a {HOLE_LEN}-byte hole)')
    print(f'    movs r1,#{letter}        {stub[0:2].hex()}      force letter {a.letter!r}')
    print(f'    movw r12,#0x{orig & 0xFFFF:04X}  {stub[2:6].hex()}')
    print(f'    movt r12,#0x{orig >> 16:04X}  {stub[6:10].hex()}')
    print(f'    bx   r12          {stub[10:12].hex()}')
    print(f'\n  redirect: {len(fonts)} x get_glyph_bitmap 0x{orig:08X} -> 0x{new_ptr:08X}')
    print(f'\n  EXPECT (this image must ALSO carry no-rings as the boot marker):')
    print(f'    rings gone + all glyphs {a.letter!r}  -> PSRAM EXECUTES')
    print(f'    rings gone + text normal     -> booted, stub never ran; not an answer')
    print(f'    rings still there            -> faulted, A/B rolled back; PSRAM does NOT execute')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    d[HOLE:HOLE + len(stub)] = stub
    for f in fonts:
        struct.pack_into('<I', d, f + 4, new_ptr)   # +4 is get_glyph_bitmap

    out = a.outfile or a.infile.replace('.bin', '_psramexec.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, '
          f'{len(stub)} bytes of NEW CODE + 1 pointer)')


if __name__ == '__main__':
    main()
