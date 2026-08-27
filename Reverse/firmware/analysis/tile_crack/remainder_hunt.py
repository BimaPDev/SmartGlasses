#!/usr/bin/env python3
"""Brute-force remainder-strip pixel order for BES2700 IDX4 (112-px panel strips).

Full 112-px strips are stored left→right, row-major, high-nibble-first.
Remainder (w % 112) is stored last and shears under the same row-major rule.
This hunt permutes ONLY the remainder bytes (size-preserving) and scores the
PIN's right 34 px as a continuation of the map-pin + drop shadow.
"""
from __future__ import annotations

import math
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw

from framework import D

OUT = Path("/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/tile_crack/remainder")
OUT.mkdir(parents=True, exist_ok=True)
PANEL = 112

TARGETS = {
    "pin": dict(fo=0x36D040, w=146, h=146),
    "disc": dict(fo=0x394C40, w=280, h=280),
    "atlas": dict(fo=0x3871C0, w=399, h=145),
}


def unpack_bytes(b: np.ndarray, hi_first: bool = True) -> np.ndarray:
    hh = (b >> 4) & 0xF
    ll = b & 0xF
    nb = np.empty(len(b) * 2, np.uint8)
    if hi_first:
        nb[0::2] = hh
        nb[1::2] = ll
    else:
        nb[0::2] = ll
        nb[1::2] = hh
    return nb


def load_img(fo, w, h):
    pal = D[fo : fo + 64].reshape(16, 4)
    stride = (w + 1) // 2
    b = np.array(D[fo + 64 : fo + 64 + stride * h], dtype=np.uint8)
    return pal, b


def split_strips(pix_bytes: np.ndarray, w: int, h: int, panel: int = PANEL):
    """Return list of (sw, byte_block) left→right. Remainder is last."""
    nfull = w // panel
    rem = w % panel
    pos = 0
    strips = []
    for _ in range(nfull):
        sb = (panel + 1) // 2
        n = sb * h
        strips.append((panel, pix_bytes[pos : pos + n]))
        pos += n
    if rem:
        sb = (rem + 1) // 2
        n = sb * h
        strips.append((rem, pix_bytes[pos : pos + n]))
        pos += n
    assert pos == len(pix_bytes), (pos, len(pix_bytes), w, h)
    return strips


def rm_strip(bb: np.ndarray, sw: int, h: int, hi_first: bool = True) -> np.ndarray:
    """Row-major decode of one strip, discarding the odd-width pad nibble per row."""
    sb = (sw + 1) // 2
    b = bb.reshape(h, sb)
    nb = np.empty((h, sb * 2), np.uint8)
    if hi_first:
        nb[:, 0::2] = (b >> 4) & 0xF
        nb[:, 1::2] = b & 0xF
    else:
        nb[:, 0::2] = b & 0xF
        nb[:, 1::2] = (b >> 4) & 0xF
    return nb[:, :sw]


def assemble(strips_idx, w, h):
    out = np.zeros((h, w), np.uint8)
    x0 = 0
    for sw, idx in strips_idx:
        out[:, x0 : x0 + sw] = idx
        x0 += sw
    return out


def to_rgba(idx, pal):
    R, G, B, A = pal[:, 2][idx], pal[:, 1][idx], pal[:, 0][idx], pal[:, 3][idx]
    return np.dstack([R, G, B, A]).astype(np.uint8)


def save_rgba(idx, pal, path, scale=3, bg=(28, 28, 36)):
    rgba = to_rgba(idx, pal)
    im = Image.fromarray(rgba, "RGBA")
    cv = Image.new("RGB", im.size, bg)
    cv.paste(im, (0, 0), im)
    if scale != 1:
        cv = cv.resize((cv.size[0] * scale, cv.size[1] * scale), Image.NEAREST)
    cv.save(path)


def neighbor_eq(m):
    if m.shape[1] < 2 or m.shape[0] < 2:
        return 0.0
    return float(((m[:, 1:] == m[:, :-1]).mean() + (m[1:] == m[:-1]).mean()) / 2)


