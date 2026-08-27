#!/usr/bin/env python3
"""Carve and inventory the BEST1600 sensor-hub RTX5 sub-image from platform_tester.bin."""

from __future__ import annotations

import argparse
import json
import re
import struct
from dataclasses import dataclass, field
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]  # Reverse/firmware
DEFAULT_BIN = ROOT / "x_1.0.12.83/platform_tester.bin"
OUT_DIR = Path(__file__).resolve().parent
OUT_BIN = OUT_DIR / "sensor_hub.bin"
OUT_JSON = OUT_DIR / "sensor_hub_inventory.json"

FLASH_SIZE_DEFAULT = 0x100_000
HUB_FLASH_BASE = 0x3400_0000

OTA_HDR = b"\xff\xff\xff\xff\x00\x00\x04\x00"
BANNERS = (
    b"CHIP_SUBSYS=sensor_hub",
    b"REV_INFO=422729f-dirty:sensor_hub",
    b"FLASH_BASE=0x34000000",
)
HUB_PATH_MARKERS = (
    b"../../tests/sensor_hub/",
)
HUB_PATH_MARKERS_LOOSE = (
    b"../../tests/sensor_hub/",
    b"../../apps/sensorhub/",
)
RTX_MARKER = b"RTX V5.5.1"

THREAD_SUFFIX_RE = re.compile(
    r"^[a-z][a-z0-9_]*(?:_thread|_trd)$"
)
RTOS_OBJECT_RE = re.compile(
    r"^[A-Za-z0-9_]+(?:"
    r"_mutex|_mtx|_mailbox|_mbox|_queue|_sem|_sema|_timer|_mail"
    r")(?:_[a-z0-9_]+|_id)?$",
    re.I,
)

# Hub-side source file tags → logical module name.
HUB_SOURCE_FILES: dict[str, str] = {
    "accel_gyro_s.cpp": "accel_gyro_s",
    "wear_detection_s.cpp": "wear_detection_s",
    "sensor_hub_core_app.c": "sensor_hub_core_app",
    "sensor_hub_main.c": "sensor_main",
    "snshub_sensor_mgr.cpp": "snshub_sensor_mgr",
}

# RTOS thread names with direct hub build evidence (../../tests/sensor_hub/ paths).
HUB_THREADS_KNOWN = frozenset(
    {
        "sensor_main",
        "sar_thread",
        "stk501xx_thread",
        "stk501xx_cust_thread",
        "core_bridge_tx_thread",
        "core_bridge_rx_thread",
        "idle",
        "systimer",
    }
)

# M55-only thread names (duplicate strings outside hub path context).
M55_ONLY_THREADS = frozenset(
    {
        "sar_thread_51155",
        "sar_thread_51158",
        "touch_trd",
        "stk_touch_trd",
        "jbd_thread",
        "fac_cmd_trd",
    }
)


@dataclass
class CarveResult:
    file_offset: int
    size: int
    confidence: str
    method: str
    notes: list[str] = field(default_factory=list)


@dataclass
class HubFindings:
    carve: CarveResult
    threads: list[dict]
    objects: list[dict]
    ipc_channels: list[dict]
    banners: list[dict]


def read_bin(path: Path) -> bytes:
    return path.read_bytes()


def find_all(data: bytes, needle: bytes) -> list[int]:
    out: list[int] = []
    i = 0
    while True:
        j = data.find(needle, i)
        if j < 0:
            return out
        out.append(j)
        i = j + 1


def cstrings(data: bytes, start: int = 0, end: int | None = None, min_len: int = 4, max_len: int = 80) -> list[tuple[int, str]]:
    if end is None:
        end = len(data)
    out: list[tuple[int, str]] = []
    i = start
    while i < end:
        if 32 <= data[i] < 127:
            j = i
            while j < end and 32 <= data[j] < 127:
                j += 1
            if min_len <= j - i <= max_len:
                out.append((i, data[i:j].decode("ascii")))
            i = j
        else:
            i += 1
    return out


def hub_path_near(data: bytes, off: int, radius: int = 4096) -> bool:
    lo = max(0, off - radius)
    hi = min(len(data), off + radius)
    chunk = data[lo:hi]
    return any(m in chunk for m in HUB_PATH_MARKERS_LOOSE)


def nearest_source_path(data: bytes, off: int, radius: int = 512) -> str | None:
    best: tuple[int, str] | None = None
    for marker in HUB_PATH_MARKERS:
        for path_off in find_all(data, marker):
            if abs(path_off - off) <= radius:
                end = data.find(b"\x00", path_off)
                if end < 0:
                    continue
                path = data[path_off:end].decode("ascii", errors="replace")
                dist = abs(path_off - off)
                if best is None or dist < best[0]:
                    best = (dist, path)
    return best[1] if best else None


