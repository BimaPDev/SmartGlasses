#!/usr/bin/env python3
"""Carve compiled-in LVGL bitmap fonts from Star Air platform_tester.bin."""

from __future__ import annotations

import hashlib
import json
import struct
from pathlib import Path

from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parent
BINS = {
    "1.0.7.83": ROOT / "x_1.0.7.83/platform_tester.bin",
    "1.0.11.53": ROOT / "x_1.0.11.53/platform_tester.bin",
    "1.0.12.83": ROOT / "x_1.0.12.83/platform_tester.bin",
}

HUD_GREEN = (0, 255, 0)


def packed_bytes(bw: int, bh: int, bpp: int) -> int:
    if not bw or not bh:
        return 0
    return (bw * bh * bpp + 7) // 8


def parse16(data: bytes, dsc: int, g: int):
    return struct.unpack_from("<IIHHhh", data, dsc + g * 16)


def walk16(data: bytes, dsc: int, bpp: int, maxg: int = 8000):
    prev = parse16(data, dsc, 0)
    glyphs = [prev]
    for g in range(1, maxg):
        if dsc + g * 16 + 16 > len(data):
            break
        cur = parse16(data, dsc, g)
        if cur[0] != prev[0] + packed_bytes(prev[2], prev[3], bpp):
            break
        if not (0 <= cur[2] <= 160 and 0 <= cur[3] <= 96):
            break
        if cur[1] > 512 * 16:
            break
        glyphs.append(cur)
        prev = cur
    return glyphs


def find_fonts(data: bytes):
    found = []
    i = 0
    n = len(data)
    while i < n - 16 * 200:
        if data[i : i + 16] != b"\x00" * 16:
            i += 4
            continue
        hit = None
        for bpp in (1, 4):
            glyphs = walk16(data, i, bpp)
            if len(glyphs) >= 2000:
                hit = (i, bpp, glyphs)
                break
        if hit:
            found.append(hit)
            i += len(hit[2]) * 16
        else:
            i += 4
    return found


