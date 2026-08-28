#!/usr/bin/env python3
"""Shared helpers for idle-HUD-ready analysis. Read-only; not owned by a leaf."""
from __future__ import annotations

import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[5]
BIN_PATH = ROOT / "Reverse" / "firmware" / "x_1.0.12.83" / "platform_tester.bin"
XIP = 0x2C000000
# LVGL_THREAD.md runtime Thumb window (do not mix with XIP without labeling)
THUMB_RUNTIME = 0x2C010000

B = BIN_PATH.read_bytes()
N = len(B)


def u16(off: int) -> int:
    return struct.unpack_from("<H", B, off)[0]


def u32(off: int) -> int:
    return struct.unpack_from("<I", B, off)[0]


def find_all(pat: bytes) -> list[int]:
    out, i = [], B.find(pat)
    while i >= 0:
        out.append(i)
        i = B.find(pat, i + 1)
    return out


def cstr_off(text: str) -> list[int]:
    """True NUL-terminated starts of `text` (preceded by NUL or non-ASCII)."""
    pat = text.encode("ascii") + b"\x00"
    hits = find_all(pat)
    out = []
    for h in hits:
        prev = B[h - 1] if h else 0
        if h == 0 or prev == 0 or not (32 <= prev < 127):
            out.append(h)
    return out


def hexoff(off: int) -> str:
    return f"0x{off:x}"


def dec_ldr_literal(off: int):
    """LDR (literal) T1/T2. Returns (literal_file_off, rt, form, size) or None."""
    if off + 2 > N:
        return None
    hw1 = B[off] | (B[off + 1] << 8)
    if (hw1 & 0xF800) == 0x4800:
        rt = (hw1 >> 8) & 7
        return (((off + 4) & ~3) + (hw1 & 0xFF) * 4, rt, "LDR (literal) T1", 2)
    if off + 4 > N:
        return None
    if (hw1 & 0xFF7F) == 0xF85F:
        hw2 = B[off + 2] | (B[off + 3] << 8)
        rt = (hw2 >> 12) & 0xF
        imm = hw2 & 0xFFF
        base = (off + 4) & ~3
        u = (hw1 >> 7) & 1
        return (base + imm if u else base - imm, rt, "LDR.W (literal) T2", 4)
    return None


def is_push_prologue(off: int) -> bool:
    if off < 0 or off + 2 > N:
        return False
    hw = u16(off)
    if (hw & 0xFE00) == 0xB400:  # PUSH T1
        return True
    if off + 4 <= N and u16(off) & 0xFFD0 == 0xE92D:  # PUSH T2 / PUSH.W
        return True
    if hw in (0xB580, 0xB5F0, 0xB5F8, 0xB570, 0xB5C0, 0xB500):
        return True
    return False


def containing_fn(off: int, back: int = 0x800) -> int | None:
    """Walk backward for a Thumb push prologue; return file offset or None."""
    o = off & ~1
    lo = max(0, o - back)
    while o >= lo:
        if is_push_prologue(o):
            return o
        o -= 2
    return None


def dword_xrefs(value: int, align: int = 4) -> list[int]:
    pat = struct.pack("<I", value)
    return [i for i in find_all(pat) if i % align == 0]


def prologue_hex(off: int, n: int = 4) -> str:
    return B[off : off + n].hex()
