#!/usr/bin/env python3
"""Recover the download-mode key-hold from platform_tester.bin / BTH.

BES TRACE-hashes away string xrefs to hal_key_boot_handler. Hunt instead:
  MOVW immediates 500/1000/3000/5000 (and tick equivalents)
  512-byte windows that contain ALL of 500, 3000, 5000
  AIRCR / SYSRESETREQ
  HAL_SW_BOOTMODE bit combos
  pointer words to the remaining C strings
  then Capstone-dump the surrounding functions
"""
from __future__ import annotations

import struct
from collections import defaultdict
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

ROOT = Path(__file__).resolve().parents[1]

# Thumb-2 MOVW/MOVT
# hw1 = 11110 i 10 x1 00 imm4   x=0 MOVW, x=1 MOVT
# hw2 = 0 imm3 Rd imm8


def decode_mov_wide(blob: bytes, o: int) -> tuple[str, int, int] | None:
    if o + 4 > len(blob):
        return None
    hw1, hw2 = struct.unpack_from("<HH", blob, o)
    op = hw1 & 0xFBF0
    if op == 0xF240:
        kind = "movw"
    elif op == 0xF2C0:
        kind = "movt"
    else:
        return None
    i = (hw1 >> 10) & 1
    imm4 = hw1 & 0xF
    imm3 = (hw2 >> 12) & 7
    rd = (hw2 >> 8) & 0xF
    imm8 = hw2 & 0xFF
    imm16 = (imm4 << 12) | (i << 11) | (imm3 << 8) | imm8
    return kind, rd, imm16


def find_all(blob: bytes, pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def func_start(blob: bytes, o: int, back: int = 0x200) -> int:
    start = max(0, (o - back) & ~1)
    best = o & ~1
    for i in range(o & ~1, start, -2):
        if blob[i + 1 : i + 2] == b"\xb5":  # push {.., lr}
            return i
        if blob[i : i + 2] == b"\x2d\xe9":  # push.w
            return i
    return best


def dump(blob: bytes, base: int, file_off: int, n: int = 45) -> None:
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    o = file_off & ~1
    print(f"\n--- file 0x{o:06x}  VA 0x{base+o:08x} ---")
    c = 0
    for ins in md.disasm(blob[o : o + n * 8], base + o):
        print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}")
        c += 1
        if c >= n:
            break


def cstr(blob: bytes, o: int, lim: int = 80) -> str:
    e = blob.find(b"\x00", o, min(len(blob), o + lim))
    if e < 0:
        return ""
    try:
        return blob[o:e].decode("ascii")
    except UnicodeDecodeError:
        return ""


TIMEOUTS = {
    500: "500ms",
    1000: "1s",
    1500: "1.5s",
    2000: "2s",
    3000: "3s",
    5000: "5s",
    8000: "8s",
    10000: "10s",
}
TICKS = {}
for ms, lab in TIMEOUTS.items():
    TICKS[ms * 16] = f"{lab}@16kHz"
    TICKS[ms * 32] = f"{lab}@32kHz"

BOOTMODE = {
    0x410: "REBOOT<<4 | USB_DL<<10",
    0x810: "REBOOT<<4 | UART_DL<<11",
    0x401: "REBOOT<<0 | USB_DL<<10",
    0x801: "REBOOT<<0 | UART_DL<<11",
    0x050: "REBOOT<<4 | USB_DL<<6",
    0x090: "REBOOT<<4 | UART_DL<<7",
    0x011: "REBOOT<<0 | USB_DL<<4",
    0x021: "REBOOT<<0 | UART_DL<<5",
    0x440: "USB alt",
    0xC00: "USB|UART hi",
    0x1400: "USB_DL<<10 | REBOOT<<12",
    0x1800: "UART_DL<<11 | REBOOT<<12",
}

