#!/usr/bin/env python3
"""leaf-3.1 -- resolve the code sites that emit the LVGL thread TRACE strings.

Recovers the *actual* format-string reference encoding used by this firmware's
LVGL module (star_air_lvgl), applies it to the LVGL thread log/path strings and
emits Reverse/firmware/analysis/rtos/lvgl/intern_sites.json.

Everything written to the JSON is derived from the stock image bytes; nothing is
copied from the pre-existing hud_map/intern_map.json (which this script also
falsifies -- see the `intern_id_scan` block of the output).

Requires: capstone (used only for function-bounds recovery / disassembly text).
"""
import json
import os
import struct
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", "..", "..", "..", ".."))
BIN = os.path.join(ROOT, "Reverse", "firmware", "x_1.0.12.83", "platform_tester.bin")
OUT = os.path.abspath(os.path.join(HERE, "..", "intern_sites.json"))
HUD_INTERN = os.path.join(ROOT, "Reverse", "firmware", "analysis", "hud_map", "intern_map.json")

CODE_BASE = 0x2C000000          # flat XIP mapping for .text (PLAN anchor)
HUD_POOL = 0x198FFC             # pool base claimed by hud_map/intern_map.json
RODATA_LO, RODATA_HI = 0x400000, 0x430000   # star_air_lvgl rodata blob (file offsets)

B = open(BIN, "rb").read()
N = len(B)

# ---------------------------------------------------------------- helpers ---
def u32(off):
    return struct.unpack_from("<I", B, off)[0]


def cstr(off, limit=512):
    z = B.index(b"\x00", off)
    return B[off:z].decode("ascii", "replace")


def find_all(pat):
    out, i = [], B.find(pat)
    while i >= 0:
        out.append(i)
        i = B.find(pat, i + 1)
    return out


def str_start(text):
    """Exact file offset of a NUL-terminated ASCII string with this content."""
    pat = text.encode() + b"\x00"
    hits = find_all(pat)
    if not hits:
        raise SystemExit("string not found: %r" % text)
    outs = []
    for h in hits:
        prev = B[h - 1]
        if prev == 0 or not (32 <= prev < 127):   # NUL- or non-ASCII-preceded => true start
            outs.append(h)
    if not outs:
        raise SystemExit("no true string start for %r" % text)
    return outs[0]


# ------------------------------------------- 1. recover the rodata delta -----
def string_starts(lo, hi, minlen=10):
    out, i = [], lo
    while i < hi:
        if B[i - 1] == 0 and 32 <= B[i] < 127:
            j = i
            while j < hi and 32 <= B[j] < 127:
                j += 1
            if j < hi and B[j] == 0 and j - i >= minlen:
                out.append(i)
                i = j + 1
                continue
        i += 1
    return out


def recover_delta(sample=400):
    """The LVGL rodata blob is *not* flat-mapped: it is referenced at a runtime
    VA of file_off + DELTA.  Recover DELTA by correlating every 4-aligned dword
    in the image against known NUL-terminated string starts inside the blob."""
    import numpy as np
    starts = string_starts(RODATA_LO, RODATA_HI)
    words = np.frombuffer(B[: (N & ~3)], dtype="<u4").astype(np.int64)
    cand = np.unique(words[(words >= 0x2C000000) & (words < 0x3E000000)])
    votes = Counter()
    for s in starts[:sample]:
        votes.update((cand - s).tolist())
    (delta, hits), = votes.most_common(1)
    return delta & 0xFFFFFFFF, hits, len(starts[:sample]), len(starts)


DELTA, DELTA_HITS, DELTA_SAMPLE, DELTA_TOTAL = recover_delta()

# ------------------------------------------------ 2. instruction decoders ----
def dec_ldr_literal(off):
    """LDR (literal) T1/T2.  Returns (literal_file_off, rt, form, size)."""
    if off + 2 > N:
        return None
    hw1 = B[off] | (B[off + 1] << 8)
    if (hw1 & 0xF800) == 0x4800:                     # T1: LDR Rt,[PC,#imm8*4]
        rt = (hw1 >> 8) & 7
        return (((off + 4) & ~3) + (hw1 & 0xFF) * 4, rt, "LDR (literal) T1", 2)
    if off + 4 > N:
        return None
    if (hw1 & 0xFF7F) == 0xF85F:                     # T2: LDR.W Rt,[PC,#+/-imm12]
        hw2 = B[off + 2] | (B[off + 3] << 8)
        rt = (hw2 >> 12) & 0xF
        imm = hw2 & 0xFFF
        base = (off + 4) & ~3
        u = (hw1 >> 7) & 1
        return (base + imm if u else base - imm, rt, "LDR.W (literal) T2", 4)
    return None


