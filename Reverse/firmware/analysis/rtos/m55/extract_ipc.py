#!/usr/bin/env python3
"""Extract recoverable CMSIS-RTOS2 / FreeRTOS IPC object names from M55 firmware."""

from __future__ import annotations

import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]  # Reverse/firmware
DEFAULT_BIN = ROOT / "x_1.0.12.83/platform_tester.bin"
OUT_JSON = Path(__file__).resolve().parent / "ipc_inventory.json"

# Recoverable named-object suffixes (RTOS registration / debug strings).
NAME_SUFFIX_RE = re.compile(
    r"^[A-Za-z0-9_]+(?:"
    r"_mutex|_mtx|_mailbox|_mbox|_queue|_sem|_sema|_timer|_pool|_signal"
    r"|_semap|_sem_id|_timer_id|_mailbox_id|_mutex_id"
    r")(?:_[a-z0-9_]+|_id)?$",
    re.I,
)

# Additional infix forms (e.g. xrm_mutex_psram, sar_mailbox_51155).
NAME_INFIX_RE = re.compile(
    r"^[A-Za-z0-9_]+_(?:mutex|mtx|mailbox|mbox|queue|sem|sema|timer|pool|signal)_[a-z0-9_]+$",
    re.I,
)

# CMSIS-RTOS2 API strings present in .rodata — used as type hints, not inventoried.
CMSIS_APIS: dict[str, str] = {
    "osMutexAcquire": "mutex",
    "osMutexRelease": "mutex",
    "osMutexDelete": "mutex",
    "osSemaphoreAcquire": "semaphore",
    "osSemaphoreRelease": "semaphore",
    "osSemaphoreDelete": "semaphore",
    "osMessageQueueGet": "message_queue",
    "osMessageQueuePut": "message_queue",
    "osMessageQueueDelete": "message_queue",
    "osMessageQueueReset": "message_queue",
    "osTimerStart": "timer",
    "osTimerStop": "timer",
    "osTimerDelete": "timer",
    "osEventFlagsSet": "event_flags",
    "osEventFlagsClear": "event_flags",
    "osEventFlagsWait": "event_flags",
    "osEventFlagsDelete": "event_flags",
}

# Error / creation-failure strings → inferred object name and type.
FAILURE_PATTERNS: list[tuple[re.Pattern[str], str, str]] = [
    (re.compile(r"osSemaphoreNew failed", re.I), "jbd_panel_sem", "semaphore"),
    (re.compile(r"Create pmu semaphore failed", re.I), "pmu_semaphore", "semaphore"),
    (re.compile(r"Create semaphore\(lv_startup_sync_sem_id\) failed", re.I), "lv_startup_sync_sem", "semaphore"),
    (re.compile(r"create ota checker sema failed", re.I), "ota_checker_semaphore", "semaphore"),
    (re.compile(r"create _bth_if_thread_client_comm_semap_init fail", re.I), "bth_if_client_comm_sem", "semaphore"),
    (re.compile(r"create mcpp_cmd_sema_id fail", re.I), "mcpp_cmd_sema", "semaphore"),
    (re.compile(r"Create semaphore failed", re.I), "generic_semaphore", "semaphore"),
    (re.compile(r"Create async handler semaphore fail", re.I), "lvgl_async_handler_sem", "semaphore"),
    (re.compile(r"Failed to Create rx_msg_mailbox", re.I), "rx_msg_mailbox", "mailbox"),
    (re.compile(r"Failed to Create tx msg mailbox", re.I), "tx_msg_mailbox", "mailbox"),
    (re.compile(r"Failed to Create lv_ipc_mailbox", re.I), "lv_ipc_mailbox", "mailbox"),
    (re.compile(r"Failed to Create lv_to_async_ipc_mailbox", re.I), "lv_to_async_ipc_mailbox", "mailbox"),
    (re.compile(r"Failed to Create rpc mailbox", re.I), "rpc_rx_mailbox", "mailbox"),
    (re.compile(r"Failed to Create core bridge mailbox", re.I), "app_core_bridge_tx_mailbox", "mailbox"),
    (re.compile(r"Failed to Create a2dp_sink_player_mailbox", re.I), "a2dp_sink_player_mailbox", "mailbox"),
    (re.compile(r"create xrbm mailbox fail", re.I), "xrbm_mailbox", "mailbox"),
    (re.compile(r"create asl mailbox fail", re.I), "aslt_mailbox", "mailbox"),
    (re.compile(r"\[SAR\]: sar_mailbox_init failed", re.I), "sar_mailbox", "mailbox"),
    (re.compile(r"Create lv_ipc timer failed", re.I), "lv_ipc_timer", "timer"),
    (re.compile(r"Warning: can not create lvgl os_tick timer", re.I), "lvgl_os_tick_timer", "timer"),
    (re.compile(r"Warning: can not create watchdog ping timer", re.I), "wdt_ping_timer", "timer"),
    (re.compile(r"create msg queue fail", re.I), "generic_msg_queue", "message_queue"),
    (re.compile(r"osMemoryPoolAlloc fail", re.I), "os_memory_pool", "memory_pool"),
    (re.compile(r"osMemoryPoolnew fail", re.I), "os_memory_pool", "memory_pool"),
    (re.compile(r"clear_device_info_mtx create failed", re.I), "clear_device_info_mtx", "mutex"),
    (re.compile(r"Create power state update lock failed", re.I), "power_state_mutex", "mutex"),
    (re.compile(r"\[panel\].*osSemaphoreNew failed", re.I), "jbd_panel_sem", "semaphore"),
]

