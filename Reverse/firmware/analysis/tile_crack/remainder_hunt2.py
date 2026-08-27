#!/usr/bin/env python3
"""Shear measurement + size-preserving remainder permutations (phase, fold, deshear)."""
from pathlib import Path
import numpy as np
from PIL import Image, ImageDraw
from framework import D
from remainder_hunt import (
    OUT, load_img, split_strips, rm_strip, unpack_bytes, rm_from_nb,
    to_rgba, save_rgba, neighbor_eq, tv_score, hist_max, TARGETS, PANEL,
)

PIN = TARGETS["pin"]


def score(left_col, rem):
    ne = neighbor_eq(rem)
    tv = tv_score(rem)
    hm = hist_max(rem)
    seam1 = float((np.abs(left_col.astype(np.int16) - rem[:, 0].astype(np.int16)) <= 1).mean())
    seam0 = float((left_col == rem[:, 0]).mean())
    if hm > 0.97:
        combo = -1
    else:
        combo = 1.2 * ne + 0.9 * seam1 - 0.12 * tv
    return combo, ne, tv, seam1, seam0, hm


def dark_mask(idx, pal):
    # luminance of BGRA palette
    Y = 0.2126 * pal[:, 2] + 0.7152 * pal[:, 1] + 0.0722 * pal[:, 0]
    lum = Y[idx]
    # pin body is dark; background is light pink
    return lum < 80


def shear_report(rem, pal, name=""):
    d = dark_mask(rem, pal)
    h, w = rem.shape
    print(f"\n--- shear {name} {w}x{h} dark_frac={d.mean():.3f} ---")
    xs = []
    for y in range(h):
        cols = np.where(d[y])[0]
        if len(cols):
            xs.append((y, cols.min(), cols.max(), cols.mean()))
        else:
            xs.append((y, None, None, None))
    # print a few rows
    for y in range(0, h, 10):
        y, mn, mx, mean = xs[y]
        print(f"  y={y:3d} dark x=[{mn},{mx}] mean={mean}")
    # fit mean-x vs y where present
    pts = [(y, m) for y, mn, mx, m in xs if m is not None]
    if len(pts) > 8:
        ys = np.array([p[0] for p in pts], float)
        ms = np.array([p[1] for p in pts], float)
        slope, intercept = np.polyfit(ys, ms, 1)
        print(f"  dark-centroid slope dx/dy={slope:.4f}  intercept={intercept:.2f}")
        print(f"  implied extra px/row ≈ {slope:.3f}  (true_width ≈ {w - slope:.2f} if wrap-within-row)")