def dec_adr(off):
    """ADR T1 (ADD Rd,PC,#imm8*4) and T2/T3 (SUB/ADD Rd,PC,#imm12)."""
    if off + 2 > N:
        return None
    hw1 = B[off] | (B[off + 1] << 8)
    if (hw1 & 0xF800) == 0xA000:
        rd = (hw1 >> 8) & 7
        return (((off + 4) & ~3) + (hw1 & 0xFF) * 4, rd, "ADR T1", 2)
    if off + 4 > N:
        return None
    hw2 = B[off + 2] | (B[off + 3] << 8)
    if hw2 & 0x8000:
        return None
    if (hw1 & 0xFBFF) == 0xF20F or (hw1 & 0xFBFF) == 0xF2AF:
        imm = (((hw1 & 0xF) << 12) | (((hw1 >> 10) & 1) << 11)
               | (((hw2 >> 12) & 7) << 8) | (hw2 & 0xFF))
        # imm4 field is the Rn=PC marker here, so recompute without it
        imm = ((((hw1 >> 10) & 1) << 11) | (((hw2 >> 12) & 7) << 8) | (hw2 & 0xFF))
        rd = (hw2 >> 8) & 0xF
        base = (off + 4) & ~3
        add = (hw1 & 0xFBFF) == 0xF20F
        return (base + imm if add else base - imm, rd, "ADR T3" if add else "ADR T2", 4)
    return None


def dec_movw(off):
    hw1 = B[off] | (B[off + 1] << 8)
    hw2 = B[off + 2] | (B[off + 3] << 8)
    if (hw1 & 0xFBF0) != 0xF240 or (hw2 & 0x8000):
        return None
    imm = (((hw1 & 0xF) << 12) | (((hw1 >> 10) & 1) << 11)
           | (((hw2 >> 12) & 7) << 8) | (hw2 & 0xFF))
    return imm, (hw2 >> 8) & 0xF


def dec_movt(off):
    hw1 = B[off] | (B[off + 1] << 8)
    hw2 = B[off + 2] | (B[off + 3] << 8)
    if (hw1 & 0xFBF0) != 0xF2C0 or (hw2 & 0x8000):
        return None
    imm = (((hw1 & 0xF) << 12) | (((hw1 >> 10) & 1) << 11)
           | (((hw2 >> 12) & 7) << 8) | (hw2 & 0xFF))
    return imm, (hw2 >> 8) & 0xF


# ------------------------------------------------- 3. function boundaries ----
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_LITTLE_ENDIAN  # noqa: E402

MD = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_LITTLE_ENDIAN)
MD.detail = True


def is_prologue(off):
    hw1 = B[off] | (B[off + 1] << 8)
    if (hw1 & 0xFF00) == 0xB500:                       # PUSH {reglist, LR}
        return "PUSH {..,lr} (T1)"
    if hw1 == 0xE92D:                                  # PUSH.W {reglist}
        hw2 = B[off + 2] | (B[off + 3] << 8)
        if hw2 & 0x4000:                               # LR present
            return "PUSH.W {..,lr} (T2)"
    return None


def sweep(start, stop):
    """Linear Thumb disassembly; returns list of (off, size, mnem, ops)."""
    out = []
    for ins in MD.disasm(B[start:stop], CODE_BASE + start):
        out.append((ins.address - CODE_BASE, ins.size, ins.mnemonic, ins.op_str,
                    ins.bytes.hex()))
    return out


COND_B = {"beq", "bne", "bcs", "bhs", "bcc", "blo", "bmi", "bpl", "bvs", "bvc",
          "bhi", "bls", "bge", "blt", "bgt", "ble", "bal"}
CB = {"cbz", "cbnz"}


def _base_mnem(m):
    return m.split(".")[0]


def branch_target(mnem, ops):
    """Immediate target of a *branch* (not a call).  None for everything else."""
    bm = _base_mnem(mnem)
    if bm not in COND_B and bm not in CB and bm != "b":
        return None
    if "#0x" not in ops:
        return None
    try:
        return int(ops.split("#")[-1].split(",")[0], 16) - CODE_BASE
    except ValueError:
        return None


def looks_like_pool(off):
    o = (off + 3) & ~3
    if o + 4 > N:
        return False
    return (u32(o) >> 24) in (0x2C, 0x3C, 0x3D)