def tv_score(m):
    a = m.astype(np.int32)
    dh = np.abs(np.diff(a, axis=1)).sum() if a.shape[1] > 1 else 0
    dv = np.abs(np.diff(a, axis=0)).sum() if a.shape[0] > 1 else 0
    return float((dh + dv) / m.size)


def hist_max(m):
    return float(np.bincount(m.ravel(), minlength=16).max() / m.size)


# ---------------------------------------------------------------------------
# Hilbert / Morton
# ---------------------------------------------------------------------------
def morton_pts(tw, th):
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


def hilbert_xy(n, d):
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


def hilbert_pts(n):
    return [hilbert_xy(n, d) for d in range(n * n)]


H16 = hilbert_pts(16)
H8 = hilbert_pts(8)
H4 = hilbert_pts(4)


def intra_pts(tw, th, intra):
    if intra == "row":
        return [(x, y) for y in range(th) for x in range(tw)]
    if intra == "col":
        return [(x, y) for x in range(tw) for y in range(th)]
    if intra == "bup":
        return [(x, y) for y in range(th - 1, -1, -1) for x in range(tw)]
    if intra == "morton":
        return morton_pts(tw, th)
    if intra == "z4":
        # 2x2 Z-order nested to 4x4 (Vivante-ish)
        order = []
        for by in range(0, th, 2):
            for bx in range(0, tw, 2):
                for dy, dx in ((0, 0), (0, 1), (1, 0), (1, 1)):
                    if bx + dx < tw and by + dy < th:
                        order.append((bx + dx, by + dy))
        return order
    if intra == "hilbert":
        if tw == th == 16:
            return H16
        if tw == th == 8:
            return H8
        if tw == th == 4:
            return H4
        return morton_pts(tw, th)
    raise ValueError(intra)


def tiled_from_nibbles(nb, rem_w, h, tw, th, tile_order, intra, decode_w=None, decode_h=None, skip_pad=True):
    """Walk a (decode_w x decode_h) tiled canvas; skip_pad omits OOB so size is preserved."""
    dw = decode_w if decode_w else rem_w
    dh = decode_h if decode_h else h
    ntx = (dw + tw - 1) // tw
    nty = (dh + th - 1) // th
    if tile_order == "row":
        tiles = [(ty, tx) for ty in range(nty) for tx in range(ntx)]
    else:
        tiles = [(ty, tx) for tx in range(ntx) for ty in range(nty)]
    pts = intra_pts(tw, th, intra)
    out = np.zeros((h, rem_w), np.uint8)
    pos = 0
    N = len(nb)
    for ty, tx in tiles:
        x0, y0 = tx * tw, ty * th
        for x, y in pts:
            X, Y = x0 + x, y0 + y
            valid = 0 <= X < rem_w and 0 <= Y < h
            in_canvas = 0 <= X < dw and 0 <= Y < dh
            if skip_pad:
                if valid:
                    if pos < N:
                        out[Y, X] = nb[pos]
                    pos += 1
            else:
                if in_canvas:
                    if valid and pos < N:
                        out[Y, X] = nb[pos]
                    pos += 1
    return out, pos


def substrips(nb, rem_w, h, tile_w, last_pad_to=None):
    """Full-height vertical substrips of tile_w, leftover as its own strip.

    If last_pad_to is set, the last strip is walked as last_pad_to wide but only
    rem_w leftover pixels are stored (skip_pad).
    """
    out = np.zeros((h, rem_w), np.uint8)
    pos = 0
    x0 = 0
    N = len(nb)
    while x0 < rem_w:
        sw = min(tile_w, rem_w - x0)
        store_w = last_pad_to if (last_pad_to and x0 + sw >= rem_w and sw < last_pad_to) else sw
        # row-major over store_w, skip X>=sw
        for y in range(h):
            for x in range(store_w):
                if x < sw:
                    if pos < N:
                        out[y, x0 + x] = nb[pos]
                    pos += 1
                elif store_w != sw:
                    # padding column not stored
                    pass
        x0 += sw
    return out, pos


