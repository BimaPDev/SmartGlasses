#!/usr/bin/env python3
"""leaf-3.2 — LVGL thread creation-site generator.

Rebuilds Reverse/firmware/analysis/rtos/lvgl/thread_create_sites.json from the
stock platform_tester.bin alone. Both address bases are re-derived from image
bytes; osThreadAttr_t descriptors and the shared osThreadNew peeler create
sites for lvgl_async / lvgl_ui are recovered without reading lv_core_map.json.

Usage:  python3 scripts/find_thread_create.py [--out thread_create_sites.json] [--stdout]
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
LEAF = os.path.dirname(HERE)
ROOT = os.path.abspath(os.path.join(LEAF, "..", "..", "..", "..", ".."))
IMG_REL = "Reverse/firmware/x_1.0.12.83/platform_tester.bin"
IMG = os.path.join(ROOT, IMG_REL)

PATH_RE = re.compile(rb"\.\./\.\./thirdparty/star_air_lvgl/src/[A-Za-z0-9_/]+\.[ch](pp)?\x00")
IDENT_RE = re.compile(r"[A-Za-z_][A-Za-z0-9_]{3,48}$")
WANT = ("lvgl_async", "lvgl_ui")


def hx(n: int) -> str:
    return "0x%x" % (n & 0xFFFFFFFF)


def hx8(n: int) -> str:
    return "0x%08x" % (n & 0xFFFFFFFF)


def u16(B: bytes, p: int) -> int:
    return struct.unpack_from("<H", B, p)[0]


def u32(B: bytes, p: int) -> int:
    return struct.unpack_from("<I", B, p)[0]


def cstr(B: bytes, p: int, limit: int = 512) -> str | None:
    e = B.find(b"\0", p, p + limit)
    if e < 0:
        return None
    try:
        return B[p:e].decode("ascii")
    except UnicodeDecodeError:
        return None


def is_str_start(B: bytes, f: int, minlen: int = 2) -> bool:
    if f <= 0 or f >= len(B):
        return False
    prev = B[f - 1]
    if not (prev == 0 or prev < 32 or prev >= 127):
        return False
    j = f
    while j < len(B) and 0x20 <= B[j] < 0x7F:
        j += 1
    return j - f >= minlen and j < len(B) and B[j] == 0


def is_prologue(B: bytes, f: int) -> bool:
    if f < 0 or f + 4 > len(B):
        return False
    h = u16(B, f)
    return h == 0xE92D or 0xB400 <= h <= 0xB5FF or h == 0xED2D


def in_ram(v: int) -> bool:
    return (0x20000000 <= v < 0x20200000) or (0x3C000000 <= v < 0x3E000000)


def path_anchors(B: bytes) -> list[int]:
    out = []
    for m in PATH_RE.finditer(B):
        p = m.start()
        if is_str_start(B, p, 8):
            out.append(p)
    return out


def unique_3c_words(words: list[int]) -> set[int]:
    return {w for w in words if 0x3C000000 <= w < 0x3C700000}


def derive_data_base(B: bytes, words: list[int]) -> tuple[int, int, int, int, int, int]:
    anchors = path_anchors(B)
    uniq = unique_3c_words(words)
    if not anchors or not uniq:
        raise SystemExit("no path anchors or 0x3C words")
    inter: set[int] | None = None
    for s in anchors:
        cand = {(w - s) & 0xFFFFFFFF for w in uniq}
        inter = cand if inter is None else (inter & cand)
    if not inter:
        raise SystemExit("data-base intersection empty")
    scores = []
    for d in inter:
        hits = sum(1 for s in anchors if ((s + d) & 0xFFFFFFFF) in uniq)
        scores.append((hits, d))
    scores.sort(reverse=True)
    best_hits, best = scores[0]
    second = scores[1][0] if len(scores) > 1 else 0
    return best & 0xFFFFFFFF, best_hits, second, len(anchors), len(uniq), len(inter)


def collect_name_fn_pairs(B: bytes, words: list[int], D: int) -> list[tuple[int, int, int, str]]:
    out = []
    for i in range(len(words) - 1):
        a, b = words[i], words[i + 1]
        if not (0x3C000000 <= a < 0x3C700000):
            continue
        if not (0x2C000000 <= b < 0x2C700000 and (b & 1)):
            continue
        f = a - D
        if not is_str_start(B, f, 4):
            continue
        s = cstr(B, f, 64)
        if s and IDENT_RE.fullmatch(s):
            out.append((i * 4, a, b, s))
    return out


def derive_text_base(B: bytes, pairs: list) -> tuple[int, int, int, int]:
    score: dict[int, int] = {}
    for k in range(0, 0x700):
        T = 0x2C000000 + k * 0x1000
        c = 0
        for _, _, fn, _ in pairs:
            if is_prologue(B, (fn & ~1) - T):
                c += 1
        if c:
            score[T] = c
    ranked = sorted(score.items(), key=lambda kv: -kv[1])
    if not ranked:
        raise SystemExit("no text-base candidates")
    best, hits = ranked[0]
    second = ranked[1][1] if len(ranked) > 1 else 0
    return best, hits, second, len(pairs)


def find_string_start(B: bytes, text: str) -> int:
    pat = (text + "\0").encode("ascii")
    i = B.find(pat)
    while i >= 0:
        if is_str_start(B, i, 2):
            return i
        i = B.find(pat, i + 1)
    raise SystemExit("string not found as true start: " + text)


def count_true_starts(B: bytes, text: str) -> int:
    pat = (text + "\0").encode("ascii")
    n = 0
    i = B.find(pat)
    while i >= 0:
        if is_str_start(B, i, 2):
            n += 1
        i = B.find(pat, i + 1)
    return n


def find_le32(B: bytes, v: int) -> list[int]:
    pat = struct.pack("<I", v & 0xFFFFFFFF)
    out = []
    i = B.find(pat)
    while i >= 0:
        out.append(i)
        i = B.find(pat, i + 1)
    return out


def decode_bl(B: bytes, f: int, T: int) -> int | None:
    if f + 4 > len(B):
        return None
    hw1, hw2 = u16(B, f), u16(B, f + 2)
    if (hw1 & 0xF800) != 0xF000:
        return None
    if (hw2 & 0xD000) != 0xD000 and (hw2 & 0xD000) != 0x9000:
        return None
    S = (hw1 >> 10) & 1
    imm10 = hw1 & 0x3FF
    J1 = (hw2 >> 13) & 1
    J2 = (hw2 >> 11) & 1
    imm11 = hw2 & 0x7FF
    I1 = (~(J1 ^ S)) & 1
    I2 = (~(J2 ^ S)) & 1
    off = (S << 24) | (I1 << 23) | (I2 << 22) | (imm10 << 12) | (imm11 << 1)
    if S:
        off -= 1 << 25
    return (f + T + 4 + off) & 0xFFFFFFFF


def find_ldr_literal_to(B: bytes, pool: int) -> list[tuple[int, int]]:
    """Return (site, rt) for Thumb T1 LDR (literal) instructions that load pool."""
    out = []
    lo = max(0, pool - 0x1010)
    for off in range(lo, pool, 2):
        hw = u16(B, off)
        if (hw & 0xF800) != 0x4800:
            continue
        tgt = ((off + 4) & ~3) + (hw & 0xFF) * 4
        if tgt == pool:
            out.append((off, (hw >> 8) & 7))
    return out


def find_enclosing_prologue(B: bytes, site: int, limit: int = 0x200) -> int | None:
    for p in range(site, max(0, site - limit) - 1, -2):
        if is_prologue(B, p):
            return p
    return None


def recover_peeler(B: bytes, T: int, create_bls: list[int]) -> dict:
    """Shared peeler = common BL target of the create sites; peels packed {entry,attr}."""
    if not create_bls:
        raise SystemExit("no create BL sites")
    targets = [decode_bl(B, f, T) for f in create_bls]
    if any(t is None for t in targets):
        raise SystemExit("create-site BL decode failed")
    if len(set(targets)) != 1:
        raise SystemExit("create sites do not share one peeler: " + ", ".join(hx(t) for t in targets))
    peeler_va = targets[0]
    peeler_file = (peeler_va - T) & 0xFFFFFFFF
    # peeler ABI: mov r2,r0; cbz; ldr.w r0,[r2],#4; b.w osThreadNew
    sig = bytes.fromhex("024618b152f8040b")
    if B[peeler_file:peeler_file + 8] != sig:
        raise SystemExit("peeler signature mismatch at " + hx(peeler_file))
    branch = decode_bl(B, peeler_file + 8, T)
    if branch is None:
        raise SystemExit("peeler B.W/BL to osThreadNew decode failed")
    ost_file = (branch - T) & 0xFFFFFFFF
    return {
        "peeler_file_off": hx(peeler_file),
        "peeler_va": hx(peeler_va),
        "peeler_signature_hex": sig.hex(),
        "osThreadNew_file_off": hx(ost_file),
        "osThreadNew_va": hx(branch),
        "abi": (
            "BES peeler: r0=&{entry,attr}, r1=argument; "
            "loads entry into r0, leaves attr pointer in r2, then B.W to osThreadNew"
        ),
    }


def recover_thread(B: bytes, name: str, D: int, T: int) -> dict:
    name_off = find_string_start(B, name)
    name_va = (name_off + D) & 0xFFFFFFFF
    if count_true_starts(B, name) != 1:
        raise SystemExit(f"{name}: expected exactly one true string start")

    # Prefer the name-VA dword whose preceding word is a Thumb-odd prologue under T.
    hits = find_le32(B, name_va)
    chosen = None
    for h in hits:
        if h < 4:
            continue
        prev = u32(B, h - 4)
        if not (0x2C000000 <= prev < 0x2C700000 and (prev & 1)):
            continue
        entry_file = ((prev & ~1) - T) & 0xFFFFFFFF
        if 0 <= entry_file < len(B) and is_prologue(B, entry_file):
            chosen = h
            break
    if chosen is None:
        raise SystemExit(f"{name}: no prologue-backed osThreadAttr_t name field")

    attr_off = chosen
    packed_off = attr_off - 4
    entry_word = u32(B, packed_off)
    entry_file = ((entry_word & ~1) - T) & 0xFFFFFFFF
    entry_va = (entry_word & ~1) & 0xFFFFFFFF
    if not (entry_word & 1) or not is_prologue(B, entry_file):
        raise SystemExit(f"{name}: packed entry is not Thumb-odd prologue")

    w = [u32(B, attr_off + 4 * k) for k in range(9)]
    if w[0] != name_va:
        raise SystemExit(f"{name}: attr[+0] is not name VA")
    if not in_ram(w[4]):
        raise SystemExit(f"{name}: stack_mem not in RAM")
    if not (0x100 <= w[5] <= 0x40000):
        raise SystemExit(f"{name}: stack_size out of range")
    if not (1 <= w[6] <= 56):
        raise SystemExit(f"{name}: priority out of range")

    packed_va = (packed_off + D) & 0xFFFFFFFF
    attr_va = (attr_off + D) & 0xFFFFFFFF
    packed_hits = find_le32(B, packed_va)
    attr_alone_hits = find_le32(B, attr_va)
    if len(packed_hits) != 1:
        raise SystemExit(f"{name}: packed-def VA hit count {len(packed_hits)} != 1")
    if len(attr_alone_hits) != 0:
        raise SystemExit(f"{name}: attr-alone VA has {len(attr_alone_hits)} hits, expected 0")

    pool = packed_hits[0]
    ldrs = find_ldr_literal_to(B, pool)
    if len(ldrs) != 1:
        raise SystemExit(f"{name}: expected one LDR(literal) to packed pool, got {len(ldrs)}")
    ldr_site, rt = ldrs[0]
    if rt != 0:
        raise SystemExit(f"{name}: LDR target register is r{rt}, expected r0")

    # Immediate next instruction should BL the peeler.
    bl_site = ldr_site + 2
    bl_tgt = decode_bl(B, bl_site, T)
    if bl_tgt is None:
        raise SystemExit(f"{name}: no BL immediately after LDR at " + hx(ldr_site))

    helper = find_enclosing_prologue(B, ldr_site)
    if helper is None:
        raise SystemExit(f"{name}: no enclosing prologue behind create site")

    return {
        "name": name,
        "name_string_file_off": hx(name_off),
        "name_string_va": hx(name_va),
        "name_true_start_count": 1,
        "name_va_dword_hits": [hx(h) for h in hits],
        "osThreadAttr_t": {
            "struct": "osThreadAttr_t",
            "descriptor_file_off": hx(attr_off),
            "descriptor_va": hx(attr_va),
            "raw_words": [hx8(x) for x in w],
            "fields": {
                "+0x00 name": hx(w[0]),
                "+0x04 attr_bits": hx(w[1]),
                "+0x08 cb_mem": hx(w[2]),
                "+0x0c cb_size": hx(w[3]),
                "+0x10 stack_mem": hx(w[4]),
                "+0x14 stack_size": "%s (%u)" % (hx(w[5]), w[5]),
                "+0x18 priority": "%s (%u)" % (hx(w[6]), w[6]),
                "+0x1c tz_module": hx(w[7]),
                "+0x20 reserved": hx(w[8]),
            },
        },
        "packed_def": {
            "file_off": hx(packed_off),
            "va": hx(packed_va),
            "entry_word": hx8(entry_word),
            "entry_fn_file_off": hx(entry_file),
            "entry_fn_va": hx(entry_va),
            "prologue_bytes": B[entry_file:entry_file + 4].hex(),
            "literal_pool_file_off": hx(pool),
            "literal_pool_hits": 1,
            "attr_alone_va_hits": 0,
        },
        "create_site": {
            "ldr_literal_file_off": hx(ldr_site),
            "ldr_literal_va": hx((ldr_site + T) & 0xFFFFFFFF),
            "ldr_rt": rt,
            "ldr_bytes": B[ldr_site:ldr_site + 2].hex(),
            "bl_file_off": hx(bl_site),
            "bl_va": hx((bl_site + T) & 0xFFFFFFFF),
            "bl_target_va": hx(bl_tgt),
            "bl_target_file_off": hx((bl_tgt - T) & 0xFFFFFFFF),
            "helper_prologue_file_off": hx(helper),
            "helper_prologue_va": hx((helper + T) & 0xFFFFFFFF),
            "helper_prologue_bytes": B[helper:helper + 4].hex(),
        },
    }


def build(B: bytes) -> dict:
    words = [u32(B, i * 4) for i in range(len(B) // 4)]
    D, d_hits, d_second, nanchor, nuniq, inter = derive_data_base(B, words)
    pairs = collect_name_fn_pairs(B, words, D)
    T, t_hits, t_second, npairs = derive_text_base(B, pairs)

    threads = [recover_thread(B, name, D, T) for name in WANT]
    create_bls = [int(t["create_site"]["bl_file_off"], 16) for t in threads]
    peeler = recover_peeler(B, T, create_bls)

    # Every create BL must target this peeler.
    for t in threads:
        if int(t["create_site"]["bl_target_va"], 16) != int(peeler["peeler_va"], 16):
            raise SystemExit("%s create BL does not target peeler" % t["name"])

    sha = hashlib.sha256(B).hexdigest()
    return {
        "image": {
            "path": IMG_REL,
            "size": len(B),
            "size_hex": hx(len(B)),
            "sha256": sha,
        },
        "address_model": {
            "text_base": hx(T),
            "data_alias_base": hx(D),
            "derivation_text": {
                "pairs_tested": npairs,
                "winner_hits": t_hits,
                "runner_up_hits": t_second,
            },
            "derivation_data": {
                "path_anchors": nanchor,
                "unique_3c_words": nuniq,
                "winner_hits": d_hits,
                "runner_up_hits": d_second,
                "intersection_size": inter,
            },
        },
        "threads": threads,
        "osThreadNew_wrapper": peeler,
        "inferences": [
            {
                "id": "INF-1",
                "label": "inference",
                "claim": (
                    "The shared create helper at peeler_file_off is a BES ABI peeler: "
                    "callers pass r0=&{entry,attr} (not stock CMSIS osThreadNew args), "
                    "and the peeler loads entry then B.W to the real osThreadNew."
                ),
                "reason": (
                    "Both create sites BL the same 8-byte signature "
                    "024618b152f8040b, which Capstone/bytes decode as "
                    "mov r2,r0; cbz; ldr.w r0,[r2],#4; b.w osThreadNew."
                ),
            },
            {
                "id": "INF-2",
                "label": "inference",
                "claim": (
                    "tz_module=1 on both LVGL thread attrs means TrustZone module "
                    "assignment is enabled for these threads in the CMSIS-RTOS2 sense."
                ),
                "reason": (
                    "osThreadAttr_t[+0x1c] is 1 for both lvgl_async and lvgl_ui; "
                    "CMSIS names that field tz_module."
                ),
            },
            {
                "id": "INF-3",
                "label": "inference",
                "claim": (
                    "Priority values 42 (lvgl_async) and 40 (lvgl_ui) are CMSIS-RTOS2 "
                    "osPriority_t ordinals, not FreeRTOS native priorities."
                ),
                "reason": (
                    "The descriptors classify as osThreadAttr_t under the CMSIS layout "
                    "(name/attr_bits/cb/stack/prio/tz), and prio fields sit in 1..56."
                ),
            },
            {
                "id": "FACT-boundary",
                "label": "fact",
                "claim": (
                    "This leaf proves only the osThreadAttr_t packed defs, entry "
                    "prologues, and peeler create sites for lvgl_async/lvgl_ui; it does "
                    "not prove the service-loop bodies (leaf-3.3) or tick/flush map "
                    "(leaf-3.4)."
                ),
                "reason": "Scope boundary recorded so later consumers do not over-read this artifact.",
            },
        ],
    }


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(LEAF, "thread_create_sites.json"))
    ap.add_argument("--stdout", action="store_true")
    args = ap.parse_args()
    if not os.path.isfile(IMG):
        raise SystemExit("stock image missing: " + IMG)
    with open(IMG, "rb") as f:
        B = f.read()
    doc = build(B)
    text = json.dumps(doc, indent=2) + "\n"
    if args.stdout:
        sys.stdout.write(text)
    else:
        with open(args.out, "w", encoding="utf-8") as f:
            f.write(text)
        print("wrote", args.out, file=sys.stderr)


if __name__ == "__main__":
    main()