# Merge duplicate failure-inferred names onto canonical named objects.
DEDUP_ALIASES: dict[str, str] = {
    "display_panel_sem": "jbd_panel_sem",
    "jbd_panel_sem": "jbd_panel_sem",
}

# Explicit aliases where binary uses abbreviated or compound debug names.
ALIASES: dict[str, str] = {
    "clear_device_info_mtx": "clear_device_info_mutex",
    "msg_mutex": "msg_send_list_mutex",
    "xjxr_audio_focus_state_mutex": "app_audio_focus_state_mutex",
    "app_msg_proxy_mtx": "app_msg_proxy_mutex",
}

# Strings embedded in log templates with leading punctuation.
STRIP_PREFIX_RE = re.compile(r"^[<>=\s]+")

# Subsystem assignment: first matching rule wins.
SUBSYSTEM_RULES: list[tuple[str, re.Pattern[str]]] = [
    ("display", re.compile(r"jbd|display_|lv_ipc|lv_to_async|gpu_|panel|brightness|screen_off", re.I)),
    ("battery/xrbm", re.compile(r"xrbm|battery|pmu|power_state|powerkey|ota_checker|charger|fuelgauge|batterystats", re.I)),
    ("starrynet", re.compile(r"starrynet|rx_msg|tx_msg|msg_send|msg_emergency|xrrts|channel_|spp_|snif|ble_bond|adv_data|device_name|clear_device|ios_ctkd|wait_.*msg_ack|neg_fallback|app_msg", re.I)),
    ("factory", re.compile(r"fac_cmd|cmd_mutex", re.I)),
    ("touch", re.compile(r"^tp_|touch_|stk_tp|stk_touch|xjxr_tp|stk51155|stk51158|stk501xx|stk_work|stk_alg|stk_phase", re.I)),
    ("audio", re.compile(r"audio|a2dp|smartpa|aw_|lyric|pause_music|player_state|anc_|deq_|pcmbuff|audioflinger|music_log|vol_changed|stream_vol", re.I)),
    ("sensor", re.compile(r"sensor|sar_|xjxr_ag|xjxr_ms|xjxr_sensor|wear_|stk511|accel|gyro|sns2m55|m552sns", re.I)),
    ("shell", re.compile(r"eshell|trace_send|xr_trace|aslt_", re.I)),
    ("dsp", re.compile(r"dsp|rpc_|mcpp|bth_dsp|m55_dsp|core_bridge|bth_if", re.I)),
    ("lvgl", re.compile(r"^lv_|lvgl|drawinfo|textline_pool|startup_sync", re.I)),
    ("other", re.compile(r"xrm_mutex|xr_user|nv_mutex|ring_manager|quick_start|postion", re.I)),
]

# Force subsystem for names that would otherwise fall through.
SUBSYSTEM_OVERRIDES: dict[str, str] = {
    "xrm_mutex_psram": "battery/xrbm",
    "xrm_mutex_sys": "battery/xrbm",
}

# Thread names co-located in binary near subsystem IPC.
THREAD_BY_SUBSYSTEM: dict[str, list[str]] = {
    "display": ["jbd4010_display", "jbd_thread", "display_mgr", "core_bridge_tx_thread", "core_bridge_rx_thread"],
    "battery/xrbm": ["xrbm_thread", "battery_mgr", "ota_checker"],
    "starrynet": ["starrynet_rx_msg_thread", "starrynet_tx_msg_thread", "xr_starrynet_thread_start"],
    "factory": ["fac_cmd_trd", "fac_cmd"],
    "touch": ["touch_trd", "touch_job_thread", "stk_touch_trd", "stk501xx_thread", "stk501xx_cust_thread"],
    "audio": ["xjxr_audio_msg_handler_thread", "a2dp_sink_player_thread", "af_thread", "audioflinger"],
    "sensor": ["sensor_main", "sar_thread", "sar_thread_51155", "sar_thread_51158", "mcu2sensor_msg_handler"],
    "shell": ["eshell_rpc_rx_thread", "aslt_thread"],
    "dsp": ["rpc_rx_thread", "m55_dsp_tx_thread", "m55_dsp_rx_thread", "bth_dsp_tx_thread", "bth_dsp_rx_thread", "mcpp_srv_thread"],
    "lvgl": ["lvgl_async", "assert_lvgl_ui_thread"],
}