def substrips_simple(nb, rem_w, h, tile_w):
    """Concatenated full-height row-major substrips (no conceptual pad)."""
    out = np.zeros((h, rem_w), np.uint8)
    pos = 0
    x0 = 0
    N = len(nb)
    while x0 < rem_w:
        sw = min(tile_w, rem_w - x0)
        need = sw * h
        seg = nb[pos : pos + need]
        if len(seg) < need:
            seg = np.pad(seg, (0, need - len(seg)))
        out[:, x0 : x0 + sw] = seg.reshape(h, sw)
        pos += need
        x0 += sw
    return out, pos


def vertical_pair(bb, rem_w, h, hi_is_even_y=True, x_major=True):
    """D: byte = (x, 2y) + (x, 2y+1). x_major: x inner (row-major of (h/2, rem_w))."""
    out = np.zeros((h, rem_w), np.uint8)
    pos = 0
    n = len(bb)
    y_pairs = (h + 1) // 2
    if x_major:
        iterate = ((y2, x) for y2 in range(y_pairs) for x in range(rem_w))
    else:
        iterate = ((y2, x) for x in range(rem_w) for y2 in range(y_pairs))
    for y2, x in iterate:
        if pos >= n:
            break
        b = int(bb[pos])
        pos += 1
        hi, lo = (b >> 4) & 0xF, b & 0xF
        y = y2 * 2
        if hi_is_even_y:
            if y < h:
                out[y, x] = hi
            if y + 1 < h:
                out[y + 1, x] = lo
        else:
            if y < h:
                out[y, x] = lo
            if y + 1 < h:
                out[y + 1, x] = hi
    return out, pos


