#!/usr/bin/env python3
"""Export every recoverable payload from 1.0.12.83 OTA bins into export/."""
from __future__ import annotations

import hashlib
import json
import shutil
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1] / "firmware"
M55 = ROOT / "x_1.0.12.83" / "platform_tester.bin"
BTH = ROOT / "x_1.0.12.83" / "best1600_watch_bth.bin"
OUT = ROOT / "export" / "1.0.12.83"
ASSETS = ROOT / "extracted_assets" / "1.0.12.83"


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


def dump_ascii_strings(data: bytes, dest: Path, min_len: int = 4) -> int:
    dest.parent.mkdir(parents=True, exist_ok=True)
    n = 0
    with dest.open("w", encoding="utf-8", errors="replace") as f:
        i, N = 0, len(data)
        while i < N:
            if 32 <= data[i] < 127:
                j = i
                while j < N and 32 <= data[j] < 127:
                    j += 1
                if j - i >= min_len:
                    f.write(f"0x{i:06x}\t{data[i:j].decode('ascii')}\n")
                    n += 1
                i = j
            else:
                i += 1
    return n


def dump_utf16le(data: bytes, dest: Path, min_chars: int = 4) -> int:
    n = 0
    with dest.open("w", encoding="utf-8", errors="replace") as f:
        i, N = 0, len(data) - 1
        while i < N:
            if data[i] != 0 and data[i + 1] == 0 and 32 <= data[i] < 127:
                chars = []
                j = i
                while j + 1 < N and data[j + 1] == 0 and 32 <= data[j] < 127:
                    chars.append(chr(data[j]))
                    j += 2
                if len(chars) >= min_chars:
                    f.write(f"0x{i:06x}\t{''.join(chars)}\n")
                    n += 1
                i = j
            else:
                i += 1
    return n


def carve_gifs(data: bytes, dest: Path) -> list[dict]:
    dest.mkdir(parents=True, exist_ok=True)
    out = []
    i, idx = 0, 0
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
        name = f"gif_{idx:02d}_{w}x{h}_off{p:x}.gif"
        (dest / name).write_bytes(blob)
        out.append({"file": name, "w": w, "h": h, "off": hex(p), "size": sz, "md5": md5(blob)})
        idx += 1
        i = p + sz
    return out


def png_len(data: bytes, off: int) -> int | None:
    if data[off : off + 8] != b"\x89PNG\r\n\x1a\n":
        return None
    p = off + 8
    n = len(data)
    while p + 12 <= n:
        ln = int.from_bytes(data[p : p + 4], "big")
        typ = data[p + 4 : p + 8]
        p += 12 + ln
        if typ == b"IEND":
            return p - off
        if ln > 8_000_000:
            return None
    return None


def jpeg_len(data: bytes, off: int) -> int | None:
    if data[off : off + 3] != b"\xff\xd8\xff":
        return None
    n = len(data)
    p = off + 2
    while p + 4 <= n:
        if data[p] != 0xFF:
            return None
        marker = data[p + 1]
        if marker == 0xD9:
            return p + 2 - off
        if marker in (0xD8, 0x01) or 0xD0 <= marker <= 0xD7:
            p += 2
            continue
        if p + 4 > n:
            return None
        ln = int.from_bytes(data[p + 2 : p + 4], "big")
        p += 2 + ln
        if p - off > 2_000_000:
            return None
    return None


