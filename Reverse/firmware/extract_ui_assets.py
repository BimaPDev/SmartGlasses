#!/usr/bin/env python3
"""Carve HUD UI assets from Star Air platform_tester.bin.

Mirrors the audio extract: names compiled into the bin, plus every GIF
payload that actually lives in the OTA image. Named weather/music/navi
icons are LittleFS keys (same story as audio/*.aac).
"""

from __future__ import annotations

import hashlib
import json
import re
import struct
import zipfile
from collections import defaultdict
from io import BytesIO
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parent
VER = "1.0.12.83"
BIN = ROOT / f"x_{VER}/platform_tester.bin"
OUT = ROOT / "extracted_assets" / VER / "ui"
EXPORT = ROOT / "export" / VER / "ui"
RODATA = 0x3C000000

# Packed resource-id blob (fonts, music, weather, navi, ring, …)
RES_LO, RES_HI = 0x3FFDF4, 0x4006C0

# Frame-0 / mid-animation labels for the 12 compiled GIF89a blobs.
GIF_LIKELY = {
    "0x3730b4": "play triangle (music next/play anim)",
    "0x3740f4": "loading / progress ring",
    "0x37f5f4": "music note in circle (AirMusic / cover)",
    "0x387ab4": "pause bars",
    "0x3b6774": "glasses + phone (connect / StarryNet guide)",
    "0x3c7ab4": "target / selected-state ring (starts blank)",
    "0x3d8e74": "diamond reticle / loading_24-class spinner",
    "0x3e05f4": "voice-assistant waveform (wide)",
    "0x3e3e74": "voice-assistant waveform (wide, alt)",
    "0x3eb774": "ellipsis / page dots (WeChat typing or pager)",
    "0x3eeaf4": "voice-assistant waveform (short)",
    "0x3f6234": "voice-assistant waveform (short, alt)",
}


def md5(b: bytes) -> str:
    return hashlib.md5(b).hexdigest()


def parse_gif(data: bytes, off: int) -> tuple[int, int, int] | None:
    mag = data[off : off + 6]
    if mag not in (b"GIF87a", b"GIF89a"):
        return None
    w = int.from_bytes(data[off + 6 : off + 8], "little")
    h = int.from_bytes(data[off + 8 : off + 10], "little")
    if not (4 <= w <= 640 and 4 <= h <= 480):
        return None
    packed = data[off + 10]
    p = off + 13
    if packed & 0x80:
        p += 3 * (2 ** ((packed & 7) + 1))
    n = len(data)
    try:
        while p < n:
            b = data[p]
            if b == 0x3B:
                return w, h, p + 1 - off
            if b == 0x21:
                p += 2
                while p < n:
                    ln = data[p]
                    p += 1
                    if ln == 0:
                        break
                    p += ln
            elif b == 0x2C:
                p += 10
                if p > n:
                    return None
                if data[p - 1] & 0x80:
                    p += 3 * (2 ** ((data[p - 1] & 7) + 1))
                p += 1
                while p < n:
                    ln = data[p]
                    p += 1
                    if ln == 0:
                        break
                    p += ln
            else:
                return None
    except IndexError:
        return None
    return None


def gif_info(blob: bytes) -> dict:
    im = Image.open(BytesIO(blob))
    n = 0
    try:
        while True:
            im.seek(n)
            n += 1
    except EOFError:
        pass
    im.seek(0)
    return {"frames": n, "mode": im.mode, "duration_ms": im.info.get("duration")}


def gif_preview(blob: bytes, dest: Path) -> None:
    im = Image.open(BytesIO(blob))
    im.seek(0)
    im.convert("RGBA").save(dest)


def decode_lv_header(hdr: int) -> tuple[int, int, int]:
    cf = hdr & 0x1F
    w = (hdr >> 10) & 0x7FF
    h = (hdr >> 21) & 0x7FF
    return cf, w, h