STRINGS_M55 = [
    b"hal_key_boot_handler\x00",
    b"../../platform/hal/hal_key.c\x00",
    b"Failed to alloc key debounce timer\x00",
    b"xjxr_hal_key_debounce_handler\x00",
    b"Power key held too short(expect %d seconds), shutdown!\x00",
    b"pmu_pwrkey_check_timer\x00",
    b"Start pmu %s\x00",
    b"Error: pmu wdt reboot failed!\x00",
    b"../../platform/drivers/ana/best1600/pmu_best1600.c\x00",
    b"../../platform/hal/best1600/hal_cmu_best1600.c\x00",
    b"%s HAL_KEY_EVENT_LONGPRESS_500_MS\x00",
    b"%s HAL_KEY_EVENT_LONGPRESS_3000_MS\x00",
    b"%s HAL_KEY_EVENT_LONGPRESS_5000_MS\x00",
]


def hunt(name: str, path: Path, base: int, alias: int) -> None:
    blob = path.read_bytes()
    n = len(blob)
    print(f"\n{'='*72}\n{name}  {path.name}  {n} B  XIP 0x{base:08X}  alias 0x{alias:08X}\n{'='*72}")

    print("\n## C-string locations + pointer words")
    aliases = [base, alias, 0x28000000, 0x0C000000, 0]
    for s in STRINGS_M55:
        o = blob.find(s)
        lab = s.rstrip(b"\x00").decode("ascii", "replace")
        if o < 0:
            print(f"  MISSING  {lab}")
            continue
        ptrs = []
        for a in aliases:
            va = (a + o) & 0xFFFFFFFF
            for t in (va, va | 1):
                ptrs.extend((h, t, a) for h in find_all(blob, struct.pack("<I", t)))
        print(f"  {lab[:54]:54} file 0x{o:06x}  ptrs={len(ptrs)}")
        for h, t, a in ptrs[:6]:
            print(f"      @file 0x{h:06x} = 0x{t:08x} (alias 0x{a:08x})")

    print("\n## literal u32 words")
    words = [
        (0xE000ED0C, "AIRCR"),
        (0x05FA0004, "VECTKEY|SYSRESETREQ"),
        (0x05FA0000, "VECTKEY"),
        (500, "500"),
        (1000, "1000"),
        (3000, "3000"),
        (5000, "5000"),
        (10000, "10000"),
        (16000, "16000 ticks 1s@16k"),
        (32000, "32000 ticks 1s@32k"),
        (80000, "80000 ticks 5s@16k"),
        *[(k, v) for k, v in BOOTMODE.items()],
    ]
    for val, lab in words:
        hits = find_all(blob, struct.pack("<I", val & 0xFFFFFFFF))
        if hits:
            print(f"  0x{val:08x} {lab:28} n={len(hits):4d}  {', '.join(f'0x{h:06x}' for h in hits[:8])}")

    # Scan MOVW/MOVT
    print("\n## scanning MOVW/MOVT …")
    last_movw: dict[int, tuple[int, int]] = {}
    movw_hits: list[tuple[int, int, int, str]] = []  # off, rd, imm, label
    pairs: list[tuple[int, int, int]] = []  # off, rd, addr32
    o = 0
    while o + 4 <= n:
        d = decode_mov_wide(blob, o)
        if d is None:
            o += 2
            continue
        kind, rd, imm16 = d
        if kind == "movw":
            last_movw[rd] = (o, imm16)
            lab = TIMEOUTS.get(imm16) or TICKS.get(imm16) or BOOTMODE.get(imm16)
            if lab:
                movw_hits.append((o, rd, imm16, lab))
            o += 4
            continue
        prev = last_movw.get(rd)
        if prev:
            addr = (imm16 << 16) | prev[1]
            pairs.append((prev[0], rd, addr))
        o += 4
    print(f"  movw timeout/bootmode hits: {len(movw_hits)}")
    print(f"  movw+movt pairs: {len(pairs)}")

    # MOVW/MOVT targeting our strings
    want_va = set()
    str_va_to_name = {}
    for s in STRINGS_M55:
        fo = blob.find(s)
        if fo < 0:
            continue
        name = s.rstrip(b"\x00").decode("ascii", "replace")
        for a in (base, alias):
            va = a + fo
            want_va.add(va)
            str_va_to_name[va] = name

    print("\n## MOVW/MOVT targeting key strings")
    nstr = 0
    for wo, rd, addr in pairs:
        if addr in str_va_to_name:
            print(f"  movw@file 0x{wo:06x} r{rd} -> 0x{addr:08x}  {str_va_to_name[addr][:60]}")
            nstr += 1
    print(f"  total {nstr}")

    print("\n## MOVW timeout/bootmode immediates (by file offset)")
    by_lab: dict[str, list[tuple[int, int, int]]] = defaultdict(list)
    for off, rd, imm, lab in movw_hits:
        by_lab[lab].append((off, rd, imm))
    for lab, lst in sorted(by_lab.items(), key=lambda x: -len(x[1])):
        print(f"  {lab:22} n={len(lst):4d}  first={', '.join(f'0x{h[0]:06x}' for h in lst[:8])}")

    # 512-byte windows containing 500 AND 3000 AND 5000 as MOVW
    buckets: dict[int, set[int]] = defaultdict(set)
    for off, rd, imm, lab in movw_hits:
        if imm in (500, 3000, 5000):
            buckets[off & ~0x1FF].add(imm)
    triples = [(b, s) for b, s in sorted(buckets.items()) if s >= {500, 3000, 5000}]
    print(f"\n## 512B windows with MOVW 500 AND 3000 AND 5000: {len(triples)}")
    for b, s in triples:
        print(f"  file 0x{b:06x}  VA 0x{base+b:08x}  {sorted(s)}")

    # Also cluster any 500+3000, 500+5000, 3000+5000
    for need, tag in [
        ({500, 3000}, "500+3000"),
        ({500, 5000}, "500+5000"),
        ({3000, 5000}, "3000+5000"),
        ({1000, 5000}, "1000+5000"),
        ({1000, 3000}, "1000+3000"),
    ]:
        hits = [(b, s) for b, s in sorted(buckets.items()) if s >= need]
        # rebuild buckets including 1000
        pass

    buckets2: dict[int, set[int]] = defaultdict(set)
    for off, rd, imm, lab in movw_hits:
        if imm in (500, 1000, 3000, 5000):
            buckets2[off & ~0x1FF].add(imm)
    print("\n## 512B windows with at least two of {500,1000,3000,5000}")
    for b, s in sorted(buckets2.items()):
        if len(s) >= 2:
            print(f"  file 0x{b:06x}  VA 0x{base+b:08x}  {sorted(s)}")

    # Dump functions around triples and around dual clusters
    dump_offs = [b for b, _ in triples]
    dump_offs += [b for b, s in buckets2.items() if len(s) >= 2]
    # plus first few 5000 and 1000 MOVWs that sit in the HAL file range (<0x200000)
    for off, rd, imm, lab in movw_hits:
        if imm in (1000, 5000, 500, 3000) and off < 0x200000:
            dump_offs.append(func_start(blob, off))
    # AIRCR literal pools
    for h in find_all(blob, struct.pack("<I", 0xE000ED0C))[:8]:
        dump_offs.append(func_start(blob, h))
    for h in find_all(blob, struct.pack("<I", 0x05FA0004))[:8]:
        dump_offs.append(func_start(blob, h))

    # unique, sorted, skip dense-app flood: prefer <0x200000 and HAL-ish
    seen = set()
    uniq = []
    for o in dump_offs:
        o = o & ~1
        if o in seen:
            continue
        seen.add(o)
        uniq.append(o)

    print("\n######## candidate function dumps (HAL-ish file < 0x280000, plus triples) ########")
    dumped = 0
    for o in uniq:
        if o < 0x280000 or any(abs(o - t) < 0x400 for t, _ in triples):
            dump(blob, base, o, 40)
            dumped += 1
            if dumped >= 18:
                break
    if dumped == 0:
        print("  (no HAL-band candidates; dumping first triples anyway)")
        for o in uniq[:6]:
            dump(blob, base, o, 40)


def main() -> None:
    hunt(
        "M55",
        ROOT / "firmware" / "x_1.0.12.83" / "platform_tester.bin",
        0x2C000000,
        0x3C000000,
    )
    hunt(
        "BTH",
        ROOT / "firmware" / "x_1.0.12.83" / "best1600_watch_bth.bin",
        0x14000000,
        0x30000000,
    )


if __name__ == "__main__":
    main()
