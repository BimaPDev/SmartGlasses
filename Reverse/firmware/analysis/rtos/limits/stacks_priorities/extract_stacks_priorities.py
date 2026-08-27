#!/usr/bin/env python3
"""Recover per-thread stack sizes and priorities from M55 (and BTH note) firmware.

BES builds embed a compact descriptor after create-site rodata:

  uint32_t pad0, pad1, [pad2,] magic_or_trace_id, stack_size, priority, flag, 0;

``stack_size`` is bytes (CMSIS ``osThreadAttr_t.stack_size``).
``priority`` is CMSIS-RTOS2 ``osPriority_t`` (osPriorityNormal=24, High=40, High1=41, …).

Association is by proximity to thread-name / create-site strings from
``thread_inventory.json``. Confidence:

  recovered  — descriptor within ~0x100 of an exact RTOS name string
  inferred   — descriptor near related symbols / mailboxes / log names
  unrecovered — inventory name with no matching descriptor
"""

from __future__ import annotations

import json
import struct
from pathlib import Path

# .../Reverse/firmware/analysis/rtos/limits/stacks_priorities/this.py
REV = Path(__file__).resolve().parents[5]  # Reverse/
FW_DIR = REV / "firmware" / "x_1.0.12.83"
M55_BIN = FW_DIR / "platform_tester.bin"
BTH_BIN = FW_DIR / "best1600_watch_bth.bin"
INV_JSON = REV / "firmware" / "analysis" / "rtos" / "m55" / "thread_inventory.json"
OUT_DIR = Path(__file__).resolve().parent
OUT_JSON = OUT_DIR / "stacks_priorities.json"

STACKS = {
    0x100,
    0x200,
    0x300,
    0x400,
    0x500,
    0x600,
    0x800,
    0xA00,
    0xC00,
    0x1000,
    0x1400,
    0x1800,
    0x1C00,
    0x2000,
    0x2400,
    0x2800,
    0x3000,
    0x4000,
    0x5000,
    0x6000,
    0x8000,
    0xA000,
    0xC000,
    0x10000,
}

PRIORITY_NAMES: dict[int, str] = {
    1: "osPriorityIdle",
    8: "osPriorityLow",
    16: "osPriorityBelowNormal",
    24: "osPriorityNormal",
    25: "osPriorityNormal1",
    26: "osPriorityNormal2",
    32: "osPriorityAboveNormal",
    39: "osPriorityAboveNormal7",
    40: "osPriorityHigh",
    41: "osPriorityHigh1",
    42: "osPriorityHigh2",
    43: "osPriorityHigh3",
    44: "osPriorityHigh4",
    48: "osPriorityRealtime",
    56: "osPriorityISR",
}


def prio_name(p: int) -> str:
    if p in PRIORITY_NAMES:
        return PRIORITY_NAMES[p]
    if 8 < p < 16:
        return f"osPriorityLow{p - 8}"
    if 16 < p < 24:
        return f"osPriorityBelowNormal{p - 16}"
    if 24 < p < 32:
        return f"osPriorityNormal{p - 24}"
    if 32 < p < 40:
        return f"osPriorityAboveNormal{p - 32}"
    if 40 < p < 48:
        return f"osPriorityHigh{p - 40}"
    if 48 < p < 56:
        return f"osPriorityRealtime{p - 48}"
    return f"osPriority_t({p})"


def scan_descriptors(data: bytes) -> list[dict]:
    """Return descriptor hits: file_offset points at first pad zero of the record."""
    hits: list[dict] = []
    n = len(data) - 32
    for off in range(0, n, 4):
        w = struct.unpack_from("<8I", data, off)
        # Variant A: 3 leading zeros (common BES pad before TRACE id)
        if (
            w[0] == 0
            and w[1] == 0
            and w[2] == 0
            and w[3] != 0
            and w[4] in STACKS
            and 1 <= w[5] <= 56
            and w[6] in (0, 1)
            and w[7] == 0
        ):
            # skip ASCII-looking "magic"
            mag = w[3]
            if all(32 <= ((mag >> s) & 0xFF) < 127 for s in (0, 8, 16, 24)):
                continue
            hits.append(
                {
                    "file_offset": off,
                    "stack_size": w[4],
                    "priority": w[5],
                    "flag": w[6],
                    "magic": mag,
                    "variant": "pad3",
                }
            )
            continue
        # Variant B: 2 leading zeros
        if (
            w[0] == 0
            and w[1] == 0
            and w[2] != 0
            and w[3] in STACKS
            and 1 <= w[4] <= 56
            and w[5] in (0, 1)
            and w[6] == 0
        ):
            mag = w[2]
            if all(32 <= ((mag >> s) & 0xFF) < 127 for s in (0, 8, 16, 24)):
                continue
            hits.append(
                {
                    "file_offset": off,
                    "stack_size": w[3],
                    "priority": w[4],
                    "flag": w[5],
                    "magic": mag,
                    "variant": "pad2",
                }
            )
    return hits


