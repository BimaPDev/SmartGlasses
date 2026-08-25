#!/usr/bin/env python3
"""Rebrand: MYVU → BIMA in Star Air OTA bins.

Same-length ASCII swap (4 bytes). The boot mark is a separate graphic — do
not remap Latin glyph slots (that turned HUD “BIMA” into “BIBA”).
"""

from __future__ import annotations

import hashlib
import json
import shutil
from pathlib import Path

from PIL import Image

from extract_lvgl_fonts import (
    ascii_gid_start,
    detect_row_shift,
    draw_string,
    find_fonts,
    gid_for,
    packed_bytes,
)

ROOT = Path(__file__).resolve().parent
OUT = ROOT / "patched_bima"
OLD, NEW = b"MYVU", b"BIMA"
BINS = {
    "1.0.7.83": ROOT / "x_1.0.7.83",
    "1.0.11.53": ROOT / "x_1.0.11.53",
    "1.0.12.83": ROOT / "x_1.0.12.83",
}

# Theme lv_obj_set_style_radius(obj, 12) — Thumb `movs r1, #12` (0C 21).
# File offsets in 1.0.12.83 platform_tester.bin only. v1 experiment: no HUD change.
RADIUS12_SITES_101283 = (0x505768, 0x509B9E, 0x50C85C)

# LVGL default-theme lv_style_set_radius(..., LV_RADIUS_CIRCLE).
# Thumb `movw r1, #0x7FFF` (47 F6 FF 71) immediately before bl set_style_radius.
# In FUN_2c61d868. Square widgets with this radius draw as circles.
RADIUS_CIRCLE_SITES_101283 = (
    0x61D980,
    0x61E304,
    0x61E3E6,
    0x61E750,
    0x61EDF6,
    0x61F486,
)
MOVW_R1_7FFF = bytes.fromhex("47f6ff71")
MOVW_R1_0 = bytes.fromhex("40f20001")  # movw r1, #0

# Theme lv_style_set_outline_width(style, 1) — the 1px grey "bounding box".
# Thumb `movs r1, #1` (01 21) immediately before bl prop 0x32.
OUTLINE1_SITES_101283 = (0x505758, 0x509B8E, 0x50C838)

# Same-length canary so a successful apply is obvious on the disconnect card.
CANARY_FROM = b"Open BIMA App to connect the phone"
CANARY_TO = b"Open BIMA App to connect the HUD3!"


def apply_radius_zero(
    data: bytes, ver: str
) -> tuple[bytes, list[int], list[int], list[int]]:
    if ver != "1.0.12.83":
        return data, [], [], []
    out = bytearray(data)
    hit12 = []
    hit_circ = []
    hit_ol = []
    for off in RADIUS12_SITES_101283:
        if bytes(out[off : off + 2]) != b"\x0c\x21":
            raise SystemExit(
                f"radius12 site 0x{off:x} is {bytes(out[off:off+2]).hex()}, not 0c21"
            )
        out[off : off + 2] = b"\x00\x21"
        hit12.append(off)
    for off in RADIUS_CIRCLE_SITES_101283:
        if bytes(out[off : off + 4]) != MOVW_R1_7FFF:
            raise SystemExit(
                f"radius-circle site 0x{off:x} is {bytes(out[off:off+4]).hex()}, "
                f"not {MOVW_R1_7FFF.hex()}"
            )
        out[off : off + 4] = MOVW_R1_0
        hit_circ.append(off)
    for off in OUTLINE1_SITES_101283:
        if bytes(out[off : off + 2]) != b"\x01\x21":
            raise SystemExit(
                f"outline site 0x{off:x} is {bytes(out[off:off+2]).hex()}, not 0121"
            )
        out[off : off + 2] = b"\x00\x21"
        hit_ol.append(off)
    n = out.find(CANARY_FROM)
    if n < 0:
        raise SystemExit("canary string not found (expected post-BIMA disconnect copy)")
    if len(CANARY_FROM) != len(CANARY_TO):
        raise SystemExit("canary must be same length or the bin shifts")
    out[n : n + len(CANARY_FROM)] = CANARY_TO
    return bytes(out), hit12, hit_circ, hit_ol