def row_group_perm(nb, rem_w, h, group, mode):
    """F: within each remainder row, permute bytes/nibbles in groups of 8/16."""
    # operate on nibble row
    src = nb[: rem_w * h].reshape(h, rem_w).copy()
    g = group
    for y in range(h):
        row = src[y]
        n = len(row)
        for i0 in range(0, n, g):
            chunk = row[i0 : i0 + g]
            if mode == "rev":
                row[i0 : i0 + g] = chunk[::-1]
            elif mode == "nibble_swap_pairs":
                cc = chunk.copy()
                if len(cc) >= 2:
                    n = (len(cc) // 2) * 2
                    cc[0:n:2] = chunk[1:n:2]
                    cc[1:n:2] = chunk[0:n:2]
                row[i0 : i0 + g] = cc
            elif mode == "bitrev_idx":
                # place pixel x at bit-reversed index within the group
                k = len(chunk)
                bits = max(1, k.bit_length() - 1)
                dst = chunk.copy()
                used = np.zeros(k, np.uint8)
                for i in range(k):
                    j = int("{:0{w}b}".format(i, w=bits)[::-1], 2) if i < (1 << bits) else i
                    if j >= k:
                        j = i
                    dst[j] = chunk[i]
                row[i0 : i0 + g] = dst
            elif mode == "vivante_x":
                # swap bits 0<->1 of the x index (2x2 tile flavour)
                k = len(chunk)
                dst = np.empty_like(chunk)
                for i in range(k):
                    j = (i & ~3) | ((i & 1) << 1) | ((i & 2) >> 1)
                    if j >= k:
                        j = i
                    dst[j] = chunk[i]
                row[i0 : i0 + g] = dst
        src[y] = row
    return src, rem_w * h


def padded_linear(nb, rem_w, h, decode_w):
    """Row-major as if width were decode_w; padding columns not stored → identical to linear.

    If padding IS stored we would over-read; skip_pad linear == plain row-major.
    Kept as a named baseline alias. The interesting padded case is TILED.
    """
    return rm_from_nb(nb, rem_w, h), rem_w * h


def rm_from_nb(nb, rem_w, h):
    seg = nb[: rem_w * h]
    if len(seg) < rem_w * h:
        seg = np.pad(seg, (0, rem_w * h - len(seg)))
    return seg.reshape(h, rem_w)


def stride_wrap(nb, rem_w, h, stride_px):
    """Read the nibble stream with a different pixel stride, wrap into rem_w x h.

    Size-preserving: we always consume rem_w*h nibbles, just placed at
    (i // rem_w, i % rem_w) vs (i // stride_px, i % stride_px) then crop.
    Only valid when we map back: take the stream as a (n/stride, stride) image
    and fold columns into rem_w.
    """
    n = rem_w * h
    if stride_px <= 0 or n % stride_px != 0:
        return None, 0
    rows = n // stride_px
    tmp = nb[:n].reshape(rows, stride_px)
    # fold into h x rem_w by reading in storage order into dest raster
    out = tmp.reshape(h, rem_w) if rows == h and stride_px == rem_w else None
    if out is not None:
        return out, n
    # general: write sequential dest
    out = np.zeros((h, rem_w), np.uint8)
    # interpret as rows of stride_px, then the leftover width is a crop
    if stride_px >= rem_w and rows >= h:
        out = tmp[:h, :rem_w]
        return out, n
    # pack: fill dest in row-major from the stride image raster (crop/wrap)
    flat = tmp.ravel()
    out = flat.reshape(h, rem_w)
    return out, n


# ---------------------------------------------------------------------------
# Hunt
# ---------------------------------------------------------------------------
def score_pair(left_col, rem, full=None):
    ne = neighbor_eq(rem)
    tv = tv_score(rem)
    hm = hist_max(rem)
    seam = float((left_col == rem[:, 0]).mean()) if rem.shape[1] else 0
    seam1 = float((np.abs(left_col.astype(np.int16) - rem[:, 0].astype(np.int16)) <= 1).mean())
    # penalise near-solid (padding illusion)
    if hm > 0.97:
        combo = -1.0
    else:
        # higher better: neighbor eq + seam, minus TV
        combo = 1.2 * ne + 0.8 * seam1 - 0.15 * tv
    return dict(ne=ne, tv=tv, hist=hm, seam=seam, seam1=seam1, combo=combo)


def try_cfg(name, rem_idx, left_col, results, extra=None):
    sc = score_pair(left_col, rem_idx)
    rec = dict(name=name, **sc)
    if extra:
        rec.update(extra)
    results.append(rec)
    return rem_idx


def main():
    # ---- load PIN as primary ----
    pal, pix = load_img(**TARGETS["pin"])
    w, h = TARGETS["pin"]["w"], TARGETS["pin"]["h"]
    strips = split_strips(pix, w, h)
    decoded = []
    for sw, bb in strips[:-1]:
        decoded.append((sw, rm_strip(bb, sw, h)))
    rem_w, rem_bb = strips[-1]
    rem_nb = unpack_bytes(rem_bb, True)
    # odd-width: rem_nb includes pad nibble per row if we unpacked raw bytes
    # pin rem_w=34 even → len(rem_nb)==34*146
    if rem_w % 2 == 0:
        rem_nb = rem_nb[: rem_w * h]
    else:
        # rebuild without pad nibble: per row take first rem_w nibbles of 2*ceil(rem_w/2)
        sb = (rem_w + 1) // 2
        tmp = rem_bb.reshape(h, sb)
        rows = []
        for y in range(h):
            n = unpack_bytes(tmp[y], True)[:rem_w]
            rows.append(n)
        rem_nb = np.concatenate(rows)

    left = np.concatenate([idx for _, idx in decoded], axis=1)
    left_col = left[:, -1]
    print(f"PIN {w}x{h} rem_w={rem_w} rem_bytes={len(rem_bb)} rem_nibs={len(rem_nb)}")
    print(f"  strip0 neighbor_eq={neighbor_eq(decoded[0][1]):.3f} tv={tv_score(decoded[0][1]):.3f}")

    save_rgba(left, pal, OUT / "pin_strip0.png", scale=3)
    save_rgba(rm_from_nb(rem_nb, rem_w, h), pal, OUT / "pin_rem_linear.png", scale=4)
    # side-by-side baseline
    base = np.concatenate([left, rm_from_nb(rem_nb, rem_w, h)], axis=1)
    save_rgba(base, pal, OUT / "pin_linear_full.png", scale=3)

    results = []
    images = {}  # name -> rem idx

    def add(name, arr, pos=None):
        if arr is None:
            return
        if pos is not None and pos != len(rem_nb) and pos != rem_w * h:
            # size-preserving constraint: must consume exactly the remainder nibbles
            # allow tiny slack of 0
            if pos != len(rem_nb):
                # still record as size-mismatch reject unless pos < len (under-read of skip_pad tiles)
                # skip_pad always consumes exactly valid pixels = rem_w*h
                if pos != rem_w * h:
                    results.append(dict(name=name, ne=-1, tv=99, hist=1, seam=0, seam1=0, combo=-9,
                                        note=f"size {pos} != {len(rem_nb)}"))
                    return
        images[name] = arr
        try_cfg(name, arr, left_col, results)

    # A0 baseline
    add("linear_rm", rm_from_nb(rem_nb, rem_w, h), rem_w * h)

    # A: decode_w padding + tiling (skip pad pixels — size preserving)
    pad_ws = []
    for a in (16, 32, 48, 64, 112):
        pw = (rem_w + a - 1) // a * a
        if pw not in pad_ws:
            pad_ws.append(pw)
        pw2 = (rem_w + a - 1) & ~(a - 1) if a in (16, 32, 64) else pw
        if pw2 not in pad_ws:
            pad_ws.append(pw2)
    # explicit
    for pw in (16, 32, 36, 48, 64, 80, 96, 112, 128, 160):
        if pw >= rem_w and pw not in pad_ws:
            pad_ws.append(pw)
    pad_hs = [h]
    for a in (4, 8, 16):
        ph = (h + a - 1) // a * a
        if ph not in pad_hs:
            pad_hs.append(ph)

    tile_cfgs = [
        (4, 4, "row", "row"),
        (4, 4, "row", "col"),
        (4, 4, "row", "morton"),
        (4, 4, "row", "z4"),
        (4, 4, "col", "row"),
        (4, 4, "col", "morton"),
        (8, 8, "row", "row"),
        (8, 8, "row", "morton"),
        (8, 8, "row", "hilbert"),
        (8, 8, "col", "row"),
        (16, 8, "row", "row"),
        (16, 8, "row", "col"),
        (16, 8, "row", "morton"),
        (16, 8, "col", "row"),
        (16, 16, "row", "row"),
        (16, 16, "row", "morton"),
        (16, 16, "row", "hilbert"),
        (16, 16, "col", "row"),
        (16, 16, "col", "hilbert"),
        (16, 1, "row", "row"),
        (8, 1, "row", "row"),
        (4, 1, "row", "row"),
        (32, 4, "row", "row"),
        (16, 4, "row", "row"),
        (16, 2, "row", "row"),
    ]

    # B: tiles inside remainder (no extra pad)
    for tw, th, to, intra in tile_cfgs:
        arr, pos = tiled_from_nibbles(rem_nb, rem_w, h, tw, th, to, intra, rem_w, h, True)
        add(f"tile_{tw}x{th}_{to}_{intra}", arr, pos)

    # A+B: tiles over padded decode_w / decode_h, skip pad
    for dw in pad_ws:
        for dh in pad_hs:
            if dw == rem_w and dh == h:
                continue
            for tw, th, to, intra in tile_cfgs:
                # only a subset when both padded to keep runtime sane
                if (tw, th, to, intra) not in (
                    (4, 4, "row", "row"),
                    (4, 4, "row", "morton"),
                    (4, 4, "row", "z4"),
                    (8, 8, "row", "morton"),
                    (16, 16, "row", "hilbert"),
                    (16, 16, "row", "morton"),
                    (16, 16, "row", "row"),
                    (16, 8, "row", "row"),
                    (16, 4, "row", "row"),
                    (4, 4, "col", "morton"),
                    (16, 1, "row", "row"),
                ):
                    continue
                arr, pos = tiled_from_nibbles(rem_nb, rem_w, h, tw, th, to, intra, dw, dh, True)
                add(f"pad{dw}x{dh}_tile_{tw}x{th}_{to}_{intra}", arr, pos)

    # C: VGLite stride recipes as substrips / byte-stride reshape
    # remainder stride = (rem_w+31)//32*16  bytes  OR  (rem_w+15)//16*8 bytes
    for label, sb in {
        "vglite_c1": (rem_w + 31) // 32 * 16,
        "vglite_c2": (rem_w + 15) // 16 * 8,
        "align8": ((rem_w + 1) // 2 + 7) // 8 * 8,
        "align16b": ((rem_w + 1) // 2 + 15) // 16 * 16,
    }.items():
        spx = sb * 2
        arr, pos = stride_wrap(rem_nb, rem_w, h, rem_w)  # placeholder
        # conceptual: row-major of decode_w=spx, skip x>=rem_w → same as linear
        # interesting only if we TILE at that width
        arr, pos = tiled_from_nibbles(rem_nb, rem_w, h, 4, 4, "row", "row", spx, h, True)
        add(f"{label}_spx{spx}_t4x4", arr, pos)
        arr, pos = tiled_from_nibbles(rem_nb, rem_w, h, 16, 4, "row", "row", spx, h, True)
        add(f"{label}_spx{spx}_t16x4", arr, pos)

    # D: vertical nibble pairing
    for xmaj in (True, False):
        for hieven in (True, False):
            arr, pos = vertical_pair(rem_bb, rem_w, h, hieven, xmaj)
            add(f"vpair_xmaj{int(xmaj)}_hi{int(hieven)}", arr, rem_w * h)

    # E: 16-px GPU tile columns
    for tw in (4, 8, 16, 32):
        arr, pos = substrips_simple(rem_nb, rem_w, h, tw)
        add(f"substrip{tw}", arr, pos)
        # last tile padded conceptually to tw (skip extra) — same as simple when leftover stored packed
        arr, pos = substrips(rem_nb, rem_w, h, tw, last_pad_to=tw)
        add(f"substrip{tw}_lastpad", arr, pos)

    # 16+16+2 explicit variants with tiling INSIDE each 16-col
    def substrips_tiled(nb, rem_w, h, col_w, tw, th, intra):
        out = np.zeros((h, rem_w), np.uint8)
        pos = 0
        x0 = 0
        while x0 < rem_w:
            sw = min(col_w, rem_w - x0)
            nloc = sw * h
            loc = nb[pos : pos + nloc]
            if len(loc) < nloc:
                loc = np.pad(loc, (0, nloc - len(loc)))
            blk, p2 = tiled_from_nibbles(loc, sw, h, tw, th, "row", intra, sw, h, True)
            out[:, x0 : x0 + sw] = blk
            pos += nloc
            x0 += sw
        return out, pos

    for col_w in (16, 32):
        for tw, th, intra in ((4, 4, "row"), (4, 4, "morton"), (4, 4, "z4"), (8, 8, "morton"), (16, 16, "hilbert")):
            if tw > col_w:
                continue
            arr, pos = substrips_tiled(rem_nb, rem_w, h, col_w, tw, th, intra)
            add(f"col{col_w}_in{tw}x{th}_{intra}", arr, pos)

    # F: row group permute
    for g in (8, 16):
        for mode in ("rev", "nibble_swap_pairs", "bitrev_idx", "vivante_x"):
            arr, pos = row_group_perm(rem_nb, rem_w, h, g, mode)
            add(f"rowgrp{g}_{mode}", arr, pos)

    # extra permutations
    # transpose-ish: column-major of remainder (REJECTED globally, record score)
    seg = rem_nb[: rem_w * h]
    if len(seg) == rem_w * h:
        add("colmajor_whole", seg.reshape(rem_w, h).T, rem_w * h)
        # boustrophedon rows
        m = seg.reshape(h, rem_w).copy()
        m[1::2] = m[1::2, ::-1]
        add("serp_rows", m, rem_w * h)
        m = seg.reshape(h, rem_w).copy()
        m[:, 1::2] = m[::-1, 1::2]
        add("serp_cols", m, rem_w * h)

    # bit-reverse x across whole rem_w (pad to 64)
    m = rm_from_nb(rem_nb, rem_w, h)
    bits = 6  # 0..63
    dst = np.zeros_like(m)
    for x in range(rem_w):
        xr = int("{:06b}".format(x)[::-1], 2)
        if xr < rem_w:
            dst[:, xr] = m[:, x]
        else:
            dst[:, x] = m[:, x]
    add("bitrev_x6", dst, rem_w * h)

    # G: whole-image decode_w=160 — size check
    whole_stride_160 = 80 * 146 + 64
    actual = 64 + ((w + 1) // 2) * h
    print(f"G) decode_w=160 storage {whole_stride_160} vs actual {actual} → {'REJECT' if whole_stride_160 != actual else 'OK'}")

    # per-strip pad of remainder to 48 (24 bytes/row) would be 56*146+24*146 vs 73*146
    for pw in (36, 48, 64, 112):
        stored = 56 * h + ((pw + 1) // 2) * h
        packed = 56 * h + ((rem_w + 1) // 2) * h
        print(f"   rem pad-to-{pw} stored_bytes={stored} packed={packed} match={stored==packed}")

    # rank
    results.sort(key=lambda r: r["combo"], reverse=True)
    print("\n=== PIN remainder top 20 ===")
    for r in results[:20]:
        print(f"  {r['combo']:+.3f}  ne={r['ne']:.3f} tv={r['tv']:.3f} seam1={r['seam1']:.3f} hist={r['hist']:.2f}  {r['name']}")

    print("\n=== PIN remainder worst / rejects (combo<=-1) sample ===")
    bad = [r for r in results if r["combo"] <= -1]
    print(f"  {len(bad)} rejected/penalised of {len(results)} configs")

    # render top 8 that have images
    top_names = []
    for r in results:
        if r["name"] in images and r["name"] not in top_names:
            top_names.append(r["name"])
        if len(top_names) >= 8:
            break

    # always include linear + substrips of 16 for visual comparison even if not top
    for must in ("linear_rm", "substrip16", "substrip8", "tile_4x4_row_morton", "vpair_xmaj1_hi1"):
        if must in images and must not in top_names:
            top_names.append(must)

    cell_h, cell_w = h, w
    cols = 4
    names_render = top_names[:12]
    rows = (len(names_render) + cols - 1) // cols
    scale = 2
    sheet = Image.new("RGB", (cols * (cell_w * scale + 8) + 8, rows * (cell_h * scale + 22) + 8), (20, 20, 28))
    dr = ImageDraw.Draw(sheet)
    for i, name in enumerate(names_render):
        rem = images[name]
        full = np.concatenate([left, rem], axis=1)
        rgba = to_rgba(full, pal)
        im = Image.fromarray(rgba, "RGBA")
        cv = Image.new("RGB", im.size, (30, 30, 40))
        cv.paste(im, (0, 0), im)
        cv = cv.resize((w * scale, h * scale), Image.NEAREST)
        # red seam
        for yy in range(cv.size[1]):
            cv.putpixel(((w - rem_w) * scale, yy), (255, 40, 40))
        r, c = divmod(i, cols)
        x = 8 + c * (cell_w * scale + 8)
        y = 8 + r * (cell_h * scale + 22)
        dr.text((x, y), name[:40], fill=(220, 220, 220))
        sheet.paste(cv, (x, y + 14))
        save_rgba(full, pal, OUT / f"pin_{i}_{name}.png", scale=3)
        # remainder-only zoom
        save_rgba(rem, pal, OUT / f"pinrem_{i}_{name}.png", scale=6)
    sheet.save(OUT / "pin_top_sheet.png")
    print("saved", OUT / "pin_top_sheet.png")

    # ---- apply top pin formula to disc + atlas ----
    def decode_full_with_rem(fo, w, h, rem_fn):
        pal, pix = load_img(fo, w, h)
        strips = split_strips(pix, w, h)
        parts = []
        for sw, bb in strips[:-1] if (w % PANEL) else strips:
            parts.append(rm_strip(bb, sw, h))
        if w % PANEL:
            rem_w2, rem_bb2 = strips[-1]
            rem_nb2 = unpack_bytes(rem_bb2, True)
            if rem_w2 % 2 == 0:
                rem_nb2 = rem_nb2[: rem_w2 * h]
            else:
                sb = (rem_w2 + 1) // 2
                tmp = rem_bb2.reshape(h, sb)
                rem_nb2 = np.concatenate([unpack_bytes(tmp[y], True)[:rem_w2] for y in range(h)])
            rem_idx = rem_fn(rem_nb2, rem_bb2, rem_w2, h)
            parts.append(rem_idx)
        return pal, np.concatenate(parts, axis=1)

    # rebuild rem functions for top names
    def rem_fn_for(name):
        def _linear(nb, bb, rw, hh):
            return rm_from_nb(nb, rw, hh)

        if name == "linear_rm":
            return _linear
        if name.startswith("substrip") and name.split("_")[0][8:].isdigit():
            tw = int(name.replace("substrip", "").split("_")[0])
            lastpad = name.endswith("_lastpad")
            def _ss(nb, bb, rw, hh, tw=tw, lastpad=lastpad):
                if lastpad:
                    a, _ = substrips(nb, rw, hh, tw, last_pad_to=tw)
                else:
                    a, _ = substrips_simple(nb, rw, hh, tw)
                return a
            return _ss
        if name.startswith("tile_"):
            # tile_4x4_row_morton
            parts = name.split("_")
            tw, th = map(int, parts[1].split("x"))
            to, intra = parts[2], parts[3]
            def _t(nb, bb, rw, hh, tw=tw, th=th, to=to, intra=intra):
                a, _ = tiled_from_nibbles(nb, rw, hh, tw, th, to, intra, rw, hh, True)
                return a
            return _t
        if name.startswith("vpair_"):
            xmaj = "xmaj1" in name
            hieven = "hi1" in name
            def _v(nb, bb, rw, hh, xmaj=xmaj, hieven=hieven):
                a, _ = vertical_pair(bb, rw, hh, hieven, xmaj)
                return a
            return _v
        return _linear

    for tname, meta in TARGETS.items():
        if tname == "pin":
            continue
        pal2, img2 = decode_full_with_rem(meta["fo"], meta["w"], meta["h"], rem_fn_for(top_names[0]))
        save_rgba(img2, pal2, OUT / f"{tname}_with_{top_names[0]}.png", scale=2 if meta["w"] > 200 else 3)
        pal2, imgL = decode_full_with_rem(meta["fo"], meta["w"], meta["h"], rem_fn_for("linear_rm"))
        save_rgba(imgL, pal2, OUT / f"{tname}_linear.png", scale=2 if meta["w"] > 200 else 3)
        if "substrip16" in images:
            pal2, imgS = decode_full_with_rem(meta["fo"], meta["w"], meta["h"], rem_fn_for("substrip16"))
            save_rgba(imgS, pal2, OUT / f"{tname}_substrip16.png", scale=2 if meta["w"] > 200 else 3)

    # dump ranking
    rank_path = OUT / "pin_rank.txt"
    with rank_path.open("w") as f:
        for r in results:
            f.write(f"{r['combo']:+.4f}\tne={r['ne']:.4f}\ttv={r['tv']:.4f}\tseam1={r['seam1']:.4f}\t{r['name']}\t{r.get('note','')}\n")
    print("wrote", rank_path, "n=", len(results))
    return results, images, top_names, left, pal, rem_w, h, rem_nb, rem_bb, left_col


if __name__ == "__main__":
    main()