def find_cstrings(data: bytes, needle: bytes) -> list[int]:
    out: list[int] = []
    start = 0
    while True:
        j = data.find(needle, start)
        if j < 0:
            return out
        out.append(j)
        start = j + 1


def nearest_strings(data: bytes, off: int, window: int = 0x140) -> list[tuple[int, str]]:
    lo = max(0, off - window)
    found: list[tuple[int, str]] = []
    i = lo
    while i < off:
        if 32 <= data[i] < 127:
            j = i
            while j < off and 32 <= data[j] < 127:
                j += 1
            if j - i >= 3:
                s = data[i:j].decode("ascii", errors="replace")
                found.append((i, s))
            i = j
        else:
            i += 1
    return found


# Hand-curated name → descriptor offset (highest confidence associations).
# Offsets are the pad-zero base of the descriptor record in platform_tester.bin.
CURATED_M55: list[dict] = [
    {
        "name": "jbd4010_display",
        "file_offset": 0x42594,
        "confidence": "recovered",
        "evidence": "pad3 descriptor immediately after jbd4010_display / jbd_mailbox rodata",
    },
    {
        "name": "xrbm_thread",
        "file_offset": 0x396C4,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after xrbm_thread / xrbm_mailbox",
    },
    {
        "name": "af_thread",
        "file_offset": 0x14E510,
        "confidence": "recovered",
        "evidence": "pad2 descriptor after af_thread symbol cluster (audioflinger)",
    },
    {
        "name": "sar_thread",
        "file_offset": 0x147AC4,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after sar_thread / sar_mailbox / SAR_TIMER",
    },
    {
        "name": "aslt_thread",
        "file_offset": 0x380EC,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after aslt_thread / aslt_mailbox",
    },
    {
        "name": "ota_checker",
        "file_offset": 0x28800,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after ota_checker string",
    },
    {
        "name": "eshell_thread",
        "file_offset": 0x42768C,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after eshell_thread... / eshell_platform_* create path",
    },
    {
        "name": "restart_eshell_thread",
        "file_offset": 0x4278A4,
        "confidence": "inferred",
        "evidence": "pad3 descriptor beside restart_eshell_thread / eshell_thread symbols (1 KiB, Normal)",
    },
    {
        "name": "lvgl_async",
        "file_offset": 0x41D978,
        "confidence": "recovered",
        "evidence": "pad2 descriptor 0x48 bytes after lvgl_async name",
    },
    {
        "name": "lvgl_task_handler_thread",
        "file_offset": 0x41DB00,
        "confidence": "recovered",
        "evidence": "pad2 descriptor after lvgl_task_handler / lvgl_os_tick_timer cluster (32 KiB)",
    },
    {
        "name": "xjxr_audio_msg_handler_thread",
        "file_offset": 0x3D85C,
        "confidence": "recovered",
        "evidence": "pad3 descriptor near audio_msg_handler / audio_rpc*_mutex",
    },
    {
        "name": "local_decode_thread",
        "file_offset": 0x3E4BC,
        "confidence": "recovered",
        "evidence": "pad2 descriptor after local_decode_thread / player_state_mutex in local_player.cpp",
    },
    {
        "name": "a2dp_sink_player_thread",
        "file_offset": 0x164B08,
        "confidence": "recovered",
        "evidence": "pad2 descriptor after a2dp_sink_player_thread (32 KiB stack)",
    },
    {
        "name": "bth_if_client_thread",
        "file_offset": 0x164128,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after bth_if_client_thread / bth_if_client_mailbox",
    },
    {
        "name": "rpc_rx_thread",
        "file_offset": 0x1634BC,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after rpc_rx_thread_init / rpc_rx_mailbox (16 KiB)",
    },
    {
        "name": "eshell_rpc_rx_thread",
        "file_offset": 0x429D44,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after eshell_rpc_rx_thread",
    },
    {
        "name": "m55_dsp_tx_thread",
        "file_offset": 0x163188,
        "confidence": "inferred",
        "evidence": "pad3 descriptor in rpc_m55_dsp create cluster near m55_dsp_tx_thread",
    },
    {
        "name": "bth_dsp_tx_thread",
        "file_offset": 0x163338,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after bth_dsp_tx_thread / rpc_bth_dsp_*",
    },
    {
        "name": "core_bridge_rx_thread",
        "file_offset": 0x147338,
        "confidence": "recovered",
        "evidence": "pad3 descriptor in core_bridge cluster before app_core_bridge_tx_mailbox",
    },
    {
        "name": "core_bridge_tx_thread",
        "file_offset": 0x147364,
        "confidence": "inferred",
        "evidence": "pad2 descriptor immediately after core_bridge_rx attr beside tx_mailbox",
    },
    {
        "name": "starrynet_rx_msg_thread",
        "file_offset": 0x329EC,
        "confidence": "inferred",
        "evidence": "pad3 descriptor after rx_msg_mailbox / tx_msg_mailbox pair (first of two 4 KiB attrs)",
    },
    {
        "name": "starrynet_tx_msg_thread",
        "file_offset": 0x32A14,
        "confidence": "inferred",
        "evidence": "pad3 descriptor second of starrynet mailbox pair",
    },
    {
        "name": "xr_trace_task",
        "file_offset": 0x37924,
        "confidence": "recovered",
        "evidence": "pad2 descriptor near xr_trace_task",
    },
    {
        "name": "stk501xx_thread",
        "file_offset": 0x148D2C,
        "confidence": "recovered",
        "evidence": "pad3 descriptor in stk501xx create cluster",
    },
    {
        "name": "stk501xx_cust_thread",
        "file_offset": 0x148D54,
        "confidence": "inferred",
        "evidence": "pad3 sibling descriptor after stk501xx_thread (2 KiB)",
    },
    {
        "name": "[PWRS] Power supply changed thread start",
        "file_offset": 0x14D198,
        "confidence": "inferred",
        "evidence": "pad3 descriptor after power_supply_update / dump_uart_timer (PWRS path)",
    },
    {
        "name": "sar_thread_51158",
        "file_offset": 0x43CDC,
        "confidence": "inferred",
        "evidence": "pad2 descriptor after sar_mailbox_51158 in panel/touch cluster",
    },
    {
        "name": "touch_trd",
        "file_offset": 0x43D04,
        "confidence": "inferred",
        "evidence": "pad2 middle descriptor in 51158 touch/sar triple",
    },
    {
        "name": "touch_job_thread",
        "file_offset": 0x43D2C,
        "confidence": "inferred",
        "evidence": "pad2 0x1400-byte descriptor in 51158 touch/sar triple",
    },
    {
        "name": "sar_thread_51155_4pad",
        "file_offset": 0x44418,
        "confidence": "inferred",
        "evidence": "pad2 first descriptor in 51155_4pad create triple",
    },
    {
        "name": "stk_touch_trd_51155",
        "file_offset": 0x45258,
        "confidence": "inferred",
        "evidence": "pad2 first descriptor in stk_touch_trd_51155 create triple",
    },
    {
        "name": "stk_touch_trd",
        "file_offset": 0x460C4,
        "confidence": "inferred",
        "evidence": "pad2 descriptor near touch_trd / stk_touch_trd symbols",
    },
]

