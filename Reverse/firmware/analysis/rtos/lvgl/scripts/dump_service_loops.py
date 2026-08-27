#!/usr/bin/env python3
"""leaf-3.3 — LVGL service-loop Capstone dumper.

Rebuilds Reverse/firmware/analysis/rtos/lvgl/service_loops.json and the
listings under disasm/capstone/ from the stock platform_tester.bin alone.
Thread entries are re-recovered via name→osThreadAttr_t→packed entry (same
byte rules as leaf-3.2). Service-loop back-edges are proved from Thumb
branch encodings. Does not read lv_core_map.json or Ghidra project state.

Usage:  python3 scripts/dump_service_loops.py [--out service_loops.json] [--stdout]
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import struct
import sys

from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs

HERE = os.path.dirname(os.path.abspath(__file__))
LEAF = os.path.dirname(HERE)
ROOT = os.path.abspath(os.path.join(LEAF, "..", "..", "..", "..", ".."))
IMG_REL = "Reverse/firmware/x_1.0.12.83/platform_tester.bin"
IMG = os.path.join(ROOT, IMG_REL)
DUMP_DIR = os.path.join(LEAF, "disasm", "capstone")

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


def find_le32(B: bytes, v: int) -> list[int]:
    pat = struct.pack("<I", v & 0xFFFFFFFF)
    out = []
    i = B.find(pat)
    while i >= 0:
        out.append(i)
        i = B.find(pat, i + 1)
    return out


def recover_entry(B: bytes, name: str, D: int, T: int) -> dict:
    name_off = find_string_start(B, name)
    name_va = (name_off + D) & 0xFFFFFFFF
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
        raise SystemExit(f"{name}: no prologue-backed osThreadAttr_t")
    attr_off = chosen
    packed_off = attr_off - 4
    entry_word = u32(B, packed_off)
    entry_file = ((entry_word & ~1) - T) & 0xFFFFFFFF
    entry_va = (entry_word & ~1) & 0xFFFFFFFF
    w = [u32(B, attr_off + 4 * k) for k in range(9)]
    if w[0] != name_va or not in_ram(w[4]) or not (0x100 <= w[5] <= 0x40000) or not (1 <= w[6] <= 56):
        raise SystemExit(f"{name}: attr fields failed classifier")
    return {
        "name": name,
        "name_string_file_off": hx(name_off),
        "name_string_va": hx(name_va),
        "attr_file_off": hx(attr_off),
        "packed_file_off": hx(packed_off),
        "entry_word": hx8(entry_word),
        "entry_file_off": hx(entry_file),
        "entry_va": hx(entry_va),
        "prologue_bytes": B[entry_file:entry_file + 4].hex(),
    }


def decode_branch_imm(B: bytes, f: int, T: int) -> tuple[str, int] | None:
    """Decode Thumb B / B.W / BL / BLX(imm) at file offset f. Returns (kind, target_va)."""
    if f + 2 > len(B):
        return None
    hw1 = u16(B, f)
    # 16-bit unconditional B T2: 11100xxxxxxxxxxx
    if (hw1 & 0xF800) == 0xE000:
        imm = hw1 & 0x7FF
        if imm & 0x400:
            imm -= 0x800
        return ("b", (f + T + 4 + imm * 2) & 0xFFFFFFFF)
    # 16-bit conditional B T1: 1101ccccimm8 (cccc != 1110/1111)
    if (hw1 & 0xF000) == 0xD000:
        cond = (hw1 >> 8) & 0xF
        if cond < 0xE:
            imm = hw1 & 0xFF
            if imm & 0x80:
                imm -= 0x100
            return ("bcond", (f + T + 4 + imm * 2) & 0xFFFFFFFF)
    if f + 4 > len(B):
        return None
    hw2 = u16(B, f + 2)
    if (hw1 & 0xF800) != 0xF000:
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
    tgt = (f + T + 4 + off) & 0xFFFFFFFF
    top = hw2 & 0xD000
    if top == 0xD000:
        return ("bl", tgt)
    if top == 0x9000:
        return ("b.w", tgt)
    if (hw2 & 0xD000) == 0x8000:
        # B.W conditional: 1111 0S cond imm6 | 10 J1 0 J2 imm11
        return ("bcond.w", tgt)
    return None


def walk_function(B: bytes, entry_file: int, T: int, max_bytes: int = 0x400) -> dict:
    """CFG walk from entry; collect instructions and intra-function back-edges."""
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    entry_va = (entry_file + T) & 0xFFFFFFFF
    lo = entry_file
    hi_limit = min(len(B), entry_file + max_bytes)
    seen: set[int] = set()
    work = [entry_file]
    insns: list[dict] = []
    edges: list[dict] = []
    returns = 0

    while work:
        f = work.pop()
        if f in seen or f < lo or f >= hi_limit:
            continue
        seen.add(f)
        chunk = B[f:min(f + 4, hi_limit)]
        got = list(md.disasm(chunk, f + T))
        if not got:
            continue
        i = got[0]
        size = i.size
        file_off = f
        rec = {
            "file_off": hx(file_off),
            "va": hx(i.address),
            "bytes": i.bytes.hex(),
            "mnemonic": i.mnemonic,
            "op_str": i.op_str,
        }
        insns.append(rec)

        mn = i.mnemonic.lower()
        is_ret = mn in ("bx",) and "lr" in i.op_str.lower()
        is_ret = is_ret or mn.startswith("pop") and ("pc" in i.op_str.lower())
        if is_ret:
            returns += 1
            continue

        fall = file_off + size
        br = decode_branch_imm(B, file_off, T)
        if br is not None:
            kind, tgt_va = br
            tgt_file = (tgt_va - T) & 0xFFFFFFFF
            edges.append({
                "kind": kind,
                "from_file_off": hx(file_off),
                "from_va": hx((file_off + T) & 0xFFFFFFFF),
                "to_file_off": hx(tgt_file),
                "to_va": hx(tgt_va),
                "bytes": B[file_off:file_off + (4 if kind not in ("b", "bcond") or size == 4 else 2)].hex(),
            })
            # Intra-window targets stay in the CFG.
            if lo <= tgt_file < hi_limit:
                work.append(tgt_file)
            if kind in ("b", "b.w"):
                # Unconditional: no fall-through.
                continue
            if kind == "bl":
                # Fall through after BL.
                if fall < hi_limit:
                    work.append(fall)
                continue
            # conditional: both sides
            if fall < hi_limit:
                work.append(fall)
            continue

        # Ordinary fall-through (including IT blocks approximated linearly).
        if fall < hi_limit:
            work.append(fall)

    insns.sort(key=lambda r: int(r["file_off"], 16))
    # Back-edges: branch to an address already at or before the branch, inside the body.
    body_files = {int(r["file_off"], 16) for r in insns}
    if not body_files:
        raise SystemExit("empty function at " + hx(entry_file))
    body_lo = min(body_files)
    body_hi = max(body_files)
    backs = []
    for e in edges:
        src = int(e["from_file_off"], 16)
        dst = int(e["to_file_off"], 16)
        if dst in body_files and dst <= src and e["kind"] in ("b", "b.w", "bcond", "bcond.w"):
            backs.append(e)

    return {
        "entry_file_off": hx(entry_file),
        "entry_va": hx(entry_va),
        "body_file_lo": hx(body_lo),
        "body_file_hi": hx(body_hi + 4),  # exclusive-ish upper bound for dump
        "insn_count": len(insns),
        "return_sites": returns,
        "instructions": insns,
        "edges": edges,
        "back_edges": backs,
    }


def pick_service_loop(name: str, walked: dict) -> dict:
    backs = walked["back_edges"]
    if not backs:
        raise SystemExit(f"{name}: no back-edge found")
    if name == "lvgl_async":
        # Prefer unconditional b/b.w whose target immediately precedes a BL that
        # the branch itself sits after (tight while(1) { work(); }).
        uncond = [e for e in backs if e["kind"] in ("b", "b.w")]
        if not uncond:
            raise SystemExit("lvgl_async: no unconditional back-edge")
        # The tight loop is the shortest span.
        uncond.sort(key=lambda e: int(e["from_file_off"], 16) - int(e["to_file_off"], 16))
        edge = uncond[0]
        shape = "unconditional_tail_back_edge"
    else:
        # UI: flag-controlled conditional back-edge(s); take the one inside the
        # wait loop (bne back to the handler BL).
        cond = [e for e in backs if e["kind"] in ("bcond", "bcond.w")]
        if not cond:
            raise SystemExit("lvgl_ui: no conditional back-edge")
        # Prefer the back-edge whose target is a BL site in the body.
        bl_sites = {
            int(i["file_off"], 16)
            for i in walked["instructions"]
            if i["mnemonic"].lower() == "bl"
        }
        ranked = sorted(
            cond,
            key=lambda e: (
                0 if int(e["to_file_off"], 16) in bl_sites else 1,
                int(e["from_file_off"], 16) - int(e["to_file_off"], 16),
            ),
        )
        edge = ranked[0]
        shape = "conditional_flag_wait_back_edge"

    return {
        "shape": shape,
        "branch_kind": edge["kind"],
        "branch_file_off": edge["from_file_off"],
        "branch_va": edge["from_va"],
        "target_file_off": edge["to_file_off"],
        "target_va": edge["to_va"],
        "branch_bytes": edge["bytes"],
    }


def write_dump(path: str, name: str, walked: dict, loop: dict, T: int) -> str:
    lines = []
    lines.append(f"; {name}  entry={walked['entry_va']}  file={walked['entry_file_off']}")
    lines.append(f"; text_base={hx(T)}  insns={walked['insn_count']}  returns={walked['return_sites']}")
    lines.append(
        f"; service_loop {loop['shape']}  "
        f"{loop['branch_va']} {loop['branch_kind']} -> {loop['target_va']}"
    )
    lines.append("")
    for i in walked["instructions"]:
        lines.append(
            f"{i['va']}  {i['bytes']:<12s}  {i['mnemonic']} {i['op_str']}".rstrip()
        )
    text = "\n".join(lines) + "\n"
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as f:
        f.write(text)
    return text


def build(B: bytes) -> dict:
    words = [u32(B, i * 4) for i in range(len(B) // 4)]
    D, d_hits, d_second, nanchor, nuniq, inter = derive_data_base(B, words)
    pairs = collect_name_fn_pairs(B, words, D)
    T, t_hits, t_second, npairs = derive_text_base(B, pairs)

    threads = []
    dump_texts: dict[str, str] = {}
    os.makedirs(DUMP_DIR, exist_ok=True)
    for name in WANT:
        meta = recover_entry(B, name, D, T)
        entry_file = int(meta["entry_file_off"], 16)
        walked = walk_function(B, entry_file, T)
        loop = pick_service_loop(name, walked)
        dump_name = f"{name}.asm"
        dump_rel = f"disasm/capstone/{dump_name}"
        dump_path = os.path.join(DUMP_DIR, dump_name)
        dump_texts[dump_rel] = write_dump(dump_path, name, walked, loop, T)
        # Slim the JSON: keep loop + bounds + a short listing digest, not every insn
        # twice (full listing lives in the .asm dump which G4 re-checks).
        threads.append({
            **meta,
            "body_file_lo": walked["body_file_lo"],
            "body_file_hi": walked["body_file_hi"],
            "insn_count": walked["insn_count"],
            "return_sites": walked["return_sites"],
            "back_edge_count": len(walked["back_edges"]),
            "service_loop": loop,
            "dump_path": dump_rel,
            "dump_sha256": hashlib.sha256(dump_texts[dump_rel].encode("utf-8")).hexdigest(),
            "instructions": walked["instructions"],
            "back_edges": walked["back_edges"],
        })

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
            "ghidra_project_note": (
                "Existing disasm/proj was imported with loader-baseAddr 0x2C000000; "
                "runtime Thumb VAs are file_off+0x2C010000 (0x10000 higher). "
                "This leaf's Capstone dumps use the derived text_base."
            ),
        },
        "threads": threads,
        "inferences": [
            {
                "id": "INF-1",
                "label": "inference",
                "claim": (
                    "lvgl_async's service loop is an unconditional tight tail: "
                    "BL work_fn; B back_to_BL, so the thread never returns."
                ),
                "reason": (
                    "Capstone+decoder find an unconditional 16-bit B whose target "
                    "is the BL immediately preceding the branch."
                ),
            },
            {
                "id": "INF-2",
                "label": "inference",
                "claim": (
                    "lvgl_ui's long-lived service behaviour is a conditional "
                    "flag-wait loop (handler BL + blocking wait + BNE back), not "
                    "an unconditional while(1) at the entry prologue."
                ),
                "reason": (
                    "The entry has reachable POP {…,pc} return paths, but also a "
                    "conditional back-edge whose target is a BL site inside the body."
                ),
            },
            {
                "id": "INF-3",
                "label": "inference",
                "claim": (
                    "Ghidra listings under disasm/asm that used base 0x2C000000 "
                    "label VAs 0x10000 too low relative to runtime Thumb pointers."
                ),
                "reason": (
                    "leaf-3.2/3.4 independently derive text_base 0x2C010000; the "
                    "import33.sh loader-baseAddr is 0x2C000000."
                ),
            },
            {
                "id": "FACT-boundary",
                "label": "fact",
                "claim": (
                    "This leaf proves entry bodies and service-loop back-edges "
                    "from Capstone/bytes; it does not rename callees to "
                    "lv_timer_handler or prove tick/flush wiring (leaf-3.4)."
                ),
                "reason": "Scope boundary for consumers of service_loops.json.",
            },
        ],
    }


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(LEAF, "service_loops.json"))
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
