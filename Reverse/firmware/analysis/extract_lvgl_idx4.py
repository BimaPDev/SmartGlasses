#!/usr/bin/env python3
"""Extract every real LVGL IDX4 (cf=9) image from BES2700 firmware."""
from __future__ import annotations

import csv
import math
import os
from collections import defaultdict

import numpy as np
from PIL import Image, ImageDraw, ImageFont

FW = "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
OUT = "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/extracted_images"
BASE = 0x3C000000
PTR_MAX = 0x3C800000
PANEL = 112
BG = (30, 30, 40)
SKIP_FILEOFFS = {0x323F40}  # proven 16-byte table, not an icon
KNOWN_GOOD = {
    0x36D040: (146, 146, "location pin"),
    0x394C40: (280, 280, "disc"),
    0x3871C0: (399, 145, "media atlas"),
}


def load_fw():
    D = np.frombuffer(open(FW, "rb").read(), dtype=np.uint8)
    return D, memoryview(D.tobytes())  # D is the uint8 array; mv for struct-free slicing


def decode_idx4_strips(data: np.ndarray, w: int, h: int):
    """Confirmed storage: full-height 112px vertical strips, row-major, L→R.

    Last strip is w%112 remainder, packed as ceil(rem/2)*h bytes.
    Palette is 16 x BGRA at data[0:64], not swizzled.
    even x = high nibble.
    """
    pal = data[:64].reshape(16, 4)
    pix_off = 64
    idx = np.zeros((h, w), dtype=np.uint8)
    for sx in range(0, w, PANEL):
        sw = min(PANEL, w - sx)
        sb = (sw + 1) // 2
        raw = data[pix_off : pix_off + sb * h]
        if raw.size < sb * h:
            raw = np.pad(raw, (0, sb * h - raw.size))
        rows = raw.reshape(h, sb)
        hi = (rows >> 4) & 0x0F
        lo = rows & 0x0F
        strip = np.empty((h, sw), dtype=np.uint8)
        strip[:, 0::2] = hi[:, : (sw + 1) // 2]
        if sw > 1:
            strip[:, 1::2] = lo[:, : sw // 2]
        idx[:, sx : sx + sw] = strip
        pix_off += sb * h
    B, G, R, A = pal[:, 0], pal[:, 1], pal[:, 2], pal[:, 3]
    rgba = np.dstack([R[idx], G[idx], B[idx], A[idx]]).astype(np.uint8)
    return idx, rgba


def decode_idx4_rowmajor(data: np.ndarray, w: int, h: int):
    """Plain row-major IDX4 (equivalent to a single strip when w<=112)."""
    pal = data[:64].reshape(16, 4)
    stride = (w + 1) // 2
    raw = data[64 : 64 + stride * h]
    if raw.size < stride * h:
        raw = np.pad(raw, (0, stride * h - raw.size))
    rows = raw.reshape(h, stride)
    hi = (rows >> 4) & 0x0F
    lo = rows & 0x0F
    idx = np.empty((h, w), dtype=np.uint8)
    idx[:, 0::2] = hi[:, : (w + 1) // 2]
    if w > 1:
        idx[:, 1::2] = lo[:, : w // 2]
    B, G, R, A = pal[:, 0], pal[:, 1], pal[:, 2], pal[:, 3]
    rgba = np.dstack([R[idx], G[idx], B[idx], A[idx]]).astype(np.uint8)
    return idx, rgba


def lag_corr(x: np.ndarray, lag: int) -> float:
    if x.size <= lag or lag < 1:
        return 0.0
    a = x[:-lag].astype(np.float64)
    b = x[lag:].astype(np.float64)
    a -= a.mean()
    b -= b.mean()
    na = float(np.dot(a, a))
    nb = float(np.dot(b, b))
    if na < 1e-12 or nb < 1e-12:
        return 0.0
    return float(np.dot(a, b) / math.sqrt(na * nb))


def autocorr_peak_lag16(pix: np.ndarray) -> tuple[bool, float, int]:
    """Reject if byte autocorr of pixel region peaks at lag 16 with corr>0.85."""
    n = min(int(pix.size), 8192)
    x = pix[:n]
    best_lag = 1
    best_c = -1.0
    c16 = 0.0
    max_lag = min(64, x.size - 2)
    for lag in range(1, max_lag + 1):
        c = lag_corr(x, lag)
        if lag == 16:
            c16 = c
        if c > best_c:
            best_c = c
            best_lag = lag
    period16 = bool(c16 > 0.85 and (best_lag == 16 or (best_lag % 16 == 0 and c16 > 0.85)))
    # User rule: peaks at lag 16 with corr>0.85
    if c16 > 0.85 and best_lag == 16:
        period16 = True
    elif c16 > 0.85 and best_c <= c16 + 0.02:
        # lag 16 is the peak (or tied with 32/48, typical of 16-byte records)
        period16 = True
    else:
        period16 = c16 > 0.85 and best_lag == 16
    return period16, c16, best_lag


def palette_looks_like_records(pal64: np.ndarray) -> bool:
    """Reject if palette looks like struct records (01 00 xx xx repeating)."""
    p = np.asarray(pal64[:64], dtype=np.uint8)
    if p.size < 64:
        return False
    # first 16 bytes as four 01 00 xx xx groups
    first16 = p[:16]
    if (
        int((first16[0::4] == 1).sum()) >= 3
        and int((first16[1::4] == 0).sum()) >= 3
    ):
        return True
    # period-16 records whose first 4 bytes are 01 00 xx xx
    recs = p.reshape(4, 16)
    starts_01_00 = int(np.sum((recs[:, 0] == 1) & (recs[:, 1] == 0)))
    if starts_01_00 >= 3:
        return True
    return False


def palette_opaque_ok(pal64: np.ndarray) -> tuple[bool, int, str]:
    """Require >=2 distinct opaque colors (A>=200) OR a0==0 and some opaque entries.

    All-zero palettes (a0==0, no colour) are allowed as index-only bitmaps; the
    two confirmed 80×80 icons in this firmware are stored that way.
    """
    pal = np.asarray(pal64[:64], dtype=np.uint8).reshape(16, 4)
    opaque_mask = pal[:, 3] >= 200
    opaque = pal[opaque_mask]
    n_opaque = int(opaque_mask.sum())
    if n_opaque:
        uniq = np.unique(opaque[:, :3], axis=0)
        n_distinct = int(uniq.shape[0])
    else:
        n_distinct = 0
    if n_distinct >= 2:
        return True, n_opaque, "opaque_ge2"
    if int(pal[0, 3]) == 0 and n_opaque >= 1:
        return True, n_opaque, "a0_transp"
    if int(pal[0, 3]) == 0 and int(pal.max()) == 0:
        return True, 0, "a0_allzero"
    return False, n_opaque, "pal_fail"


def is_incrementing_16byte_table(blob: np.ndarray) -> bool:
    """16-byte records with a monotonically increasing counter (glyph-dsc tables)."""
    nrec = int(blob.size) // 16
    if nrec < 6:
        return False
    rec = np.asarray(blob[: nrec * 16], dtype=np.uint8).reshape(nrec, 16)
    if float(((rec[:, 0] == 1) & (rec[:, 1] == 0)).mean()) >= 0.6:
        return True
    for off in (0, 2, 4, 6, 8):
        vals = rec[:, off : off + 2].copy().view("<u2").ravel().astype(np.int64)
        d = np.diff(vals)
        if d.size < 5:
            continue
        small_pos = (d > 0) & (d < 256)
        med = float(np.median(d))
        if float(small_pos.mean()) >= 0.75 and 1.0 <= med <= 256.0:
            return True
    return False


def nibble_hist_reject(pix: np.ndarray) -> tuple[bool, float]:
    """Reject if >97% of nibbles are the same index."""
    if pix.size == 0:
        return True, 1.0
    hi = (pix >> 4) & 0x0F
    lo = pix & 0x0F
    hist = np.bincount(np.concatenate([hi, lo]), minlength=16)
    frac = float(hist.max()) / float(hi.size + lo.size)
    return frac > 0.97, frac


def neighbor_coherence(idx: np.ndarray) -> float:
    if idx.shape[0] < 2 or idx.shape[1] < 2:
        return 0.0
    h = float((idx[1:, :] == idx[:-1, :]).mean())
    v = float((idx[:, 1:] == idx[:, :-1]).mean())
    return 0.5 * (h + v)


def pepper4(idx: np.ndarray) -> float:
    """Fraction of interior pixels different from all 4 neighbours."""
    if idx.shape[0] < 3 or idx.shape[1] < 3:
        return 1.0
    mid = idx[1:-1, 1:-1]
    iso = (
        (mid != idx[:-2, 1:-1])
        & (mid != idx[2:, 1:-1])
        & (mid != idx[1:-1, :-2])
        & (mid != idx[1:-1, 2:])
    )
    return float(iso.mean())


def mean_h_run(idx: np.ndarray) -> float:
    tot = 0.0
    n = 0
    for row in idx:
        d = np.diff(row)
        bounds = np.concatenate(([0], np.flatnonzero(d) + 1, [row.size]))
        lens = np.diff(bounds)
        tot += float(lens.sum())
        n += int(lens.size)
    return tot / max(1, n)


def largest_cc(fg: np.ndarray) -> int:
    try:
        from scipy.ndimage import label
    except ImportError:
        return int(fg.sum())
    lab, n = label(fg)
    if n == 0:
        return 0
    sizes = np.bincount(lab.ravel())
    sizes[0] = 0
    return int(sizes.max()) if sizes.size else 0


def icon_score(idx: np.ndarray) -> float:
    """Low noise, long runs, large connected component, high neighbour coherence."""
    coh = neighbor_coherence(idx)
    pep = pepper4(idx)
    run = mean_h_run(idx)
    hist = np.bincount(idx.ravel(), minlength=16)
    mode = int(hist.argmax())
    fg = idx != mode
    L = largest_cc(fg)
    if L < 80:
        return 0.0
    return coh * min(run / 8.0, 1.5) * (1.0 - pep) * min(1.0, L / 250.0)


def scale_dims(w: int, h: int, min_side: int = 64) -> tuple[int, int, int]:
    s = max(1, int(math.ceil(min_side / max(1, min(w, h)))))
    return w * s, h * s, s


def save_color_png(rgba: np.ndarray, path: str, bg=BG):
    h, w = rgba.shape[:2]
    im = Image.fromarray(rgba, "RGBA")
    cv = Image.new("RGB", (w, h), bg)
    cv.paste(im, (0, 0), im)
    nw, nh, s = scale_dims(w, h)
    if s > 1:
        cv = cv.resize((nw, nh), Image.NEAREST)
    cv.save(path)


def save_gray_png(idx: np.ndarray, path: str):
    h, w = idx.shape
    im = Image.fromarray((idx.astype(np.uint16) * 17).clip(0, 255).astype(np.uint8), "L")
    nw, nh, s = scale_dims(w, h)
    if s > 1:
        im = im.resize((nw, nh), Image.NEAREST)
    im.save(path)


def scan_cf9_descriptors(D: np.ndarray):
    """Scan every 4-byte-aligned 12-byte record for IDX4 descriptors."""
    n = (len(D) // 4) * 4
    u32 = D[:n].view("<u4")
    hdr = u32[:-2]
    ds = u32[1:-1]
    ptr = u32[2:]
    cf = hdr & np.uint32(0x1F)
    w = (hdr >> np.uint32(10)) & np.uint32(0x7FF)
    h = (hdr >> np.uint32(21)) & np.uint32(0x7FF)
    exp = np.uint32(64) + ((w + np.uint32(1)) >> np.uint32(1)) * h
    fo64 = ptr.astype(np.int64) - BASE
    end = fo64 + ds.astype(np.int64)
    valid = (
        (cf == 9)
        & (w >= 8)
        & (h >= 8)
        & (w <= 800)
        & (h <= 800)
        & (ds == exp)
        & (ptr >= np.uint32(BASE))
        & (ptr < np.uint32(PTR_MAX))
        & (fo64 >= 0)
        & (end <= len(D))
    )
    idxs = np.flatnonzero(valid)
    out = []
    for i in idxs:
        out.append(
            {
                "dsc_off": int(i) * 4,
                "hdr": int(hdr[i]),
                "w": int(w[i]),
                "h": int(h[i]),
                "data_size": int(ds[i]),
                "data_ptr": int(ptr[i]),
                "fileoff": int(fo64[i]),
            }
        )
    return int(len(u32) - 2), out


def scan_truecolor_descriptors(D: np.ndarray):
    n = (len(D) // 4) * 4
    u32 = D[:n].view("<u4")
    hdr = u32[:-2]
    ds = u32[1:-1]
    ptr = u32[2:]
    cf = hdr & np.uint32(0x1F)
    always_zero = (hdr >> np.uint32(5)) & np.uint32(7)
    w = (hdr >> np.uint32(10)) & np.uint32(0x7FF)
    h = (hdr >> np.uint32(21)) & np.uint32(0x7FF)
    fo64 = ptr.astype(np.int64) - BASE
    end = fo64 + ds.astype(np.int64)
    base_ok = (
        (cf >= 4)
        & (cf <= 6)
        & (always_zero == 0)
        & (w >= 8)
        & (h >= 8)
        & (w <= 800)
        & (h <= 800)
        & (ptr >= np.uint32(BASE))
        & (ptr < np.uint32(PTR_MAX))
        & (fo64 >= 0)
        & (end <= len(D))
        & (ds >= 16)
    )
    idxs = np.flatnonzero(base_ok)
    hits = []
    for i in idxs:
        ww, hh, dsz, c = int(w[i]), int(h[i]), int(ds[i]), int(cf[i])
        layout = None
        if c in (4, 6):
            if dsz == 2 * ww * hh:
                layout = "rgb565"
            elif dsz == 3 * ww * hh:
                layout = "rgb888"
            elif dsz == 4 * ww * hh:
                layout = "bgra8888"
        elif c == 5:
            if dsz == 3 * ww * hh:
                layout = "rgb565a8"
            elif dsz == 4 * ww * hh:
                layout = "bgra8888"
        if layout is None:
            continue
        hits.append(
            {
                "dsc_off": int(i) * 4,
                "w": ww,
                "h": hh,
                "data_size": dsz,
                "fileoff": int(fo64[i]),
                "cf": c,
                "layout": layout,
            }
        )
    return hits


def decode_truecolor(D: np.ndarray, fo: int, w: int, h: int, layout: str):
    n = w * h
    if layout == "bgra8888":
        raw = D[fo : fo + n * 4].reshape(h, w, 4)
        rgba = np.empty_like(raw)
        rgba[..., 0] = raw[..., 2]
        rgba[..., 1] = raw[..., 1]
        rgba[..., 2] = raw[..., 0]
        rgba[..., 3] = raw[..., 3]
        return rgba
    if layout == "rgb888":
        raw = D[fo : fo + n * 3].reshape(h, w, 3)
        rgba = np.empty((h, w, 4), np.uint8)
        rgba[..., :3] = raw
        rgba[..., 3] = 255
        return rgba
    if layout == "rgb565":
        pix = D[fo : fo + n * 2].view("<u2").reshape(h, w).astype(np.uint32)
        r = ((pix >> 11) & 31) * 255 // 31
        g = ((pix >> 5) & 63) * 255 // 63
        b = (pix & 31) * 255 // 31
        rgba = np.dstack([r, g, b, np.full((h, w), 255)]).astype(np.uint8)
        return rgba
    if layout == "rgb565a8":
        raw = D[fo : fo + n * 3].reshape(h, w, 3)
        pix = raw[..., 0].astype(np.uint32) | (raw[..., 1].astype(np.uint32) << 8)
        a = raw[..., 2]
        r = ((pix >> 11) & 31) * 255 // 31
        g = ((pix >> 5) & 63) * 255 // 63
        b = (pix & 31) * 255 // 31
        return np.dstack([r, g, b, a]).astype(np.uint8)
    raise ValueError(layout)


def tc_looks_real(rgba: np.ndarray) -> bool:
    if rgba.size == 0:
        return False
    rgb = rgba[..., :3]
    if float(rgb.std()) < 4.0:
        return False
    # neighbour coherence on luminance
    y = (0.3 * rgb[..., 0] + 0.59 * rgb[..., 1] + 0.11 * rgb[..., 2]).astype(np.int16)
    if y.shape[0] < 2 or y.shape[1] < 2:
        return False
    dh = np.abs(np.diff(y, axis=1)).mean()
    dv = np.abs(np.diff(y, axis=0)).mean()
    tv = 0.5 * (float(dh) + float(dv))
    # real photos/UI sit well below random (~40-80)
    return tv < 28.0


def make_gallery(items, out_path, max_n=80):
    items = items[:max_n]
    cols = 10
    rows = int(math.ceil(len(items) / cols)) if items else 1
    cell = 96
    label_h = 14
    pad = 4
    W = cols * (cell + pad) + pad
    H = rows * (cell + label_h + pad) + pad
    sheet = Image.new("RGB", (W, H), (18, 18, 24))
    draw = ImageDraw.Draw(sheet)
    try:
        font = ImageFont.load_default()
    except Exception:
        font = None
    for i, it in enumerate(items):
        r, c = divmod(i, cols)
        x = pad + c * (cell + pad)
        y = pad + r * (cell + label_h + pad)
        im = Image.open(it["color_path"]).convert("RGB")
        im.thumbnail((cell, cell), Image.NEAREST)
        ox = x + (cell - im.size[0]) // 2
        oy = y + label_h + (cell - im.size[1]) // 2
        sheet.paste(im, (ox, oy))
        label = f"{it['w']}x{it['h']} {it['fileoff']:06x}"
        draw.text((x, y), label, fill=(200, 200, 210), font=font)
    sheet.save(out_path)
    return out_path


def main():
    os.makedirs(OUT, exist_ok=True)
    for name in os.listdir(OUT):
        if name.endswith((".png", ".csv", ".txt")):
            os.remove(os.path.join(OUT, name))
    D, _ = load_fw()
    n_slots, descs = scan_cf9_descriptors(D)
    print(f"firmware {len(D)} bytes; 4-byte slots scanned: {n_slots}")
    print(f"cf=9 size-matched descriptors: {len(descs)}")

    # group by payload
    by_key = defaultdict(list)
    for d in descs:
        by_key[(d["fileoff"], d["w"], d["h"], d["data_size"])].append(d)

    extracted = []
    rejected = []
    seen_fileoff = set()

    for (fo, w, h, ds), group in sorted(by_key.items()):
        dsc_off = min(g["dsc_off"] for g in group)
        pal = D[fo : fo + 64]
        pix = D[fo + 64 : fo + ds]
        notes = []
        if len(group) > 1:
            notes.append(f"ndesc={len(group)}")

        rec = palette_looks_like_records(pal)
        period16, c16, peak_lag = autocorr_peak_lag16(pix)
        pal_ok, n_opaque, pal_why = palette_opaque_ok(pal)
        nib_rej, nib_frac = nibble_hist_reject(pix)
        inc_tab = is_incrementing_16byte_table(D[fo : fo + ds]) or is_incrementing_16byte_table(pix)

        reasons = []
        if fo in SKIP_FILEOFFS:
            reasons.append("skip_known_table")
        if rec:
            reasons.append("pal_records")
        if inc_tab:
            reasons.append("inc_table")
        if period16:
            reasons.append(f"period16(c={c16:.2f},peak={peak_lag})")
        if not pal_ok:
            reasons.append(pal_why)
        if nib_rej:
            reasons.append(f"flat_nibble({nib_frac:.3f})")

        row = {
            "fileoff": fo,
            "w": w,
            "h": h,
            "dsc_off": dsc_off,
            "data_size": ds,
            "palette_opaque_count": n_opaque,
            "period16": period16,
            "c16": c16,
            "reasons": reasons,
            "notes": "",
        }

        if reasons:
            row["notes"] = "REJECT: " + ";".join(reasons)
            rejected.append(row)
            continue

        blob = D[fo : fo + ds]
        idx, rgba = decode_idx4_strips(blob, w, h)
        if pal_why == "a0_allzero":
            # stored palette is all transparent black — visualise indices
            vis = (idx.astype(np.uint16) * 17).clip(0, 255).astype(np.uint8)
            a = np.where(idx != 0, 255, 0).astype(np.uint8)
            rgba = np.dstack([vis, vis, vis, a])
        coh = neighbor_coherence(idx)
        score = icon_score(idx)
        row["idx"] = idx
        row["rgba"] = rgba
        row["coh"] = coh
        row["score"] = score
        extra = f"ok;coh={coh:.3f};score={score:.3f};{pal_why};strips={math.ceil(w/PANEL)}"
        if w <= PANEL:
            extra += ";rowmajor"
            idx_r, _ = decode_idx4_rowmajor(blob, w, h)
            if not np.array_equal(idx, idx_r):
                extra += ";WARN_row_mismatch"
        row["notes"] = extra
        extracted.append(row)
        seen_fileoff.add(fo)

    print(f"unique payloads: {len(by_key)}")
    print(f"extracted: {len(extracted)}")
    print(f"rejected FP: {len(rejected)}")

    # verify known-good present
    for fo, (ew, eh, name) in KNOWN_GOOD.items():
        hit = next((e for e in extracted if e["fileoff"] == fo), None)
        if hit is None:
            rej = next((r for r in rejected if r["fileoff"] == fo), None)
            print(f"WARNING: known-good {name} {fo:#x} NOT extracted: {rej}")
        else:
            print(
                f"known-good {name} {fo:#x} {hit['w']}x{hit['h']} "
                f"coh={hit['coh']:.3f} score={hit['score']:.3f}"
            )

    # write PNGs
    for e in extracted:
        stem = f"{e['w']}x{e['h']}_{e['fileoff']:06x}"
        color_path = os.path.join(OUT, f"{stem}.png")
        gray_path = os.path.join(OUT, f"{stem}_gray.png")
        save_color_png(e["rgba"], color_path)
        save_gray_png(e["idx"], gray_path)
        e["color_path"] = color_path
        e["gray_path"] = gray_path
        if e["w"] <= PANEL:
            # single strip == row-major; still write an explicit _row variant
            row_path = os.path.join(OUT, f"{stem}_row.png")
            save_color_png(e["rgba"], row_path)
            e["row_path"] = row_path

    # true color (secondary)
    tc_hits = scan_truecolor_descriptors(D)
    tc_extracted = []
    tc_seen = set()
    for t in tc_hits:
        key = (t["fileoff"], t["w"], t["h"], t["layout"])
        if key in tc_seen:
            continue
        tc_seen.add(key)
        rgba = decode_truecolor(D, t["fileoff"], t["w"], t["h"], t["layout"])
        if not tc_looks_real(rgba):
            continue
        stem = f"{t['w']}x{t['h']}_{t['fileoff']:06x}_tc{t['cf']}"
        path = os.path.join(OUT, f"{stem}.png")
        save_color_png(rgba, path)
        t["color_path"] = path
        t["notes"] = f"true_color cf={t['cf']} {t['layout']}"
        t["palette_opaque_count"] = ""
        t["period16"] = False
        tc_extracted.append(t)
    print(f"true-color size-matched descriptors: {len(tc_hits)}; extracted: {len(tc_extracted)}")

    # MANIFEST: all cf=9 candidates (extracted + rejected) then true-color
    man_path = os.path.join(OUT, "MANIFEST.csv")
    with open(man_path, "w", newline="") as f:
        wr = csv.writer(f)
        wr.writerow(
            [
                "fileoff",
                "w",
                "h",
                "dsc_off",
                "data_size",
                "palette_opaque_count",
                "period16?",
                "notes",
            ]
        )
        for e in sorted(extracted, key=lambda z: z["fileoff"]) + sorted(
            rejected, key=lambda z: z["fileoff"]
        ):
            wr.writerow(
                [
                    f"0x{e['fileoff']:06x}",
                    e["w"],
                    e["h"],
                    f"0x{e['dsc_off']:06x}",
                    e["data_size"],
                    e["palette_opaque_count"],
                    "Y" if e["period16"] else "N",
                    e["notes"],
                ]
            )
        for t in tc_extracted:
            wr.writerow(
                [
                    f"0x{t['fileoff']:06x}",
                    t["w"],
                    t["h"],
                    f"0x{t['dsc_off']:06x}",
                    t["data_size"],
                    t["palette_opaque_count"],
                    "N",
                    t["notes"],
                ]
            )

    # gallery: most icon-like, force-include known-good
    ranked = sorted(extracted, key=lambda z: z["score"], reverse=True)
    forced = [e for e in extracted if e["fileoff"] in KNOWN_GOOD]
    gallery_items = []
    seen = set()
    for e in forced + ranked:
        if e["fileoff"] in seen:
            continue
        seen.add(e["fileoff"])
        gallery_items.append(e)
        if len(gallery_items) >= 80:
            break
    gal_path = os.path.join(OUT, "gallery.png")
    make_gallery(gallery_items, gal_path, 80)

    top15 = ranked[:15]
    summary_path = os.path.join(OUT, "SUMMARY.txt")
    with open(summary_path, "w") as f:
        f.write(f"slots_scanned={n_slots}\n")
        f.write(f"cf9_descriptors={len(descs)}\n")
        f.write(f"unique_payloads={len(by_key)}\n")
        f.write(f"extracted={len(extracted)}\n")
        f.write(f"rejected_fp={len(rejected)}\n")
        f.write(f"truecolor_extracted={len(tc_extracted)}\n")
        f.write("top15_iconlike:\n")
        for e in top15:
            f.write(
                f"  0x{e['fileoff']:06x} {e['w']}x{e['h']} score={e['score']:.3f} "
                f"coh={e['coh']:.3f} {e['color_path']}\n"
            )

    print("wrote", man_path)
    print("wrote", gal_path)
    print("top15 icon-like:")
    for e in top15:
        print(
            f"  0x{e['fileoff']:06x} {e['w']:>3d}x{e['h']:<3d} "
            f"score={e['score']:.3f} coh={e['coh']:.3f}  {e['color_path']}"
        )
    return n_slots, len(descs), extracted, rejected, top15, tc_extracted


if __name__ == "__main__":
    main()