def has_hub_source_path(data: bytes, off: int, radius: int = 1024) -> bool:
    return nearest_source_path(data, off, radius) is not None


def parse_flash_size(data: bytes, near: int, radius: int = 8192) -> int:
    lo = max(0, near - radius)
    hi = min(len(data), near + radius)
    for off, s in cstrings(data, lo, hi):
        if s.startswith("FLASH_SIZE="):
            try:
                return int(s.split("=", 1)[1], 16)
            except ValueError:
                pass
    return FLASH_SIZE_DEFAULT


def parse_code_size(data: bytes, header_off: int) -> int | None:
    if header_off + 0x18 <= len(data):
        val = struct.unpack_from("<I", data, header_off + 0x14)[0]
        if 0x8000 <= val <= 0x200000:
            return val
    return None


def score_carve_candidate(data: bytes, off: int, size: int) -> tuple[int, list[str]]:
    score = 0
    notes: list[str] = []
    end = min(len(data), off + size)
    region = data[off:end]

    if data.startswith(OTA_HDR, off):
        score += 40
        notes.append("BES 16-byte OTA header (FF FF FF FF 00 00 04 00)")
    if any(b in region for b in BANNERS):
        score += 30
        notes.append("CHIP_SUBSYS=sensor_hub build banner in range")
    if RTX_MARKER in region:
        score += 15
        notes.append("RTX V5.5.1 marker in range")
    hub_paths = sum(region.count(m) for m in HUB_PATH_MARKERS)
    if hub_paths:
        score += min(20, hub_paths * 2)
        notes.append(f"{hub_paths} ../../tests/sensor_hub/ path strings in range")
    if b"sensor_main" in region and b"sensor_hub_main.c" in region:
        score += 10
        notes.append("sensor_main + sensor_hub_main.c")
    if b"xjxr_m552sns" in region and b"xjxr_sns2m55" in region:
        score += 10
        notes.append("both xjxr IPC channel names in range")

    code_size = parse_code_size(data, off)
    if code_size:
        notes.append(f"header +0x14 code-size field = 0x{code_size:X} ({code_size} B)")

    return score, notes


