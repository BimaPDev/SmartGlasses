#!/usr/bin/env python3
"""Empirical brute-force of LVGL INDEXED_4BIT 16×N tile orderings."""

from __future__ import annotations

import csv
import json
import math
import struct
from collections import Counter
from pathlib import Path

import numpy as np
from PIL import Image

ROOT = Path("/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware")
FW = ROOT / "x_1.0.12.83/platform_tester.bin"
OUT = ROOT / "analysis/tile_crack/out"
EXTRACT = ROOT / "extracted_assets/1.0.12.83/ui/lvgl_idx4"
RODATA = 0x3C000000
FONT_LO, FONT_HI = 0x2FD681, 0x31DBC4

THS = (1, 2, 4, 8, 16, 32)
TILE_ORDERS = ("row", "col")
INTRAS = ("row", "col", "morton", "hilbert", "bup")
NIBBLES = (True, False)
PAL_SKIPS = (0, 32, 64)
PADS = (False, True)
FULLS = (False, True)


def load() -> np.ndarray:
    return np.frombuffer(FW.read_bytes(), dtype=np.uint8)


def decode_header(hdr: int) -> tuple[int, int, int, int]:
    cf = hdr & 0x1F
    az = (hdr >> 5) & 7
    w = (hdr >> 10) & 0x7FF
    h = (hdr >> 21) & 0x7FF
    return cf, az, w, h


def scan_idx4(D: np.ndarray) -> list[dict]:
    n = len(D)
    raw = D.tobytes()
    hits = []
    for off in range(0, n - 12, 4):
        hdr, ds, ptr = struct.unpack_from("<III", raw, off)
        cf, az, w, h = decode_header(hdr)
        if cf != 9 or az != 0:
            continue
        if not (8 <= w <= 640 and 8 <= h <= 480):
            continue
        rowb = (w + 1) // 2
        if ds != 64 + rowb * h:
            continue
        if not (RODATA <= ptr < RODATA + n):
            continue
        foff = ptr - RODATA
        if foff + ds > n:
            continue
        font = foff < FONT_HI and (foff + ds) > FONT_LO
        hits.append(
            {
                "desc": off,
                "w": w,
                "h": h,
                "ds": ds,
                "foff": foff,
                "ptr": ptr,
                "font": font,
            }
        )
    # unique non-overlapping payloads (keep first by file offset)
    hits.sort(key=lambda c: (c["foff"], c["desc"]))
    kept, occupied = [], []
    seen = set()
    for c in hits:
        if c["foff"] in seen:
            continue
        seen.add(c["foff"])
        a, b = c["foff"], c["foff"] + c["ds"]
        if any(a < e and b > s for s, e in occupied):
            continue
        occupied.append((a, b))
        kept.append(c)
    return kept


def is_table_like(D: np.ndarray, foff: int, ds: int) -> float:
    nrec = ds // 16
    if nrec < 8:
        return 0.0
    bs = np.frombuffer(D[foff : foff + nrec * 16].tobytes(), dtype="<u4")[1::4]
    if bs.size < 3:
        return 0.0
    diffs = np.diff(bs.astype(np.int64))
    return float(np.mean((diffs > 0) & (diffs < 64)))


def unpack_nibbles(buf: np.ndarray, hi: bool) -> np.ndarray:
    b = buf.astype(np.uint16)
    n = np.empty(len(b) * 2, dtype=np.uint8)
    if hi:
        n[0::2] = (b >> 4) & 0xF
        n[1::2] = b & 0xF
    else:
        n[0::2] = b & 0xF
        n[1::2] = (b >> 4) & 0xF
    return n


def morton_pts(tw: int, th: int) -> list[tuple[int, int]]:
    pts = []
    for y in range(th):
        for x in range(tw):
            z = 0
            for b in range(8):
                z |= ((x >> b) & 1) << (2 * b)
                z |= ((y >> b) & 1) << (2 * b + 1)
            pts.append((z, x, y))
    pts.sort()
    return [(x, y) for _, x, y in pts]