def main():
    pal, pix = load_img(**PIN)
    w, h = PIN["w"], PIN["h"]
    strips = split_strips(pix, w, h)
    left = rm_strip(strips[0][1], strips[0][0], h)
    rem_w, rem_bb = strips[-1]
    rem_nb = unpack_bytes(rem_bb, True)[: rem_w * h]
    rem = rm_from_nb(rem_nb, rem_w, h)
    left_col = left[:, -1]

    print("palette BGRA:")
    for i, p in enumerate(pal):
        print(f"  [{i:2d}] BGR={tuple(int(x) for x in p[:3])} A={p[3]}")
    print("strip0 hist", np.bincount(left.ravel(), minlength=16))
    print("rem hist  ", np.bincount(rem.ravel(), minlength=16))
    print("left_col hist", np.bincount(left_col, minlength=16))
    print("strip0 neighbor", neighbor_eq(left), "tv", tv_score(left))
    print("rem linear neighbor", neighbor_eq(rem), "tv", tv_score(rem))

    # row-wise neighbor of strip0 to find clean band
    row_ne = [(left[y] == left[max(0, y - 1)]).mean() if y else 0 for y in range(h)]
    print("strip0 row-eq to prev: first20", [round(x, 2) for x in row_ne[:20]])
    print("                    mid      ", [round(row_ne[y], 2) for y in range(50, 90, 5)])
    print("                    last20   ", [round(x, 2) for x in row_ne[-20:]])

    shear_report(left, pal, "strip0")
    shear_report(rem, pal, "rem_linear")

    results = []
    images = {}

    def add(name, arr):
        c, ne, tv, s1, s0, hm = score(left_col, arr)
        results.append((c, ne, tv, s1, name))
        images[name] = arr

    add("linear", rem)

    # nibble phase: rotate the stream
    n = rem_w * h
    for ph in range(-16, 17):
        if ph == 0:
            continue
        src = np.roll(rem_nb, ph).reshape(h, rem_w)
        add(f"phase{ph:+d}", src)

    # wrapping stride
    for st in range(8, 65):
        if st == rem_w:
            continue
        out = np.zeros((h, rem_w), np.uint8)
        for y in range(h):
            for x in range(rem_w):
                out[y, x] = rem_nb[(y * st + x) % n]
        add(f"wstride{st}", out)

    # per-row roll deshear
    for k in range(-17, 18):
        if k == 0:
            continue
        out = np.empty_like(rem)
        for y in range(h):
            out[y] = np.roll(rem[y], (k * y) % rem_w)
        add(f"deshear_k{k:+d}", out)

    # two-step deshear (period 2)
    for k in range(-17, 18):
        out = rem.copy()
        out[1::2] = np.roll(out[1::2], k, axis=1)
        add(f"oddroll{k:+d}", out)

    # byte reshape folds
    bb = rem_bb
    # (73, 34) bytes → 73 x 68 pixels
    if 73 * 34 == len(bb):
        b73 = bb.reshape(73, 34)
        # unpack rows of 34 bytes = 68 px
        def unp(row):
            hh, ll = (row >> 4) & 0xF, row & 0xF
            o = np.empty(len(row) * 2, np.uint8)
            o[0::2], o[1::2] = hh, ll
            return o
        wide = np.stack([unp(b73[y]) for y in range(73)])  # 73x68
        # fold 68-wide into 34-wide x 146 by stacking left/right as even/odd rows
        out = np.zeros((h, rem_w), np.uint8)
        out[0::2] = wide[:, :34]
        out[1::2] = wide[:, 34:]
        add("fold73_lr_evenodd", out)
        out = np.zeros((h, rem_w), np.uint8)
        out[0::2] = wide[:, 34:]
        out[1::2] = wide[:, :34]
        add("fold73_rl_evenodd", out)
        # left half = even rows of output stacked? 73 != 146
        # interleave columns: out[y2, 2x]=wide[y2,x] doesn't fit
        # stack vertically: 73+73
        # 68 = 2*34: even/odd columns of a 34-wide image, 73 tall — upsample
        out = np.zeros((h, rem_w), np.uint8)
        # repeat each of 73 rows into 2
        tmp = np.repeat(wide[:, :34], 2, axis=0)[:h]
        add("fold73_left34_repeat", tmp)
        # deinterlace 68 as even/odd x of 34xh... 73 rows only
        out = np.zeros((146, 34), np.uint8)
        # map: row r of wide → dest rows? skip

    # 17 x 146 bytes → 17 rows of 292 px
    if 17 * 146 == len(bb):
        b17 = bb.reshape(17, 146)
        def unp(row):
            hh, ll = (row >> 4) & 0xF, row & 0xF
            o = np.empty(len(row) * 2, np.uint8)
            o[0::2], o[1::2] = hh, ll
            return o
        img17 = np.stack([unp(b17[y]) for y in range(17)])  # 17 x 292
        # 292 = 2*146: fold to 34 x 146
        out = np.zeros((h, rem_w), np.uint8)
        # take first 34 of each of 17 rows, not enough height
        # transpose then crop
        t = img17.T  # 292 x 17
        # 292 x 17 → two 146 x 17 stacked → concat to 146 x 34
        out = np.concatenate([t[:146], t[146:292]], axis=1)
        add("bytes_17x146_T_stack", out)
        out = np.concatenate([t[0::2], t[1::2][:146]], axis=1) if False else out
        a = t[0::2][:146]  # 146 x 17
        b = t[1::2][:146]
        add("bytes_17x146_T_eocol", np.concatenate([a, b], axis=1))
        # interleave columns
        o = np.empty((146, 34), np.uint8)
        o[:, 0::2] = a
        o[:, 1::2] = b
        add("bytes_17x146_T_interleavex", o)

    # 34 x 73 bytes
    if 34 * 73 == len(bb):
        b34 = bb.reshape(34, 73)
        def unp(row):
            hh, ll = (row >> 4) & 0xF, row & 0xF
            o = np.empty(len(row) * 2, np.uint8)
            o[0::2], o[1::2] = hh, ll
            return o
        img = np.stack([unp(b34[y]) for y in range(34)])  # 34 x 146  !! width 146 height 34
        add("bytes_34x73_as_34x146", img)
        add("bytes_34x73_T_146x34", img.T)

    # nibble reshape (292, 17) fold
    a = rem_nb.reshape(292, 17)
    out = np.concatenate([a[0::2], a[1::2]], axis=1)  # 146 x 34
    add("nib_292x17_eostack", out)
    out = np.empty((146, 34), np.uint8)
    out[:, 0::2] = a[0::2]
    out[:, 1::2] = a[1::2]
    add("nib_292x17_eointer", out)
    out = np.concatenate([a[:146], a[146:]], axis=1)
    add("nib_292x17_vsplit", out)

    a = rem_nb.reshape(73, 68)
    out = np.empty((146, 34), np.uint8)
    out[0::2] = a[:, :34]
    out[1::2] = a[:, 34:]
    add("nib_73x68_lr_eo", out)
    out = np.empty((146, 34), np.uint8)
    out[:, 0::2] = a.reshape(73, 34, 2)[:, :, 0]
    out[:, 1::2] = a.reshape(73, 34, 2)[:, :, 1]
    # wait 73 != 146. repeat:
    pair = a.reshape(73, 34, 2)
    out = np.repeat(pair[:, :, 0], 2, axis=0)[:146]  # dummy
    o = np.empty((146, 34), np.uint8)
    o[0::2] = pair[:, :, 0]
    o[1::2] = pair[:, :, 1]
    add("nib_73x68_pair_eo", o)

    # 17-px rows of nibbles (odd width) — rebuild from bytes with running nibble
    # consume 17 pixels per logical row, 292 logical rows, then fold
    bits = []
    for byte in rem_bb:
        bits.append((byte >> 4) & 0xF)
        bits.append(byte & 0xF)
    bits = np.array(bits, np.uint8)
    rows17 = bits.reshape(292, 17)
    add("oddrow17_eostack", np.concatenate([rows17[0::2], rows17[1::2]], axis=1))
    o = np.empty((146, 34), np.uint8)
    o[:, 0::2] = rows17[0::2]
    o[:, 1::2] = rows17[1::2]
    add("oddrow17_eointer", o)
    add("oddrow17_vsplit", np.concatenate([rows17[:146], rows17[146:]], axis=1))

    results.sort(reverse=True)
    print("\n=== top 25 ===")
    for r in results[:25]:
        print(f"  {r[0]:+.3f} ne={r[1]:.3f} tv={r[2]:.3f} seam1={r[3]:.3f}  {r[4]}")

    # render top 8 unique + a few named
    names = []
    for r in results:
        if r[4] not in names:
            names.append(r[4])
        if len(names) >= 8:
            break
    for must in ["linear", "deshear_k+1", "deshear_k-1", "wstride32", "wstride16",
                 "nib_292x17_eostack", "bytes_34x73_T_146x34", "oddrow17_eostack",
                 "fold73_lr_evenodd", "phase+1"]:
        if must in images and must not in names:
            names.append(must)

    scale = 3
    cols = 4
    rows = (len(names) + cols - 1) // cols
    sheet = Image.new("RGB", (cols * (w * scale + 8) + 8, rows * (h * scale + 20) + 8), (18, 18, 24))
    dr = ImageDraw.Draw(sheet)
    for i, name in enumerate(names):
        full = np.concatenate([left, images[name]], axis=1)
        rgba = to_rgba(full, pal)
        im = Image.fromarray(rgba, "RGBA")
        cv = Image.new("RGB", im.size, (30, 30, 40))
        cv.paste(im, (0, 0), im)
        cv = cv.resize((w * scale, h * scale), Image.NEAREST)
        r, c = divmod(i, cols)
        x = 8 + c * (w * scale + 8)
        y = 8 + r * (h * scale + 20)
        dr.text((x, y), name[:42], fill=(230, 230, 230))
        sheet.paste(cv, (x, y + 12))
        save_rgba(full, pal, OUT / f"h2_{i}_{name}.png", scale=3)
        save_rgba(images[name], pal, OUT / f"h2rem_{i}_{name}.png", scale=6)
    sheet.save(OUT / "pin_hunt2_sheet.png")
    print("saved hunt2 sheet", len(names), "of", len(results))

    # disc strip check
    d = TARGETS["disc"]
    pal2, pix2 = load_img(**d)
    st = split_strips(pix2, d["w"], d["h"])
    print(f"\nDISC strips: {[(sw, len(bb)) for sw, bb in st]}")
    for i, (sw, bb) in enumerate(st):
        idx = rm_strip(bb, sw, d["h"])
        print(f"  strip{i} {sw} ne={neighbor_eq(idx):.3f} tv={tv_score(idx):.3f} hist={hist_max(idx):.2f}")
        save_rgba(idx, pal2, OUT / f"disc_strip{i}.png", scale=1)


if __name__ == "__main__":
    main()