# --- HUD battery percent (1.0.12.83 platform_tester.bin only) -----------------
# v4 (known-good): TimeModel snprintf hook. Append " NN" onto stock HH:MM.
# Do not create LVGL objects. v5/v6 sibling-circle hooks bootlooped.
# Dock factory / Settings / customTimeAndBatteryWidget getter stay stock.
XIP = 0x2C000000
CAVE_OFF = 0x12F2E4
HOOK_TIME_SNPRINTF = 0x5CDE2A  # bl snprintf in FUN_2c5cdde8
STOCK_BL_SNPRINTF = bytes.fromhex("9df011fb")  # bl 0x2c66b450
HOOK_CTOR_GETTER = 0x5D9426  # must stay stock
STOCK_BL_CTOR_GETTER = bytes.fromhex("fdf757fa")
STOCK_BL_SET_TEXT_APPLY = bytes.fromhex("2ff142ff")
STOCK_BW_SET_TEXT_BUILD = bytes.fromhex("2ff14abe")
DOCK_APPLY_BL = 0x5088A8
DOCK_BUILD_BW = 0x508A98
GETTER_VA = 0x2C48A2C4
SNPRINTF_VA = 0x2C66B450


def _thumb_imm16(movt: bool, rd: int, imm: int) -> bytes:
    imm4 = (imm >> 12) & 0xF
    i = (imm >> 11) & 1
    imm3 = (imm >> 8) & 7
    imm8 = imm & 0xFF
    op = 0b101100 if movt else 0b100100
    hw1 = 0xF000 | (i << 10) | (op << 4) | imm4
    hw2 = (imm3 << 12) | (rd << 8) | imm8
    return hw1.to_bytes(2, "little") + hw2.to_bytes(2, "little")


def _thumb_bl_or_bw(src_va: int, dst_va: int, *, bw: bool) -> bytes:
    off = dst_va - (src_va + 4)
    s = (off >> 24) & 1
    i1 = (off >> 23) & 1
    i2 = (off >> 22) & 1
    imm10 = (off >> 12) & 0x3FF
    imm11 = (off >> 1) & 0x7FF
    j1 = 0 if (i1 ^ s) else 1
    j2 = 0 if (i2 ^ s) else 1
    hw1 = 0xF000 | (s << 10) | imm10
    hw2 = (0x9000 if bw else 0xD000) | (j1 << 13) | (j2 << 11) | imm11
    return hw1.to_bytes(2, "little") + hw2.to_bytes(2, "little")


def _thumb_b(src_va: int, dst_va: int) -> bytes:
    off = dst_va - (src_va + 4)
    if off % 2 or not -2048 <= off <= 2046:
        raise SystemExit(f"short b out of range: {off}")
    return (0xE000 | ((off >> 1) & 0x7FF)).to_bytes(2, "little")


def _thumb_bcond(src_va: int, dst_va: int, cond: int) -> bytes:
    off = dst_va - (src_va + 4)
    if off % 2 or not -256 <= off <= 254:
        raise SystemExit(f"bcond out of range: {off}")
    return (0xD000 | (cond << 8) | ((off >> 1) & 0xFF)).to_bytes(2, "little")