def hilbert_xy(n: int, d: int) -> tuple[int, int]:
    x = y = 0
    t = d
    s = 1
    while s < n:
        rx = 1 & (t // 2)
        ry = 1 & (t ^ rx)
        if ry == 0:
            if rx == 1:
                x = s - 1 - x
                y = s - 1 - y
            x, y = y, x
        x += s * rx
        y += s * ry
        t //= 4
        s *= 2
    return x, y


def hilbert_pts(n: int) -> list[tuple[int, int]]:
    return [hilbert_xy(n, d) for d in range(n * n)]


HILBERT16 = hilbert_pts(16)


def intra_pts(tw: int, th: int, intra: str) -> list[tuple[int, int]]:
    if intra == "row":
        return [(x, y) for y in range(th) for x in range(tw)]
    if intra == "col":
        return [(x, y) for x in range(tw) for y in range(th)]
    if intra == "bup":
        return [(x, y) for y in range(th - 1, -1, -1) for x in range(tw)]
    if intra == "morton":
        return morton_pts(tw, th)
    if intra == "hilbert":
        if tw == th == 16:
            return HILBERT16
        return morton_pts(tw, th)
    raise ValueError(intra)


def build_index_map(
    w: int, h: int, tw: int, th: int, tile_order: str, intra: str, pad64: bool, full: bool
) -> np.ndarray:
    """Map each output (y,x) to a nibble index in the unpacked payload."""
    ntx = (w + tw - 1) // tw
    nty = (h + th - 1) // th
    if tile_order == "row":
        tiles = [(ty, tx) for ty in range(nty) for tx in range(ntx)]
    else:
        tiles = [(ty, tx) for tx in range(ntx) for ty in range(nty)]
    pts = intra_pts(tw, th, intra)
    m = np.full((h, w), -1, dtype=np.int32)
    idx = 0
    for ty, tx in tiles:
        x0, y0 = tx * tw, ty * th
        tile_start_idx = idx
        for x, y in pts:
            X, Y = x0 + x, y0 + y
            inb = 0 <= X < w and 0 <= Y < h
            if inb:
                m[Y, X] = idx
                idx += 1
            elif full:
                idx += 1
        if pad64:
            # pad consumed bytes from this tile to 64
            consumed = idx - tile_start_idx
            nbytes = (consumed + 1) // 2
            pad = (64 - (nbytes % 64)) % 64
            idx += pad * 2
    return m


MAP_CACHE: dict[tuple, np.ndarray] = {}


def get_map(w, h, tw, th, tile_order, intra, pad64, full) -> np.ndarray:
    key = (w, h, tw, th, tile_order, intra, pad64, full)
    m = MAP_CACHE.get(key)
    if m is None:
        m = build_index_map(w, h, tw, th, tile_order, intra, pad64, full)
        MAP_CACHE[key] = m
    return m


def apply_map(nib: np.ndarray, m: np.ndarray) -> np.ndarray:
    out = np.zeros(m.shape, dtype=np.uint8)
    valid = m >= 0
    idx = m[valid]
    ok = idx < len(nib)
    tmp = np.zeros(int(valid.sum()), dtype=np.uint8)
    tmp[ok] = nib[idx[ok]]
    out[valid] = tmp
    return out


def mean_h_run(img: np.ndarray) -> float:
    h, w = img.shape
    runs = 0
    for y in range(h):
        runs += int((np.diff(img[y]) != 0).sum()) + 1
    return (h * w) / max(runs, 1)


def sobel_mean(img: np.ndarray) -> float:
    a = img.astype(np.int16)
    gx = np.zeros_like(a)
    gy = np.zeros_like(a)
    gx[:, 1:-1] = np.abs(a[:, 2:] - a[:, :-2])
    gy[1:-1, :] = np.abs(a[2:, :] - a[:-2, :])
    return float((gx + gy).mean())


def cc_large(fg: np.ndarray, min_area: int) -> tuple[int, int, float]:
    """Return (n_cc, n_large, max_frac). Two-pass 4-connected via scipy or numpy."""
    try:
        from scipy.ndimage import label

        lab, n = label(fg)
        if n == 0:
            return 0, 0, 0.0
        counts = np.bincount(lab.ravel())
        counts[0] = 0
        large = int((counts >= min_area).sum())
        return int(n), large, float(counts.max() / fg.size)
    except Exception:
        return _cc_numpy(fg, min_area)


def _cc_numpy(fg: np.ndarray, min_area: int) -> tuple[int, int, float]:
    h, w = fg.shape
    parent = np.arange(h * w, dtype=np.int32)

    def find(a):
        while parent[a] != a:
            parent[a] = parent[parent[a]]
            a = parent[a]
        return a

    def union(a, b):
        ra, rb = find(a), find(b)
        if ra != rb:
            parent[rb] = ra

    flat = fg.ravel()
    for y in range(h):
        row = y * w
        for x in range(w):
            i = row + x
            if not flat[i]:
                continue
            if x + 1 < w and flat[i + 1]:
                union(i, i + 1)
            if y + 1 < h and flat[i + w]:
                union(i, i + w)
    roots = {}
    for i in range(h * w):
        if not flat[i]:
            continue
        r = find(i)
        roots[r] = roots.get(r, 0) + 1
    if not roots:
        return 0, 0, 0.0
    sizes = list(roots.values())
    large = sum(1 for s in sizes if s >= min_area)
    return len(sizes), large, max(sizes) / fg.size


def score_img(img: np.ndarray, kind: str, tw: int) -> dict:
    h, w = img.shape
    a = img.astype(np.int16)
    dh = np.abs(np.diff(a, axis=1))
    dv = np.abs(np.diff(a, axis=0))
    neigh = float(((dh <= 1).mean() + (dv <= 1).mean()) / 2)
    run = mean_h_run(img)
    sob = sobel_mean(img)
    lag = min(16, tw, w // 2)
    ac16 = float((img[:, :-lag] == img[:, lag:]).mean()) if w > lag else 0.0
    counts = np.bincount(img.ravel(), minlength=16)
    mode = int(counts.argmax())
    fg = img != mode
    fg_frac = float(fg.mean())
    # pepper: fg pixels with 0 fg neighbors
    if fg.any():
        nbr = np.zeros_like(fg, dtype=np.uint8)
        nbr[:, 1:] += fg[:, :-1]
        nbr[:, :-1] += fg[:, 1:]
        nbr[1:, :] += fg[:-1, :]
        nbr[:-1, :] += fg[1:, :]
        pepper = float(((fg) & (nbr == 0)).sum() / max(int(fg.sum()), 1))
        ys, xs = np.where(fg)
        bw = int(xs.max() - xs.min() + 1)
        bh = int(ys.max() - ys.min() + 1)
        bbox_frac = (bw * bh) / (w * h)
    else:
        pepper = 1.0
        bbox_frac = 0.0
    min_area = max(20, (w * h) // 200)
    n_cc, n_large, max_frac = cc_large(fg, min_area)

    # higher is better
    s = 0.0
    s += neigh * 4.0
    s += min(run, 24.0) / 24.0 * 2.0
    s += max(0.0, 1.5 - sob / 6.0)
    s -= min(pepper, 0.5) * 6.0
    s -= ac16 * 1.5  # periodic 16-px copies
    if 0.04 < fg_frac < 0.55:
        s += 1.2
    elif fg_frac < 0.01 or fg_frac > 0.85:
        s -= 1.5

    if kind in ("icon", "wx"):
        if 1 <= n_large <= 5:
            s += 3.5
        elif n_large == 0:
            s -= 1.5
        else:
            s -= min(n_large, 25) * 0.12
        s += (1.0 - bbox_frac) * 2.0  # localized glyph
    elif kind == "boot":
        if 2 <= n_large <= 6:
            s += 4.0
        elif n_large == 1 and max_frac > 0.05:
            s += 1.5
        else:
            s -= min(abs(n_large - 4), 20) * 0.1
        if bbox_frac > 0.25:
            s += 0.8

    return {
        "score": s,
        "neigh": neigh,
        "run": run,
        "sobel": sob,
        "ac16": ac16,
        "fg": fg_frac,
        "pepper": pepper,
        "bbox": bbox_frac,
        "n_cc": n_cc,
        "n_large": n_large,
    }


def pal_lut(D: np.ndarray, off: int, pal_skip: int) -> np.ndarray:
    lut = np.zeros((16, 4), dtype=np.uint8)
    if pal_skip == 64:
        p = D[off : off + 64].reshape(16, 4)
        lut[:, 0] = p[:, 2]
        lut[:, 1] = p[:, 1]
        lut[:, 2] = p[:, 0]
        lut[:, 3] = p[:, 3]
    elif pal_skip == 32:
        p = D[off : off + 32].view("<u2")
        if p.size < 16:
            p = np.pad(p, (0, 16 - p.size))
        p = p[:16]
        r = ((p >> 11) & 31) * 255 // 31
        g = ((p >> 5) & 63) * 255 // 63
        b = (p & 31) * 255 // 31
        lut[:, 0] = r
        lut[:, 1] = g
        lut[:, 2] = b
        lut[:, 3] = 255
    else:
        lut[:, 0] = np.arange(16) * 17
        lut[:, 1] = np.arange(16) * 17
        lut[:, 2] = np.arange(16) * 17
        lut[:, 3] = 255
    if int(lut[:, 3].max()) == 0:
        lut[:, 3] = 255
    # all-black / empty palette → HUD green by index
    if int(lut[:, :3].max()) == 0:
        lut[:, 0] = 0
        lut[:, 1] = np.arange(16) * 17
        lut[:, 2] = 0
        lut[:, 3] = 255
    return lut


def render_png(img: np.ndarray, lut: np.ndarray, path: Path, scale: int = 1) -> None:
    rgba = lut[img]
    if (rgba[:, :, 3] == 0).all():
        rgba = rgba.copy()
        rgba[:, :, 3] = 255
    im = Image.fromarray(rgba, "RGBA")
    if scale != 1:
        im = im.resize((im.width * scale, im.height * scale), Image.NEAREST)
    path.parent.mkdir(parents=True, exist_ok=True)
    im.save(path)


def cfg_name(tw, th, tile_order, intra, hi, pal, pad64, full) -> str:
    bits = [
        f"tw{tw}",
        f"th{th}",
        f"t{tile_order}",
        f"i{intra}",
        "hi" if hi else "lo",
        f"pal{pal}",
    ]
    if pad64:
        bits.append("pad64")
    if full:
        bits.append("full")
    return "_".join(bits)


def iter_cfgs():
    for th in THS:
        for tile_order in TILE_ORDERS:
            for intra in INTRAS:
                if intra == "hilbert" and th != 16:
                    continue
                for hi in NIBBLES:
                    for pal in PAL_SKIPS:
                        for pad64 in PADS:
                            for full in FULLS:
                                yield {
                                    "tw": 16,
                                    "th": th,
                                    "tile_order": tile_order,
                                    "intra": intra,
                                    "hi": hi,
                                    "pal": pal,
                                    "pad64": pad64,
                                    "full": full,
                                }


def decode_cfg(D, data_off, w, h, cfg) -> np.ndarray:
    pal = cfg["pal"]
    need = w * h + 4096
    nib = unpack_nibbles(D[data_off + pal : data_off + pal + (need + 1) // 2], cfg["hi"])
    m = get_map(w, h, cfg["tw"], cfg["th"], cfg["tile_order"], cfg["intra"], cfg["pad64"], cfg["full"])
    return apply_map(nib, m)


def main() -> None:
    D = load()
    OUT.mkdir(parents=True, exist_ok=True)
    hits = scan_idx4(D)
    for c in hits:
        c["table"] = is_table_like(D, c["foff"], c["ds"]) >= 0.7
    real = [c for c in hits if not c["font"] and not c["table"]]
    print(f"idx4 unique payloads={len(hits)} font={sum(c['font'] for c in hits)} "
          f"table={sum(c['table'] for c in hits)} real={len(real)}")
    sz = Counter((c["w"], c["h"]) for c in hits if not c["font"])
    print("non-font WxH:", sz.most_common(12))

    # targets
    icon0 = next(c for c in hits if c["foff"] == 0x323F40)
    boot = next(c for c in hits if c["w"] == 399 and c["h"] == 145)
    real80 = next(c for c in hits if c["foff"] == 0x3B3F00)
    real80b = next(c for c in hits if c["foff"] == 0x3FC880)
    wx = next(c for c in hits if c["w"] == 24 and c["h"] == 24 and not c["font"] and not c["table"])

    targets = [
        ("icon0_80x80_table", icon0, "icon"),
        ("real80a", real80, "icon"),
        ("real80b", real80b, "icon"),
        ("boot_399x145", boot, "boot"),
        ("wx24", wx, "wx"),
    ]
    print("targets:")
    for name, c, kind in targets:
        print(f"  {name} {c['w']}x{c['h']} desc={c['desc']:#x} data={c['foff']:#x} "
              f"table={c['table']} font={c['font']}")

    cfgs = list(iter_cfgs())
    print(f"configs={len(cfgs)}")

    rows = []
    for i, cfg in enumerate(cfgs):
        rec = dict(cfg)
        rec["name"] = cfg_name(**cfg)
        total = 0.0
        for tname, cand, kind in targets:
            img = decode_cfg(D, cand["foff"], cand["w"], cand["h"], cfg)
            sc = score_img(img, kind, cfg["tw"])
            rec[f"{tname}_score"] = sc["score"]
            rec[f"{tname}_neigh"] = sc["neigh"]
            rec[f"{tname}_run"] = sc["run"]
            rec[f"{tname}_sobel"] = sc["sobel"]
            rec[f"{tname}_ac16"] = sc["ac16"]
            rec[f"{tname}_n_large"] = sc["n_large"]
            rec[f"{tname}_pepper"] = sc["pepper"]
            rec[f"{tname}_bbox"] = sc["bbox"]
            if tname == "icon0_80x80_table":
                total += 0.08 * sc["score"]
            elif tname.startswith("real80"):
                total += 0.26 * sc["score"]
            elif tname.startswith("boot"):
                total += 0.30 * sc["score"]
            else:
                total += 0.10 * sc["score"]
        rec["combined"] = total
        rows.append(rec)
        if (i + 1) % 80 == 0:
            print(f"  scored {i+1}/{len(cfgs)}")

    rows.sort(key=lambda r: r["combined"], reverse=True)
    csv_path = OUT.parent / "scores.csv"
    fields = list(rows[0].keys())
    with csv_path.open("w", newline="") as f:
        wri = csv.DictWriter(f, fieldnames=fields)
        wri.writeheader()
        wri.writerows(rows)

    print("\nTOP 20 combined:")
    for r in rows[:20]:
        print(
            f"  {r['combined']:.3f} {r['name']}  "
            f"r80a={r['real80a_score']:.2f} boot={r['boot_399x145_score']:.2f} "
            f"wx={r['wx24_score']:.2f} icon0={r['icon0_80x80_table_score']:.2f} "
            f"boot_cc={r['boot_399x145_n_large']} r80a_cc={r['real80a_n_large']}"
        )

    top = rows[:15]
    for rank, r in enumerate(top, 1):
        cfg = {k: r[k] for k in ("tw", "th", "tile_order", "intra", "hi", "pal", "pad64", "full")}
        for tname, cand, kind in targets:
            img = decode_cfg(D, cand["foff"], cand["w"], cand["h"], cfg)
            lut = pal_lut(D, cand["foff"], cfg["pal"])
            scale = 4 if cand["w"] <= 80 else 1
            fn = f"{rank:02d}_{cand['w']}x{cand['h']}_{r['name']}.png"
            render_png(img, lut, OUT / fn, scale=scale)
            # extra green shape for judging
            g = np.zeros((16, 4), np.uint8)
            g[:, 1] = np.arange(16) * 17
            g[:, 3] = 255
            render_png(img, g, OUT / fn.replace(".png", "_g.png"), scale=scale)

    # persist top + scan summary for EMPIRICAL.md writer
    summary = {
        "n_hits": len(hits),
        "n_real": len(real),
        "n_font": sum(c["font"] for c in hits),
        "n_table": sum(c["table"] for c in hits),
        "sizes": {f"{a}x{b}": n for (a, b), n in sz.most_common()},
        "targets": [
            {"name": n, "desc": hex(c["desc"]), "data": hex(c["foff"]), "w": c["w"], "h": c["h"],
             "table": c["table"], "font": c["font"]}
            for n, c, _ in targets
        ],
        "top15": [
            {k: (int(v) if isinstance(v, (np.integer,)) else float(v) if isinstance(v, (np.floating, float)) else v)
             for k, v in r.items()}
            for r in top
        ],
    }
    (OUT.parent / "summary.json").write_text(json.dumps(summary, indent=2, default=str))
    print("wrote", csv_path, "and", len(list(OUT.glob('*.png'))), "pngs")


if __name__ == "__main__":
    main()
