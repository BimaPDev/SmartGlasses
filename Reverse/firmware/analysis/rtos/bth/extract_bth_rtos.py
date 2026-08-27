#!/usr/bin/env python3
"""Static RTX5/thread scanner for best1600_watch_bth.bin (BTH M33)."""

from __future__ import annotations

import argparse
import json
import re
import struct
from dataclasses import dataclass, asdict
from pathlib import Path
from typing import Iterable

LOAD_BASE = 0x1400_0000
DEFAULT_BIN = Path(__file__).resolve().parents[3] / "x_1.0.12.83" / "best1600_watch_bth.bin"
OUT_JSON = Path(__file__).resolve().parent / "rtx5_inventory.json"

# Known RTX5 thread name literals (suffix _thread or BES naming conventions).
THREAD_NAME_RE = re.compile(
    rb"(?:"
    rb"[a-z][a-z0-9_]*_thread"  # canonical CMSIS-RTOS names
    rb"|BesbtThread"
    rb"|APPTHREAD"
    rb"|eshell_thread\.\.\."
    rb"|intersys_tx_thread_id"
    rb")"
)

RTX_PATH_RE = re.compile(rb"\.\./\.\./rtos/rtx5/[a-z0-9_./-]+\.c")
KERNEL_CFG_RE = re.compile(
    rb"(?:"
    rb"KERNEL=RTX5"
    rb"|P RTX V\d+\.\d+\.\d+"
    rb"|config[A-Z0-9_]+"
    rb"|CHIP(?:_SUBSYS)?=[^\x00\r\n]+"
    rb"|FLASH_(?:BASE|SIZE|NC_BASE)=[^\x00\r\n]+"
    rb"|BUILD_DATE=[^\x00\r\n]+"
    rb"|REV_INFO=[^\x00\r\n]+"
    rb"|SW_VER=[^\x00\r\n]+"
    rb"|OTA_[A-Z_]+=[^\x00\r\n]+"
    rb")"
)

THREAD_DUMP_MARKERS = (
    b"rtx_show_all_threads_usage",
    b"Thread List:",
    b"thread=0x%x, prio=%u state=%-9s thread_addr=0x%08X",
    b"stack_mem=0x%08X stack_size=%u",
    b"min_stack_free=%u",
)

THREAD_CATEGORIES: dict[str, str] = {
    "app_thread": "app_main",
    "app_bt_cmd_thread": "bt_stack",
    "hci_rx_thread": "bt_stack",
    "bth_if_thread": "bt_stack",
    "BesbtThread": "bt_stack",
    "APPTHREAD": "bt_stack",
    "af_thread": "audio",
    "xjxr_audio_event_thread": "audio",
    "xjxr_audio_msg_handler_thread": "audio",
    "bth_dsp_tx_thread": "audio_dsp",
    "ota_thread": "ota",
    "rpc_rx_thread": "rpc_ipc",
    "eshell_rpc_rx_thread": "shell",
    "eshell_thread...": "shell",
    "restart_eshell_thread": "shell",
    "intersys_tx_thread_id": "intersys",
}

SOURCE_HINTS: dict[str, str] = {
    "app_thread": "../../apps/common/app_thread.c",
    "app_bt_cmd_thread": "../../services/../bthost/service/bt_app/test/app_bt_cmd.cpp",
    "hci_rx_thread": "bthost/stack (HCI RX path)",
    "bth_if_thread": "../../apps/bth_if/bt_if_server/bth_if_thread_server.c",
    "af_thread": "audioflinger (services/audioflinger)",
    "xjxr_audio_event_thread": "../../services/../bthost/service/bt_app/../../../xjxr_audio/",
    "xjxr_audio_msg_handler_thread": "../../services/../bthost/service/bt_app/../../../xjxr_audio/",
    "bth_dsp_tx_thread": "../../apps/app_rpc/rpc_bth_dsp/rpc_bth_dsp.c",
    "ota_thread": "../../services/ota/bes_ota/src/ota_config.cpp",
    "rpc_rx_thread": "../../apps/app_rpc/rpc_rx_thread.c",
    "eshell_rpc_rx_thread": "../../utils/eshell/eshell.c",
    "BesbtThread": "bthost BT main stack",
    "intersys_tx_thread_id": "../../apps/main/watch_src/.../xjxr_intersys_bth.c",
}


@dataclass
class StringHit:
    text: str
    file_offset: int
    va: int


def va(offset: int) -> int:
    return LOAD_BASE + offset


def iter_cstrings(data: bytes, min_len: int = 4) -> Iterable[StringHit]:
    i = 0
    n = len(data)
    while i < n:
        if data[i] == 0 or data[i] < 0x20 or data[i] > 0x7E:
            i += 1
            continue
        start = i
        while i < n and 0x20 <= data[i] <= 0x7E:
            i += 1
        if i - start >= min_len:
            yield StringHit(data[start:i].decode("ascii", "ignore"), start, va(start))
        if i < n and data[i] == 0:
            i += 1


