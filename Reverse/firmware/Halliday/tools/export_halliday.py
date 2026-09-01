#!/usr/bin/env python3
"""Export Halliday ATS3089 AOTA firmware into Reverse/firmware/Halliday/export/."""
from __future__ import annotations

import hashlib
import json
import lzma
import re
import struct
import zlib
from pathlib import Path

HALLIDAY = Path(__file__).resolve().parents[1]
OUT = HALLIDAY / "export"

AOTA_MAGIC = b"AOTA"
ACTIONS_BOOT_MAGIC = b"ACTHHTCA"
ACTIONS_LZMA_MAGIC = b"LZMA\x10\x00\x00\x00"
ACTIONS_BOOT_HEADER_SIZE = 40
ACTIONS_LZMA_HEADER_SIZE = 16


def md5(b: bytes) -> str:
    return hashlib.md5(b).hexdigest()


def parse_aota_container(data: bytes, out_dir: Path) -> list[tuple[str, Path, bytes]]:
    out_dir.mkdir(parents=True, exist_ok=True)
    header = data[:512]
    magic, _checksum, _flags, file_count, fat_offset, _data_offset = struct.unpack(
        "<4sIIIHH", header[:20]
    )
    if magic != AOTA_MAGIC:
        raise ValueError(f"expected AOTA, got {magic!r}")

    build_ver = header[0x40:0x60].split(b"\x00")[0].decode("ascii", errors="ignore")
    platform_id = header[0x60:0x7E].split(b"\x00")[0].decode("ascii", errors="ignore")
    (out_dir / "version.txt").write_text(
        f"build_ver={build_ver}\nplatform_id={platform_id}\n", encoding="utf-8"
    )

    extracted: list[tuple[str, Path, bytes]] = []
    pos = fat_offset
    for _ in range(file_count):
        fat_entry = data[pos : pos + 32]
        if len(fat_entry) < 32:
            break
        name_b, file_offset, file_size, _, file_crc = struct.unpack("<16sIIII", fat_entry)
        filename = name_b.split(b"\x00")[0].decode("ascii")
        payload = data[file_offset : file_offset + file_size]
        actual_crc = zlib.crc32(payload) & 0xFFFFFFFF
        out_path = out_dir / filename
        out_path.write_bytes(payload)
        extracted.append((filename, out_path, payload))
        meta = {
            "name": filename,
            "offset": file_offset,
            "size": file_size,
            "crc32": f"{file_crc:08x}",
            "crc_ok": actual_crc == file_crc,
        }
        (out_dir / f"{filename}.meta.json").write_text(
            json.dumps(meta, indent=2) + "\n", encoding="utf-8"
        )
        pos += 32
    return extracted


def parse_temp_boot_image(temp: bytes, out_dir: Path) -> bytes:
    out_dir.mkdir(parents=True, exist_ok=True)
    if temp[:8] != ACTIONS_BOOT_MAGIC:
        raise ValueError("TEMP.bin missing ACTHHTCA header")

    (out_dir / "actions_boot_header.bin").write_bytes(temp[:ACTIONS_BOOT_HEADER_SIZE])
    lzma_offset = temp.find(ACTIONS_LZMA_MAGIC)
    if lzma_offset < 0:
        raise ValueError("LZMA chunks not found in TEMP.bin")

    boot_stub = temp[ACTIONS_BOOT_HEADER_SIZE:lzma_offset]
    (out_dir / "boot_stub.bin").write_bytes(boot_stub)

    offset = lzma_offset
    chunks: list[bytes] = []
    idx = 0
    while offset + ACTIONS_LZMA_HEADER_SIZE <= len(temp):
        if temp[offset : offset + 8] != ACTIONS_LZMA_MAGIC:
            break
        _magic, _hdr_sz, comp_sz, uncomp_sz = struct.unpack(
            "<4sIII", temp[offset : offset + ACTIONS_LZMA_HEADER_SIZE]
        )
        xz_start = offset + ACTIONS_LZMA_HEADER_SIZE
        xz_end = xz_start + comp_sz
        unpacked = lzma.decompress(temp[xz_start:xz_end])
        if len(unpacked) != uncomp_sz:
            raise ValueError(f"chunk {idx}: expected {uncomp_sz} got {len(unpacked)}")
        chunks.append(unpacked)
        offset = xz_end
        idx += 1

    inner = b"".join(chunks)
    (out_dir / "inner_aota_container.bin").write_bytes(inner)
    return inner


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