def find_gif_dsc(data: bytes, gif_off: int) -> dict | None:
    """lv_img_dsc_t sitting in the 64 bytes before a GIF89a payload."""
    lo = max(0, gif_off - 64)
    for i in range(lo, gif_off - 8, 4):
        hdr, sz, ptr = struct.unpack_from("<III", data, i)
        cf, w, h = decode_lv_header(hdr)
        if cf != 3:  # LV_IMG_CF_RAW_CHROMA_KEYED — how this tree tags GIFs
            continue
        parsed = parse_gif(data, gif_off)
        if not parsed:
            continue
        gw, gh, gsz = parsed
        if w == gw and h == gh and sz == gsz:
            return {
                "desc_off": f"0x{i:x}",
                "cf": cf,
                "data_ptr": f"0x{ptr:x}",
                "data_ptr_file": f"0x{ptr - RODATA:x}" if RODATA <= ptr < RODATA + len(data) else None,
            }
    return None


def packed_cstrings(data: bytes, lo: int, hi: int) -> list[dict]:
    out = []
    i = lo
    while i < hi:
        if data[i] == 0:
            i += 1
            continue
        j = i
        while j < hi and 32 <= data[j] < 127:
            j += 1
        if data[j : j + 1] == b"\x00" and 3 <= j - i <= 80:
            s = data[i:j].decode("ascii")
            if re.fullmatch(r"[A-Za-z][A-Za-z0-9_./-]*", s):
                out.append({"off": f"0x{i:x}", "name": s})
            i = j + 1
            continue
        i += 1
    return out


def page_sources(data: bytes) -> list[str]:
    needle = b"thirdparty/star_air_lvgl/app/Pages/"
    found: set[str] = set()
    i = 0
    while True:
        p = data.find(needle, i)
        if p < 0:
            break
        s = p
        while s > 0 and data[s - 1] in b"./abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_":
            s -= 1
        e = p
        while e < len(data) and 32 <= data[e] < 127:
            e += 1
        raw = data[s:e].decode("ascii", "replace")
        raw = re.sub(r"^[^.]*(?=(\.\./)+)", "", raw)
        if re.search(r"\.(c|cpp|h|hpp)$", raw):
            found.add(raw.replace("//", "/"))
        i = p + 1
    return sorted(found)


def parse_ui_names(path: Path) -> dict:
    lines = [ln.strip() for ln in path.read_text(encoding="utf-8").splitlines() if ln.strip()]
    views, pages, methods, transitions, logs = [], [], [], [], []
    for ln in lines:
        if " -> " in ln:
            left, right = ln.split(" -> ", 1)
            m = re.search(r"([A-Za-z][A-Za-z0-9]*(?:View|Page))\s*$", left)
            src = m.group(1) if m else left.strip()
            transitions.append({"from": src, "to": right.strip(), "raw": ln})
            continue
        if ln.startswith("[") or ln.startswith(";") or ln.startswith("Y,") or ln.startswith("NX,") or ln.startswith("}R,") or ln.startswith("~") or ln.startswith("TS "):
            if ln.startswith("["):
                logs.append(ln)
            elif ln.startswith("~") and ln[1:]:
                views.append(ln[1:])
            elif ln.startswith("TS "):
                views.append(ln[3:] if not ln[3:].endswith("View") else ln)
            continue
        if re.fullmatch(r"[A-Za-z][A-Za-z0-9_]*", ln):
            if ln.endswith("View") or ln.endswith("Model"):
                views.append(ln)
            elif ln.endswith("Page"):
                pages.append(ln)
            elif ln.startswith(("create", "show", "hide", "dele", "init", "refresh", "recover", "release", "rebuild", "generate", "attach", "switch", "handle", "display", "transTo", "setNavi", "change", "turn", "onCreate", "onNext", "onPrevious")):
                methods.append(ln)
            else:
                views.append(ln)
        else:
            logs.append(ln)
    # unique preserve order
    def uniq(xs):
        seen = set()
        out = []
        for x in xs:
            if x not in seen:
                seen.add(x)
                out.append(x)
        return out

    return {
        "views": uniq(views),
        "pages": uniq(pages),
        "methods": uniq(methods),
        "transitions": transitions,
        "logs": logs,
    }


def module_of(src: str) -> str:
    m = re.search(r"/Pages/([^/]+)/", src)
    return m.group(1) if m else "unknown"