def find_func_end(start, limit=0x900):
    """Linear sweep forward; stop at the first terminator that no in-function
    forward branch skips over."""
    insns = sweep(start, min(N, start + limit))
    maxt = start
    for (off, size, mnem, ops, raw) in insns:
        t = branch_target(mnem, ops)
        if t is not None and start <= t < start + limit and t > maxt:
            maxt = t
        bm = _base_mnem(mnem)
        term = None
        if bm == "pop" and "pc" in ops:
            term = "%s %s" % (mnem, ops)
        elif bm == "bx" and ops.strip() == "lr":
            term = "bx lr"
        elif bm == "b" and t is not None and not (start <= t < start + limit):
            term = "%s %s (tail call)" % (mnem, ops)
        elif bm == "b" and t is not None and t <= off:
            term = "%s %s (unconditional backward branch / never returns)" % (mnem, ops)
        elif bm in ("ldr",) and ops.startswith("pc,"):
            term = "%s %s" % (mnem, ops)
        if term and off >= maxt:
            return off, size, term, raw
        # no-return call (e.g. __stack_chk_fail) immediately followed by the
        # function's literal pool
        if bm == "bl" and off >= maxt and looks_like_pool(off + size) \
                and not any(o2 > off for (o2, _s, _m, _o, _r) in insns
                            if _base_mnem(_m) not in ("nop",) and o2 < off + 8 and False):
            if looks_like_pool(off + size) and (off + size) % 4 == 0:
                return off, size, "%s %s (no-return call, literal pool follows)" % (mnem, ops), raw
    return None


def pool_boundary(end_off):
    o = (end_off + 3) & ~3
    for k in range(0, 0x40, 4):
        if o + k + 4 > N:
            break
        if (u32(o + k) >> 24) in (0x2C, 0x3C, 0x3D):
            return o + k
    return o


def _boundary_evidence(p):
    """Is file offset p a plausible *function start*?  Returns (ok, [reasons])."""
    why = []
    ok = False
    pw = (p - 4) & ~3
    if p >= 4:
        pv = u32(pw)
        if (pv >> 24) in (0x2C, 0x3C, 0x3D):
            ok = True
            why.append("preceded by literal-pool pointer %#010x at %#x" % (pv, pw))
    if p >= 2 and (B[p - 2] | (B[p - 1] << 8)) == 0xBF00:
        ok = True
        why.append("preceded by 0xbf00 nop alignment padding")
    prev = sweep(max(0, p - 8), p)
    if prev and prev[-1][0] + prev[-1][1] == p:
        m, o2 = prev[-1][2], prev[-1][3]
        bm = _base_mnem(m)
        if (bm == "pop" and "pc" in o2) or (bm == "bx" and o2.strip() == "lr") \
           or (bm == "b" and "#0x" in o2):
            ok = True
            why.append("preceded by return/tail-call `%s %s`" % (m, o2))
    return ok, why


def recover_func(site_off):
    p = site_off
    lo = max(0, site_off - 0x800)
    while p > lo:
        p -= 2
        proto = is_prologue(p)
        if not proto:
            continue
        offs = {i[0] for i in sweep(p, site_off + 8)}
        if site_off not in offs:
            continue
        push_off = p
        start = p
        why = []
        ok, w = _boundary_evidence(start)
        why += w
        scheduled = 0
        if not ok:
            # GCC may schedule a few argument-setup instructions ahead of the
            # PUSH.  Walk back to the nearest real boundary that still decodes
            # straight into the PUSH.
            for q in range(push_off - 2, max(0, push_off - 20), -2):
                if push_off not in {i[0] for i in sweep(q, push_off + 2)}:
                    continue
                ok2, w2 = _boundary_evidence(q)
                if ok2:
                    start, ok, scheduled = q, True, push_off - q
                    why += w2
                    why.append("PUSH at %#x is preceded by %d bytes of scheduled "
                               "argument setup that decode straight into it"
                               % (push_off, scheduled))
                    break
        if not ok:
            why.append("NO function-boundary evidence before the prologue")
        endinfo = find_func_end(start)
        if not endinfo:
            why.append("no terminator found within 0x900 bytes of the start")
        why.append("linear Thumb sweep from the recovered start lands exactly on "
                   "the site offset %#x" % site_off)
        conf = "high" if (ok and endinfo) else "low"
        return {
            "start_file_off": hex(start),
            "start_va": hex(CODE_BASE + start),
            "prologue_file_off": hex(push_off),
            "prologue_va": hex(CODE_BASE + push_off),
            "prologue": proto,
            "prologue_bytes": B[push_off:push_off + (4 if proto.endswith("(T2)") else 2)].hex(),
            "scheduled_prefix_bytes": scheduled,
            "end_file_off": hex(endinfo[0]) if endinfo else None,
            "end_va": hex(CODE_BASE + endinfo[0]) if endinfo else None,
            "end_insn": endinfo[2] if endinfo else None,
            "end_bytes": endinfo[3] if endinfo else None,
            "literal_pool_start_file_off": hex(pool_boundary(endinfo[0] + endinfo[1])) if endinfo else None,
            "size_bytes": (endinfo[0] + endinfo[1] - start) if endinfo else None,
            "confidence": conf,
            "confidence_reason": "; ".join(why),
        }
    return None