def categorize_strings(ascii_path: Path, dest_dir: Path) -> dict[str, int]:
    dest_dir.mkdir(parents=True, exist_ok=True)
    buckets: dict[str, list[str]] = {
        "source_files.txt": [],
        "ble_bluetooth.txt": [],
        "ota.txt": [],
        "lvgl_ui.txt": [],
        "halliday.txt": [],
        "zephyr.txt": [],
        "factory.txt": [],
        "paths_nand.txt": [],
        "audio_display.txt": [],
        "power_battery.txt": [],
        "sensors_health.txt": [],
    }
    rules = [
        ("source_files.txt", re.compile(r"WEST_TOPDIR/|\.c$|\.cpp$")),
        ("ble_bluetooth.txt", re.compile(r"ble|bluetooth|BT_|bt_|SPP|ANCS|AMS|HFP", re.I)),
        ("ota.txt", re.compile(r"ota|AOTA|upgrade|recovery", re.I)),
        ("lvgl_ui.txt", re.compile(r"lvgl|lv_|view_|launcher|display|widget", re.I)),
        ("halliday.txt", re.compile(r"halliday|homebuddy|xs_app|xs_", re.I)),
        ("zephyr.txt", re.compile(r"zephyr|WEST_TOPDIR/zephyr", re.I)),
        ("factory.txt", re.compile(r"factory|fac_|shell", re.I)),
        ("paths_nand.txt", re.compile(r"/NAND:|/SD:")),
        ("audio_display.txt", re.compile(r"audio|a2dp|smartpa|libdisplay|freetype|font", re.I)),
        ("power_battery.txt", re.compile(r"battery|charger|fuel|soc|wakelock|pm_", re.I)),
        ("sensors_health.txt", re.compile(r"spo2|blood|health|sensor|imu|hr_", re.I)),
    ]
    counts: dict[str, int] = {}
    for line in ascii_path.read_text(encoding="utf-8", errors="replace").splitlines():
        if "\t" not in line:
            continue
        _off, text = line.split("\t", 1)
        for name, pat in rules:
            if pat.search(text):
                buckets[name].append(line)
    for name, lines in buckets.items():
        p = dest_dir / name
        p.write_text("\n".join(sorted(set(lines))) + ("\n" if lines else ""), encoding="utf-8")
        counts[name] = len(lines)
    return counts


def export_variant(ota_path: Path, variant: str) -> dict:
    data = ota_path.read_bytes()
    variant_out = OUT / variant
    layer1 = variant_out / "layer1"
    files = parse_aota_container(data, layer1)

    temp_payload = next(p for n, _p, p in [(f[0], f[1], f[2]) for f in files] if n.lower() == "temp.bin")
    layer2 = variant_out / "layer2"
    inner = parse_temp_boot_image(temp_payload, layer2)
    layer3 = variant_out / "layer3"
    inner_files = parse_aota_container(inner, layer3)

    app_bin = layer3 / "app.bin"
    strings_dir = variant_out / "strings"
    n_ascii = dump_ascii_strings(app_bin.read_bytes(), strings_dir / "app_ascii.txt")
    cat_counts = categorize_strings(strings_dir / "app_ascii.txt", strings_dir / "categorized")

    manifest = {
        "variant": variant,
        "source_ota": str(ota_path.relative_to(HALLIDAY.parent.parent.parent)),
        "md5": md5(data),
        "app_bin_md5": md5(app_bin.read_bytes()),
        "app_bin_size": app_bin.stat().st_size,
        "load_hint": "0x10000000",
        "platform": (layer1 / "version.txt").read_text(encoding="utf-8").strip(),
        "partitions": [f[0] for f in files],
        "inner_partitions": [f[0] for f in inner_files],
        "string_counts": {"ascii": n_ascii, **cat_counts},
    }
    (variant_out / "manifest.json").write_text(
        json.dumps(manifest, indent=2) + "\n", encoding="utf-8"
    )
    return manifest


