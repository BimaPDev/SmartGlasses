#!/usr/bin/env python3
"""On-flash remainder permutation hunt. No GPU decode_width / pad-to-N.

Remainder is exactly ceil(rem_w/2)*h bytes. Every candidate is a bijection
of those bytes/nibbles.
"""
from __future__ import annotations

from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw

from framework import D

OUT = Path("/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/tile_crack/remainder")
OUT.mkdir(parents=True, exist_ok=True)
PANEL = 112
PIN = dict(fo=0x36D040, w=146, h=146)


def unpack_bytes(b, hi=True):
    b = np.asarray(b, np.uint8)
    hh, ll = (b >> 4) & 0xF, b & 0xF
    n = np.empty(len(b) * 2, np.uint8)
    if hi:
        n[0::2], n[1::2] = hh, ll
    else:
        n[0::2], n[1::2] = ll, hh
    return n


def load(fo, w, h):
    pal = D[fo : fo + 64].reshape(16, 4)
    sb = (w + 1) // 2
    pix = np.array(D[fo + 64 : fo + 64 + sb * h], np.uint8)
    return pal, pix


def split(pix, w, h):
    pos = 0
    out = []
    nfull, rem = w // PANEL, w % PANEL
    for _ in range(nfull):
        n = 56 * h
        out.append((PANEL, pix[pos : pos + n]))
        pos += n
    if rem:
        n = ((rem + 1) // 2) * h
        out.append((rem, pix[pos : pos + n]))
        pos += n
    assert pos == len(pix)
    return out


def rm_strip(bb, sw, h):
    sb = (sw + 1) // 2
    b = bb.reshape(h, sb)
    nb = np.empty((h, sb * 2), np.uint8)
    nb[:, 0::2] = (b >> 4) & 0xF
    nb[:, 1::2] = b & 0xF
    return nb[:, :sw]


def neighbor_eq(m):
    if m.shape[0] < 2 or m.shape[1] < 2:
        return 0.0
    return float(((m[:, 1:] == m[:, :-1]).mean() + (m[1:] == m[:-1]).mean()) / 2)


def tv_score(m):
    a = m.astype(np.int32)
    return float((np.abs(np.diff(a, 1)).sum() + np.abs(np.diff(a, 0)).sum()) / m.size)


def hist_max(m):
    return float(np.bincount(m.ravel(), minlength=16).max() / m.size)


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


def tiled(nb, rw, h, tw, th, tile_order, intra):
    ntx = (rw + tw - 1) // tw
    nty = (h + th - 1) // th
    tiles = (
        [(ty, tx) for ty in range(nty) for tx in range(ntx)]
        if tile_order == "row"
        else [(ty, tx) for tx in range(ntx) for ty in range(nty)]
    )
    if intra == "row":
        pts = [(x, y) for y in range(th) for x in range(tw)]
    elif intra == "col":
        pts = [(x, y) for x in range(tw) for y in range(th)]
    elif intra == "morton":
        pts = morton_pts(tw, th)
    elif intra == "z4":
        pts = []
        for by in range(0, th, 2):
            for bx in range(0, tw, 2):
                for dy, dx in ((0, 0), (0, 1), (1, 0), (1, 1)):
                    if bx + dx < tw and by + dy < th:
                        pts.append((bx + dx, by + dy))
    else:
        raise ValueError(intra)
    out = np.zeros((h, rw), np.uint8)
    pos = 0
    N = len(nb)
    for ty, tx in tiles:
        x0, y0 = tx * tw, ty * th
        for x, y in pts:
            X, Y = x0 + x, y0 + y
            if 0 <= X < rw and 0 <= Y < h:
                if pos < N:
                    out[Y, X] = nb[pos]
                pos += 1
    return out


def vpair(bb, rw, h, hi_even=True, x_major=True):
    """D: byte=(x,2y)+(x,2y+1). Size: rw*(h/2) == ceil(rw/2)*h when rw even."""
    out = np.zeros((h, rw), np.uint8)
    pos = 0
    y_pairs = (h + 1) // 2
    it = (
        ((y2, x) for y2 in range(y_pairs) for x in range(rw))
        if x_major
        else ((y2, x) for x in range(rw) for y2 in range(y_pairs))
    )
    for y2, x in it:
        if pos >= len(bb):
            break
        b = int(bb[pos])
        pos += 1
        hi, lo = (b >> 4) & 0xF, b & 0xF
        y = y2 * 2
        if hi_even:
            if y < h:
                out[y, x] = hi
            if y + 1 < h:
                out[y + 1, x] = lo
        else:
            if y < h:
                out[y, x] = lo
            if y + 1 < h:
                out[y + 1, x] = hi
    return out


def unp_row(row, hi=True):
    hh, ll = (row >> 4) & 0xF, row & 0xF
    o = np.empty(len(row) * 2, np.uint8)
    if hi:
        o[0::2], o[1::2] = hh, ll
    else:
        o[0::2], o[1::2] = ll, hh
    return o


def gray(idx, scale):
    return Image.fromarray((idx * 17).astype(np.uint8)).resize(
        (idx.shape[1] * scale, idx.shape[0] * scale), Image.NEAREST
    )


def main():
    pal, pix = load(**PIN)
    w, h = PIN["w"], PIN["h"]
    strips = split(pix, w, h)
    left = rm_strip(strips[0][1], strips[0][0], h)
    rem_w, bb = strips[-1]
    nb = unpack_bytes(bb)[: rem_w * h]
    left_col = left[:, -1]
    print(f"PIN rem_w={rem_w} bytes={len(bb)} nibs={len(nb)}")
    print(f"  strip0 ne={neighbor_eq(left):.3f}  rem linear ne={neighbor_eq(nb.reshape(h, rem_w)):.3f}")

    cands = {}

    def add(name, arr):
        if arr.shape != (h, rem_w):
            print(f"  SKIP {name} shape {arr.shape}")
            return
        cands[name] = arr

    add("linear", nb.reshape(h, rem_w))

    # --- byte-column major: 17 full-height byte columns (NOT 2-vert-px/byte) ---
    sb = (rem_w + 1) // 2
    # stored as (sb, h) then transpose → (h, sb) bytes
    add("bytecol_major", np.stack([unp_row(col)[:rem_w] for col in bb.reshape(sb, h).T]))
    # stored as (h, sb) is linear; reverse: (sb, h) with columns bottom-up
    cols = bb.reshape(sb, h)
    add("bytecol_major_bup", np.stack([unp_row(col[::-1])[:rem_w] for col in cols.T]))
    # serpentine byte columns
    cols2 = cols.copy()
    cols2[1::2] = cols2[1::2, ::-1]
    add("bytecol_serp", np.stack([unp_row(col)[:rem_w] for col in cols2.T]))

    # groups of G byte-columns concatenated (full height), row-major within group
    for G in (2, 4, 8):
        outb = np.zeros((h, sb), np.uint8)
        pos = 0
        for x0 in range(0, sb, G):
            gw = min(G, sb - x0)
            # within group: row-major (y, gx)
            blk = bb[pos : pos + gw * h].reshape(h, gw)
            outb[:, x0 : x0 + gw] = blk
            pos += gw * h
        add(f"bytegrp{G}_rm", np.stack([unp_row(outb[y])[:rem_w] for y in range(h)]))
        # within group: column-major
        outb = np.zeros((h, sb), np.uint8)
        pos = 0
        for x0 in range(0, sb, G):
            gw = min(G, sb - x0)
            blk = bb[pos : pos + gw * h].reshape(gw, h).T
            outb[:, x0 : x0 + gw] = blk
            pos += gw * h
        add(f"bytegrp{G}_cm", np.stack([unp_row(outb[y])[:rem_w] for y in range(h)]))

    # --- 90° packer: 146×34 image (73 bytes × 34 rows) then transpose ---
    # 73*34 = 2482 = len(bb)
    if 73 * 34 == len(bb):
        b73 = bb.reshape(34, 73)  # 34 rows of 146 px
        img = np.stack([unp_row(b73[y])[:146] for y in range(34)])  # 34×146
        add("rot90_146x34_T", img.T)  # 146×34
        add("rot90_146x34_T_flipv", img.T[::-1])
        add("rot90_146x34_T_fliph", img.T[:, ::-1])
        add("rot90_146x34_T_rot180", img.T[::-1, ::-1])
        # other orientation: 73 rows of 34 bytes = 73×68 px
        b34 = bb.reshape(73, 34)
        wide = np.stack([unp_row(b34[y]) for y in range(73)])  # 73×68
        # fold 68=2*34 as even/odd rows
        o = np.empty((h, rem_w), np.uint8)
        o[0::2] = wide[:, :34]
        o[1::2] = wide[:, 34:]
        add("fold73x68_eo", o)
        o = np.empty((h, rem_w), np.uint8)
        o[0::2] = wide[:, 34:]
        o[1::2] = wide[:, :34]
        add("fold73x68_oe", o)
        # 68-wide as 2 planes of 34, stacked as even/odd x
        o = np.empty((h, rem_w), np.uint8)
        pair = wide.reshape(73, 34, 2)
        o[0::2] = pair[:, :, 0]
        o[1::2] = pair[:, :, 1]
        add("fold73x68_pair", o)

    # 17×146 bytes → 17 rows of 292 px
    if 17 * 146 == len(bb):
        b17 = bb.reshape(17, 146)
        img17 = np.stack([unp_row(b17[y]) for y in range(17)])  # 17×292
        t = img17.T  # 292×17
        add("bytes17x146_T_vsplit", np.concatenate([t[:146], t[146:]], axis=1))
        add("bytes17x146_T_eostack", np.concatenate([t[0::2], t[1::2]], axis=1))
        o = np.empty((146, 34), np.uint8)
        o[:, 0::2] = t[0::2]
        o[:, 1::2] = t[1::2]
        add("bytes17x146_T_interx", o)

    # --- nibble-level column-major (pixel columns, horizontal pairing already in nb) ---
    add("pixcol_major", nb.reshape(rem_w, h).T)
    add("pixcol_major_bup", nb.reshape(rem_w, h)[:, ::-1].T)

    # --- Morton / Z / 4x4 / 8x8 / 16x8 / 16x16 inside remainder only ---
    for tw, th, to, intra in [
        (4, 4, "row", "row"),
        (4, 4, "row", "morton"),
        (4, 4, "row", "z4"),
        (4, 4, "col", "morton"),
        (8, 8, "row", "morton"),
        (8, 8, "row", "row"),
        (16, 8, "row", "morton"),
        (16, 8, "row", "row"),
        (16, 16, "row", "morton"),
        (16, 16, "col", "morton"),
        (2, 2, "row", "morton"),
        (2, 2, "row", "z4"),
    ]:
        add(f"tile_{tw}x{th}_{to}_{intra}", tiled(nb, rem_w, h, tw, th, to, intra))

    # --- D vertical nibble pairing ---
    for xmaj in (True, False):
        for hiev in (True, False):
            add(f"vpair_xmaj{int(xmaj)}_hi{int(hiev)}", vpair(bb, rem_w, h, hiev, xmaj))

    # --- row group permute (bit-rev / nibble-swap / reverse every 8/16 px) ---
    src = nb.reshape(h, rem_w)
    for g in (8, 16):
        for mode in ("rev", "swap2", "bitrev", "viv_x"):
            out = src.copy()
            bits = max(1, (g.bit_length() - 1))
            for y in range(h):
                row = out[y]
                for i0 in range(0, rem_w, g):
                    chunk = row[i0 : i0 + g].copy()
                    k = len(chunk)
                    if mode == "rev":
                        row[i0 : i0 + g] = chunk[::-1]
                    elif mode == "swap2" and k >= 2:
                        n = (k // 2) * 2
                        chunk[0:n:2], chunk[1:n:2] = chunk[1:n:2].copy(), chunk[0:n:2].copy()
                        row[i0 : i0 + g] = chunk
                    elif mode == "bitrev":
                        dst = chunk.copy()
                        for i in range(k):
                            j = int(f"{i:0{bits}b}"[::-1], 2) if i < (1 << bits) else i
                            if j >= k:
                                j = i
                            dst[j] = chunk[i]
                        row[i0 : i0 + g] = dst
                    elif mode == "viv_x":
                        dst = np.empty_like(chunk)
                        for i in range(k):
                            j = (i & ~3) | ((i & 1) << 1) | ((i & 2) >> 1)
                            if j >= k:
                                j = i
                            dst[j] = chunk[i]
                        row[i0 : i0 + g] = dst
                out[y] = row
            add(f"rowgrp{g}_{mode}", out)

    # reverse every row / reverse byte rows
    add("rev_each_row", src[:, ::-1])
    add("rev_byte_rows", np.stack([unp_row(bb.reshape(h, sb)[y, ::-1])[:rem_w] for y in range(h)]))

    # bit-reverse x on 0..33 via 6-bit skip (permutation of columns)
    order = []
    seen = set()
    for i in range(64):
        xr = int(f"{i:06b}"[::-1], 2)
        if xr < rem_w and xr not in seen:
            order.append(xr)
            seen.add(xr)
    for x in range(rem_w):
        if x not in seen:
            order.append(x)
    add("bitrev_x_perm", src[:, np.array(order)])

    # even/odd row deinterlace
    o = np.empty_like(src)
    o[0::2] = src[:73]
    o[1::2] = src[73:]
    add("deint_vsplit", o)
    o = np.empty_like(src)
    o[0::2] = src[0::2]
    o[1::2] = src[1::2]  # identity
    add("deint_identity_check", o)

    # nibble 292×17 folds
    a = nb.reshape(292, 17)
    add("nib292x17_eostack", np.concatenate([a[0::2], a[1::2]], axis=1))
    o = np.empty((146, 34), np.uint8)
    o[:, 0::2] = a[0::2]
    o[:, 1::2] = a[1::2]
    add("nib292x17_interx", o)
    add("nib292x17_vsplit", np.concatenate([a[:146], a[146:]], axis=1))

    # score
    rows_score = []
    for name, arr in cands.items():
        ne = neighbor_eq(arr)
        tv = tv_score(arr)
        hm = hist_max(arr)
        seam = float((np.abs(left_col.astype(np.int16) - arr[:, 0].astype(np.int16)) <= 1).mean())
        # pin-body rows y=70..110: remainder should be smooth (bg or shadow), high ne
        body = arr[70:111]
        bne = neighbor_eq(body)
        combo = (-1.0 if hm > 0.97 else 0.0) + 1.1 * ne + 0.5 * bne + 0.7 * seam - 0.12 * tv
        rows_score.append((combo, ne, bne, tv, seam, hm, name))
    rows_score.sort(reverse=True)

    print("\n=== top 20 packer perms ===")
    for r in rows_score[:20]:
        print(f"  {r[0]:+.3f} ne={r[1]:.3f} body_ne={r[2]:.3f} tv={r[3]:.3f} seam={r[4]:.3f}  {r[6]}")

    rankp = OUT / "pin_rank.txt"
    with rankp.open("w") as f:
        for r in rows_score:
            f.write(f"{r[0]:+.4f}\tne={r[1]:.4f}\tbody={r[2]:.4f}\ttv={r[3]:.4f}\tseam={r[4]:.4f}\t{r[6]}\n")

    # always render these named ones + top 8
    must = [
        "linear",
        "bytecol_major",
        "bytecol_serp",
        "rot90_146x34_T",
        "rot90_146x34_T_flipv",
        "fold73x68_eo",
        "pixcol_major",
        "tile_4x4_row_morton",
        "vpair_xmaj1_hi1",
        "rowgrp8_bitrev",
        "rowgrp16_rev",
        "nib292x17_eostack",
        "bytegrp2_cm",
        "bytegrp4_cm",
    ]
    names = []
    for r in rows_score:
        if r[6] not in names:
            names.append(r[6])
        if len(names) >= 8:
            break
    for m in must:
        if m in cands and m not in names:
            names.append(m)

    scale = 3
    cols = 4
    nrows = (len(names) + cols - 1) // cols
    sheet = Image.new("L", (cols * (w * scale + 8) + 8, nrows * (h * scale + 20) + 8), 25)
    dr = ImageDraw.Draw(sheet)
    for i, name in enumerate(names):
        full = np.concatenate([left, cands[name]], 1)
        g = gray(full, scale)
        r, c = divmod(i, cols)
        x = 8 + c * (w * scale + 8)
        y = 8 + r * (h * scale + 20)
        dr.text((x, y), name[:42], fill=255)
        sheet.paste(g, (x, y + 12))
        g.save(OUT / f"{i:02d}_{name}.png")
        gray(cands[name], 6).save(OUT / f"rem_{i:02d}_{name}.png")
    sheet.save(OUT / "top8_sheet.png")
    gray(left, 4).save(OUT / "pin_strip0_gray.png")
    gray(np.concatenate([left, cands["linear"]], 1), 4).save(OUT / "pin_linear_gray.png")
    print("rendered", len(names), "of", len(cands), "→", OUT)

    # disc remainder with same named funcs for the winner + linear
    return cands, rows_score, left, pal


if __name__ == "__main__":
    main()