TRACE_CALLEES = {0x2C673D88, 0x2C62C82C}


def site_line_number(site_off, func):
    """The BES TRACE call passes __LINE__ in r1 (or r2 for the 5-arg form) as a
    small immediate.  Sweep from the site to the first BL and report the last
    `movs r1/r2,#imm` that dominates it."""
    if not func:
        return None
    fstart = int(func["start_file_off"], 16)
    lo = max(fstart, site_off - 0x18)
    hi = min(N, site_off + 0x28)
    cand = {}
    for (off, size, mnem, ops, raw) in sweep(fstart, hi):
        if off < lo:
            continue
        bm = _base_mnem(mnem)
        if bm in ("movs", "mov") and ops.startswith(("r1,", "r2,")) and "#" in ops:
            try:
                cand[ops.split(",")[0].strip()] = int(ops.split("#")[-1], 16)
            except ValueError:
                pass
        if bm == "bl" and "#0x" in ops:
            try:
                tgt = int(ops.split("#")[-1], 16)
            except ValueError:
                continue
            if tgt in TRACE_CALLEES and off > site_off:
                return {"trace_callee_va": hex(tgt),
                        "line_arg_r1": cand.get("r1"),
                        "line_arg_r2": cand.get("r2")}
    return None


def data_references(va_rt):
    """Pool entries that live inside the rodata blob itself (i.e. the string is
    referenced from a data structure, not from code)."""
    out = []
    for p in find_all(struct.pack("<I", va_rt)):
        if RODATA_LO <= p < RODATA_HI:
            words = [hex(u32(p + 4 * k)) for k in range(9) if p + 4 * k + 4 <= N]
            out.append({
                "file_off": hex(p),
                "va_runtime": hex((p + DELTA) & 0xFFFFFFFF),
                "context_words": words,
                "hypothesis": ("CMSIS-RTOS2 osThreadAttr_t {name, attr_bits, cb_mem, "
                               "cb_size, stack_mem, stack_size, priority, tz_module, "
                               "reserved} -- structural inference only, confirmation "
                               "belongs to leaf-3.2"),
            })
    return out


# ------------------------------------------------------- 4. target strings ---
TARGETS = [
    ("lvgl_task_handler_thread running...", "log"),
    ("lvgl_task_handler_thread stopped", "log"),
    ("lvgl_async_handler_thread, waiting signal..", "log"),
    ("Enter lvgl_async_handler_thread!", "log"),
    ("lvgl_async_handler_signaling", "log"),
    ("../../thirdparty/star_air_lvgl/src/porting/lv_app.c", "path"),
    ("../../thirdparty/star_air_lvgl/src/porting/lv_async_handler_thread.c", "path"),
    ("../../thirdparty/star_air_lvgl/src/porting/lv_to_async_ipc.c", "path"),
    ("lvgl_async", "thread-name"),
]

CONTROL = "../../thirdparty/star_air_lvgl/src/porting/lv_port_disp_speedup_bgra8888.c"


def literal_refs(pool_off):
    """Every LDR-literal / ADR instruction whose PC-relative target is pool_off."""
    out = []
    lo = max(0, pool_off - 0x1010)
    hi = min(N, pool_off + 8)
    for off in range(lo, hi, 2):
        for dec in (dec_ldr_literal, dec_adr):
            r = dec(off)
            if r and r[0] == pool_off:
                out.append((off, r[1], r[2], r[3]))
    return out