def guess_icons_for_view(name: str, icons: list[str]) -> list[str]:
    n = name.lower()
    keys: list[str] = []
    if "music" in n or "audio" in n or "play" in n:
        keys += ["music_", "play_", "playing_", "audio_play", "intlmusic", "next_", "previous_", "puase_"]
    if "weather" in n:
        keys += ["weather_", "launcher_dock_weather"]
    if "navi" in n or "address" in n or "endview" in n:
        keys += ["navi_", "navigation_", "landfront_"]
    if "wechat" in n:
        keys += ["smartlife_wechat", "wechat_"]
    if "phone" in n or "dial" in n or "incoming" in n or "oncall" in n:
        keys += ["phone_", "answer_dots", "cancel_dots"]
    if "ring" in n or "unbind" in n or "guide" in n or "connect" in n or "unbound" in n:
        keys += ["ring_", "unbound", "unbounding", "disconnect_img"]
    if "setting" in n or "mode" in n:
        keys += ["setting_switch"]
    if "assistant" in n or "avatar" in n or "voice" in n:
        keys += ["assistant_", "answer_dots", "fade_rect"]
    if "power" in n or "reboot" in n or "launch" in n:
        keys += ["play_shutdown", "battery_", "charging_"]
    if "todo" in n or "schedule" in n:
        keys += []
    hits = []
    for ic in icons:
        il = ic.lower()
        if any(il.startswith(k) or k.rstrip("_") in il for k in keys):
            hits.append(ic)
    return hits