def _assemble_pct_veneer(cave_va: int) -> bytes:
    """TimeModel snprintf hook (v4).

    Incoming: r0=buf, r1=15, r2=stock "%02d:%02d", r3=hour, [sp]=min.
    Call stock snprintf for HH:MM, then append " NN" (no '%' — a trailing
    percent is parsed as another format specifier and paints intern tofu).
    """
    body = bytearray()
    fixups: list[tuple[int, str, str]] = []
    labels: dict[str, int] = {}

    def here() -> int:
        return cave_va + len(body)

    def hx(s: str) -> None:
        body.extend(bytes.fromhex(s))

    def lab(name: str) -> None:
        labels[name] = len(body)

    def need(kind: str, name: str) -> None:
        fixups.append((len(body), kind, name))
        body.extend(b"\x00\x00")

    hx("70b5")  # push {r4, r5, r6, lr}
    hx("0446")  # mov r4, r0          buf
    hx("82b0")  # sub sp, #8
    hx("069e")  # ldr r6, [sp, #24]   min
    hx("0096")  # str r6, [sp]
    hx("2046")  # mov r0, r4          r1=15, r2=fmt, r3=hour still live
    body.extend(_thumb_bl_or_bw(here(), SNPRINTF_VA, bw=False))
    hx("02b0")  # add sp, #8
    body.extend(_thumb_bl_or_bw(here(), GETTER_VA, bw=False))
    hx("0546")  # mov r5, r0          soc
    hx("642d")  # cmp r5, #100
    hx("88bf")  # it hi
    hx("6425")  # movhi r5, #100
    hx("2146")  # mov r1, r4
    lab("strlen")
    hx("0a78")  # ldrb r2, [r1]
    hx("002a")  # cmp r2, #0
    need("eq", "found")
    hx("0131")  # adds r1, #1
    need("b", "strlen")
    lab("found")
    hx("2022")  # movs r2, #' '
    hx("0a70")  # strb r2, [r1]
    hx("0131")  # adds r1, #1
    hx("642d")  # cmp r5, #100
    need("ne", "lt100")
    hx("3122")  # movs r2, #'1'
    hx("0a70")  # strb r2, [r1]
    hx("3022")  # movs r2, #'0'
    hx("4a70")  # strb r2, [r1, #1]
    hx("8a70")  # strb r2, [r1, #2]
    hx("0022")  # movs r2, #0
    hx("ca70")  # strb r2, [r1, #3]
    need("b", "done")
    lab("lt100")
    hx("2846")  # mov r0, r5
    hx("0023")  # movs r3, #0         tens
    lab("div10")
    hx("0a28")  # cmp r0, #10
    need("lo", "ones")
    hx("0a38")  # subs r0, #10
    hx("0133")  # adds r3, #1
    need("b", "div10")
    lab("ones")
    hx("002b")  # cmp r3, #0
    need("eq", "write1")
    hx("3033")  # adds r3, #'0'
    hx("0b70")  # strb r3, [r1]
    hx("0131")  # adds r1, #1
    lab("write1")
    hx("3030")  # adds r0, #'0'
    hx("0870")  # strb r0, [r1]
    hx("0131")  # adds r1, #1
    hx("0022")  # movs r2, #0
    hx("0a70")  # strb r2, [r1]
    lab("done")
    hx("70bd")  # pop {r4, r5, r6, pc}

    cond = {"eq": 0, "ne": 1, "lo": 3}
    for off, kind, name in fixups:
        src = cave_va + off
        dst = cave_va + labels[name]
        if kind == "b":
            body[off : off + 2] = _thumb_b(src, dst)
        else:
            body[off : off + 2] = _thumb_bcond(src, dst, cond[kind])
    if len(body) & 1:
        body += b"\x00"
    return bytes(body)



