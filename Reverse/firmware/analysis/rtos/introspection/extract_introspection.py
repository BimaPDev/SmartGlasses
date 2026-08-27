#!/usr/bin/env python3
"""Extract RTOS introspection strings and eshell command mappings from firmware bins."""

from __future__ import annotations

import json
import re
from dataclasses import dataclass, field
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]  # Reverse/
FW_DIR = ROOT / "firmware" / "x_1.0.12.83"
OUT_DIR = Path(__file__).resolve().parent

IMAGES = {
    "m55": FW_DIR / "platform_tester.bin",
    "bth": FW_DIR / "best1600_watch_bth.bin",
}

# Substrings that mark introspection-related rodata.
INTRO_PATTERNS = [
    r"thread",
    r"rtx_",
    r"Thread",
    r"dump_all",
    r"show_threads",
    r"close_threads",
    r"cpu_usage",
    r"stack_mem",
    r"min_stack",
    r"min-free-stack",
    r"thread_next",
    r"thread_join",
    r"swap_in_time",
    r"Memory stack Stats",
    r"Memory common Stats",
    r"Timers Stats",
    r"rtx_thread_dump",
    r"rtx_show_all",
    r"app_eshell/system/ps\.c",
    r"vTaskList",
    r"StackHighWater",
    r"uxTaskGet",
    r"pxCurrentTCB",
    r"smf_thread_print",
    r"freertos",
    r"FreeRTOS",
]

COMPILED = [re.compile(p, re.I) for p in INTRO_PATTERNS]

# Known eshell command → handler/source mapping (static, from ps.c name blob order).
ESHELL_COMMANDS = [
    {
        "command": "show_threads_uasges",
        "help": "show all threads usage",
        "handler_guess": "ps_show_threads_usage_start",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "Typo preserved in firmware (`uasges`). Starts periodic CPU/stack usage reporting via cpu_usage_timer.",
    },
    {
        "command": "close_threads_uasges",
        "help": None,
        "handler_guess": "ps_show_threads_usage_stop",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "Stops periodic usage timer started by show_threads_uasges.",
    },
    {
        "command": "show_threads_usage_once",
        "help": "show all threads usage",
        "handler_guess": "ps_show_threads_usage_once",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "One-shot thread CPU/stack summary without starting cpu_usage_timer.",
    },
    {
        "command": "show_threads_usage",
        "help": None,
        "handler_guess": "ps_show_threads_usage",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "Alias/variant of periodic usage dump; shares help text with show_threads_usage_once.",
    },
    {
        "command": "close_threads_usage",
        "help": "close threads usage",
        "handler_guess": "ps_close_threads_usage",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "Stops periodic usage reporting.",
    },
    {
        "command": "dump_all_threads",
        "help": "dump threads stack",
        "handler_guess": "ps_dump_all_threads",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "Full RTX thread walk: TCB fields, stack watermarks, optional register frame, memory pool stats, timer stats.",
    },
    {
        "command": "ps",
        "help": "show status of threads",
        "handler_guess": "ps_cmd",
        "related_fn": "rtx_show_all_threads_usage",
        "source_path": "../../apps/app_eshell/system/ps.c",
        "notes": "Top-level ps command; help string documents thread status surface.",
    },
]

RTX_TCB_FORMAT_FIELDS = [
    "index",
    "thread",
    "name",
    "prio",
    "state",
    "thread_addr",
    "thread_next",
    "thread_prev",
    "delay_next",
    "delay_prev",
    "thread_join",
    "flags_options",
    "wait_flags",
    "thread_flags",
    "stack_mem",
    "stack_size",
    "sp",
    "min_stack_free",
    "swap_in_time_ticks",
    "swap_in_time_ms",
    "swap_out_time_ticks",
    "swap_out_time_ms",
    "runtime_ticks",
    "runtime_ms",
    "frame",
    "R0",
    "R1",
    "R2",
    "R3",
    "R12",
    "LR",
    "PC",
    "XPSR",
]

FREERTOS_SUMMARY_FIELDS = ["name", "cpu_percent", "min_free_stack"]

RTX_STATE_NAMES = [
    "BAD",
    "INACTIVE",
    "RUNNING",
    "TERMINAT",
    "WAIT_DLY",
    "WAIT_JOIN",
    "WAIT_FLAG",
    "WAIT_SEM",
    "WAIT_MEM",
    "WAIT_MUT",
    "READY",
    "WAIT_EVE",
    "WAIT_MGET",
    "WAIT_MPUT",
    "NULL",
]

PS_USAGE_STATE_NAMES = ["Error", "Inactive", "Running", "Blocked", "Terminated"]


@dataclass
class StringHit:
    offset: int
    text: str
    image: str


def read_bin(path: Path) -> bytes:
    return path.read_bytes()


def cstrings(data: bytes, min_len: int = 4, max_len: int = 240) -> list[tuple[int, str]]:
    out: list[tuple[int, str]] = []
    i, n = 0, len(data)
    while i < n:
        if 32 <= data[i] < 127 or data[i] in (9, 10, 13):
            j = i
            while j < n and data[j] != 0 and (32 <= data[j] < 127 or data[j] in (9, 10, 13)):
                j += 1
            raw = data[i:j]
            if min_len <= len(raw) <= max_len:
                try:
                    out.append((i, raw.decode("ascii")))
                except UnicodeDecodeError:
                    pass
            i = j + 1 if j < n and data[j] == 0 else j
        else:
            i += 1
    return out


def is_introspection(s: str) -> bool:
    return any(p.search(s) for p in COMPILED)