def scan_media(data: bytes, tag: str, dest: Path) -> dict:
    dest.mkdir(parents=True, exist_ok=True)
    hits: dict[str, list] = {"png": [], "jpeg": [], "gif": [], "wav": [], "ogg": [], "adts_aac": []}

    i = 0
    while True:
        p = data.find(b"\x89PNG\r\n\x1a\n", i)
        if p < 0:
            break
        ln = png_len(data, p)
        i = p + 8
        if ln and 32 < ln < 2_000_000:
            name = f"{tag}_png_off{p:x}.png"
            (dest / name).write_bytes(data[p : p + ln])
            hits["png"].append({"file": name, "off": hex(p), "size": ln})
            i = p + ln

    i = 0
    njpeg = 0
    while njpeg < 40:
        p = data.find(b"\xff\xd8\xff", i)
        if p < 0:
            break
        ln = jpeg_len(data, p)
        i = p + 3
        if ln and 128 < ln < 1_000_000:
            name = f"{tag}_jpg_off{p:x}.jpg"
            (dest / name).write_bytes(data[p : p + ln])
            hits["jpeg"].append({"file": name, "off": hex(p), "size": ln})
            njpeg += 1
            i = p + ln

    i = 0
    while True:
        p = data.find(b"RIFF", i)
        if p < 0:
            break
        i = p + 4
        if p + 12 <= len(data) and data[p + 8 : p + 12] == b"WAVE":
            sz = int.from_bytes(data[p + 4 : p + 8], "little") + 8
            if 64 < sz < 2_000_000 and p + sz <= len(data):
                name = f"{tag}_wav_off{p:x}.wav"
                (dest / name).write_bytes(data[p : p + sz])
                hits["wav"].append({"file": name, "off": hex(p), "size": sz})

    i = 0
    while True:
        p = data.find(b"OggS", i)
        if p < 0:
            break
        i = p + 4
        hits["ogg"].append({"off": hex(p), "note": "header only; not carved"})

    # ADTS: require two consecutive valid frames
    n = len(data)
    i = 0
    aac_n = 0
    while i < n - 14 and aac_n < 30:
        if data[i] == 0xFF and (data[i + 1] & 0xF6) == 0xF0:
            fl = ((data[i + 3] & 3) << 11) | (data[i + 4] << 3) | (data[i + 5] >> 5)
            if 16 <= fl <= 2048 and i + fl + 7 < n:
                j = i + fl
                if data[j] == 0xFF and (data[j + 1] & 0xF6) == 0xF0:
                    # consume a run of frames
                    end = i
                    frames = 0
                    while end + 7 < n and data[end] == 0xFF and (data[end + 1] & 0xF6) == 0xF0:
                        fl2 = ((data[end + 3] & 3) << 11) | (data[end + 4] << 3) | (data[end + 5] >> 5)
                        if not (16 <= fl2 <= 2048) or end + fl2 > n:
                            break
                        end += fl2
                        frames += 1
                        if frames > 400:
                            break
                    if frames >= 3:
                        name = f"{tag}_adts_off{i:x}.aac"
                        (dest / name).write_bytes(data[i:end])
                        hits["adts_aac"].append({"file": name, "off": hex(i), "size": end - i, "frames": frames})
                        aac_n += 1
                        i = end
                        continue
        i += 1
    return hits


def copytree(src: Path, dst: Path) -> None:
    if not src.exists():
        return
    dst.mkdir(parents=True, exist_ok=True)
    for p in src.iterdir():
        t = dst / p.name
        if p.is_dir():
            shutil.copytree(p, t, dirs_exist_ok=True)
        else:
            shutil.copy2(p, t)


def main() -> None:
    OUT.mkdir(parents=True, exist_ok=True)
    m55 = M55.read_bytes()
    bth = BTH.read_bytes()

    strings = OUT / "strings"
    strings.mkdir(exist_ok=True)
    n1 = dump_ascii_strings(m55, strings / "m55_ascii.txt")
    n2 = dump_utf16le(m55, strings / "m55_utf16le.txt")
    n3 = dump_ascii_strings(bth, strings / "bth_ascii.txt")
    n4 = dump_utf16le(bth, strings / "bth_utf16le.txt")
    print(f"strings m55 ascii={n1} utf16={n2}  bth ascii={n3} utf16={n4}")

    gifs = carve_gifs(m55, OUT / "media" / "gifs")
    print(f"gifs {len(gifs)}")

    media = {
        "m55": scan_media(m55, "m55", OUT / "media" / "carved"),
        "bth": scan_media(bth, "bth", OUT / "media" / "carved"),
        "gifs": gifs,
    }
    (OUT / "media" / "scan.json").write_text(json.dumps(media, indent=2) + "\n")
    print("media scan", {k: {a: len(b) for a, b in v.items()} if isinstance(v, dict) and k != "gifs" else len(v) for k, v in media.items()})

    # audio path list
    audio = []
    for line in (strings / "m55_ascii.txt").read_text(encoding="utf-8", errors="replace").splitlines():
        if "\t" in line:
            off, s = line.split("\t", 1)
            if s.startswith("audio/") and s.endswith(".aac"):
                audio.append(f"{off}\t{s}")
    (strings / "audio_paths.txt").write_text("\n".join(audio) + "\n")

    # copy prior i18n / categorized strings / fonts if extractors already ran
    copytree(ASSETS / "i18n", OUT / "i18n")
    copytree(ASSETS / "strings", OUT / "strings" / "categorized")
    copytree(ASSETS / "fonts", OUT / "media" / "fonts")

    (OUT / "missing.txt").write_text(
        "\n".join(
            [
                "NOT in the OTA zip (live on-device LittleFS / NV):",
                "- B:lv_font_air_full_cn_20_bpp1.bin  (full CJK font)",
                *[f"- {a.split(chr(9))[-1]}" for a in audio],
                "- user_feed_back.log, LVGL prefs / device name NV",
                "- bootloader / panel firmware (boot MYVU mark)",
                "",
                "Function decomp lives in functions/m55 and functions/bth (Ghidra ExportAll).",
                "",
            ]
        )
    )
    print("wrote", OUT)


if __name__ == "__main__":
    main()
