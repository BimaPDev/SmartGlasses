#!/usr/bin/env python3
"""Host mock of the Star Air idle 4-circle HUD (green-on-black).

Not LVGL and not the real font engine — just a layout sandbox so you can see
whether "HH:MM NN" / canary copy is readable before risking an OTA.
"""

from __future__ import annotations

import argparse
from pathlib import Path

from PIL import Image, ImageDraw, ImageFont

HUD_GREEN = (0x2E, 0xE6, 0x5C)
HUD_DIM = (0x1A, 0x7A, 0x38)
BG = (0, 0, 0)
OUT = Path(__file__).resolve().parent / "out"


def _font(size: int) -> ImageFont.ImageFont:
    # Prefer a monospaced face; fall back to default.
    for name in (
        "/System/Library/Fonts/SFNSMono.ttf",
        "/System/Library/Fonts/Menlo.ttc",
        "/Library/Fonts/Andale Mono.ttf",
        "/System/Library/Fonts/Supplemental/Courier New.ttf",
    ):
        p = Path(name)
        if p.exists():
            try:
                return ImageFont.truetype(str(p), size=size)
            except OSError:
                continue
    return ImageFont.load_default()


def draw_hud(
    time_str: str = "19:23",
    soc: int | None = 68,
    canary: str = "Open BIMA App to connect the HUD3!",
    width: int = 640,
    height: int = 200,
) -> Image.Image:
    img = Image.new("RGB", (width, height), BG)
    d = ImageDraw.Draw(img)
    font_lg = _font(28)
    font_sm = _font(14)
    font_tiny = _font(11)

    labels = []
    if soc is None:
        labels.append(time_str)
    else:
        # v4 style: append onto the clock label (no '%' glyph on device)
        labels.append(f"{time_str} {int(soc)}")
    labels += ["72°", "AUG 25", "★"]

    n = 4
    gap = 16
    diameter = 110
    total = n * diameter + (n - 1) * gap
    x0 = (width - total) // 2
    y0 = 30

    for i, lab in enumerate(labels):
        cx = x0 + i * (diameter + gap) + diameter // 2
        cy = y0 + diameter // 2
        # ring
        d.ellipse(
            [cx - diameter // 2, cy - diameter // 2, cx + diameter // 2, cy + diameter // 2],
            outline=HUD_GREEN,
            width=2,
        )
        # label centered
        bbox = d.textbbox((0, 0), lab, font=font_lg if i == 0 else font_sm)
        tw, th = bbox[2] - bbox[0], bbox[3] - bbox[1]
        d.text((cx - tw // 2, cy - th // 2), lab, fill=HUD_GREEN, font=font_lg if i == 0 else font_sm)

    # battery icon stub next to clock (device shows icon; we keep a bar)
    bx = x0 + diameter - 18
    by = y0 + 8
    d.rectangle([bx, by, bx + 14, by + 8], outline=HUD_DIM)
    d.rectangle([bx + 14, by + 2, bx + 16, by + 6], fill=HUD_DIM)
    if soc is not None:
        fill_w = max(1, int(12 * min(100, soc) / 100))
        d.rectangle([bx + 1, by + 1, bx + 1 + fill_w, by + 7], fill=HUD_GREEN)

    # disconnect canary strip
    d.text((24, height - 36), canary, fill=HUD_DIM, font=font_tiny)
    d.text(
        (24, height - 20),
        "HOST MOCK — not on-device LVGL; layout only",
        fill=(80, 80, 80),
        font=font_tiny,
    )
    return img


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--time", default="19:23")
    ap.add_argument("--soc", type=int, default=68)
    ap.add_argument("--no-soc", action="store_true", help="clock only (stock look)")
    ap.add_argument("--canary", default="Open BIMA App to connect the HUD3!")
    ap.add_argument("--out", type=Path, default=OUT / "hud_preview.png")
    args = ap.parse_args()

    soc = None if args.no_soc else args.soc
    img = draw_hud(time_str=args.time, soc=soc, canary=args.canary)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    img.save(args.out)
    print(f"wrote {args.out} ({img.size[0]}x{img.size[1]})")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
