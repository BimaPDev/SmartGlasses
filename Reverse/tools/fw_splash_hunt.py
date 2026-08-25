#!/usr/bin/env python3
"""Find how SplashView draws MYVU — ASCII swap did not change the boot mark."""
from __future__ import annotations

import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1] / "firmware"
STOCK = (ROOT / "x_1.0.12.83" / "platform_tester.bin").read_bytes()
PATCH = (ROOT / "patched_bima" / "1.0.12.83" / "platform_tester.bin").read_bytes()
BASE = 0x2C000000


def find_all(blob: bytes, pat: bytes) -> list[int]:
    out, i = [], 0
    while True:
        p = blob.find(pat, i)
        if p < 0:
            return out
        out.append(p)
        i = p + 1


def cstr(blob: bytes, o: int, lim: int = 80) -> str:
    e = blob.find(b"\x00", o, min(len(blob), o + lim))
    if e < 0:
        e = o + lim
    try:
        return blob[o:e].decode("ascii")
    except UnicodeDecodeError:
        return repr(blob[o:e])


def dump_around(blob: bytes, o: int, before: int = 32, after: int = 48) -> str:
    a = max(0, o - before)
    b = min(len(blob), o + after)
    return blob[a:b].decode("latin-1").replace("\x00", ".")


def main() -> None:
    print("=== sizes stock/patch", len(STOCK), len(PATCH), "diff", len(STOCK) == len(PATCH))
    print("ASCII MYVU stock", len(find_all(STOCK, b"MYVU")), "patch", len(find_all(PATCH, b"MYVU")))
    print("ASCII BIMA stock", len(find_all(STOCK, b"BIMA")), "patch", len(find_all(PATCH, b"BIMA")))

    encodings = {
        "utf16le": "MYVU".encode("utf-16le"),
        "utf16be": "MYVU".encode("utf-16be"),
        "utf32le": "MYVU".encode("utf-32le"),
        "spaced": b"M Y V U",
        "dots": b"M.Y.V.U",
        "slash": b"M/Y/V/U",
        "nulls_ascii_chars": b"M\x00Y\x00V\x00U",  # same as utf16le without BOM
        "wchar_plus_term": "MYVU\x00".encode("utf-16le"),
        "M\\nY": b"M\nY\nV\nU",
        "lower": b"myvu",
        "Myvu": b"Myvu",
        "MYVU ": b"MYVU ",
    }
    for name, pat in encodings.items():
        s, p = find_all(STOCK, pat), find_all(PATCH, pat)
        if s or p:
            print(f"  {name:20} stock={len(s)} {['0x%x'%x for x in s[:8]]}  patch={len(p)}")

    for label, blob in ("stock", STOCK), ("patch", PATCH):
        o = blob.find(b"SplashView.cpp")
        print(f"\n=== SplashView.cpp in {label} @ 0x{o:x}")
        print("  nearby ascii:", dump_around(blob, o, 80, 80))
        # 32-bit pointers to this file string
        va = BASE + o
        for endian_label, fmt in ("le", "<I"),:
            pat = struct.pack(fmt, va)
            hits = find_all(blob, pat)
            print(f"  ptrs to VA 0x{va:x}: {len(hits)} {[hex(h) for h in hits[:12]]}")
        # also file-offset as pointer (some BES images)
        for base in (BASE, 0x3C000000, 0):
            pat = struct.pack("<I", base + o)
            hits = find_all(blob, pat)
            if hits:
                print(f"  ptrs base+off 0x{base:x}: {len(hits)} {[hex(h) for h in hits[:8]]}")

    # Remaining MYVU-like in patch: any 4-byte window that's MYVU in other forms
    print("\n=== displayName / Splash strings")
    for pat in (b"displayName", b"display_name", b"SplashView", b"createSplash",
                b"lv_label", b"FONT_EN_36", b"FONT_CN_36", b"FONT_EN_32"):
        for label, blob in ("stock", STOCK), ("patch", PATCH):
            hits = find_all(blob, pat)
            if hits:
                print(f"  {label} {pat.decode(errors='replace'):16} n={len(hits)} first={hex(hits[0])}")

    # Isolated capital letters as 2-byte UTF-16 sequences that form MYVU nearby
    print("\n=== utf-16le MYVU windows in stock (first 20)")
    pat = "MYVU".encode("utf-16le")
    for o in find_all(STOCK, pat)[:20]:
        print(f"  0x{o:x}  {STOCK[o-8:o+16].hex()}  {dump_around(STOCK, o, 8, 16)}")

    # char-by-char: look for 'M','Y','V','U' as consecutive 16-bit code units with padding
    print("\n=== 4x uint16 code units M Y V U with 0-2 zeros between (stock)")
    n = 0
    i = 0
    blob = STOCK
    while n < 15:
        j = blob.find(b"M\x00", i)
        if j < 0:
            break
        # walk up to 12 bytes for Y V U as utf16
        window = blob[j : j + 16]
        chars = []
        k = 0
        while k + 2 <= len(window):
            cu = struct.unpack_from("<H", window, k)[0]
            if 0x20 <= cu < 0x7F:
                chars.append(chr(cu))
            k += 2
        if "".join(chars).startswith("MYVU"):
            print(f"  0x{j:x} chars={''.join(chars)!r} hex={window.hex()}")
            n += 1
        i = j + 2

    # Stock ASCII MYVU contexts for the two early offsets (splash candidates)
    print("\n=== stock ASCII MYVU contexts (all)")
    for o in find_all(STOCK, b"MYVU"):
        ctx = dump_around(STOCK, o, 24, 40)
        print(f"  0x{o:06x}  {ctx}")


if __name__ == "__main__":
    main()
