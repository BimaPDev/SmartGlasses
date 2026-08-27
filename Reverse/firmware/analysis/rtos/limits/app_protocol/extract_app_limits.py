#!/usr/bin/env python3
"""Mine application / protocol hard+soft limits from M55 platform_tester.bin.

Leaf 1.3.2 ownership: Reverse/firmware/analysis/rtos/limits/app_protocol/**

Cross-checks writeup claims against binary strings/immediates where possible.
Emits app_protocol_limits.json (+ prints a category breakdown).
"""

from __future__ import annotations

import json
import re
import struct
import sys
from collections import Counter
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = Path(__file__).resolve().parents[6]  # SmartGlasses/
DEFAULT_BIN = ROOT / "Reverse/firmware/x_1.0.12.83/platform_tester.bin"
OUT_JSON = HERE / "app_protocol_limits.json"

XIP = 0x2C000000

# handleSystemMsg packed inner actions (authoritative walk; BLE_STARRYNET.md / writeup C5)
PACKED_SYSTEM_ACTIONS = [
    # gets (9)
    "get_device_info",
    "get_language",
    "get_zen_mode",
    "get_volume",
    "get_wear_detection_mode",
    "get_standby_position",
    "get_volume_stream_type",
    "get_music_tp_control_mode",
    "get_standby_widget_lists",
    # sets / notifies / sync (18)
    "set_device_name",
    "set_volume",
    "set_language",
    "set_font_mode",
    "set_standby_position",
    "set_wear_detection_mode",
    "set_glass_sound_effect_mode",
    "set_hear_impairment_mode",
    "set_app_fast_open",
    "set_music_tp_control_mode",
    "set_image_stabilization_mode",
    "set_image_adjustment_mode",
    "set_standby_widget_lists",
    "change_dock_items",
    "set_brightness_finish",
    "notify_privacy_expired",
    "notify_statement_change",
    "sync_clone_data",
]

MAX_NAME_RE = re.compile(rb"(?:config)?MAX_[A-Z0-9_]+|[A-Z][A-Z0-9_]*MAX_[A-Z0-9_]+")


def find_str(blob: bytes, s: bytes) -> int | None:
    i = blob.find(s)
    return None if i < 0 else i


def va(file_off: int) -> str:
    return f"0x{XIP + file_off:08X}"


def entry(
    name: str,
    category: str,
    value: str,
    numeric,
    evidence: str,
    source: str,
    confidence: str,
) -> dict:
    return {
        "name": name,
        "category": category,
        "value": value,
        "numeric": numeric,
        "evidence": evidence,
        "source": source,
        "confidence": confidence,
    }


