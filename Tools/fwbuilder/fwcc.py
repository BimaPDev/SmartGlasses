#!/usr/bin/env python3
"""Compile C into a flat Thumb blob that can be dropped into the firmware.

  python3 fwcc.py <payload.c> [-o out.bin] [--max-size N] [--disasm]

WHY THERE IS NO LINKER HERE

There is no arm-none-eabi toolchain on this machine, and there does not need to be.
Apple clang already targets `thumbv8m.main-none-eabi` and emits a normal ARM ELF
object; the only thing a linker would add is relocation of external symbols. So the
rule this tool enforces instead is:

    THE PAYLOAD MUST HAVE NO RELOCATIONS IN .text

which is achievable because every vendor function is called through an absolute
address (see payloads/vendor_*.h), and clang turns that into `movw/movt` + `blx` with
nothing to relocate. Literal pools are PC-relative and live inside .text, so they
travel with the blob wherever it is placed.

If a payload ever does need a relocation, this tool REFUSES rather than guessing. That
is the honest boundary: at that point a real linker is required, not a workaround.

WHAT IS REFUSED, AND WHY EACH ONE MATTERS

  relocations in .text   nothing would patch them; the call would jump to 0
  non-empty .data        there is no startup code to copy initialisers into RAM
  non-empty .bss         nothing zeroes it
  referenced .rodata     it would need a relocation, so the gate above already caught
                         it; an UNREFERENCED .rodata is dropped, and said so
  blob larger than the   the free PSRAM hole is 2,270 bytes. Refusing here beats
  space it must fit      discovering it after a flash

VERIFIED END TO END: for the payload that reproduces the hand-assembled PSRAM test,
clang independently produced the same four instructions that are already CONFIRMED
RUNNING ON HARDWARE (FIELD_NOTES 8c). That is the strongest check available -- the
compiler's output was compared against a known-good hardware result, not just against
expectations.
"""
import argparse
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

PY_CAPSTONE = (
    "import sys,json;from capstone import *;"
    "b=bytes.fromhex(sys.argv[1]);va=int(sys.argv[2]);"
    "md=Cs(CS_ARCH_ARM,CS_MODE_THUMB);"
    "print(json.dumps(['0x%08X  %-10s %-8s %s'%(i.address,i.bytes.hex(),i.mnemonic,"
    "i.op_str) for i in md.disasm(b,va)]))")

TRIPLE = 'thumbv8m.main-none-eabi'
CPU = 'cortex-m55'
CFLAGS = ['-mthumb', '-Os', '-ffreestanding', '-fno-pic', '-fno-builtin',
          '-fno-stack-protector', '-fomit-frame-pointer', '-Wall', '-Wextra',
          '-fno-unwind-tables', '-fno-asynchronous-unwind-tables']


class Elf:
    """Just enough ELF32-LE to pull sections and relocation counts out of an object."""

    def __init__(self, data):
        if data[:4] != b'\x7fELF' or data[4] != 1 or data[5] != 1:
            raise ValueError('not a 32-bit little-endian ELF')
        e_shoff, = struct.unpack_from('<I', data, 0x20)
        e_shentsize, e_shnum, e_shstrndx = struct.unpack_from('<HHH', data, 0x2E)
        raw = []
        for i in range(e_shnum):
            o = e_shoff + i * e_shentsize
            name, typ, flags, addr, off, size, link, info, align, entsize = \
                struct.unpack_from('<10I', data, o)
            raw.append(dict(name=name, type=typ, flags=flags, off=off, size=size,
                            link=link, info=info, entsize=entsize))
        strtab = raw[e_shstrndx]
        def nm(x):
            s = data[strtab['off'] + x:]
            return s[:s.index(b'\0')].decode()
        self.sections = {}
        for s in raw:
            s['name'] = nm(s['name'])
            s['data'] = data[s['off']:s['off'] + s['size']] if s['type'] != 8 else b''
            self.sections[s['name']] = s

    def size(self, name):
        s = self.sections.get(name)
        return s['size'] if s else 0

    def body(self, name):
        s = self.sections.get(name)
        return s['data'] if s else b''

    def reloc_count(self, section):
        """Relocations that apply to `section`, by name (.rel.X / .rela.X)."""
        n = 0
        for key in (f'.rel{section}', f'.rela{section}'):
            s = self.sections.get(key)
            if s and s['entsize']:
                n += s['size'] // s['entsize']
        return n


