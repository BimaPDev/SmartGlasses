#!/usr/bin/env python3
"""Extract LVGL IDX4 (cf=9) images from platform_tester.bin.

Uses the Ghidra-confirmed container + empirical 112px vertical-strip layout.
"""
from __future__ import annotations

import csv
import struct
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw, ImageFont

FW = Path("/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin")
OUT = Path("/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/extracted_images")
PANEL = 112
BG = (30, 30, 40)

DATA = np.frombuffer(FW.read_bytes(), dtype=np.uint8)
BIN = DATA.tobytes()
N = len(BIN)


def is_struct_table(fo: int, nbytes: int) -> bool:
    chunk = BIN[fo : fo + min(nbytes, 256)]
    if len(chunk) < 32:
        return False
    # 16-byte records: 01 00 xx xx <ctr> ...
    rec = chunk[:16]
    if rec[0:2] == b"\x01\x00" and rec[6:10] == b"\x00\x00\x00\x01":
        return True
    a = np.frombuffer(chunk, dtype=np.uint8).astype(np.float64)
    a -= a.mean()
    if a.std() < 1e-6:
        return True
    # lag-16 autocorrelation
    if len(a) < 64:
        return False
    ac = np.correlate(a, a, "valid")
    # cheaper: compare every-16 equality rate
    n = len(chunk) // 16 * 16
    m = np.frombuffer(chunk[:n], dtype=np.uint8).reshape(-1, 16)
    if m.shape[0] >= 4:
        same = (m[1:] == m[0]).mean()
        if same > 0.45:
            return True
    return False


def pal_ok(fo: int) -> tuple[bool, int]:
    pal = BIN[fo : fo + 64]
    if len(pal) < 64:
        return False, 0
    entries = [pal[i * 4 : i * 4 + 4] for i in range(16)]
    opaque = sum(1 for e in entries if e[3] >= 200)
    distinct = len(set(bytes(e[:3]) for e in entries))
    # false palettes: incrementing counters / all-zero alpha with garbage RGB
    if opaque == 0 and distinct <= 2:
        return False, opaque
    return True, opaque


def decode_strips(fo: int, w: int, h: int) -> np.ndarray:
    pal = DATA[fo : fo + 64].reshape(16, 4)
    pix = DATA[fo + 64 :]
    idx = np.zeros((h, w), np.uint8)
    pos = 0
    x0 = 0
    while x0 < w:
        sw = min(PANEL, w - x0)
        sb = (sw + 1) // 2
        n = sb * h
        blk = pix[pos : pos + n]
        if len(blk) < n:
            blk = np.pad(blk, (0, n - len(blk)))
        blk = blk.reshape(h, sb)
        hi = blk >> 4
        lo = blk & 0xF
        row = np.empty((h, sb * 2), np.uint8)
        row[:, 0::2] = hi
        row[:, 1::2] = lo
        idx[:, x0 : x0 + sw] = row[:, :sw]
        pos += n
        x0 += sw
    rgba = np.empty((h, w, 4), np.uint8)
    rgba[..., 0] = pal[:, 2][idx]
    rgba[..., 1] = pal[:, 1][idx]
    rgba[..., 2] = pal[:, 0][idx]
    rgba[..., 3] = pal[:, 3][idx]
    return idx, rgba


def coherence(idx: np.ndarray) -> float:
    if idx.size < 16:
        return 0.0
    hist = np.bincount(idx.ravel(), minlength=16) / idx.size
    if hist.max() > 0.97:
        return -1.0
    v = (idx[1:] == idx[:-1]).mean() if idx.shape[0] > 1 else 0
    h = (idx[:, 1:] == idx[:, :-1]).mean() if idx.shape[1] > 1 else 0
    return float((v + h) / 2)


def entropy(idx: np.ndarray) -> float:
    p = np.bincount(idx.ravel(), minlength=16).astype(np.float64)
    p = p[p > 0] / idx.size
    return float(-(p * np.log2(p)).sum())