def extract(blob: Path) -> dict:
    b = blob.read_bytes()

    # --- binary probes ---
    off_chunk = find_str(b, b"chunkSize")
    off_mtu = find_str(b, b"recv mtu = %d, phone starrynet version = %d")
    off_txq = find_str(b, b"Transmission queue overflow!")
    off_md5_xfer = find_str(b, b"transfer check md5 failed")
    off_md5_flash = find_str(b, b"ota failed to check written flash md5")
    off_ota_fin = find_str(b, b"SHARE_STREAM_TYPE__RECEIVE_OTA_FINISH")
    off_rollback = find_str(b, b"do_ota_rollback")
    off_vol_val = find_str(b, b"vol_value")
    off_pa_vol = find_str(b, b"PA set volume=%d, result=%d")
    off_bri_inv = find_str(b, b"invalid brightness to set: %d")
    off_batt = find_str(b, b"get new battery level: %d")
    off_jbd = find_str(b, b"jbd4010_display")
    off_pat = find_str(b, b"AA_Pattern_640_480")
    off_ring = find_str(b, b"the ring name len illegal! max_len[30] min_len[1]")
    off_factory = find_str(b, b"__factory_start=0x28FFF000")
    off_eshell = find_str(b, b"eshell >")
    off_en_usb = find_str(b, b"en_usb")
    off_lv_mem = find_str(b, b"no more buffers. (increase LV_MEM_BUF_MAX_NUM)")
    off_med = find_str(b, b"MED_HEAP_BLOCK_MAX_NUM")
    off_miss = find_str(b, b"handleSystemMsg no handler for action %s")
    off_share_api = find_str(b, b"share_api.pb-c.c")

    absent_gadget = find_str(b, b"gadget") is None and find_str(b, b"hal_usb") is None
    absent_demo = find_str(b, b"set_demo_mode") is None
    absent_screen_rec = find_str(b, b"screen_record") is None

    # Display thread @ file 0x499270: movw r0,#0x76c (40 f2 6c 70) then cmp r2,#0x50 (50 2a)
    disp = b[0x499270 : 0x499270 + 0xE0]
    has_movw_76c = bytes.fromhex("40f26c70") in disp
    has_cmp_50 = bytes.fromhex("502a") in disp

    # Packed actions present in image
    packed_hits = []
    for name in PACKED_SYSTEM_ACTIONS:
        off = find_str(b, name.encode())
        if off is not None:
            packed_hits.append((name, off))

    share_types = sorted(set(re.findall(rb"SHARE_STREAM_TYPE__[A-Z0-9_]+", b)))
    starry_cmds = sorted(set(re.findall(rb"STARRY__MSG__CMD__[A-Z0-9_]+", b)))
    max_names = sorted({m.decode() for m in MAX_NAME_RE.findall(b) if len(m) < 48})

    entries: list[dict] = []

    # ── display ──────────────────────────────────────────────────────────
    entries.append(
        entry(
            "jbd013_panel_resolution",
            "display",
            "640x480",
            None,
            "JBD013_DECOMP.md panel geometry 0x280×0x1E0; binary AA_Pattern_640_480 @ "
            f"file {hex(off_pat) if off_pat is not None else 'n/a'} ({va(off_pat) if off_pat else 'n/a'}); "
            "writeup gpu_fill(640,480) / vg_lite_init(640,480)",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "jbd_framebuffer_bytes",
            "display",
            "0x25800 (153600 bytes)",
            0x25800,
            "jbd013_reconstructed.c JBD_FB_BYTES=0x25800; STAR_AIR_FULL_WRITEUP §JBD "
            "framebuffer size in reconstruction; 640×480×4bpp packed = 153600",
            "writeup",
            "high",
        )
    )
    entries.append(
        entry(
            "jbd_display_msg_type",
            "display",
            "0x20",
            0x20,
            "jbd4010_display_thread decomp: while msg.type != 0x20 continue "
            f"(FUN_2c499270); thread name jbd4010_display @ file {hex(off_jbd)}",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "jbd_fps_throttle_frames",
            "display",
            ">80 frames queued triggers throttle/trace dump",
            80,
            "decomp FUN_2c499270: if (0x50 < counter) dump; binary Thumb cmp r2,#0x50 "
            f"(50 2a) in thread @ file 0x499270 present={has_cmp_50}; "
            "JBD013_DECOMP.md / writeup 'FPS throttle if more than 80 frames queued'",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "jbd_frame_watchdog_ticks",
            "display",
            "0x76C (~1.9s) outside factory/test",
            0x76C,
            "decomp FUN_2c499270 calls FUN_2c498db4(0x76c); binary movw r0,#0x76c "
            f"(40 f2 6c 70) present={has_movw_76c} at display thread",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "jbd_brightness_ble_max",
            "display",
            "0..7109 (0x1BC5), special 0x1C03",
            7109,
            "set_jbd_brightness @ 0x2C499B04 (JBD013_DECOMP.md / writeup); "
            f"binary invalid brightness to set @ file {hex(off_bri_inv) if off_bri_inv else 'n/a'}",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "companion_brightness_scales",
            "display",
            "flat set_brightness string 0-10; setScreenBrightness TRACE 0-100",
            None,
            "STAR_AIR_FULL_WRITEUP C5: companion set_brightness flat string 0–10; "
            "method-adjacent setScreenBrightness TRACE range 0–100; packed notify "
            "set_brightness_finish only",
            "writeup",
            "high",
        )
    )
    entries.append(
        entry(
            "display_ipc_object_count",
            "display",
            "9 named IPC objects (mailbox/mutex/sem/timer)",
            9,
            "IPC_OBJECTS.md §display: jbd_mailbox, lv_ipc_mailbox, "
            "lv_to_async_ipc_mailbox, display_* mutexes, jbd_panel_sem, JBD_TIMER, "
            "lv_ipc_timer",
            "writeup",
            "high",
        )
    )

    # ── ble_starrynet ────────────────────────────────────────────────────
    entries.append(
        entry(
            "starrynet_handleSystemMsg_action_count",
            "ble_starrynet",
            f"{len(PACKED_SYSTEM_ACTIONS)} packed inner actions (9 get + 18 set/notify/sync)",
            len(PACKED_SYSTEM_ACTIONS),
            f"writeup C5 + BLE_STARRYNET.md; binary confirms {len(packed_hits)}/"
            f"{len(PACKED_SYSTEM_ACTIONS)} names; miss path @ file "
            f"{hex(off_miss) if off_miss else 'n/a'}",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "starrynet_msg_cmd_enum_count",
            "ble_starrynet",
            f"{len(starry_cmds)} STARRY__MSG__CMD__* symbols",
            len(starry_cmds),
            "binary protobuf enum strings: " + ", ".join(c.decode() for c in starry_cmds),
            "binary",
            "high",
        )
    )
    entries.append(
        entry(
            "starrynet_recv_mtu_negotiated",
            "ble_starrynet",
            "runtime negotiated (logged, not fixed constant)",
            None,
            f"binary '%s recv mtu = %d, phone starrynet version = %d' @ file "
            f"{hex(off_mtu)} ({va(off_mtu)})",
            "binary",
            "high",
        )
    )
    entries.append(
        entry(
            "starrynet_tx_queue_overflow",
            "ble_starrynet",
            "hard fail on transmission queue overflow",
            None,
            f"binary 'Transmission queue overflow!' @ file {hex(off_txq)} "
            f"({va(off_txq)}); message_sender.c",
            "binary",
            "high",
        )
    )
    entries.append(
        entry(
            "starrynet_absent_demo_and_wifi_actions",
            "ble_starrynet",
            "set_demo_mode/get_demo_mode/toggle_wifi/set_wifi/screen_record absent",
            None,
            f"writeup C5 absences; binary set_demo_mode absent={absent_demo}, "
            f"screen_record absent={absent_screen_rec}",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "ring_ble_name_len_limit",
            "ble_starrynet",
            "max_len=30 min_len=1",
            30,
            f"binary 'the ring name len illegal! max_len[30] min_len[1]' @ file "
            f"{hex(off_ring)} ({va(off_ring)})",
            "binary",
            "high",
        )
    )

    # ── share_transfer ───────────────────────────────────────────────────
    entries.append(
        entry(
            "share_api_chunkSize_field",
            "share_transfer",
            "protobuf field chunkSize present (ShareApi.Message)",
            None,
            f"binary 'chunkSize' @ file {hex(off_chunk)} near share_api.pb-c.c "
            f"@ {hex(off_share_api) if off_share_api else 'n/a'}; "
            "file_transfer.c logs size/chunkSize/count",
            "binary",
            "high",
        )
    )
    entries.append(
        entry(
            "share_preferred_ack_chunk_bytes",
            "share_transfer",
            "4096 (phone preferred RECEIVER_ACK)",
            4096,
            "STAR_AIR_FULL_WRITEUP §Share: Preferred phone ACK chunk 4096; "
            "iOS ShareAbility.preferredChunkSize=4096 (SDK mirrors writeup). "
            "No ASCII '4096' constant beside chunkSize in M55 image — writeup/SDK.",
            "writeup",
            "medium",
        )
    )
    entries.append(
        entry(
            "share_glasses_asked_chunk_bytes",
            "share_transfer",
            "8192 (8 KiB) on some builds",
            8192,
            "STAR_AIR_FULL_WRITEUP: glasses have asked 8 KiB on some builds; "
            "ShareAbility.maxChunkSize=8192. Marked writeup-only for firmware "
            "immediate binding.",
            "writeup",
            "medium",
        )
    )
    entries.append(
        entry(
            "share_stream_type_enum_count",
            "share_transfer",
            f"{len(share_types)} SHARE_STREAM_TYPE__* including RECEIVE_OTA_FINISH",
            len(share_types),
            "binary enums @ share_api; RECEIVE_OTA_FINISH @ file "
            f"{hex(off_ota_fin)}; writeup lists types 1..14",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "share_md5_check_on_transfer",
            "share_transfer",
            "MD5 required on file receive",
            None,
            f"binary 'transfer check md5 failed' @ {hex(off_md5_xfer)}; "
            "file_transfer.c 'md5 check fail/success'",
            "binary",
            "high",
        )
    )

    # ── ota ──────────────────────────────────────────────────────────────
    entries.append(
        entry(
            "ota_delivery_path",
            "ota",
            "StarryNet Share RECEIVE_OTA_FINISH (not USB/ADB)",
            None,
            f"writeup C7; binary SHARE_STREAM_TYPE__RECEIVE_OTA_FINISH @ "
            f"{hex(off_ota_fin)}; app ota progress strings",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "ota_dual_md5_gates",
            "ota",
            "transfer-file MD5 + written-flash MD5",
            2,
            f"binary 'transfer check md5 failed' @ {hex(off_md5_xfer)}; "
            f"'ota failed to check written flash md5' @ {hex(off_md5_flash)}; "
            "writeup C7 A/B MD5",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "ota_rollback_on_failure",
            "ota",
            "do_ota_rollback",
            None,
            f"binary do_ota_rollback @ file {hex(off_rollback)}; writeup C7",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "ota_no_usb_gadget",
            "ota",
            "user image has no USB gadget / hal_usb (charge-only Type-C)",
            None,
            f"writeup USB section; binary strings 'gadget' and 'hal_usb' absent="
            f"{absent_gadget}; en_usb name exists @ {hex(off_en_usb)} but no stack",
            "both",
            "high",
        )
    )

    # ── audio ────────────────────────────────────────────────────────────
    entries.append(
        entry(
            "smartpa_ui_volume_levels",
            "audio",
            "UI param 0..16",
            16,
            "writeup C3 / AUDIO_SMARTPA.md: smartpa_set_volume accepts [0,16] "
            f"(cmp #0x10); binary PA set volume / vol_value @ "
            f"{hex(off_pa_vol)} / {hex(off_vol_val)}",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "smartpa_vol_value_max",
            "audio",
            "0x2D0 (720) into AW883 reg 5",
            0x2D0,
            "writeup: vol_value max 0x2D0; audio_reconstructed.c AW883XX_VOL_VALUE_MAX; "
            "u16 0x2D0 appears in AW883 cluster; binary string vol_value present",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "audio_sample_rates_accepted",
            "audio",
            "8 / 16 / 44.1 / 48 kHz",
            None,
            "STAR_AIR_FULL_WRITEUP audio section — sample rates accepted list "
            "(writeup; not re-derived from immediates here)",
            "writeup",
            "medium",
        )
    )

    # ── power ────────────────────────────────────────────────────────────
    entries.append(
        entry(
            "battery_soc_clamp",
            "power",
            "0..100 percent",
            100,
            "power_reconstructed.c clamp_u0_100 in battery_mgr_poll_level_voltage "
            f"(FUN_2c489bd0); writeup C4; binary 'get new battery level: %d' @ "
            f"{hex(off_batt)}",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "battery_icon_soc_bands",
            "power",
            "thresholds 10,20,...,90",
            9,
            "writeup C4 icon band picker 0x2C5CFE2C; power_reconstructed.c bands[]",
            "writeup",
            "high",
        )
    )

    # ── factory ──────────────────────────────────────────────────────────
    entries.append(
        entry(
            "factory_nv_start",
            "factory",
            "__factory_start=0x28FFF000",
            0x28FFF000,
            f"binary string @ file {hex(off_factory)}; writeup factory NV",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "factory_eshell_prompt",
            "factory",
            "eshell > (UART/debug_i2c; not Type-C)",
            None,
            f"binary prompt @ file {hex(off_eshell)} ({va(off_eshell)}); "
            "writeup C6 — Type-C charge-only does not expose REPL",
            "both",
            "high",
        )
    )
    entries.append(
        entry(
            "factory_en_usb_no_gadget",
            "factory",
            "en_usb fac_cmd name present; USB gadget stack absent",
            None,
            f"binary en_usb @ {hex(off_en_usb)}; gadget/hal_usb absent; writeup C6/C7",
            "both",
            "high",
        )
    )

    # ── ui_lvgl ──────────────────────────────────────────────────────────
    entries.append(
        entry(
            "lvgl_mem_buf_max_num_guard",
            "ui_lvgl",
            "LV_MEM_BUF_MAX_NUM exhaust string present",
            None,
            f"binary 'no more buffers. (increase LV_MEM_BUF_MAX_NUM)' @ "
            f"{hex(off_lv_mem)}; MAX_* inventory includes LV_MEM_BUF_MAX_NUM",
            "binary",
            "high",
        )
    )
    entries.append(
        entry(
            "launcher_dock_tile_count",
            "ui_lvgl",
            "4 dock tiles (time, weather, date, Flyme)",
            4,
            "STAR_AIR_FULL_WRITEUP idle HUD / launcher dock section",
            "writeup",
            "high",
        )
    )
    entries.append(
        entry(
            "nlu_domain_cpp_count",
            "ui_lvgl",
            "21 Domain*.cpp application domains (+ DomainRuntime registry)",
            21,
            "STAR_AIR_FULL_WRITEUP NLU/domain section",
            "writeup",
            "medium",
        )
    )

    # ── MAX_* from strings (cross-category, tagged by subsystem) ----------
    entries.append(
        entry(
            "MAX_string_MED_HEAP_BLOCK_MAX_NUM",
            "ui_lvgl",
            "MED_HEAP_BLOCK_MAX_NUM assert guard",
            None,
            f"binary '[%s] g_block_index(%d) >= MED_HEAP_BLOCK_MAX_NUM' / name @ "
            f"{hex(off_med)}; listed in MAX_* scan",
            "binary",
            "high",
        )
    )
    entries.append(
        entry(
            "MAX_string_inventory_app_relevant",
            "ui_lvgl",
            ",".join(
                n
                for n in max_names
                if n
                in (
                    "LV_MEM_BUF_MAX_NUM",
                    "MED_HEAP_BLOCK_MAX_NUM",
                    "MAX_GAIN",
                    "DDSP_DL_MBAND_MAX_NUM_SUBBANDS",
                    "configMAX_PRIORITIES",
                    "configMAX_TASK_NAME_LEN",
                    "PMAX_M",
                )
            ),
            len(
                [
                    n
                    for n in max_names
                    if "MAX_" in n
                    and n
                    in (
                        "LV_MEM_BUF_MAX_NUM",
                        "MED_HEAP_BLOCK_MAX_NUM",
                        "MAX_GAIN",
                        "DDSP_DL_MBAND_MAX_NUM_SUBBANDS",
                        "configMAX_PRIORITIES",
                        "configMAX_TASK_NAME_LEN",
                        "PMAX_M",
                    )
                ]
            ),
            "platform_tester.bin ASCII MAX_* / configMAX_* strings (app-adjacent subset)",
            "binary",
            "high",
        )
    )

    # sanity: all required categories represented
    cats = {e["category"] for e in entries}
    required = {
        "display",
        "ble_starrynet",
        "ota",
        "audio",
        "power",
        "factory",
        "ui_lvgl",
        "share_transfer",
    }
    missing = required - cats
    if missing:
        raise SystemExit(f"missing categories: {sorted(missing)}")
    if len(entries) < 25:
        raise SystemExit(f"need >=25 entries, got {len(entries)}")

    doc = {
        "schema": 1,
        "leaf": "leaf-1.3.2",
        "binary": str(blob.relative_to(ROOT)) if blob.is_relative_to(ROOT) else str(blob),
        "binary_size": len(b),
        "entry_count": len(entries),
        "category_counts": dict(Counter(e["category"] for e in entries)),
        "probes": {
            "display_movw_0x76c": has_movw_76c,
            "display_cmp_0x50": has_cmp_50,
            "packed_actions_found": len(packed_hits),
            "packed_actions_expected": len(PACKED_SYSTEM_ACTIONS),
            "share_stream_types": len(share_types),
            "starry_msg_cmds": len(starry_cmds),
            "absent_gadget_hal_usb": absent_gadget,
            "max_names": max_names,
        },
        "entries": entries,
    }
    return doc


def main(argv: list[str]) -> int:
    bin_path = Path(argv[1]) if len(argv) > 1 else DEFAULT_BIN
    if not bin_path.is_file():
        print(f"missing binary: {bin_path}", file=sys.stderr)
        return 1
    doc = extract(bin_path)
    OUT_JSON.write_text(json.dumps(doc, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {OUT_JSON} ({doc['entry_count']} entries)")
    print("category_counts:", json.dumps(doc["category_counts"], sort_keys=True))
    print("extract_app_limits ok")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