def compile_c(src: Path, extra=()):
    with tempfile.TemporaryDirectory() as td:
        obj = Path(td) / 'payload.o'
        # `-target X` as two arguments, NOT `-target=X`: the latter is silently a
        # different option, clang falls back to the HOST target, and the real error
        # surfaces as "unsupported argument 'cortex-m55'" -- which points at the wrong
        # flag entirely.
        cmd = (['clang', '-target', TRIPLE, f'-mcpu={CPU}'] + CFLAGS + list(extra)
               + ['-c', str(src), '-o', str(obj)])
        r = subprocess.run(cmd, capture_output=True, text=True)
        if r.returncode:
            sys.exit(f'compile failed:\n{r.stderr}')
        if r.stderr.strip():
            print(r.stderr.rstrip())
        return obj.read_bytes(), cmd


def disasm(blob: bytes, va: int):
    """Disassemble for the report only. Never gates anything.

    Capstone first -- it is in the repo venv and does not depend on xcrun resolving a
    toolchain path, which failed silently here and cost a listing.
    """
    for py in (Path(__file__).parents[2] / 'Reverse/tools/venv/bin/python', None):
        try:
            if py and py.exists():
                import json
                r = subprocess.run([str(py), '-c', PY_CAPSTONE, blob.hex(), str(va)],
                                   capture_output=True, text=True)
                if r.returncode == 0 and r.stdout.strip():
                    return json.loads(r.stdout)
        except Exception:
            pass
        break
    try:
        objdump = subprocess.run(['xcrun', '--find', 'llvm-objdump'],
                                 capture_output=True, text=True).stdout.strip()
        if not objdump:
            return None
        with tempfile.TemporaryDirectory() as td:
            b = Path(td) / 'b.bin'
            b.write_bytes(blob)
            r = subprocess.run([objdump, '-D', '-b', 'binary', f'--triple={TRIPLE}',
                                f'--mcpu={CPU}', f'--adjust-vma={va:#x}', str(b)],
                               capture_output=True, text=True)
            return [l for l in r.stdout.splitlines() if ':\t' in l]
    except Exception:
        return None


def build(src: Path, max_size=None, extra=()):
    """Compile and return the flat .text blob, refusing anything that needs a linker."""
    obj, cmd = compile_c(src, extra)
    elf = Elf(obj)

    text = elf.body('.text')
    if not text:
        sys.exit('refusing: the payload produced no .text')

    nrel = elf.reloc_count('.text')
    if nrel:
        sys.exit(f'refusing: {nrel} relocation(s) in .text. This tool has no linker, so '
                 f'nothing would resolve them and the call would jump to 0. Call vendor '
                 f'functions through an absolute address (see payloads/vendor_*.h) '
                 f'instead of by symbol.')
    for sec, why in (('.data', 'there is no startup code to copy initialisers into RAM'),
                     ('.bss', 'nothing zeroes it')):
        if elf.size(sec):
            sys.exit(f'refusing: {sec} is {elf.size(sec)} bytes and {why}. Use only '
                     f'locals and compile-time constants.')
    ro = elf.size('.rodata')
    if ro:
        print(f'  note: dropping {ro} bytes of UNREFERENCED .rodata (referenced rodata '
              f'would have needed a relocation, which is refused above)')
    if max_size is not None and len(text) > max_size:
        sys.exit(f'refusing: the blob is {len(text)} bytes but only {max_size} are '
                 f'available')
    return text, cmd


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('source')
    ap.add_argument('-o', '--out')
    ap.add_argument('--max-size', type=int)
    ap.add_argument('--va', type=lambda v: int(v, 0), default=0x3C3C4600,
                    help='runtime address, for the disassembly listing only')
    ap.add_argument('--disasm', action='store_true')
    a = ap.parse_args()

    blob, cmd = build(Path(a.source), a.max_size)
    print(f'  source     {a.source}')
    print(f'  target     {TRIPLE} / {CPU}')
    print(f'  .text      {len(blob)} bytes, 0 relocations, no .data, no .bss')
    if a.disasm:
        lines = disasm(blob, a.va)
        if lines:
            print(f'  disassembly at VA 0x{a.va:08X}:')
            for l in lines:
                print('    ' + l.strip())
        else:
            print('  (llvm-objdump unavailable; skipping the listing)')
    if a.out:
        Path(a.out).write_bytes(blob)
        print(f'  wrote      {a.out}')


if __name__ == '__main__':
    main()