def write_missing_txt() -> None:
    official_strings = OUT / "official" / "strings" / "app_ascii.txt"
    nand_paths = []
    if official_strings.exists():
        for line in official_strings.read_text(encoding="utf-8", errors="replace").splitlines():
            if "\t" in line:
                _off, s = line.split("\t", 1)
                if s.startswith("/NAND:") or s.startswith("/SD:"):
                    nand_paths.append(s)
    (OUT / "missing.txt").write_text(
        "\n".join(
            [
                "NOT in the OTA zip (live on-device NAND / SDFS):",
                "- Full runtime user data under /NAND:A/ (bt_watch.res, bt_watch.sty, fonts)",
                "- /NAND:C/xs_font.ttf (Halliday font — path string only)",
                "- Compressed res.bin / sdfs_k.bin payloads are in layer1 but not fully parsed as files",
                "- Bootloader / panel firmware outside app.bin",
                "",
                "Function decomp lives in functions/app/ (Ghidra ExportAll on official app.bin).",
                "",
                "Sample NAND path strings from app.bin:",
                *[f"- {p}" for p in sorted(set(nand_paths))[:20]],
                "",
            ]
        ),
        encoding="utf-8",
    )


def main() -> None:
    OUT.mkdir(parents=True, exist_ok=True)
    variants = {
        "official": HALLIDAY / "HallidayOfficialOTA.bin",
        "custom": HALLIDAY / "HomeBuddyHallidayCustomOTA.bin",
    }
    summary = {}
    for name, path in variants.items():
        if not path.exists():
            print(f"skip missing {path}")
            continue
        print(f"exporting {name} from {path.name}")
        summary[name] = export_variant(path, name)

    write_missing_txt()

    func_csv = OUT / "functions" / "app" / "functions.csv"
    func_note = "pending — run ghidra/import_app.sh" if not func_csv.exists() else "ready"

    readme = OUT / "README.md"
    readme.write_text(
        f"""# Halliday ATS3089 firmware export — 1.00_2601211113

Everything recoverable from `HallidayOfficialOTA.bin` / `HomeBuddyHallidayCustomOTA.bin`.
Open this folder in Finder; Ghidra export optional for function decomp.

Root: `Reverse/firmware/Halliday/export/`

## Layout

| Path | What |
|---|---|
| `official/layer3/app.bin` | Main Zephyr app (1,662,592 B) @ load `0x10000000` |
| `official/strings/app_ascii.txt` | ASCII strings (offset + text) |
| `official/strings/categorized/` | BLE, OTA, LVGL, Halliday, Zephyr, factory, audio, power, sensors |
| `custom/` | HomeBuddy-patched variant (same layout) |
| `functions/app/` | Ghidra: `functions.csv`, `decomp/*.c`, `asm/*.s` — **{func_note}** |
| `missing.txt` | What is not in the OTA zip |

## Variants

| Variant | OTA file |
|---|---|
| `official/` | `../HallidayOfficialOTA.bin` |
| `custom/` | `../HomeBuddyHallidayCustomOTA.bin` |

## Container

Outer **AOTA** → `TEMP.bin` (ACTHHTCA + LZMA) → inner AOTA → `app.bin` + `sdfs.bin`

Re-run: `python3 Reverse/firmware/Halliday/tools/export_halliday.py` then `Reverse/firmware/Halliday/ghidra/import_app.sh`
""",
        encoding="utf-8",
    )
    (OUT / "summary.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    print(f"done -> {OUT}")


if __name__ == "__main__":
    main()