THREAD_BY_NAME: list[tuple[re.Pattern[str], list[str]]] = [
    (re.compile(r"jbd", re.I), ["jbd4010_display", "jbd_thread"]),
    (re.compile(r"xrbm|battery", re.I), ["xrbm_thread"]),
    (re.compile(r"rx_msg|starrynet_rx", re.I), ["starrynet_rx_msg_thread"]),
    (re.compile(r"tx_msg|starrynet_tx", re.I), ["starrynet_tx_msg_thread"]),
    (re.compile(r"fac_cmd|cmd_mutex", re.I), ["fac_cmd_trd"]),
    (re.compile(r"xjxr_ms_mutex", re.I), ["mcu2sensor_msg_handler", "sensor_main"]),
    (re.compile(r"xjxr_ag_mutex|xjxr_sensor", re.I), ["sensor_main", "mcu2sensor_msg_handler"]),
    (re.compile(r"sar_mailbox|sar_thread", re.I), ["sar_thread", "sar_thread_51155", "sar_thread_51158"]),
    (re.compile(r"lv_ipc|lv_to_async", re.I), ["lvgl_async", "assert_lvgl_ui_thread"]),
    (re.compile(r"rpc_rx|rpc_", re.I), ["rpc_rx_thread"]),
    (re.compile(r"bth_if_client", re.I), ["bth_if_client_thread"]),
    (re.compile(r"a2dp_sink", re.I), ["a2dp_sink_player_thread"]),
    (re.compile(r"audio_", re.I), ["xjxr_audio_msg_handler_thread", "af_thread"]),
    (re.compile(r"eshell|aslt", re.I), ["eshell_rpc_rx_thread", "aslt_thread"]),
    (re.compile(r"wear_|xjxr_wd", re.I), ["wear_detect_handler", "sensor_main"]),
    (re.compile(r"display_", re.I), ["display_mgr", "jbd4010_display"]),
    (re.compile(r"core_bridge", re.I), ["core_bridge_tx_thread", "core_bridge_rx_thread"]),
    (re.compile(r"mcpp", re.I), ["mcpp_srv_thread"]),
    (re.compile(r"ota_checker", re.I), ["ota_checker"]),
    (re.compile(r"touch|tp_|stk_touch", re.I), ["touch_trd", "touch_job_thread"]),
    (re.compile(r"xrm_mutex", re.I), ["xrbm_thread"]),
    (re.compile(r"app_audio_focus|msg_mutex", re.I), ["xjxr_audio_msg_handler_thread"]),
]


def cstrings(data: bytes, min_len: int = 4, max_len: int = 120) -> list[tuple[int, str]]:
    out: list[tuple[int, str]] = []
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


def classify_type(name: str, context: str = "") -> str:
    n = name.lower()
    ctx = context.lower()
    if "_mutex" in n or n.endswith("_mtx") or "mutex" in ctx:
        return "mutex"
    if "_sema" in n or n.endswith("_sem") or "semaphore" in ctx or "sem_id" in n:
        return "semaphore"
    if "_mailbox" in n or "_mbox" in n or "mailbox" in ctx:
        return "mailbox"
    if "_queue" in n or "msg queue" in ctx or "messagequeue" in ctx:
        return "message_queue"
    if "_timer" in n or "timer_id" in n or "timer" in ctx:
        if n.startswith("create_") or n.startswith("xjxr_display_"):
            return "other"
        return "timer"
    if "_pool" in n or "memorypool" in ctx or "pool" in ctx:
        return "memory_pool"
    if "_signal" in n or "eventflags" in ctx:
        return "event_flags"
    return "other"


def classify_subsystem(name: str) -> str:
    if name in SUBSYSTEM_OVERRIDES:
        return SUBSYSTEM_OVERRIDES[name]
    for sub, pat in SUBSYSTEM_RULES:
        if pat.search(name):
            return sub
    return "other"


def related_threads(name: str, subsystem: str) -> list[str]:
    threads: list[str] = []
    for pat, names in THREAD_BY_NAME:
        if pat.search(name):
            for t in names:
                if t not in threads:
                    threads.append(t)
    if not threads and subsystem in THREAD_BY_SUBSYSTEM:
        threads = THREAD_BY_SUBSYSTEM[subsystem][:3]
    return threads