def main() -> None:
    data = BIN.read_bytes()
    OUT.mkdir(parents=True, exist_ok=True)
    gifs_dir = OUT / "gifs"
    prev_dir = OUT / "gifs" / "previews"
    gifs_dir.mkdir(exist_ok=True)
    prev_dir.mkdir(exist_ok=True)
    # also restore the older gifs/ location used by extract_firmware_map.py
    old_gifs = ROOT / "extracted_assets" / VER / "gifs"
    old_prev = old_gifs / "previews"
    old_gifs.mkdir(parents=True, exist_ok=True)
    old_prev.mkdir(exist_ok=True)

    gifs = []
    idx = 0
    i = 0
    while True:
        p = data.find(b"GIF8", i)
        if p < 0:
            break
        parsed = parse_gif(data, p)
        i = p + 4
        if not parsed:
            continue
        w, h, sz = parsed
        blob = data[p : p + sz]
        info = gif_info(blob)
        dsc = find_gif_dsc(data, p)
        name = f"gif_{idx:02d}_{w}x{h}_off{p:x}.gif"
        (gifs_dir / name).write_bytes(blob)
        (old_gifs / name).write_bytes(blob)
        preview = name.replace(".gif", "_f0.png")
        gif_preview(blob, prev_dir / preview)
        gif_preview(blob, old_prev / preview)
        rec = {
            "file": f"gifs/{name}",
            "w": w,
            "h": h,
            "off": f"0x{p:x}",
            "size": sz,
            "md5": md5(blob),
            "frames": info["frames"],
            "likely": GIF_LIKELY.get(f"0x{p:x}"),
            "lv_img_dsc": dsc,
        }
        gifs.append(rec)
        idx += 1
        i = p + sz

    resources = packed_cstrings(data, RES_LO, RES_HI)
    # drop lv_preference / language helpers — not icons
    skip_pfx = ("lv_preference", "get_language", "switch_language", "init_local", "FONT_")
    icons = [r for r in resources if not r["name"].startswith(skip_pfx)]
    fonts = [r for r in resources if r["name"].startswith("FONT_")]

    sources = page_sources(data)
    by_mod: dict[str, list[str]] = defaultdict(list)
    for s in sources:
        by_mod[module_of(s)].append(s)

    ui_names_path = ROOT / "extracted_assets" / VER / "strings" / "ui_names.txt"
    parsed_names = parse_ui_names(ui_names_path) if ui_names_path.exists() else {
        "views": [], "pages": [], "methods": [], "transitions": [], "logs": []
    }

    icon_names = [x["name"] for x in icons]
    view_rows = []
    for src in sources:
        base = Path(src).name
        stem = re.sub(r"\.(cpp|c|hpp|h)$", "", base)
        if not re.search(r"(View|Page|Model)$", stem):
            continue
        view_rows.append({
            "name": stem,
            "source": src,
            "module": module_of(src),
            "icons": guess_icons_for_view(stem, icon_names),
        })

    # views mentioned in ui_names but without a .cpp path
    known = {v["name"] for v in view_rows}
    for extra in parsed_names["views"] + parsed_names["pages"]:
        if extra in known:
            continue
        view_rows.append({
            "name": extra,
            "source": None,
            "module": None,
            "icons": guess_icons_for_view(extra, icon_names),
        })

    catalog = {
        "version": VER,
        "note": (
            "View/Page names are compiled C++ classes, not raster files. "
            "GIF payloads are in this OTA bin. Named icons (weather_*, music_*, …) "
            "are LittleFS resource keys — same split as audio/*.aac."
        ),
        "gifs": gifs,
        "icon_resources": icons,
        "fonts_named": fonts,
        "ui_names": parsed_names,
        "modules": {k: v for k, v in sorted(by_mod.items())},
        "views": view_rows,
        "missing_from_ota": [
            "Named icons (weather_*/music_*/navi_*/ring_*/…) live on LittleFS, not in the zip",
            "Full CJK font B:lv_font_air_full_cn_20_bpp1.bin",
            "Runtime HUD screenshots (ShareAbility)",
        ],
    }

    (OUT / "catalog.json").write_text(json.dumps(catalog, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    (OUT / "icon_resources.txt").write_text("\n".join(icon_names) + "\n", encoding="utf-8")
    (OUT / "page_sources.txt").write_text("\n".join(sources) + "\n", encoding="utf-8")

    # human index
    lines = [
        f"# Star Air {VER} — HUD UI extract",
        "",
        "Same split as audio: **names in the bin**, **some payloads carved here**,",
        "the rest only on the glasses’ LittleFS.",
        "",
        "## Carved GIFs (in this OTA)",
        "",
        "| File | Size | Frames | Offset | Looks like |",
        "|---|---|---|---|---|",
    ]
    for g in gifs:
        lines.append(
            f"| `{g['file']}` | {g['w']}×{g['h']} | {g['frames']} | `{g['off']}` | {g.get('likely') or ''} |"
        )
    lines += [
        "",
        "Previews: `gifs/previews/*_f0.png`.",
        "",
        "## Named icons (LittleFS keys — not in the zip)",
        "",
    ]
    for ic in icon_names:
        lines.append(f"- `{ic}`")
    lines += [
        "",
        "## Pages / modules (from `__FILE__` strings)",
        "",
    ]
    for mod, files in sorted(by_mod.items()):
        views = [Path(f).stem for f in files if re.search(r"(View|Page)$", Path(f).stem)]
        extra = f" — views: {', '.join(views)}" if views else ""
        lines.append(f"- **{mod}** ({len(files)} sources){extra}")
    lines += [
        "",
        "## Navigation edges (from TRACE strings in `ui_names.txt`)",
        "",
    ]
    for t in parsed_names["transitions"]:
        lines.append(f"- `{t['from']}` → `{t['to']}`")
    lines += [
        "",
        "Re-run: `python3 extract_ui_assets.py`",
        "",
    ]
    (OUT / "README.md").write_text("\n".join(lines), encoding="utf-8")

    # copy into export/
    import shutil

    if EXPORT.exists():
        shutil.rmtree(EXPORT)
    shutil.copytree(OUT, EXPORT)

    zip_path = ROOT / "export" / "starair_ui_extracted.zip"
    with zipfile.ZipFile(zip_path, "w", zipfile.ZIP_DEFLATED) as z:
        for f in sorted(OUT.rglob("*")):
            if f.is_file():
                z.write(f, f"ui/{f.relative_to(OUT)}")

    # restore complete icon list next to the old short one
    (ROOT / "extracted_assets" / VER / "strings" / "icon_resources.txt").write_text(
        "\n".join(icon_names) + "\n", encoding="utf-8"
    )

    print(f"gifs={len(gifs)} icons={len(icons)} sources={len(sources)} views={len(view_rows)}")
    print("out", OUT)
    print("zip", zip_path)


if __name__ == "__main__":
    main()