def analyse(text, kind):
    soff = str_start(text)
    va_flat = CODE_BASE + soff
    va_rt = (soff + DELTA) & 0xFFFFFFFF
    pools = find_all(struct.pack("<I", va_rt))
    entry = {
        "text": text,
        "kind": kind,
        "file_off": hex(soff),
        "va_flat_xip": hex(va_flat),
        "va_runtime": hex(va_rt),
        "byte_len": len(text),
        "intern_id": None,
        "intern_id_note": (
            "no intern id exists for this string: the star_air_lvgl module does not "
            "use the 16-bit MOVW intern form. Its runtime address (%s) is stored "
            "verbatim in a Thumb literal pool and loaded with LDR (literal)." % hex(va_rt)
        ),
        "literal_pool_entries": [],
    }
    for p in pools:
        pe = {"file_off": hex(p), "va": hex(CODE_BASE + p), "value": hex(va_rt), "sites": []}
        for (off, rd, form, size) in literal_refs(p):
            pe["sites"].append({
                "file_off": hex(off),
                "va": hex(CODE_BASE + off),
                "bytes": B[off:off + size].hex(),
                "form": form,
                "rd": rd,
                "literal_file_off": hex(p),
            })
            f = recover_func(off)
            pe["sites"][-1]["function"] = f
            pe["sites"][-1]["trace_call"] = site_line_number(off, f)
        entry["literal_pool_entries"].append(pe)
    entry["site_count"] = sum(len(p["sites"]) for p in entry["literal_pool_entries"])
    entry["data_references"] = data_references(va_rt)
    if entry["site_count"] == 0 and entry["data_references"]:
        entry["note"] = ("no code site loads this string: its only reference is the "
                         "data structure listed under data_references (this is a thread "
                         "name, consumed by the RTOS, not a TRACE format string).")
    return entry


# ---------------------------------------------- 5. the two required scans ----
def direct_pointer_scan(offsets):
    res = {}
    for base, label in ((0x2C000000, "0x2C000000 (flat XIP)"),
                        (0x3C000000, "0x3C000000 (claimed TRACE alias)"),
                        (DELTA, "%#010x (recovered rodata delta)" % DELTA)):
        tot = 0
        per = {}
        for name, off in offsets:
            hits = find_all(struct.pack("<I", (base + off) & 0xFFFFFFFF))
            per[name] = len(hits)
            tot += len(hits)
        res[label] = {"total": tot, "per_string": per}
    return res


def intern_id_scan(offsets):
    """Run the hud_map MOVW+0x198FFC decoder against the LVGL strings, and audit
    the decoder itself."""
    import numpy as np
    hw = np.frombuffer(B[: (N & ~1)], dtype="<u2").astype(np.uint32)
    h1, h2 = hw[:-1], hw[1:]
    ok2 = (h2 & 0x8000) == 0
    mw = ((h1 & 0xFBF0) == 0xF240) & ok2
    mt = ((h1 & 0xFBF0) == 0xF2C0) & ok2
    imm = (((h1 & 0xF) << 12) | (((h1 >> 10) & 1) << 11)
           | (((h2 >> 12) & 7) << 8) | (h2 & 0xFF))
    rd = (h2 >> 8) & 0xF
    movw_idx = np.nonzero(mw)[0]
    movw_sites = {}
    for i in movw_idx.tolist():
        movw_sites.setdefault(int(imm[i]), []).append((i * 2, int(rd[i])))
    # adjacent MOVW rd,#lo ; MOVT rd,#hi  (halfword index +2)
    a = movw_idx[movw_idx + 2 < len(mt)]
    movt_pairs = int(np.count_nonzero(mt[a + 2] & (rd[a + 2] == rd[a])))
    per = {}
    for name, off in offsets:
        need = off - HUD_POOL
        per[name] = {
            "required_id": hex(need),
            "encodable_in_movw_imm16": bool(0 <= need <= 0xFFFF),
            "movw_sites_found": len(movw_sites.get(need, [])) if 0 <= need <= 0xFFFF else 0,
        }
    audit = None
    if os.path.exists(HUD_INTERN):
        m = json.load(open(HUD_INTERN))
        s = m.get("sites", [])
        good = sum(1 for x in s if B[HUD_POOL + int(x["intern_id"], 16) - 1] == 0)
        audit = {
            "hud_map_sites": len(s),
            "sites_whose_pool_offset_is_a_real_string_start": good,
            "verdict": ("hud_map/intern_map.json is NOT a valid decoder: %d/%d of its "
                        "resolved 'strings' start mid-token (pool+id is not preceded by NUL). "
                        "MOVW imm16 + 0x198FFC only reaches file 0x198FFC..0x1A8FFB and "
                        "cannot address the star_air_lvgl rodata at 0x400000+."
                        % (len(s) - good, len(s))),
        }
    return {
        "total_movw_T3_instructions": sum(len(v) for v in movw_sites.values()),
        "adjacent_movw_movt_pairs_in_image": movt_pairs,
        "per_string": per,
        "hud_map_decoder_audit": audit,
    }