def apply_battery_pct(data: bytes, ver: str) -> tuple[bytes, dict]:
    info: dict = {"enabled": False}
    if ver != "1.0.12.83":
        return data, info
    out = bytearray(data)
    if bytes(out[HOOK_CTOR_GETTER : HOOK_CTOR_GETTER + 4]) != STOCK_BL_CTOR_GETTER:
        raise SystemExit(
            f"ctor getter hook 0x{HOOK_CTOR_GETTER:x} is "
            f"{bytes(out[HOOK_CTOR_GETTER:HOOK_CTOR_GETTER+4]).hex()}, "
            f"not {STOCK_BL_CTOR_GETTER.hex()}"
        )
    if bytes(out[HOOK_TIME_SNPRINTF : HOOK_TIME_SNPRINTF + 4]) != STOCK_BL_SNPRINTF:
        raise SystemExit(
            f"time snprintf 0x{HOOK_TIME_SNPRINTF:x} is not stock "
            f"({bytes(out[HOOK_TIME_SNPRINTF:HOOK_TIME_SNPRINTF+4]).hex()})"
        )
    if bytes(out[DOCK_APPLY_BL : DOCK_APPLY_BL + 4]) != STOCK_BL_SET_TEXT_APPLY:
        raise SystemExit(
            f"dock apply 0x{DOCK_APPLY_BL:x} is not stock "
            f"({bytes(out[DOCK_APPLY_BL:DOCK_APPLY_BL+4]).hex()})"
        )
    if bytes(out[DOCK_BUILD_BW : DOCK_BUILD_BW + 4]) != STOCK_BW_SET_TEXT_BUILD:
        raise SystemExit(
            f"dock build 0x{DOCK_BUILD_BW:x} is not stock "
            f"({bytes(out[DOCK_BUILD_BW:DOCK_BUILD_BW+4]).hex()})"
        )
    cave = _assemble_pct_veneer(XIP + CAVE_OFF)
    if any(out[CAVE_OFF : CAVE_OFF + len(cave)]):
        raise SystemExit(f"cave 0x{CAVE_OFF:x} is not zero for {len(cave)} bytes")
    out[CAVE_OFF : CAVE_OFF + len(cave)] = cave
    out[HOOK_TIME_SNPRINTF : HOOK_TIME_SNPRINTF + 4] = _thumb_bl_or_bw(
        XIP + HOOK_TIME_SNPRINTF, XIP + CAVE_OFF, bw=False
    )
    if bytes(out[HOOK_CTOR_GETTER : HOOK_CTOR_GETTER + 4]) != STOCK_BL_CTOR_GETTER:
        raise SystemExit("ctor getter clobbered")
    if bytes(out[DOCK_APPLY_BL : DOCK_APPLY_BL + 4]) != STOCK_BL_SET_TEXT_APPLY:
        raise SystemExit("dock apply clobbered")
    if bytes(out[DOCK_BUILD_BW : DOCK_BUILD_BW + 4]) != STOCK_BW_SET_TEXT_BUILD:
        raise SystemExit("dock build clobbered")
    info = {
        "enabled": True,
        "cave": f"0x{CAVE_OFF:x}",
        "cave_bytes": cave.hex(),
        "hook_time_snprintf": f"0x{HOOK_TIME_SNPRINTF:x}",
        "getter": hex(GETTER_VA),
        "tile": "HH:MM NN on TimeModel",
    }
    return bytes(out), info


def replace_all(data: bytes) -> tuple[bytes, list[int]]:
    offs = []
    i = 0
    out = bytearray(data)
    while True:
        j = data.find(OLD, i)
        if j < 0:
            break
        out[j : j + 4] = NEW
        offs.append(j)
        i = j + 1
    return bytes(out), offs


def preview_fonts(ver: str, data: bytes, dest: Path) -> None:
    dest.mkdir(parents=True, exist_ok=True)
    fonts = find_fonts(data)
    ranked = []
    for dsc, bpp, glyphs in fonts:
        gs = ascii_gid_start(glyphs)
        m = glyphs[gid_for(ord("M"), gs)]
        ranked.append((m[3], bpp, dsc, glyphs, gs))
    ranked.sort()
    names = ["small", "medium", "large"]
    strips = []
    for i, (_mh, bpp, dsc, glyphs, gs) in enumerate(ranked):
        name = names[i]
        last = glyphs[-1]
        bmsz = last[0] + packed_bytes(last[2], last[3], bpp)
        bm = data[dsc - bmsz : dsc]
        rs = False
        latin = [
            glyphs[gid_for(cp, gs)]
            for cp in range(0x20, 0x7F)
            if gid_for(cp, gs) < len(glyphs)
        ]
        cap_h = max(g[3] for g in latin if g[2])
        myvu_scale = 4 if bpp == 4 else (6 if cap_h < 16 else 5)
        img = draw_string(
            bm, glyphs, bpp, "BIMA", myvu_scale, gid_start=gs, row_shift=rs
        )
        img.save(dest / f"{name}_BIMA.png")
        strips.append(img)
        print(f"    {name} BIMA {img.size[0]}x{img.size[1]}")
    if strips:
        w = max(s.width for s in strips) + 16
        h = sum(s.height + 8 for s in strips) + 8
        sheet = Image.new("RGB", (w, h), (0, 0, 0))
        y = 8
        for s in strips:
            sheet.paste(s, (8, y))
            y += s.height + 8
        sheet.save(dest / "BIMA_all_sizes.png")