def find_offsets(data: bytes, needle: bytes) -> list[int]:
    out, i = [], 0
    while True:
        j = data.find(needle, i)
        if j < 0:
            return out
        out.append(j)
        i = j + 1


def extract_ps_blob(data: bytes) -> list[tuple[int, str]]:
    marker = b"../../apps/app_eshell/system/ps.c\x00"
    off = data.find(marker)
    if off < 0:
        return []
    strings: list[tuple[int, str]] = []
    pos = off
    end = min(len(data), off + 0x200)
    while pos < end:
        if data[pos] == 0:
            pos += 1
            continue
        e = data.find(b"\x00", pos)
        if e < 0 or e > end:
            break
        raw = data[pos:e]
        if len(raw) >= 2 and all(32 <= b < 127 for b in raw):
            strings.append((pos, raw.decode("ascii")))
        pos = e + 1
    return strings


def command_present(data: bytes, cmd: str) -> bool:
    return data.find(cmd.encode() + b"\x00") >= 0


def image_for_command(m55: bytes, bth: bytes, cmd: str) -> str:
    m, b = command_present(m55, cmd), command_present(bth, cmd)
    if m and b:
        return "both"
    if m:
        return "m55"
    if b:
        return "bth"
    return "none"


def build_entries(m55: bytes, bth: bytes) -> list[dict]:
    entries: list[dict] = []
    for spec in ESHELL_COMMANDS:
        img = image_for_command(m55, bth, spec["command"])
        if img == "none":
            continue
        entries.append(
            {
                "command": spec["command"],
                "image": img,
                "source_path": spec["source_path"],
                "help": spec.get("help"),
                "handler_guess": spec["handler_guess"],
                "dump_function": spec["related_fn"],
                "format_fields": (
                    RTX_TCB_FORMAT_FIELDS
                    if spec["command"] == "dump_all_threads"
                    else FREERTOS_SUMMARY_FIELDS
                    if spec["command"] in {"show_threads_usage", "show_threads_usage_once", "show_threads_uasges"}
                    else ["thread_index", "summary"]
                ),
                "notes": spec["notes"],
            }
        )

    # Internal dump API present in both images even when not directly typed at shell.
    entries.append(
        {
            "command": "rtx_show_all_threads_usage",
            "image": "both",
            "source_path": "../../rtos/rtx5/rtx_thread_dump.c",
            "help": None,
            "handler_guess": "rtx_show_all_threads_usage",
            "dump_function": "rtx_show_all_threads_usage",
            "format_fields": RTX_TCB_FORMAT_FIELDS
            + [
                "memory_common_stats",
                "memory_stack_stats",
                "memory_mp_data_stats",
                "memory_mq_data_stats",
                "timer_name",
                "timer_callback",
                "timer_state",
                "timer_type",
                "timer_tick",
                "timer_load",
            ],
            "notes": "Core RTX5 introspection routine; invoked by ps.c dump/usage commands. Also prints RTX memory pools and software timers.",
        }
    )
    return entries


def extract_all_strings() -> dict[str, list[StringHit]]:
    result: dict[str, list[StringHit]] = {}
    for image, path in IMAGES.items():
        data = read_bin(path)
        hits: list[StringHit] = []
        seen: set[str] = set()
        for off, s in cstrings(data):
            if is_introspection(s) and s not in seen:
                seen.add(s)
                hits.append(StringHit(off, s, image))
        hits.sort(key=lambda h: h.offset)
        result[image] = hits
    return result


def main() -> None:
    m55 = read_bin(IMAGES["m55"])
    bth = read_bin(IMAGES["bth"])

    strings_by_image = extract_all_strings()
    entries = build_entries(m55, bth)

    ps_blobs = {
        image: [{"offset": hex(o), "text": t} for o, t in extract_ps_blob(data)]
        for image, data in [("m55", m55), ("bth", bth)]
    }

    rtx_dump_offsets = {
        image: [hex(o) for o in find_offsets(data, b"../../rtos/rtx5/rtx_thread_dump.c\x00")]
        for image, data in [("m55", m55), ("bth", bth)]
    }

    freertos_hits = {
        "m55": [h.text for h in strings_by_image["m55"] if re.search(r"freertos|vTask|StackOverflow|smf_thread", h.text, re.I)],
        "bth": [h.text for h in strings_by_image["bth"] if re.search(r"freertos|vTask|StackOverflow|smf_thread", h.text, re.I)],
    }

    payload = {
        "firmware_version": "1.0.12.83",
        "images": {k: str(v.relative_to(ROOT)) for k, v in IMAGES.items()},
        "entries": entries,
        "rtx_state_names": RTX_STATE_NAMES,
        "ps_usage_state_names": PS_USAGE_STATE_NAMES,
        "tcb_fields_documented": RTX_TCB_FORMAT_FIELDS,
        "ps_command_blobs": ps_blobs,
        "rtx_thread_dump_source_offsets": rtx_dump_offsets,
        "freertos_introspection_strings": freertos_hits,
        "string_hits": {
            image: [{"offset": hex(h.offset), "text": h.text} for h in hits]
            for image, hits in strings_by_image.items()
        },
    }

    out_json = OUT_DIR / "introspection.json"
    out_json.write_text(json.dumps(payload, indent=2) + "\n", encoding="utf-8")

    print(f"Wrote {out_json}")
    print(f"Commands documented: {len(entries)}")
    print(f"TCB fields documented: {len(RTX_TCB_FORMAT_FIELDS)}")
    print(f"M55 introspection strings: {len(strings_by_image['m55'])}")
    print(f"BTH introspection strings: {len(strings_by_image['bth'])}")


if __name__ == "__main__":
    main()