def save_rgba(rgba: np.ndarray, path: Path, scale_min: int = 64) -> None:
    im = Image.fromarray(rgba, "RGBA")
    w, h = im.size
    sc = 1
    if min(w, h) < scale_min:
        sc = max(1, (scale_min + min(w, h) - 1) // min(w, h))
    canvas = Image.new("RGB", (w, h), BG)
    canvas.paste(im, (0, 0), im)
    if sc > 1:
        canvas = canvas.resize((w * sc, h * sc), Image.NEAREST)
    canvas.save(path)


def scan_descriptors():
    found = []
    for off in range(0, N - 12, 4):
        hdr, ds, ptr = struct.unpack_from("<III", BIN, off)
        if hdr & 0x1F != 9:
            continue
        w = (hdr >> 10) & 0x7FF
        h = (hdr >> 21) & 0x7FF
        if not (8 <= w <= 700 and 8 <= h <= 700):
            continue
        if ds != 64 + ((w + 1) // 2) * h:
            continue
        if not (0x3C000000 <= ptr < 0x3C800000):
            continue
        fo = ptr - 0x3C000000
        if fo < 0 or fo + ds > N:
            continue
        found.append((off, w, h, ds, fo))
    return found


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    png_dir = OUT / "png"
    png_dir.mkdir(exist_ok=True)
    gray_dir = OUT / "gray"
    gray_dir.mkdir(exist_ok=True)

    descs = scan_descriptors()
    rows = []
    kept = []
    rejected = {"struct": 0, "palette": 0, "blank": 0, "ok": 0}

    for dsc, w, h, ds, fo in descs:
        if is_struct_table(fo, ds):
            rejected["struct"] += 1
            continue
        ok, opaque = pal_ok(fo)
        if not ok:
            rejected["palette"] += 1
            continue
        idx, rgba = decode_strips(fo, w, h)
        coh = coherence(idx)
        if coh < 0:
            rejected["blank"] += 1
            continue
        rejected["ok"] += 1
        ent = entropy(idx)
        name = f"{w}x{h}_{fo:06x}"
        save_rgba(rgba, png_dir / f"{name}.png")
        Image.fromarray((idx * 17).astype(np.uint8)).save(gray_dir / f"{name}.png")
        rec = dict(
            fileoff=f"0x{fo:x}",
            w=w,
            h=h,
            dsc_off=f"0x{dsc:x}",
            data_size=ds,
            opaque=opaque,
            coherence=round(coh, 4),
            entropy=round(ent, 3),
            score=round(coh * ent, 3),
            png=str(png_dir / f"{name}.png"),
        )
        rows.append(rec)
        kept.append((coh * ent, w, h, fo, idx, rgba, rec))

    rows.sort(key=lambda r: -r["score"])
    with open(OUT / "MANIFEST.csv", "w", newline="") as f:
        wr = csv.DictWriter(f, fieldnames=list(rows[0].keys()) if rows else ["fileoff"])
        wr.writeheader()
        wr.writerows(rows)

    # contact sheet of top 80
    kept.sort(reverse=True)
    top = kept[:80]
    cols, cell, pad = 8, 96, 6
    rows_n = (len(top) + cols - 1) // cols
    sheet = Image.new("RGB", (cols * (cell + pad) + pad, rows_n * (cell + pad + 14) + pad), (20, 20, 24))
    dr = ImageDraw.Draw(sheet)
    for i, (sc, w, h, fo, idx, rgba, rec) in enumerate(top):
        im = Image.fromarray(rgba, "RGBA")
        bg = Image.new("RGB", im.size, BG)
        bg.paste(im, (0, 0), im)
        bg = bg.resize((cell, cell), Image.NEAREST)
        r, c = divmod(i, cols)
        x = pad + c * (cell + pad)
        y = pad + r * (cell + pad + 14)
        dr.text((x, y), f"{w}x{h}", fill=(180, 180, 180))
        sheet.paste(bg, (x, y + 12))
    sheet.save(OUT / "gallery.png")

    print(f"descriptors matching size formula: {len(descs)}")
    print(f"extracted: {rejected['ok']}")
    print(f"rejected struct={rejected['struct']} palette={rejected['palette']} blank={rejected['blank']}")
    print("top 15 by coherence*entropy:")
    for rec in rows[:15]:
        print(f"  {rec['w']}x{rec['h']} @ {rec['fileoff']} score={rec['score']} coh={rec['coherence']} ent={rec['entropy']}")
    print("wrote", OUT / "MANIFEST.csv")
    print("wrote", OUT / "gallery.png")


if __name__ == "__main__":
    main()