def normalize_name(name: str) -> str:
    name = ALIASES.get(name, name)
    return DEDUP_ALIASES.get(name, name)


def is_ipc_name(s: str) -> bool:
    if s.startswith("!") or s.startswith("N3") or "xQueue" in s:
        return False
    if "ctrl_mailbox:DUMP" in s:
        return False
    cleaned = STRIP_PREFIX_RE.sub("", s)
    if not (NAME_SUFFIX_RE.match(cleaned) or NAME_INFIX_RE.match(cleaned)):
        return False
    if re.search(
        r"_(init|handler|handle_event|put|get|create|deinit|callback|cb|test|malloc|free|push|pop|acquire|dealer|register|unregister|listener|on_finished|get_info|set_limit|with_buffer|with_callback)$",
        cleaned,
        re.I,
    ):
        return False
    if cleaned.startswith("smf_") and not re.search(r"_pool$", cleaned):
        return False
    return True


def scan_named_objects(strings: list[tuple[int, str]]) -> dict[str, dict]:
    found: dict[str, dict] = {}
    for off, s in strings:
        if not is_ipc_name(s):
            continue
        raw = STRIP_PREFIX_RE.sub("", s)
        name = normalize_name(raw)
        if name in found:
            continue
        obj_type = classify_type(name)
        subsystem = classify_subsystem(name)
        found[name] = {
            "name": name,
            "type": obj_type,
            "subsystem": subsystem,
            "file_offset": off,
            "evidence": f"named RTOS object string @{off:#x}",
            "related_threads": related_threads(name, subsystem),
        }
    return found


def scan_failure_strings(strings: list[tuple[int, str]], found: dict[str, dict]) -> None:
    for off, s in strings:
        for pat, obj_name, obj_type in FAILURE_PATTERNS:
            if pat.search(s):
                name = normalize_name(obj_name)
                if name in found:
                    found[name]["evidence"] += f"; failure string @{off:#x}: {s[:80]}"
                    continue
                subsystem = classify_subsystem(name)
                found[name] = {
                    "name": name,
                    "type": obj_type,
                    "subsystem": subsystem,
                    "file_offset": off,
                    "evidence": f"creation failure string @{off:#x}: {s[:120]}",
                    "related_threads": related_threads(name, subsystem),
                }


def scan_nearby_thread_hints(data: bytes, found: dict[str, dict], strings: list[tuple[int, str]]) -> None:
    """If a known thread name appears within 512 bytes of an IPC name, add hint."""
    thread_names = {
        s for _, s in strings
        if re.match(r"^[a-z][a-z0-9_]*(thread|_trd)$", s, re.I)
        and len(s) < 48
    }
    by_off = {off: s for off, s in strings}
    offsets = sorted(by_off)
    for entry in found.values():
        base = entry["file_offset"]
        for off in offsets:
            if abs(off - base) > 512:
                continue
            candidate = by_off[off]
            if candidate in thread_names and candidate not in entry["related_threads"]:
                entry["related_threads"].append(candidate)
                entry["evidence"] += f"; nearby thread @{off:#x}"


def extract(bin_path: Path) -> dict:
    data = bin_path.read_bytes()
    strings = cstrings(data)
    found = scan_named_objects(strings)
    scan_failure_strings(strings, found)
    scan_nearby_thread_hints(data, found, strings)

    entries = sorted(found.values(), key=lambda e: (e["subsystem"], e["type"], e["name"]))
    return {
        "kernel": "FreeRTOS 10.4.1",
        "firmware": str(bin_path),
        "firmware_version": "1.0.12.83",
        "cmsis_rtos2_apis_observed": sorted(CMSIS_APIS.keys()),
        "entry_count": len(entries),
        "entries": entries,
    }


def counts_by_field(entries: list[dict], field: str) -> dict[str, int]:
    out: dict[str, int] = {}
    for e in entries:
        k = e[field]
        out[k] = out.get(k, 0) + 1
    return dict(sorted(out.items(), key=lambda kv: (-kv[1], kv[0])))


def main(argv: list[str]) -> int:
    bin_path = Path(argv[1]) if len(argv) > 1 else DEFAULT_BIN
    if not bin_path.is_file():
        print(f"error: firmware not found: {bin_path}", file=sys.stderr)
        return 1

    inv = extract(bin_path)
    OUT_JSON.write_text(json.dumps(inv, indent=2) + "\n", encoding="utf-8")

    by_type = counts_by_field(inv["entries"], "type")
    by_sub = counts_by_field(inv["entries"], "subsystem")
    print(f"Wrote {OUT_JSON} ({inv['entry_count']} entries)")
    print("By type:", by_type)
    print("By subsystem:", by_sub)
    if inv["entry_count"] < 40:
        print("WARNING: fewer than 40 entries", file=sys.stderr)
        return 2
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
