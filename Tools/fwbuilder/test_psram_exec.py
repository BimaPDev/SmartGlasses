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

READING THE RESULT -- three outcomes, all distinguishable

  clock reads 88:88        PSRAM EXECUTES. The stub ran. The CODE tier is open, and
    (every digit the        the next step is real compiled C in this region.
     same glyph)
  device does not boot     PSRAM does not execute: prefetch abort on the first glyph
                           draw. A/B rollback recovers. Route closed, and the answer
                           is still worth having.
  clock looks NORMAL       The stub never ran -- wrong font object, or this face is
                           not the one the standby clock uses. Says NOTHING about
                           PSRAM; it means the detour point was wrong, not the region.

That third outcome is why the stub forces a visible change instead of being a
transparent trampoline: a transparent one would render normally whether it executed or
not, and "it worked" would be indistinguishable from "it never ran". This project has
already shipped one vacuous gate that way.

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
FONT = 0x491D1C          # lv_font_t for the clock face
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

    orig = struct.unpack_from('<I', d, GET_BITMAP)[0]
    dsc = struct.unpack_from('<I', d, DSC_PTR)[0]

    # --- guards: prove this really is the font object before redirecting anything ---
    if dsc - DATA_DELTA != FMT_DSC_FILE:
        sys.exit(f'refusing: font dsc points at file 0x{dsc - DATA_DELTA:06X}, expected '
                 f'0x{FMT_DSC_FILE:06X} -- this is not the clock face')
    if not (orig & 1):
        sys.exit(f'refusing: get_glyph_bitmap 0x{orig:08X} has no Thumb bit -- not a '
                 f'function pointer')
    fn_file = (orig & ~1) - CODE_DELTA
    if not PSRAM_HI <= fn_file < len(d):
        sys.exit(f'refusing: get_glyph_bitmap resolves to file 0x{fn_file:06X}, which is '
                 f'not in .text (starts 0x{PSRAM_HI:06X}) -- wrong struct layout')
    # SEMANTIC GUARD: the detour target must be the 2-arg bitmap function. Its first
    # instruction is `cmp r1,#9` (0x2909). The 4-arg dsc function opens with a push.w
    # and `cmp r2,#9` instead, so this single check separates them.
    first = struct.unpack_from('<H', d, fn_file)[0]
    if first != 0x2909:
        sys.exit(f'refusing: the target at file 0x{fn_file:06X} opens with 0x{first:04X}, '
                 f'not `cmp r1,#9` (0x2909). That is not get_glyph_bitmap -- r1 is not '
                 f'the letter there, and forcing it would corrupt memory.')
    # CONTROL: the OTHER pointer must be the 4-arg dsc function, which proves the
    # layout rather than assuming it. push.w {r4..lr} = 0xE92D.
    other = struct.unpack_from('<I', d, GET_DSC)[0]
    other_file = (other & ~1) - CODE_DELTA
    if struct.unpack_from('<H', d, other_file)[0] != 0xE92D:
        sys.exit(f'refusing: font+0 at file 0x{other_file:06X} is not the expected '
                 f'get_glyph_dsc prologue -- struct layout is not what this tool assumes')

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

    print(f'  font object      file 0x{FONT:06X}')
    print(f'    get_glyph_bitmap 0x{orig:08X}  -> file 0x{fn_file:06X} (.text)')
    print(f'    dsc              0x{dsc:08X}  -> file 0x{FMT_DSC_FILE:06X}  MATCHES')
    print(f'  stub             file 0x{HOLE:06X}  VA 0x{stub_va:08X}  '
          f'({len(stub)} bytes in a {HOLE_LEN}-byte hole)')
    print(f'    movs r1,#{letter}        {stub[0:2].hex()}      force letter {a.letter!r}')
    print(f'    movw r12,#0x{orig & 0xFFFF:04X}  {stub[2:6].hex()}')
    print(f'    movt r12,#0x{orig >> 16:04X}  {stub[6:10].hex()}')
    print(f'    bx   r12          {stub[10:12].hex()}')
    print(f'\n  the ONE redirect: get_glyph_bitmap 0x{orig:08X} -> 0x{new_ptr:08X}')
    print(f'  (a .text pointer becomes a PSRAM pointer -- if PSRAM cannot execute, '
          f'this faults)')
    print(f'\n  EXPECT: clock reads all {a.letter!r} -> PSRAM EXECUTES')
    print(f'          no boot             -> PSRAM does not execute (A/B recovers)')
    print(f'          clock normal        -> stub never ran; wrong font, not a PSRAM answer')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    d[HOLE:HOLE + len(stub)] = stub
    struct.pack_into('<I', d, GET_BITMAP, new_ptr)

    out = a.outfile or a.infile.replace('.bin', '_psramexec.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, '
          f'{len(stub)} bytes of NEW CODE + 1 pointer)')


if __name__ == '__main__':
    main()
