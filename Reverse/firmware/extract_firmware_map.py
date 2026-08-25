#!/usr/bin/env python3
"""Carve every recoverable asset from Star Air OTA bins and write a catalog."""

from __future__ import annotations

import hashlib
import json
import re
import struct
from collections import defaultdict
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parent
BINS = {
    "1.0.7.83": ROOT / "x_1.0.7.83/platform_tester.bin",
    "1.0.11.53": ROOT / "x_1.0.11.53/platform_tester.bin",
    "1.0.12.83": ROOT / "x_1.0.12.83/platform_tester.bin",
}
BTH = {
    k: ROOT / f"x_{k}/best1600_watch_bth.bin" for k in BINS
}


def md5(b: bytes) -> str:
    return hashlib.md5(b).hexdigest()


def findall(data: bytes, needle: bytes) -> list[int]:
    out, i = [], 0
    while True:
        j = data.find(needle, i)
        if j < 0:
            return out
        out.append(j)
        i = j + 1


def cstrings(data: bytes, min_len=4, max_len=200) -> list[tuple[int, str]]:
    """ASCII C strings."""
    out = []
    i, n = 0, len(data)
    while i < n:
        if 32 <= data[i] < 127:
            j = i
            while j < n and 32 <= data[j] < 127:
                j += 1
            if min_len <= j - i <= max_len:
                out.append((i, data[i:j].decode("ascii")))
            i = j
        else:
            i += 1
    return out


def utf8_strings(data: bytes, start: int, end: int, min_len=4) -> list[tuple[int, str]]:
    """NUL-terminated UTF-8 in a band (language tables)."""
    out = []
    i = start
    while i < end:
        if data[i] == 0:
            i += 1
            continue
        j = i
        while j < end and data[j] != 0:
            j += 1
        raw = data[i:j]
        if min_len <= len(raw) <= 240:
            try:
                s = raw.decode("utf-8")
            except UnicodeDecodeError:
                i = j + 1
                continue
            if any(ord(c) >= 0x80 or (c.isprintable() and c != " ") for c in s):
                if all(c == "\x00" or c.isprintable() or c in "\n\t" for c in s):
                    out.append((i, s))
        i = j + 1
    return out


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


def gif_preview(blob: bytes, dest: Path) -> None:
    try:
        im = Image.open(__import__("io").BytesIO(blob))
        im.seek(0)
        im.convert("RGBA").save(dest)
    except Exception:
        pass


def categorize(s: str) -> str | None:
    sl = s.lower()
    if s.startswith("../../") or s.endswith(".c") or s.endswith(".cpp") or s.endswith(".h"):
        return "source"
    if sl.startswith("audio/") and sl.endswith(".aac"):
        return "audio"
    if s.startswith("FONT_") or "lv_font" in sl or s.startswith("B:lv_font"):
        return "font"
    if s.startswith("img_") or sl.endswith(".gif"):
        return "image_name"
    if sl.startswith("get_") or sl.startswith("set_") or sl.startswith("notify_") or sl.startswith("do_"):
        if " " not in s and len(s) < 60:
            return "ble_or_api"
    if s.endswith("View") or s.endswith("Page") or s.endswith("Model") or s.endswith("View.cpp"):
        return "ui"
    if "eshell" in sl or s.startswith("mmi_") or s in {
        "en_usb", "set_sn", "get_sn", "xmodem", "show_pic",
    }:
        return "factory"
    if "littlefs" in sl or s.startswith("B:"):
        return "fs"
    return None


FACTORY_HINTS = (
    "set_sn", "get_sn", "set_bsn", "get_bsn", "set_bt_name", "get_bt_name",
    "set_bt_mac", "get_bt_mac", "set_bt_discover", "get_default_bt_name",
    "get_version", "soc_info", "build_date", "flash_info", "get_board_id",
    "sys_reset", "goto_sleep", "bth_goto_sleep", "set_gpio", "get_sysfreq",
    "set_sysfreq", "close_eshell", "en_usb", "check_tp", "get_tp_status",
    "set_tp_sensitivity", "set_disp_bri", "get_disp_bri", "get_jbd_brightness",
    "show_pic", "exit_show_pic", "set_always_on", "panel_id", "panel_check",
    "panel_bri_cali", "set_lcd_clk", "check_esd", "audio_player", "audio_loopback",
    "audio_pdm_loopback", "audio_info", "pa_cali", "set_audio_vol", "set_mic",
    "get_mic", "check_charger", "charger_status", "charger_ship_mode",
    "charger_enable", "charger_dump", "check_coulomb_l", "check_coulomb_r",
    "battery_info", "set_battery", "get_battery", "charge_threshold",
    "sensor_self_test", "sensor_info", "sensor_cali", "get_sensor_data",
    "stop_sensor_data", "enable_sensor", "disable_sensor", "sensor_loglevel",
    "sensor_debug_switch", "mmi_help", "mmi_run", "mmi_run_item",
    "mmi_result_clear", "exit_mmi", "switch_page", "md", "mw", "xmodem",
    "debug_i2c", "dump_all_threads",
)


