#!/usr/bin/env python3
"""Static M55 FreeRTOS thread inventory from platform_tester.bin strings + pointer scan."""

from __future__ import annotations

import json
import re
import struct
import sys
from dataclasses import dataclass, field
from pathlib import Path

try:
    from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
except ImportError:
    Cs = None  # type: ignore

ROOT = Path(__file__).resolve().parents[4]  # Reverse/
FW_DIR = ROOT / "firmware" / "x_1.0.12.83"
BIN_PATH = FW_DIR / "platform_tester.bin"
OUT_JSON = Path(__file__).resolve().parent / "thread_inventory.json"
GHIDRA_LOG = ROOT / "firmware" / "analysis" / "ghidra_export_m55.txt"
DECOMP_DIR = ROOT / "firmware" / "export" / "1.0.12.83" / "functions" / "m55" / "decomp"

XIP_BASE = 0x2C000000
SRAM_ALIAS = 0x3C000000
SOURCE_WINDOW = 8192  # bytes to search for nearby __FILE__ paths

# Hand-curated entry VAs from prior Ghidra / Capstone work (file offset keyed by name).
KNOWN_ENTRY_VA: dict[str, int] = {
    "jbd4010_display": 0x2C499270,
    "jbd4010_display_thread": 0x2C499270,
    "xrbm_thread": 0x2C489D94,
    "af_thread": 0x2C14D89E,
}

# Log / debug strings — not RTOS object names.
SKIP_EXACT = frozenset(
    {
        "ThreadMode",
        "Thread List",
        "Thread BAD",
        "Thread NONE",
        "Current Thread",
        "APPTHREAD",
        "dump_all_threads",
        "show_threads_usage",
        "show_threads_uasges",
        "show_threads_usage_once",
        "close_threads_usage",
        "close_threads_uasges",
        "close threads usage",
        "dump threads stack",
        "show all threads usage",
        "show status of threads",
        "rtx_show_all_threads_usage",
        "osThreadNew fail",
        "osThreadYield",
        "osThreadSuspend",
        "osThreadResume",
        "osThreadSetPriority",
        "osThreadGetPriority",
        "osGetThreadIntId",
        "logCurrentThreadName",
        "smf_thread_print",
        "!_thread_id",
        "main_thread_tid=%x",
        "smartlife_notification_threads_icon",
        "strlen( pcNameToQuery ) < configMAX_TASK_NAME_LEN",
        "EvrRtxThreadError, thread name:%s, status:%d",
    }
)

THREAD_NAME_RE = re.compile(
    r"^(?:[a-zA-Z][a-zA-Z0-9_]*(?:_thread|_trd)|"
    r"[a-zA-Z][a-zA-Z0-9_]*Thread[a-zA-Z0-9_]*)$"
)
RTOS_OBJECT_RE = re.compile(r"^[a-z][a-z0-9_]{2,48}$")

CREATE_FAIL_RE = re.compile(
    r"(?i)(?:failed to create|can not create thread|create .+ thread (?:fail|failed))"
)
START_CREATE_RE = re.compile(r"(?i)(?:start|create) .+ thread")
SOURCE_PATH_RE = re.compile(r"^\.\./\.\./(?:apps|thirdparty|services|factory|utils|rtos|tests|lcd)/")

CMSIS_ANCHORS = (
    "osThreadNew",
    "osDelay",
    "osMessageQueueNew",
    "osMessageQueueGet",
    "osMessageQueuePut",
    "osSemaphoreAcquire",
    "osSemaphoreRelease",
    "osMutexAcquire",
    "osMutexRelease",
    "osKernelInitialize",
    "osKernelStart",
    "FreeRTOS V10.4.1",
    "../../rtos/freertos/CMSIS/RTOS2/FreeRTOS/Source/cmsis_os2.c",
)