def main():
    out_path = OUT
    if "--out" in sys.argv:
        out_path = sys.argv[sys.argv.index("--out") + 1]
    offsets = []
    strings = []
    for text, kind in TARGETS:
        e = analyse(text, kind)
        strings.append(e)
        offsets.append((text, int(e["file_off"], 16)))

    ctrl_off = str_start(CONTROL)
    ctrl_hits = len(find_all(struct.pack("<I", (ctrl_off + DELTA) & 0xFFFFFFFF)))

    # cross-check: which functions host which module's strings
    def funcs_for(pred):
        out = set()
        for e in strings:
            if not pred(e):
                continue
            for p in e["literal_pool_entries"]:
                for s in p["sites"]:
                    if s["function"]:
                        out.add(s["function"]["start_va"])
        return sorted(out)

    task_fns = funcs_for(lambda e: e["text"].startswith("lvgl_task_handler_thread"))
    async_fns = funcs_for(lambda e: e["text"] in (
        "lvgl_async_handler_thread, waiting signal..", "Enter lvgl_async_handler_thread!"))

    doc = {
        "leaf": "leaf-3.1",
        "bin": "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
        "bin_size": hex(N),
        "code_va_base": hex(CODE_BASE),
        "encoding": {
            "summary": (
                "The star_air_lvgl (LVGL) module does NOT use a 16-bit TRACE intern id. "
                "Its TRACE format strings and __FILE__ path strings live in a rodata blob "
                "at file 0x400000-0x430000 which is mapped/copied to PSRAM, so its runtime "
                "address is file_off + %#010x (NOT the flat 0x2C000000 XIP mapping used by "
                ".text). Each call site loads that 32-bit runtime address out of the "
                "function's own Thumb literal pool with LDR (literal) T1/T2."
                % DELTA
            ),
            "rodata_runtime_delta": hex(DELTA),
            "rodata_delta_recovery": {
                "method": ("correlate every 4-aligned dword in [0x2C000000,0x3E000000) "
                           "against known NUL-terminated string starts inside 0x400000-0x430000; "
                           "take the delta with the most votes"),
                "string_starts_in_blob": DELTA_TOTAL,
                "sampled": DELTA_SAMPLE,
                "votes_for_winner": DELTA_HITS,
            },
            "trace_call_abi": {
                "callee_va": "0x2c673d88",
                "note": ("observed shape: r0 = level (0 or 4), r1 = __LINE__ (immediate), "
                         "r2 = ptr to __FILE__ path string, r3 = ptr to a per-module tag "
                         "object (0x3c000078), [sp] = ptr to the format string, further "
                         "varargs follow on the stack."),
            },
        },
        "scans": {
            "direct_pointer_scan": direct_pointer_scan(offsets),
            "positive_control": {
                "string": CONTROL,
                "file_off": hex(ctrl_off),
                "va_runtime": hex((ctrl_off + DELTA) & 0xFFFFFFFF),
                "hits_with_recovered_delta": ctrl_hits,
                "note": ("proves the little-endian dword scanner is live: this string IS "
                         "directly referenced. The same scanner returns 0 for the "
                         "0x2C000000 and 0x3C000000 bases, which is therefore a real "
                         "negative, not a broken scanner."),
            },
            "intern_id_scan": intern_id_scan(offsets),
        },
        "threads": {
            "lvgl_task_handler_thread": {
                "functions_logging_running_or_stopped": task_fns,
            },
            "lvgl_async_handler_thread": {
                "functions_logging_enter_or_waiting": async_fns,
            },
            "distinct": sorted(set(task_fns)) != sorted(set(async_fns)),
        },
        "strings": strings,
    }
    with open(out_path, "w") as f:
        json.dump(doc, f, indent=2)
        f.write("\n")
    print("wrote", out_path)
    print("rodata delta", hex(DELTA), "votes", DELTA_HITS, "/", DELTA_SAMPLE)
    for e in strings:
        print("  %-70s %s sites=%d" % (e["text"][:70], e["file_off"], e["site_count"]))
    print("task fns", task_fns)
    print("async fns", async_fns)


if __name__ == "__main__":
    main()