def packed_blob(data: bytes, start: int, end: int) -> list[str]:
    items = []
    i = start
    while i < end:
        if data[i] == 0:
            i += 1
            continue
        j = i
        while j < end and data[j] != 0:
            j += 1
        raw = data[i:j]
        if 3 <= len(raw) <= 80 and all(32 <= c < 127 for c in raw):
            items.append(raw.decode("ascii"))
        i = j + 1
    return items


def extract_one(ver: str, path: Path) -> dict:
    data = path.read_bytes()
    out = ROOT / "extracted_assets" / ver
    (out / "gifs").mkdir(parents=True, exist_ok=True)
    (out / "gifs/previews").mkdir(exist_ok=True)
    (out / "i18n").mkdir(exist_ok=True)
    (out / "strings").mkdir(exist_ok=True)
    (out / "bth").mkdir(exist_ok=True)

    catalog: dict = {
        "version": ver,
        "m55_size": len(data),
        "m55_md5": md5(data),
        "gifs": [],
        "audio_paths": [],
        "fonts_in_bin": [],
        "on_device": [],
        "ble_actions": [],
        "factory_cmds": [],
        "ui_names": [],
        "image_names": [],
        "source_files": [],
        "missing_from_ota": [],
    }

    # --- GIFs ---
    for i, off in enumerate(findall(data, b"GIF8")):
        parsed = parse_gif(data, off)
        if not parsed:
            continue
        w, h, sz = parsed
        blob = data[off : off + sz]
        name = f"gif_{i:02d}_{w}x{h}_off{off:x}.gif"
        (out / "gifs" / name).write_bytes(blob)
        gif_preview(blob, out / "gifs/previews" / name.replace(".gif", "_f0.png"))
        catalog["gifs"].append({
            "file": f"gifs/{name}", "w": w, "h": h,
            "off": f"0x{off:x}", "size": sz, "md5": md5(blob),
        })

    # --- strings ---
    strs = cstrings(data)
    cats: dict[str, list] = defaultdict(list)
    audio, fonts, images, ui, src = [], [], [], [], []
    ble, factory, fs = [], [], []
    for off, s in strs:
        cat = categorize(s)
        if cat == "audio":
            audio.append({"off": f"0x{off:x}", "path": s})
        elif cat == "font":
            fonts.append({"off": f"0x{off:x}", "name": s})
        elif cat == "image_name":
            images.append({"off": f"0x{off:x}", "name": s})
        elif cat == "ui":
            ui.append({"off": f"0x{off:x}", "name": s})
        elif cat == "source":
            src.append(s.split("/")[-1] if "/" in s else s)
        elif cat == "ble_or_api":
            ble.append(s)
        elif cat == "factory":
            factory.append(s)
        elif cat == "fs":
            fs.append({"off": f"0x{off:x}", "s": s})

    # factory names present as exact tokens
    present_fac = []
    all_set = {s for _, s in strs}
    for cmd in FACTORY_HINTS:
        if cmd in all_set:
            present_fac.append(cmd)

    # packed BLE handleSystemMsg blob (1.0.12 @ 0x194bcc)
    ble_packed = []
    marker = data.find(b"handleSystemMsg no handler")
    if marker > 0x200:
        ble_packed = packed_blob(data, marker - 0x400, marker)

    catalog["audio_paths"] = audio
    catalog["fonts_in_bin"] = fonts
    catalog["image_names"] = images
    catalog["ui_names"] = sorted({x["name"] for x in ui})
    catalog["source_files"] = sorted(set(src))
    catalog["ble_actions"] = sorted(set(ble_packed or ble))
    catalog["factory_cmds"] = present_fac
    catalog["fs"] = fs

    catalog["on_device"] = [
        {
            "where": "LittleFS B:",
            "path": "B:lv_font_air_full_cn_20_bpp1.bin",
            "note": "Full CJK face. Loaded by lv_font_air_mgr_load_all. Not in OTA zip.",
        },
        *[
            {
                "where": "LittleFS (audio/)",
                "path": a["path"],
                "note": "UI / wake-word AAC. Path compiled in; payload not in OTA.",
            }
            for a in audio
        ],
    ]
    catalog["missing_from_ota"] = [
        "B:lv_font_air_full_cn_20_bpp1.bin",
        *[a["path"] for a in audio],
        "user_feed_back.log (ASL flash)",
        "LVGL preferences (nv)",
    ]

    # --- i18n ---
    # language factory lives ~0x400000 on 1.0.12; search the filename then dump a window
    lang_off = data.find(b"lv_language_factory.c")
    ui_en = []
    ui_cjk = []
    if lang_off >= 0:
        band_lo = max(0, lang_off - 0x2000)
        band_hi = min(len(data), lang_off + 0x28000)
        for off, s in utf8_strings(data, band_lo, band_hi, min_len=2):
            if any("\u4e00" <= c <= "\u9fff" for c in s):
                ui_cjk.append({"off": f"0x{off:x}", "text": s})
            elif any(c.isalpha() for c in s) and len(s) >= 4:
                ui_en.append({"off": f"0x{off:x}", "text": s})
    (out / "i18n" / "en.txt").write_text(
        "\n".join(f"{e['off']}\t{e['text']}" for e in ui_en) + "\n", encoding="utf-8"
    )
    (out / "i18n" / "zh.txt").write_text(
        "\n".join(f"{e['off']}\t{e['text']}" for e in ui_cjk) + "\n", encoding="utf-8"
    )
    catalog["i18n"] = {"en": len(ui_en), "zh": len(ui_cjk), "lang_factory_off": hex(lang_off) if lang_off >= 0 else None}

    # --- write string lists ---
    def dump_lines(name: str, rows: list[str]) -> None:
        (out / "strings" / name).write_text("\n".join(rows) + "\n", encoding="utf-8")

    dump_lines("audio_paths.txt", [a["path"] for a in audio])
    dump_lines("ble_actions.txt", catalog["ble_actions"])
    dump_lines("factory_cmds.txt", catalog["factory_cmds"])
    dump_lines("ui_names.txt", catalog["ui_names"])
    dump_lines("image_names.txt", [x["name"] for x in images])
    dump_lines("source_files.txt", catalog["source_files"])
    dump_lines("font_names.txt", [x["name"] for x in fonts])
    dump_lines("on_device.txt", catalog["missing_from_ota"])

    # pages / views from source names
    pages = sorted({s for s in catalog["source_files"] if re.search(r"(View|Page|Model)\.(c|cpp)$", s)})
    dump_lines("pages.txt", pages)
    catalog["pages"] = pages

    # --- BTH ---
    bth_path = BTH.get(ver)
    if bth_path and bth_path.exists():
        bth = bth_path.read_bytes()
        catalog["bth_size"] = len(bth)
        catalog["bth_md5"] = md5(bth)
        bth_s = [s for _, s in cstrings(bth, min_len=6, max_len=120)
                 if not s.startswith("../../") or "factory" in s.lower() or "key" in s.lower()]
        interesting = [s for _, s in cstrings(bth, min_len=8, max_len=100)
                       if any(k in s.lower() for k in (
                           "factory", "engineer", "mmi", "uart", "key", "boot",
                           "dut", "ota", "gatt", "adv", "power"))]
        (out / "bth" / "interesting.txt").write_text("\n".join(interesting) + "\n", encoding="utf-8")
        catalog["bth_interesting"] = interesting[:80]
        catalog["bth_gif"] = bth.find(b"GIF8") >= 0
        catalog["bth_png"] = bth.find(b"\x89PNG") >= 0
    else:
        catalog["bth_size"] = 0

    (out / "map.json").write_text(json.dumps(catalog, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    return catalog


def write_index(catalogs: dict[str, dict]) -> None:
    c = catalogs.get("1.0.12.83") or next(iter(catalogs.values()))
    lines = [
        "# Star Air firmware asset map",
        "",
        "Generated from the CN/intl OTA `platform_tester.bin` (M55) and",
        "`best1600_watch_bth.bin` (M33) images. LittleFS payloads that live on",
        "the glasses are listed but **cannot** be pulled from the zip.",
        "",
        "## What is in the OTA vs only on the glasses",
        "",
        "| Kind | In OTA zip | On device flash | Extracted here |",
        "|---|---|---|---|",
        f"| HUD GIFs | {len(c['gifs'])} | same | `gifs/` |",
        "| LVGL bitmap fonts (3 faces) | yes | yes | `fonts/` |",
        "| Full CJK `B:lv_font_air_full_cn_20_bpp1.bin` | no | LittleFS | — |",
        f"| UI AAC (`audio/*.aac`) | paths only ({len(c['audio_paths'])}) | LittleFS | `strings/audio_paths.txt` |",
        f"| EN UI copy | yes ({c['i18n']['en']}) | yes | `i18n/en.txt` |",
        f"| ZH UI copy | yes ({c['i18n']['zh']}) | yes | `i18n/zh.txt` |",
        f"| BLE `handleSystemMsg` actions | {len(c['ble_actions'])} | yes | `strings/ble_actions.txt` |",
        f"| Factory / eshell cmds | {len(c['factory_cmds'])} | UART/MMI | `strings/factory_cmds.txt` |",
        f"| Pages / Views / Models | {len(c['pages'])} | yes | `strings/pages.txt` |",
        "| Screenshot / log files | protocol only | runtime | ShareAbility |",
        "",
        "## 1.0.12.83 GIFs",
        "",
        "| File | Size | Offset |",
        "|---|---|---|",
    ]
    for g in c["gifs"]:
        lines.append(f"| `{g['file']}` | {g['w']}×{g['h']} | `{g['off']}` |")
    lines += [
        "",
        "## Audio paths (payloads not in zip)",
        "",
    ]
    for a in c["audio_paths"]:
        lines.append(f"- `{a['path']}` (`{a['off']}`)")
    lines += [
        "",
        "## Named factory bitmaps (compiled LVGL, not separately carved)",
        "",
    ]
    for im in c["image_names"]:
        lines.append(f"- `{im['name']}` (`{im['off']}`)")
    lines += [
        "",
        "## BLE actions (packed table before `handleSystemMsg no handler`)",
        "",
    ]
    for a in c["ble_actions"]:
        lines.append(f"- `{a}`")
    lines += [
        "",
        "## Factory commands present as strings",
        "",
    ]
    for a in c["factory_cmds"]:
        lines.append(f"- `{a}`")
    lines += [
        "",
        "## UI pages / views / models (source basenames)",
        "",
    ]
    for p in c["pages"]:
        lines.append(f"- `{p}`")
    lines += [
        "",
        "## On-device only",
        "",
    ]
    for m in c["missing_from_ota"]:
        lines.append(f"- `{m}`")
    lines += [
        "",
        "## Layout of this folder",
        "",
        "```",
        "extracted_assets/<ver>/",
        "  map.json              machine-readable catalog",
        "  gifs/ + gifs/previews",
        "  fonts/                from extract_lvgl_fonts.py",
        "  i18n/en.txt zh.txt",
        "  strings/              ble, factory, audio, pages, sources",
        "  bth/interesting.txt",
        "```",
        "",
        "Re-run: `python3 extract_firmware_map.py` then `python3 extract_lvgl_fonts.py`.",
        "",
    ]
    text = "\n".join(lines)
    (ROOT / "extracted_assets" / "INDEX.md").write_text(text + "\n", encoding="utf-8")
    (ROOT / "extracted_assets" / "1.0.12.83" / "INDEX.md").write_text(text + "\n", encoding="utf-8")


def main():
    catalogs = {}
    for ver, path in BINS.items():
        if not path.exists():
            print("missing", path)
            continue
        print(f"\n=== {ver} ===")
        cat = extract_one(ver, path)
        catalogs[ver] = cat
        print(f"  gifs={len(cat['gifs'])} audio={len(cat['audio_paths'])} "
              f"ble={len(cat['ble_actions'])} fac={len(cat['factory_cmds'])} "
              f"en={cat['i18n']['en']} zh={cat['i18n']['zh']} pages={len(cat['pages'])}")
    write_index(catalogs)
    # slim combined json for the canvas
    slim = {}
    for ver, c in catalogs.items():
        slim[ver] = {
            "m55_size": c["m55_size"],
            "bth_size": c.get("bth_size", 0),
            "gifs": len(c["gifs"]),
            "gif_list": [{"file": g["file"], "w": g["w"], "h": g["h"]} for g in c["gifs"]],
            "audio": [a["path"] for a in c["audio_paths"]],
            "i18n_en": c["i18n"]["en"],
            "i18n_zh": c["i18n"]["zh"],
            "ble": c["ble_actions"],
            "factory": c["factory_cmds"],
            "pages": c["pages"],
            "image_names": [x["name"] for x in c["image_names"]],
            "missing": c["missing_from_ota"],
            "fonts": [x["name"] for x in c["fonts_in_bin"]],
        }
    (ROOT / "extracted_assets" / "map_slim.json").write_text(
        json.dumps(slim, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
    )


if __name__ == "__main__":
    main()