SUBSYSTEM_RULES: list[tuple[str, tuple[str, ...]]] = [
    ("display", ("jbd", "lvgl", "lcd", "panel", "disp", "gpu", "vglite")),
    ("audio", ("audio", "a2dp", "sco", "decode", "af_thread", "mcpp", "smf", "sink_player")),
    ("ble", ("starrynet", "bth", "ble", "bt_", "rpc_rx", "bth_if", "core_bridge", "snif", "spp")),
    ("power", ("xrbm", "pwrs", "power_supply", "battery", "charger", "pmu", "fuel", "cw221")),
    ("touch", ("touch", "stk_touch", "touchpad", "indev")),
    ("factory", ("fac_cmd", "mmi_", "factory")),
    ("shell", ("eshell", "asl", "sensor_eshell", "debug_i2c")),
    ("dsp", ("dsp", "hifi", "m55_dsp", "bth_dsp", "mcpp_srv", "corebridge")),
    ("sensors", ("sar", "stk501", "stk511", "wear", "sensor_mgr", "imu")),
    ("other", ()),
]


@dataclass
class Hit:
    name: str
    file_offset: int
    raw: str
    kind: str  # rtos_name | symbol | log
    source_path: str | None = None
    entry_va: int | None = None
    notes: list[str] = field(default_factory=list)


def read_blob() -> bytes:
    return BIN_PATH.read_bytes()


def cstrings(data: bytes, min_len: int = 4, max_len: int = 120) -> list[tuple[int, str]]:
    out: list[tuple[int, str]] = []
    i, n = 0, len(data)
    while i < n:
        if 32 <= data[i] < 127:
            j = i
            while j < n and 32 <= data[j] < 127:
                j += 1
            if min_len <= j - i <= max_len:
                out.append((i, data[i:j].decode("ascii", errors="replace")))
            i = j
        else:
            i += 1
    return out


def nearest_source_path(strings: list[tuple[int, str]], offset: int) -> str | None:
    best: tuple[int, str] | None = None
    for off, s in strings:
        if not SOURCE_PATH_RE.match(s):
            continue
        dist = abs(off - offset)
        if dist > SOURCE_WINDOW:
            continue
        if best is None or dist < best[0]:
            best = (dist, s)
    return best[1] if best else None


def classify(name: str, source_path: str | None) -> str:
    hay = f"{name} {source_path or ''}".lower()
    for sub, keys in SUBSYSTEM_RULES:
        if sub == "other":
            continue
        if any(k in hay for k in keys):
            return sub
    return "other"


def canonical_name(raw: str, kind: str) -> str:
    s = raw.strip().rstrip(".")
    # Extract RTOS name from log templates.
    m = re.search(r"(?:Failed to Create|Can not create thread)[:\s]*(.+)", s, re.I)
    if m:
        name = m.group(1).strip().rstrip("!")
        if "%" in name or name.startswith("[") or len(name) < 3:
            return ""
        return name.replace(" ", "_")
    m = re.search(r"(?:start|create)\s+(.+?)\s+thread", s, re.I)
    if m:
        name = m.group(1).strip().replace(" ", "_")
        if "%" in name or len(name) < 2:
            return ""
        return name
    if s.endswith(" thread running") or " thread exit" in s:
        return s.split()[0]
    if s.endswith("..."):
        return s[:-3]
    return s


def is_thread_candidate(s: str) -> bool:
    if s in SKIP_EXACT:
        return False
    if CREATE_FAIL_RE.search(s) or START_CREATE_RE.search(s):
        return True
    if "thread start" in s.lower() and "pwrs" in s.lower():
        return True
    if THREAD_NAME_RE.match(s):
        return True
    if RTOS_OBJECT_RE.match(s) and ("thread" in s.lower() or s.endswith("_trd")):
        return True
    # RTOS object names without suffix (jbd4010_display, ota_checker, lvgl_async).
    if RTOS_OBJECT_RE.match(s) and any(
        x in s for x in ("display", "checker", "async", "rpc", "bridge", "mailbox")
    ):
        return False
    return False