def scan_binary(path: Path) -> dict:
    data = path.read_bytes()
    all_hits = list(iter_cstrings(data))

    thread_names: dict[str, StringHit] = {}
    for hit in all_hits:
        raw = hit.text.encode()
        if THREAD_NAME_RE.fullmatch(raw):
            thread_names.setdefault(hit.text, hit)
            continue
        # BesbtThread / intersys show up with suffix format specifiers.
        for prefix in (b"BesbtThread", b"intersys_tx_thread_id"):
            if raw.startswith(prefix):
                name = prefix.decode()
                thread_names.setdefault(name, hit)
                break

    rtx_paths = sorted({h.text for h in all_hits if RTX_PATH_RE.search(h.text.encode())})
    kernel_strings = sorted({h.text for h in all_hits if KERNEL_CFG_RE.fullmatch(h.text.encode())})

    dump_formats = [h for h in all_hits if any(m.decode() in h.text for m in THREAD_DUMP_MARKERS)]
    dump_formats += [
        h
        for h in all_hits
        if h.text.startswith("--- Thread")
        or h.text.startswith("    prio=")
        or h.text.startswith("    thread_")
        or h.text.startswith("    stack_mem=")
        or h.text.startswith("    sp:")
        or h.text in {
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
        }
    ]
    seen_fmt: set[str] = set()
    unique_dump: list[dict] = []
    for h in dump_formats:
        if h.text not in seen_fmt:
            seen_fmt.add(h.text)
            unique_dump.append({"format": h.text, "file_offset": f"0x{h.file_offset:x}", "va": f"0x{h.va:x}"})

    eshell_cmds = sorted(
        {
            h.text
            for h in all_hits
            if h.text
            in {
                "show_threads_usage",
                "show_threads_uasges",
                "show_threads_usage_once",
                "close_threads_usage",
                "close_threads_uasges",
                "dump_all_threads",
                "show memory map",
                "md",
                "md16",
                "md32",
                "mw",
                "mw16",
                "mw32",
                "comp",
                "comp16",
                "comp32",
                "sleep",
                "msleep",
                "shell_sleep",
                "gpioget",
                "gpioset",
                "pmugpioget",
                "pmugpioset",
                "debug_i2c",
                "restart_eshell_thread",
            }
            or h.text.startswith("show all threads")
            or h.text.startswith("close threads")
            or h.text.startswith("dump threads")
            or h.text.startswith("show status of threads")
        }
    )

    ipc_strings = sorted(
        {
            h.text
            for h in all_hits
            if any(
                k in h.text
                for k in (
                    "send_bth_to_m55_msg",
                    "send_m55_to_bth_msg",
                    "xjxr_bth2m55",
                    "xjxr_m552bth",
                    "M55_TO_BTH",
                    "INTERSYS",
                    "eshell_corebridge_comm",
                    "XRM_ESHELL",
                    "notify_a2dp",
                    "m55_",
                )
            )
        }
    )

    entries = []
    for name, hit in sorted(thread_names.items()):
        entries.append(
            {
                "name": name,
                "category": THREAD_CATEGORIES.get(name, "unknown"),
                "source_hint": SOURCE_HINTS.get(name, ""),
                "file_offset": f"0x{hit.file_offset:x}",
                "va": f"0x{hit.va:x}",
            }
        )

    kernel_meta = {
        "kernel": "RTX5",
        "version_banner": next((s for s in kernel_strings if s.startswith("P RTX V")), ""),
        "kernel_define": next((s for s in kernel_strings if s.startswith("KERNEL=")), ""),
        "chip": next((s for s in kernel_strings if s.startswith("CHIP=") and "SUBSYS" not in s), ""),
        "chip_subsys": next((s for s in kernel_strings if s.startswith("CHIP_SUBSYS=")), ""),
        "build_date": next((s for s in kernel_strings if s.startswith("BUILD_DATE=")), ""),
        "rev_info": next((s for s in kernel_strings if s.startswith("REV_INFO=")), ""),
        "sw_ver": next((s for s in kernel_strings if s.startswith("SW_VER=")), ""),
        "flash_base": next((s for s in kernel_strings if s.startswith("FLASH_BASE=")), ""),
        "flash_size": next((s for s in kernel_strings if s.startswith("FLASH_SIZE=")), ""),
    }

    osif_hits = [h for h in all_hits if "osif_rtx" in h.text or h.text.startswith("request_thread:")]

    return {
        "firmware": str(path),
        "firmware_size": len(data),
        "load_base": f"0x{LOAD_BASE:x}",
        "image_end_va": f"0x{va(len(data)):x}",
        "kernel": kernel_meta,
        "rtx5_source_paths": rtx_paths,
        "kernel_config_strings": kernel_strings,
        "thread_dump_formats": unique_dump,
        "thread_dump_source": "../../rtos/rtx5/rtx_thread_dump.c",
        "thread_dump_fn": "rtx_show_all_threads_usage",
        "evr_source": "../../rtos/rtx5/rtx_evr.c",
        "osif_source": "../../services/osif/osif_rtx.c",
        "osif_thread_gate_strings": [h.text for h in osif_hits],
        "entries": entries,
        "thread_count": len(entries),
        "eshell_commands": eshell_cmds,
        "ipc_strings": ipc_strings,
    }


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--bin", type=Path, default=DEFAULT_BIN)
    ap.add_argument("-o", "--output", type=Path, default=OUT_JSON)
    ap.add_argument("--pretty", action="store_true", default=True)
    args = ap.parse_args()

    if not args.bin.is_file():
        raise SystemExit(f"binary not found: {args.bin}")

    result = scan_binary(args.bin)
    args.output.write_text(json.dumps(result, indent=2 if args.pretty else None) + "\n")
    print(f"wrote {args.output} ({result['thread_count']} threads, {len(result['kernel_config_strings'])} kernel strings)")


if __name__ == "__main__":
    main()