def patch_one(ver: str, src_dir: Path) -> dict:
    dest = OUT / ver
    dest.mkdir(parents=True, exist_ok=True)
    rec = {"version": ver, "files": []}
    for name in ("platform_tester.bin", "best1600_watch_bth.bin"):
        src = src_dir / name
        if not src.exists():
            continue
        raw = src.read_bytes()
        patched, offs = replace_all(raw)
        rad12, radc, ol = [], [], []
        batt: dict = {"enabled": False}
        if name == "platform_tester.bin":
            patched, rad12, radc, ol = apply_radius_zero(patched, ver)
            patched, batt = apply_battery_pct(patched, ver)
        outp = dest / name
        outp.write_bytes(patched)
        rec["files"].append(
            {
                "file": name,
                "replacements": len(offs),
                "offsets": [f"0x{o:x}" for o in offs],
                "radius12_to_0": [f"0x{o:x}" for o in rad12],
                "radius7fff_to_0": [f"0x{o:x}" for o in radc],
                "outline1_to_0": [f"0x{o:x}" for o in ol],
                "battery_pct": batt,
                "src_md5": hashlib.md5(raw).hexdigest(),
                "dst_md5": hashlib.md5(patched).hexdigest(),
                "size": len(patched),
            }
        )
        extra = ""
        if rad12:
            extra += f"  radius12→0 x{len(rad12)}"
        if radc:
            extra += f"  radiusCIRCLE→0 x{len(radc)}"
        if ol:
            extra += f"  outline1→0 x{len(ol)}"
        if batt.get("enabled"):
            extra += "  battery%"
        print(f"  {name}: {len(offs)} MYVU→BIMA{extra}  md5 {hashlib.md5(patched).hexdigest()[:12]}…")
        if name == "platform_tester.bin":
            preview_fonts(ver, patched, dest / "fonts")
    return rec


def main() -> None:
    keep = {}
    if OUT.exists():
        for name in ("ota_star-air_1.0.12.83_BIMA.zip", "ota_meta.json"):
            p = OUT / name
            if p.exists():
                keep[name] = p.read_bytes()
        shutil.rmtree(OUT)
    OUT.mkdir(parents=True)
    for name, blob in keep.items():
        (OUT / name).write_bytes(blob)
    report = {"from": OLD.decode(), "to": NEW.decode(), "versions": []}
    for ver, src in BINS.items():
        if not src.exists():
            print("skip missing", src)
            continue
        print(f"\n=== {ver} ===")
        report["versions"].append(patch_one(ver, src))
    (OUT / "manifest.json").write_text(json.dumps(report, indent=2) + "\n")
    (OUT / "README.md").write_text(
        """# BIMA patches

Same-length swap `MYVU` → `BIMA` in the unpacked OTA bins.

The boot mark is **not** those ASCII strings and **not** the compiled Latin
glyphs — remapping M/Y/V/U turned HUD copy into BIBA/ByvuiOS and left splash
unchanged. Do not remap glyph slots.

What changed
- `platform_tester.bin` — UI copy + `displayName`
- 1.0.12.83 only: theme `radius = 12` → `0`, six `LV_RADIUS_CIRCLE`
  (`0x7FFF`) → `0`, and three `outline_width = 1` → `0` (drop the grey box).
  Disconnect canary: `…the HUD3` so a successful apply is visible.
  Idle HUD time string is `"HH:MM NN"` (SOC digits, no `%` glyph) via the
  TimeModel snprintf hook. Dock factory / Settings stay stock.
- `best1600_watch_bth.bin` — `MYVU ble` → `BIMA ble`
- Left alone: `myvu` / `Myvu` (e.g. `handleMyvuLoginStatus`)

Previews: `<ver>/fonts/*_BIMA.png`
"""
    )
    print("\nWrote", OUT)


if __name__ == "__main__":
    main()