CURATED_BTH: list[dict] = [
    {
        "name": "restart_eshell_thread",
        "file_offset": 0x140BC8,
        "stack_size": 0x400,
        "priority": 24,
        "confidence": "recovered",
        "evidence": "pad3 descriptor after restart_eshell_thread in best1600_watch_bth.bin",
    },
]


def build_hit_index(hits: list[dict]) -> dict[int, dict]:
    return {h["file_offset"]: h for h in hits}


def entry_from_curated(cur: dict, hit: dict | None, core: str) -> dict:
    if hit is None and "stack_size" in cur:
        stack = cur["stack_size"]
        prio = cur["priority"]
        fo = cur["file_offset"]
        variant = "curated"
    elif hit is not None:
        stack = hit["stack_size"]
        prio = hit["priority"]
        fo = hit["file_offset"]
        variant = hit["variant"]
    else:
        raise KeyError(cur["name"])
    return {
        "name": cur["name"],
        "stack_size": stack,
        "priority": prio,
        "priority_name": prio_name(prio),
        "core": core,
        "confidence": cur["confidence"],
        "evidence": f"{cur['evidence']}; variant={variant}; magic/id present",
        "file_offset": f"0x{fo:X}",
    }


def main() -> int:
    m55 = M55_BIN.read_bytes()
    bth = BTH_BIN.read_bytes()
    inv = json.loads(INV_JSON.read_text())

    m55_hits = scan_descriptors(m55)
    hit_index = build_hit_index(m55_hits)

    entries: list[dict] = []
    claimed_offs: set[int] = set()
    claimed_names: set[str] = set()

    for cur in CURATED_M55:
        off = cur["file_offset"]
        hit = hit_index.get(off)
        # allow off-by-0 if curated points at same record the scanner found
        if hit is None:
            # try nearby alignment (±4) — curated uses pad base
            for d in (0, 4, -4, 8, -8):
                hit = hit_index.get(off + d)
                if hit:
                    break
        if hit is None:
            # still emit using manual decode at curated offset
            w = struct.unpack_from("<8I", m55, off)
            if w[0] == 0 and w[1] == 0 and w[2] == 0 and w[4] in STACKS:
                hit = {
                    "file_offset": off,
                    "stack_size": w[4],
                    "priority": w[5],
                    "variant": "pad3",
                    "magic": w[3],
                    "flag": w[6],
                }
            elif w[0] == 0 and w[1] == 0 and w[3] in STACKS:
                hit = {
                    "file_offset": off,
                    "stack_size": w[3],
                    "priority": w[4],
                    "variant": "pad2",
                    "magic": w[2],
                    "flag": w[5],
                }
            else:
                print(f"WARN: curated miss {cur['name']} @ {off:#x}")
                continue
        ent = entry_from_curated(cur, hit, "m55")
        entries.append(ent)
        claimed_offs.add(hit["file_offset"])
        claimed_names.add(cur["name"])

    for cur in CURATED_BTH:
        ent = entry_from_curated(cur, None, "bth")
        entries.append(ent)
        claimed_names.add(cur["name"] + "@bth")

    # Document dump-format anchors (not threads, but useful meta — skip JSON thread list)

    # Fill unrecovered inventory names (skip log junk / already claimed)
    skip_prefixes = ("[",)
    for e in inv["entries"]:
        name = e["name"]
        if name in claimed_names:
            continue
        if name.startswith(skip_prefixes) and "PWRS" not in name:
            continue
        if "%" in name:
            continue
        # skip pure log phrases already covered
        entries.append(
            {
                "name": name,
                "stack_size": None,
                "priority": None,
                "priority_name": None,
                "core": "m55",
                "confidence": "unrecovered",
                "evidence": (
                    f"named in thread_inventory.json @ file_offset={e['file_offset']}; "
                    "no BES stack/prio descriptor associated"
                ),
                "file_offset": f"0x{int(e['file_offset']):X}",
            }
        )

    # Sort: recovered/inferred first by name, then unrecovered
    rank = {"recovered": 0, "inferred": 1, "unrecovered": 2}
    entries.sort(key=lambda x: (rank.get(x["confidence"], 9), x["name"].lower()))

    recovered_stack = sum(
        1 for e in entries if e["stack_size"] is not None and e["core"] == "m55"
    )
    recovered_prio = sum(
        1 for e in entries if e["priority"] is not None and e["core"] == "m55"
    )
    bth_static = sum(1 for e in entries if e["core"] == "bth" and e["stack_size"])
    gaps = sum(1 for e in entries if e["confidence"] == "unrecovered")

    out = {
        "image_m55": "platform_tester.bin",
        "image_bth": "best1600_watch_bth.bin",
        "xip_base_m55": "0x2c000000",
        "method": (
            "Static scan for BES create-site descriptors "
            "(pad zeros + TRACE/magic id + stack_size + osPriority_t + flag). "
            "Names bound by curated proximity to inventory strings."
        ),
        "cmsis_priority_anchor": {
            "osPriorityNormal": 24,
            "osPriorityHigh": 40,
            "osPriorityHigh3": 43,
        },
        "dump_format_m55": {
            "stack_mem_stack_size": "stack_mem=0x%08X stack_size=%u",
            "stack_mem_stack_size_offsets": ["0x1497c0", "0x426c34"],
            "min_free_stack": "min-free-stack=%d",
            "min_free_stack_offsets": ["0x14950c", "0x426988"],
            "stack_size_bytes": "Stack Size: %u bytes",
            "stack_size_bytes_offset": "0x427dc5",
            "eshell_commands": [
                "dump_all_threads",
                "show_threads_usage_once",
                "show_threads_usage",
            ],
        },
        "dump_format_bth": {
            "stack_mem_stack_size": "stack_mem=0x%08X stack_size=%u",
            "stack_mem_stack_size_offset": "0xa7e8",
            "min_free_stack": "--- Thread name=%s cpu=%%%d min-free-stack=%d",
            "min_free_stack_offset": "0xa510",
            "stack_size_bytes": "Stack Size: %u bytes",
            "stack_size_bytes_offset": "0x140e95",
            "note": (
                "BTH RTX5 runtime dump via eshell dump_all_threads / "
                "rtx_show_all_threads_usage exposes live stack_size; "
                "static create-site values are sparse (restart_eshell_thread recovered)."
            ),
        },
        "descriptor_hit_count_m55": len(m55_hits),
        "stats": {
            "m55_stacks_recovered": recovered_stack,
            "m55_priorities_recovered": recovered_prio,
            "bth_stacks_static": bth_static,
            "unrecovered_named": gaps,
            "entry_count": len(entries),
        },
        "entries": entries,
    }

    OUT_JSON.write_text(json.dumps(out, indent=2) + "\n")
    print(f"Wrote {OUT_JSON}")
    print(
        f"M55 stacks={recovered_stack} prios={recovered_prio} "
        f"gaps={gaps} total_entries={len(entries)} descriptors_scanned={len(m55_hits)}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