def kind_of(raw: str, name: str) -> str:
    if CREATE_FAIL_RE.search(raw) or START_CREATE_RE.search(raw):
        return "log"
    if name.endswith("_thread") or name.endswith("_trd") or "Thread" in name:
        return "symbol"
    return "rtos_name"


def find_u32_refs(data: bytes, value: int) -> list[int]:
    pat = struct.pack("<I", value)
    out, i = [], 0
    while True:
        j = data.find(pat, i)
        if j < 0:
            return out
        out.append(j)
        i = j + 1


def thumb_fn_start(data: bytes, ref_off: int, search_back: int = 1024) -> int | None:
    """Walk back from a literal-pool pointer to a Thumb function prologue."""
    lo = max(0, ref_off - search_back)
    candidates: list[int] = []
    for o in range(ref_off, lo, -2):
        if o + 1 >= len(data):
            continue
        hw = struct.unpack_from("<H", data, o)[0]
        # push {r4,lr} / push {r4-r7,lr} / push.w
        if hw in (0xB510, 0xB570, 0xB530, 0xB5F0, 0xB590):
            candidates.append(o)
        elif (hw & 0xFF00) == 0xE900:  # stmdb sp!, {..,lr}
            candidates.append(o)
        elif hw == 0xB5F8 or hw == 0xB5FE:
            candidates.append(o)
    if not candidates:
        return None
    # Prefer closest prologue before ref that looks aligned.
    for o in candidates:
        va = XIP_BASE + o
        if va & 1:
            continue
        return va
    return XIP_BASE + candidates[0]


def recover_entry_va(data: bytes, name: str, file_offset: int) -> tuple[int | None, str]:
    if name in KNOWN_ENTRY_VA:
        return KNOWN_ENTRY_VA[name], "known_map"
    targets = [
        XIP_BASE + file_offset,
        SRAM_ALIAS + file_offset,
        file_offset,
    ]
    for tv in targets:
        refs = find_u32_refs(data, tv)
        for ref in refs[:8]:
            va = thumb_fn_start(data, ref)
            if va is not None:
                return va, f"literal_pool@0x{ref:X}->{va:#010x}"
    return None, ""


def merge_hits(hits: list[Hit]) -> list[Hit]:
    by_name: dict[str, Hit] = {}
    for h in hits:
        cur = by_name.get(h.name)
        if cur is None:
            by_name[h.name] = h
            continue
        # Prefer symbol/rtos_name over log strings.
        rank = {"rtos_name": 0, "symbol": 1, "log": 2}
        if rank[h.kind] < rank[cur.kind]:
            by_name[h.name] = h
            cur = h
        elif rank[h.kind] > rank[cur.kind]:
            continue
        if cur.source_path is None and h.source_path:
            cur.source_path = h.source_path
        if cur.entry_va is None and h.entry_va:
            cur.entry_va = h.entry_va
        cur.notes.extend(x for x in h.notes if x not in cur.notes)
    return sorted(by_name.values(), key=lambda x: (x.name.lower(), x.file_offset))


def scan_cmsis_anchors(strings: list[tuple[int, str]]) -> dict[str, int]:
    found: dict[str, int] = {}
    for off, s in strings:
        for anchor in CMSIS_ANCHORS:
            if anchor in s and anchor not in found:
                found[anchor] = off
    return found