def locate_sensor_hub(data: bytes) -> CarveResult:
    candidates: list[tuple[int, int, int, list[str]]] = []

    # Strategy 1: BES OTA header followed by hub banners within 1 MiB.
    for hdr_off in find_all(data, OTA_HDR):
        if hdr_off == 0:
            continue  # main M55 image
        size = parse_flash_size(data, hdr_off)
        score, notes = score_carve_candidate(data, hdr_off, size)
        if score >= 50:
            candidates.append((score, hdr_off, size, notes))

    # Strategy 2: anchor on CHIP_SUBSYS banner, walk back for OTA header.
    for banner_off in find_all(data, b"CHIP_SUBSYS=sensor_hub"):
        size = parse_flash_size(data, banner_off)
        start = banner_off
        found_hdr = False
        for back in range(0, min(size, banner_off), 4):
            hdr_off = banner_off - back
            if data.startswith(OTA_HDR, hdr_off):
                start = hdr_off
                found_hdr = True
                break
        notes = ["anchored on CHIP_SUBSYS=sensor_hub banner"]
        if found_hdr:
            notes.append(f"walked back 0x{banner_off - start:X} to OTA header @ 0x{start:X}")
        else:
            notes.append("no OTA header found walking back; using banner-advertised FLASH_SIZE upstream")
            start = max(0, banner_off - size // 2)
        score, extra = score_carve_candidate(data, start, size)
        notes.extend(extra)
        candidates.append((score, start, size, notes))

    # Strategy 3: first RTX V5.5.1 block co-located with sensor_hub paths (not M55 main RTX @ ~0x427208).
    for rtx_off in find_all(data, RTX_MARKER):
        if not hub_path_near(data, rtx_off, 0x8000):
            continue
        size = FLASH_SIZE_DEFAULT
        start = max(0, rtx_off - 0x20000)
        # snap to preceding OTA header if any
        for back in range(0, 0x30000, 4):
            hdr_off = start - back if start >= back else 0
            if data.startswith(OTA_HDR, hdr_off):
                start = hdr_off
                break
        score, notes = score_carve_candidate(data, start, size)
        notes.insert(0, f"RTX V5.5.1 @ 0x{rtx_off:X} with sensor_hub paths nearby")
        candidates.append((score, start, size, notes))

    if not candidates:
        raise RuntimeError("could not locate sensor hub sub-image")

    candidates.sort(key=lambda x: (-x[0], x[1]))
    best_score, off, size, notes = candidates[0]

    if best_score >= 80:
        confidence = "high"
    elif best_score >= 60:
        confidence = "medium"
    else:
        confidence = "low"

    if off + size > len(data):
        notes.append(
            f"WARNING: carve end 0x{off + size:X} exceeds parent size 0x{len(data):X}; truncating"
        )
        size = len(data) - off
        confidence = "low" if confidence == "high" else confidence

    method = "bes_ota_header+hub_banner" if data.startswith(OTA_HDR, off) else "hub_banner/rtx_anchor"
    return CarveResult(
        file_offset=off,
        size=size,
        confidence=confidence,
        method=method,
        notes=notes,
    )


def classify_thread_role(name: str, source: str | None) -> str:
    if name == "sensor_main":
        return "hub entry / sensor_hub_main.c"
    if name.startswith("sar"):
        return "STK5115 capacitive SAR (temple touch proxy on hub)"
    if "501xx" in name:
        return "STK501xx wear/proximity SAR"
    if name.startswith("core_bridge"):
        return "M55↔hub core bridge IPC pump"
    if name in ("idle", "systimer"):
        return "RTX5 kernel housekeeping"
    if name in ("accel_gyro_s", "snshub_sensor_mgr"):
        return "6-axis IMU aggregator (hub-side)"
    if name in ("wear_detection_s",):
        return "wear FSM (hub-side)"
    if source and "accel_gyro" in source:
        return "6-axis IMU aggregator (hub-side)"
    if source and "wear_detection" in source:
        return "wear FSM (hub-side)"
    return "sensor hub worker"


def extract_threads(data: bytes, carve: CarveResult) -> list[dict]:
    start, end = carve.file_offset, carve.file_offset + carve.size
    region_strings = cstrings(data, start, end)
    seen: set[str] = set()
    threads: list[dict] = []

    def add_thread(off: int, name: str, source: str, evidence: str, in_carve: bool) -> None:
        if name in M55_ONLY_THREADS:
            return
        if name in seen:
            return
        if not (THREAD_SUFFIX_RE.match(name) or name == "sensor_main"):
            return
        if name not in HUB_THREADS_KNOWN and not has_hub_source_path(data, off, 1024):
            return
        seen.add(name)
        threads.append(
            {
                "name": name,
                "type": "thread",
                "kernel": "RTX5",
                "file_offset": off,
                "in_carved_image": in_carve,
                "source_path": source,
                "role": classify_thread_role(name, source),
                "evidence": evidence,
            }
        )

    for off, s in region_strings:
        if not (THREAD_SUFFIX_RE.match(s) or s == "sensor_main"):
            continue
        src = nearest_source_path(data, off) or ""
        add_thread(
            off,
            s,
            src,
            f"RTOS thread name string @0x{off:X} inside carved hub image",
            True,
        )

    # Parent binary: hub-tagged strings outside carve (e.g. M55-side copy of IPC names).
    for off, s in cstrings(data):
        if start <= off < end:
            continue
        if not (THREAD_SUFFIX_RE.match(s) or s == "sensor_main"):
            continue
        if not has_hub_source_path(data, off, 1024):
            continue
        add_thread(
            off,
            s,
            nearest_source_path(data, off) or "",
            f"thread name @0x{off:X} near ../../tests/sensor_hub/ path in parent bin",
            False,
        )

    # Hub modules from tagged source file names (full path or basename).
    for off, s in cstrings(data, start, end, max_len=200):
        base = s.rsplit("/", 1)[-1]
        mod_key = base if base in HUB_SOURCE_FILES else s if s in HUB_SOURCE_FILES else None
        if not mod_key:
            continue
        mod = HUB_SOURCE_FILES[mod_key]
        if mod in seen:
            continue
        src = s if s.startswith("../../") else nearest_source_path(data, off) or mod_key
        threads.append(
            {
                "name": mod,
                "type": "module",
                "kernel": "RTX5",
                "file_offset": off,
                "in_carved_image": True,
                "source_path": src,
                "role": classify_thread_role(mod, src),
                "evidence": f"hub source file tag @0x{off:X} ({mod_key})",
            }
        )
        seen.add(mod)

    for off, s in cstrings(data, start, end):
        if s == "mcu2sensor_msg_handler" and s not in seen:
            src = nearest_source_path(data, off) or "sensor_hub_core_app.c"
            threads.append(
                {
                    "name": s,
                    "type": "module",
                    "kernel": "RTX5",
                    "file_offset": off,
                    "in_carved_image": True,
                    "source_path": src,
                    "role": "M55→hub IPC dispatch entry",
                    "evidence": f"symbol @0x{off:X} in sensor_hub_core_app.c bring-up path",
                }
            )
            seen.add(s)

    threads.sort(key=lambda e: (e["name"], e["file_offset"]))
    return threads


def extract_rtos_objects(data: bytes, carve: CarveResult) -> list[dict]:
    start, end = carve.file_offset, carve.file_offset + carve.size
    seen: set[str] = set()
    objects: list[dict] = []

    for off, s in cstrings(data, start, end):
        if not RTOS_OBJECT_RE.match(s):
            continue
        if not has_hub_source_path(data, off, 2048) and s not in {
            "xjxr_ms_mutex",
            "xjxr_sensor_mutex",
            "sar_mailbox",
            "sensor_hub_ping_mcu_timer",
            "app_core_bridge_tx_mutex",
            "app_core_bridge_tx_mailbox",
            "SAR_TIMER",
            "STK501XX_FAR_CHECK_TIMER",
            "STK501XX_TRACE_DATA_TIMER",
            "STK501XX_WEAR_DAEMON_TIMER",
        }:
            continue
        if s in seen:
            continue
        seen.add(s)
        obj_type = "timer" if "_timer" in s else "mutex" if "mutex" in s else "mailbox" if "mail" in s else "other"
        objects.append(
            {
                "name": s,
                "type": obj_type,
                "file_offset": off,
                "evidence": f"named RTX5 object @0x{off:X} in hub region",
            }
        )
    objects.sort(key=lambda e: e["name"])
    return objects


def extract_ipc_channels(data: bytes, carve: CarveResult) -> list[dict]:
    channels = []
    for name, direction, desc in [
        ("xjxr_m552sns", "M55→hub", "MCU sensor command / config channel"),
        ("xjxr_sns2m55", "hub→M55", "sensor samples, wear, IMU events to M55"),
    ]:
        offs = find_all(data, name.encode())
        hub_offs = [o for o in offs if carve.file_offset <= o < carve.file_offset + carve.size]
        channels.append(
            {
                "name": name,
                "direction": direction,
                "description": desc,
                "file_offsets": hub_offs or offs,
                "evidence": "named channel in xjxr_mcu_sensor_communicate.cpp (hub and M55 copies)",
            }
        )
    return channels


def extract_banners(data: bytes, carve: CarveResult) -> list[dict]:
    keys = [
        "CHIP=best1600",
        "CHIP_SUBSYS=sensor_hub",
        "KERNEL=RTX5",
        "FLASH_BASE=0x34000000",
        "FLASH_SIZE=0x100000",
        "REV_INFO=422729f-dirty:sensor_hub",
    ]
    out = []
    start, end = carve.file_offset, carve.file_offset + carve.size
    for key in keys:
        for off, s in cstrings(data, start, end):
            if s == key or s.startswith(key + "=") or s.startswith(key):
                out.append({"key": key, "value": s, "file_offset": off})
                break
    return out


def analyze(data: bytes) -> HubFindings:
    carve = locate_sensor_hub(data)
    return HubFindings(
        carve=carve,
        threads=extract_threads(data, carve),
        objects=extract_rtos_objects(data, carve),
        ipc_channels=extract_ipc_channels(data, carve),
        banners=extract_banners(data, carve),
    )


def write_outputs(data: bytes, findings: HubFindings, bin_path: Path, json_path: Path) -> None:
    carve = findings.carve
    blob = data[carve.file_offset : carve.file_offset + carve.size]
    bin_path.write_bytes(blob)

    thread_entries = [t for t in findings.threads if t.get("type") == "thread"]
    payload = {
        "kernel": "RTX5",
        "firmware": str(DEFAULT_BIN.resolve()),
        "firmware_version": "1.0.12.83",
        "carve": {
            "file_offset": carve.file_offset,
            "file_offset_hex": f"0x{carve.file_offset:X}",
            "size": carve.size,
            "size_hex": f"0x{carve.size:X}",
            "flash_base": HUB_FLASH_BASE,
            "confidence": carve.confidence,
            "method": carve.method,
            "notes": carve.notes,
        },
        "banners": findings.banners,
        "ipc_channels": findings.ipc_channels,
        "thread_count": len(thread_entries),
        "entries": findings.threads,
        "rtos_objects": findings.objects,
    }
    json_path.write_text(json.dumps(payload, indent=2) + "\n")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--bin", type=Path, default=DEFAULT_BIN, help="platform_tester.bin path")
    ap.add_argument("--out-bin", type=Path, default=OUT_BIN)
    ap.add_argument("--out-json", type=Path, default=OUT_JSON)
    args = ap.parse_args()

    data = read_bin(args.bin)
    findings = analyze(data)
    write_outputs(data, findings, args.out_bin, args.out_json)

    c = findings.carve
    tc = sum(1 for t in findings.threads if t.get("type") == "thread")
    print(
        f"carve offset=0x{c.file_offset:X} size=0x{c.size:X} ({c.size} B) "
        f"confidence={c.confidence} threads={tc} objects={len(findings.objects)}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