def unpack_rows(bm: bytes, idx: int, bw: int, bh: int, bpp: int):
    """Tight-packed MSB-first pixels, one list per row."""
    bit0 = idx * 8
    p = 0
    rows = []
    for _y in range(bh):
        row = []
        for _x in range(bw):
            v = 0
            for _b in range(bpp):
                bi = bit0 + p * bpp + _b
                if bi // 8 < len(bm):
                    v = (v << 1) | ((bm[bi // 8] >> (7 - (bi % 8))) & 1)
            p += 1
            row.append(v)
        rows.append(row)
    return rows


def drop_disconnected_last_row(rows, minv: int = 8):
    """Drop a wrap-around floor bar on the last row, keep real bowls/serifs.

    Tight 4bpp leftover bits show up as a run of ink with no neighbor above
    (Y's `@@@@@` floor). Isolated pixels are part of U/V.
    """
    if len(rows) < 2:
        return rows
    above, last = rows[-2], list(rows[-1])
    n = len(last)
    disconnected = []
    for x, v in enumerate(last):
        if v < minv:
            continue
        if above[x] < minv:
            disconnected.append(x)
    if len(disconnected) < 3:
        return rows
    for x in disconnected:
        last[x] = 0
    rows[-1] = last
    return rows


def _edge_score(rows, bw: int) -> float:
    """Ink on both stems minus ink in the gap — high for H/M/U."""
    e = max(2, (bw + 4) // 6)
    s = 0.0
    for row in rows:
        s += sum(row[:e]) + sum(row[-e:])
        mid = row[e:-e]
        if mid:
            s -= 0.2 * sum(mid)
    return s


def bpp1_row_shift(bm: bytes, glyphs, gid_start: int) -> bool:
    """Whether `box_w % 8` circular rotate helps this 1bpp face.

    1.0.7 small is already edge-aligned (rotate shears M into a slab).
    1.0.7 large and 1.0.11/12 need the rotate so H/U stems sit on the edges.
    """
    delta = 0.0
    for ch in "HMU":
        gid = gid_for(ord(ch), gid_start)
        if gid >= len(glyphs):
            continue
        idx, _adv, bw, bh, _ox, _oy = glyphs[gid]
        if bw < 6 or not bh:
            continue
        rows = unpack_rows(bm, idx, bw, bh, 1)
        rot = bw % 8
        rotated = [r[rot:] + r[:rot] for r in rows] if rot else rows
        delta += _edge_score(rotated, bw) - _edge_score(rows, bw)
    return delta > 0


def bpp4_bank8(bm: bytes, glyphs, gid_start: int) -> bool:
    """1.0.11/12 4bpp stores ink in the second 8-pixel bank; 1.0.7 does not.

    Rotate-by-8 fixes 1.0.12 H/M but shears 1.0.7 glyphs that are already centered.
    """
    gid = gid_for(ord("M"), gid_start)
    if gid >= len(glyphs):
        return True
    idx, _adv, bw, bh, _ox, _oy = glyphs[gid]
    if bw < 9 or not bh:
        return False
    rows = unpack_rows(bm, idx, bw, bh, 4)
    left = right = 0
    for row in rows[: min(3, bh)]:
        left += sum(row[:8])
        right += sum(row[8:])
    return right > left


def detect_row_shift(bm: bytes, glyphs, gid_start: int, bpp: int) -> bool:
    if bpp == 1:
        return bpp1_row_shift(bm, glyphs, gid_start)
    if bpp == 4:
        return bpp4_bank8(bm, glyphs, gid_start)
    return True


def row_rotate(bw: int, bpp: int, row_shift: bool = False) -> int:
    """Do not wrap rows. LVGL walks a tight MSB bit stream; width%8 rotate shears stems."""
    return 0


def _ncc(rows, thr: int = 6) -> int:
    """4-connected ink components. Used to decide 4bpp 8px-bank overlay."""
    h = len(rows)
    w = len(rows[0]) if rows else 0
    seen = [[False] * w for _ in range(h)]
    n = 0
    for y in range(h):
        for x in range(w):
            if seen[y][x] or rows[y][x] < thr:
                continue
            n += 1
            stack = [(x, y)]
            seen[y][x] = True
            while stack:
                cx, cy = stack.pop()
                for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                    nx, ny = cx + dx, cy + dy
                    if 0 <= nx < w and 0 <= ny < h and not seen[ny][nx] and rows[ny][nx] >= thr:
                        seen[ny][nx] = True
                        stack.append((nx, ny))
    return n


def overlay8_4bpp(rows):
    """Composite 8px banks with max(). Completes M/H/U inner strokes."""
    if not rows:
        return rows
    w = len(rows[0])
    nw = min(8, w)
    out = [[0] * nw for _ in rows]
    for y, row in enumerate(rows):
        for x, v in enumerate(row):
            out[y][x % nw] = max(out[y][x % nw], v)
    return out


def maybe_overlay8_4bpp(rows):
    """1.0.11/12 4bpp stores some glyphs as two 8px layers concatenated.

    Side-by-side looks chopped (M's inner diagonals fall in the gap). Overlay
    recovers those strokes for H/M/U. Skip it when overlay does not collapse
    to a single component — that is Y/V, whose arms live in different banks.
    """
    if not rows or len(rows[0]) <= 8:
        return rows
    over = overlay8_4bpp(rows)
    if _ncc(over) == 1 and _ncc(rows) >= 2:
        return over
    return rows


def render_glyph(
    bm: bytes, idx: int, bw: int, bh: int, bpp: int, scale: int = 1, row_shift: bool = False
) -> Image.Image:
    """Tight-packed MSB-first (same walk as lv_draw_sw_letter)."""
    if not bw or not bh:
        return Image.new("L", (max(scale, 1), max(scale, 1)), 0)
    maxv = (1 << bpp) - 1
    rows = unpack_rows(bm, idx, bw, bh, bpp)
    if bpp == 1 and row_shift:
        # 1.0.7 large + all 1.0.11/12 1bpp: leftover bits sit at the
        # left of every row. Rotate by width%8 so stems land on the edges.
        rot = bw % 8
        if rot:
            rows = [r[rot:] + r[:rot] for r in rows]
    elif bpp == 4 and row_shift:
        rows = maybe_overlay8_4bpp(rows)
    # Last byte of a glyph can hold leftover bits that are not pixels.
    rows = drop_disconnected_last_row(rows, minv=1 if bpp == 1 else 8)
    bw, bh = len(rows[0]), len(rows)
    img = Image.new("L", (bw, bh), 0)
    px = img.load()
    for y, row in enumerate(rows):
        for x, v in enumerate(row):
            t = (v / maxv) if maxv else 0
            if bpp == 4:
                t = t ** 0.6
            px[x, y] = int(t * 255)
    if scale != 1:
        img = img.resize((bw * scale, bh * scale), Image.NEAREST)
    return img


def to_hud(img: Image.Image) -> Image.Image:
    img = img.convert("RGB")
    px = img.load()
    for y in range(img.height):
        for x in range(img.width):
            v = px[x, y][0]
            px[x, y] = (0, v, 0)
    return img


def ascii_gid_start(glyphs) -> int:
    """LVGL cmap `glyph_id_start` for U+0020 (len 95).

    1.0.11 / 1.0.12: space is gid 1 (glyph 0 is the empty `.notdef`).
    1.0.7.83: space is gid 0 — hardcoded start=1 drew MYVU as NZWV.
    """
    for gs in (0, 1):
        def g(ch: str):
            i = gs + (ord(ch) - 0x20)
            return glyphs[i] if 0 <= i < len(glyphs) else None

        I, M, period, H, zero = g("I"), g("M"), g("."), g("H"), g("0")
        if not all((I, M, period, H, zero)):
            continue
        if (
            I[2] <= 5
            and M[2] >= 10
            and period[2] <= 6
            and period[3] <= 10
            and H[2] >= 8
            and zero[2] >= 8
        ):
            return gs
    return 1


def gid_for(cp: int, gid_start: int = 1) -> int:
    """ASCII printable: cmap U+0020 / glyph_id_start."""
    return gid_start + (cp - 0x20)


def draw_string(bm, glyphs, bpp, text, scale, pad=8, gid_start: int = 1, row_shift: bool = False):
    """Place glyphs the way LVGL 8.3 does:
    gpos.y = pos.y + (line_height - base_line) - box_h - ofs_y
    """
    gids = []
    for ch in text:
        if ch == " ":
            gids.append(None)
            continue
        gid = gid_for(ord(ch), gid_start)
        if gid >= len(glyphs):
            continue
        gids.append(gid)
    used = [glyphs[g] for g in gids if g is not None]
    # baseline_from_top so every glyph top stays >= 0: top = B - bh - oy
    baseline = max((bh + oy) for (idx, adv, bw, bh, ox, oy) in used) if used else 16
    below = max((baseline - oy) for (idx, adv, bw, bh, ox, oy) in used) if used else 16
    width = pad * 2
    for gid in gids:
        if gid is None:
            width += 8 * scale
            continue
        idx, adv, bw, bh, ox, oy = glyphs[gid]
        width += max(int(round(adv / 16)), bw + max(ox, 0), 1) * scale + 2
    img = Image.new("RGB", (max(width, 16), below * scale + pad * 2), (0, 0, 0))
    x = pad
    for gid in gids:
        if gid is None:
            x += 8 * scale
            continue
        idx, adv, bw, bh, ox, oy = glyphs[gid]
        g = to_hud(render_glyph(bm, idx, bw, bh, bpp, scale, row_shift=row_shift))
        top = pad + (baseline - bh - oy) * scale
        img.paste(g, (x + ox * scale, max(0, top)))
        # Rendered width (4bpp overlay can be narrower than box_w).
        x += g.width + 4 * scale
    return img


def atlas(bm, glyphs, bpp, chars, scale, cell=None, gid_start: int = 1, row_shift: bool = False):
    items = []
    used = []
    for ch_ in chars:
        gid = gid_for(ord(ch_), gid_start)
        if gid >= len(glyphs):
            continue
        idx, adv, bw, bh, ox, oy = glyphs[gid]
        used.append((bw, bh, ox, oy))
        g = to_hud(render_glyph(bm, idx, bw, bh, bpp, scale, row_shift=row_shift))
        items.append((ch_, g, bw, bh, ox, oy))
    if not items:
        return Image.new("RGB", (16, 16), (12, 12, 12))
    baseline = max((bh + oy) for (bw, bh, ox, oy) in used)
    below = max((baseline - oy) for (bw, bh, ox, oy) in used)
    cw = max(g.width + 16 for (_, g, *_) in items)
    ch = below * scale + 22
    if cell:
        cw, ch = cell
    cols = 16
    rows = (len(items) + cols - 1) // cols
    img = Image.new("RGB", (cols * cw, rows * ch), (12, 12, 12))
    draw = ImageDraw.Draw(img)
    for i, (ch_, g, bw, bh, ox, oy) in enumerate(items):
        r, c = divmod(i, cols)
        top = 4 + (baseline - bh - oy) * scale
        img.paste(g, (c * cw + 6, r * ch + max(0, top)))
        draw.text((c * cw + 6, r * ch + ch - 14), ch_, fill=(140, 140, 140))
    return img


def extract_one(ver: str, bin_path: Path):
    data = bin_path.read_bytes()
    fonts = find_fonts(data)
    out = ROOT / "extracted_assets" / ver / "fonts"
    out.mkdir(parents=True, exist_ok=True)
    # drop previous debug renders
    for p in out.glob("*"):
        if p.is_file():
            p.unlink()

    meta = []
    # sort by latin cap-height so names are stable: small / medium / large
    ranked = []
    for dsc, bpp, glyphs in fonts:
        gs = ascii_gid_start(glyphs)
        m = glyphs[gid_for(ord("M"), gs)]
        ranked.append((m[3], bpp, dsc, glyphs, gs))
    ranked.sort()
    names = ["small", "medium", "large"]
    for i, (mh, bpp, dsc, glyphs, gs) in enumerate(ranked):
        name = names[i] if i < len(names) else f"face{i}"
        last = glyphs[-1]
        bmsz = last[0] + packed_bytes(last[2], last[3], bpp)
        bm_off = dsc - bmsz
        if bm_off < 0:
            print(f"  skip {name}: bitmap underflow")
            continue
        bm = data[bm_off : dsc]
        row_shift = detect_row_shift(bm, glyphs, gs, bpp)
        latin = [
            glyphs[gid_for(cp, gs)]
            for cp in range(0x20, 0x7F)
            if gid_for(cp, gs) < len(glyphs)
        ]
        cap_h = max(g[3] for g in latin if g[2])
        rec = {
            "name": name,
            "bpp": bpp,
            "glyph_count": len(glyphs),
            "ascii_gid_start": gs,
            "row_shift": row_shift,
            "glyph_dsc_off": f"0x{dsc:x}",
            "bitmap_off": f"0x{bm_off:x}",
            "bitmap_size": bmsz,
            "bitmap_md5": hashlib.md5(bm).hexdigest(),
            "latin_cap_height": cap_h,
            "max_box": [max(g[2] for g in glyphs), max(g[3] for g in glyphs)],
            "likely_role": {
                "small": "FONT_DUMMY_16 / FONT_CN_16_NORMAL (~16px)",
                "medium": "FONT_DUMMY_20 / FONT_CN_20_NORMAL (bpp4 AA ~20px)",
                "large": "FONT_DUMMY_24 / FONT_CN_24_NORMAL (~24px)",
            }.get(name, ""),
        }
        meta.append(rec)
        (out / f"{name}_glyph_bitmap.bin").write_bytes(bm)
        (out / f"{name}_glyph_dsc.bin").write_bytes(data[dsc : dsc + len(glyphs) * 16])

        atlas_scale = 3
        # 4bpp is ~14px AA: 5× nearest-neighbor turns strokes into slabs.
        # 4bpp is ~14px AA: 4× nearest-neighbor already makes strokes slabby.
        myvu_scale = 3 if bpp == 4 else (6 if cap_h < 16 else 5)
        text_scale = 2 if bpp == 4 else 3
        digit_scale = 3 if bpp == 4 else 4
        atlas(
            bm, glyphs, bpp,
            [chr(c) for c in range(0x20, 0x7F)],
            atlas_scale,
            gid_start=gs,
            row_shift=row_shift,
        ).save(out / f"{name}_ascii.png")
        draw_string(bm, glyphs, bpp, "MYVU", myvu_scale, gid_start=gs, row_shift=row_shift).save(out / f"{name}_MYVU.png")
        draw_string(bm, glyphs, bpp, "Star Air", digit_scale, gid_start=gs, row_shift=row_shift).save(out / f"{name}_StarAir.png")
        draw_string(bm, glyphs, bpp, "The quick brown fox", text_scale, gid_start=gs, row_shift=row_shift).save(out / f"{name}_pangram.png")
        draw_string(bm, glyphs, bpp, "0123456789", digit_scale, gid_start=gs, row_shift=row_shift).save(out / f"{name}_digits.png")
        print(f"  {name:8} bpp={bpp} glyphs={len(glyphs):4} ascii_gid={gs} row_shift={row_shift} capH={cap_h:2} dsc=0x{dsc:x} bm=0x{bm_off:x} ({bmsz/1024:.0f}KiB)")

    # comparison strip
    strips = []
    for name in names:
        p = out / f"{name}_MYVU.png"
        if p.exists():
            strips.append(Image.open(p))
    if strips:
        w = max(s.width for s in strips) + 16
        h = sum(s.height + 8 for s in strips) + 8
        sheet = Image.new("RGB", (w, h), (0, 0, 0))
        y = 8
        for s in strips:
            sheet.paste(s, (8, y))
            y += s.height + 8
        sheet.save(out / "MYVU_all_sizes.png")

    (out / "manifest.json").write_text(json.dumps({"version": ver, "fonts": meta}, indent=2) + "\n")
    return meta


def main():
    for ver, path in BINS.items():
        if not path.exists():
            print("missing", path)
            continue
        print(f"\n=== {ver} ===")
        extract_one(ver, path)


if __name__ == "__main__":
    main()