def build_inventory(data: bytes) -> dict:
    strings = cstrings(data)
    hits: list[Hit] = []

    for off, s in strings:
        if not is_thread_candidate(s):
            continue
        name = canonical_name(s, "x")
        if not name or name in SKIP_EXACT or len(name) < 3:
            continue
        if name.endswith("_mailbox") and kind_of(s, name) == "log":
            continue
        k = kind_of(s, name)
        src = nearest_source_path(strings, off)
        entry_va, va_note = recover_entry_va(data, name, off)
        notes: list[str] = [f"string@{off:#x} kind={k}"]
        if s != name:
            notes.append(f"raw={s!r}")
        if va_note:
            notes.append(va_note)
        hits.append(
            Hit(
                name=name,
                file_offset=off,
                raw=s,
                kind=k,
                source_path=src,
                entry_va=entry_va,
                notes=notes,
            )
        )

    # Ensure high-value RTOS object names even if pattern missed edge cases.
    extra_prefixes = [
        "jbd4010_display",
        "lvgl_async",
        "lvgl_task_handler_thread",
        "ota_checker",
        "eshell_thread",
        "stk_touch_trd_51155",
        "bth_dsp_rx_thread",
        "hal_i2c_sm_next_task",
        "hal_i2c_sm_done_task",
        "xr_trace_task",
        "starrynet_rx_msg_thread",
        "starrynet_tx_msg_thread",
        "pwrs_supply_changed",
    ]
    known_names = {h.name for h in hits}
    for off, s in strings:
        for prefix in extra_prefixes:
            if not (s == prefix or s.startswith(prefix)):
                continue
            if prefix in known_names:
                break
            src = nearest_source_path(strings, off)
            entry_va, va_note = recover_entry_va(data, prefix, off)
            notes = [f"string@{off:#x} kind=rtos_name", "manual_seed"]
            if s != prefix:
                notes.append(f"raw={s!r}")
            if va_note:
                notes.append(va_note)
            hits.append(
                Hit(
                    name=prefix,
                    file_offset=off,
                    raw=s,
                    kind="rtos_name",
                    source_path=src,
                    entry_va=entry_va,
                    notes=notes,
                )
            )
            known_names.add(prefix)
            break

    merged = merge_hits(hits)
    for h in merged:
        if h.entry_va is None:
            h.entry_va, va_note = recover_entry_va(data, h.name, h.file_offset)
            if va_note:
                h.notes.append(va_note)

    anchors = scan_cmsis_anchors(strings)
    kernel_off = anchors.get("FreeRTOS V10.4.1")
    cmsis_off = anchors.get("../../rtos/freertos/CMSIS/RTOS2/FreeRTOS/Source/cmsis_os2.c")

    entries = []
    for h in merged:
        sub = classify(h.name, h.source_path)
        entries.append(
            {
                "name": h.name,
                "subsystem": sub,
                "file_offset": h.file_offset,
                "source_path": h.source_path,
                "entry_va": f"{h.entry_va:#010x}" if h.entry_va else None,
                "notes": "; ".join(h.notes),
            }
        )

    return {
        "kernel": "FreeRTOS 10.4.1",
        "image": "platform_tester.bin",
        "xip_base": f"{XIP_BASE:#010x}",
        "cmsis_os2_path_offset": f"{cmsis_off:#x}" if cmsis_off is not None else None,
        "freertos_version_offset": f"{kernel_off:#x}" if kernel_off is not None else None,
        "cmsis_anchors": {k: f"{v:#x}" for k, v in sorted(anchors.items())},
        "entry_count": len(entries),
        "entries": entries,
    }


def main() -> int:
    if not BIN_PATH.is_file():
        print(f"Missing firmware: {BIN_PATH}", file=sys.stderr)
        return 1
    data = read_blob()
    inv = build_inventory(data)
    OUT_JSON.write_text(json.dumps(inv, indent=2) + "\n")
    print(f"Wrote {OUT_JSON} ({inv['entry_count']} entries)")
    subs = sorted({e["subsystem"] for e in inv["entries"]})
    print("Subsystems:", ", ".join(subs))
    with_va = [e for e in inv["entries"] if e["entry_va"]]
    print(f"Entry VAs recovered: {len(with_va)}")
    for e in with_va[:20]:
        print(f"  {e['name']}: {e['entry_va']}")
    if inv["entry_count"] < 30:
        print("WARNING: fewer than 30 entries", file=sys.stderr)
        return 2
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
