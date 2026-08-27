#!/usr/bin/env python3
"""Catalog recoverable timing / watchdog / timeout constants from M55 (+ BTH skim).

Binary sources:
  Reverse/firmware/x_1.0.12.83/platform_tester.bin  (M55 primary)
  Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin (BTH note)

Outputs:
  timing_inventory.json
"""

from __future__ import annotations

import json
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[5]  # Reverse/
FW = ROOT / "firmware" / "x_1.0.12.83"
M55 = FW / "platform_tester.bin"
BTH = FW / "best1600_watch_bth.bin"
OUT = Path(__file__).resolve().parent / "timing_inventory.json"

XIP = 0x2C000000

CATEGORIES = (
    "system_wdt",
    "protocol",
    "ui",
    "sensor",
    "audio",
    "display",
    "power",
    "factory",
)


def off_hex(n: int) -> str:
    return f"0x{n:X}"


def entry(
    name: str,
    category: str,
    *,
    value_ms: int | float | None = None,
    value_raw: str | None = None,
    unit: str = "ms",
    evidence: str,
    file_offset: str,
    confidence: str,
    binary: str = "m55",
) -> dict:
    assert category in CATEGORIES, category
    e = {
        "name": name,
        "category": category,
        "value_ms": value_ms,
        "value_raw": value_raw,
        "unit": unit,
        "evidence": evidence,
        "file_offset": file_offset,
        "confidence": confidence,
        "binary": binary,
    }
    return e


def find_str(data: bytes, s: str | bytes) -> int:
    needle = s.encode() if isinstance(s, str) else s
    return data.find(needle)


def curated(m55: bytes, bth: bytes) -> list[dict]:
    """Hand-verified recoveries + named objects with string evidence."""
    entries: list[dict] = []

    def s_off(s: str, blob: bytes = m55) -> str:
        i = find_str(blob, s)
        return off_hex(i) if i >= 0 else "UNRECOVERED"

    # ── display ──────────────────────────────────────────────────────────
    # Capstone at jbd4010_display_thread VA 0x2C499270 / file 0x499270
    entries.append(
        entry(
            "jbd4010_display_thread_watchdog",
            "display",
            value_ms=1900,
            value_raw="0x76C",
            unit="ms",
            evidence=(
                "Capstone movw r0,#0x76c @ VA 0x2C49933C then bl 0x2C498DB4; "
                "decomp jbd4010_display_thread.c calls FUN_2c498db4(0x76c) outside "
                "factory/test flags — ~1.9 s frame-path watchdog"
            ),
            file_offset="0x49933C",
            confidence="high",
        )
    )
    entries.append(
        entry(
            "jbd4010_display_fps_throttle_queued_frames",
            "display",
            value_ms=None,
            value_raw="0x50",
            unit="frames",
            evidence=(
                "Capstone cmp r2,#0x50 @ VA 0x2C49934A / 0x2C499362 in display "
                "thread; if queued frames > 80, throttle path (bl 0x2C66B4B8 + "
                "0x2C487B88 with r1=#0x14)"
            ),
            file_offset="0x49934A",
            confidence="high",
        )
    )
    entries.append(
        entry(
            "jbd4010_display_esd_reinit_delay",
            "display",
            value_ms=200,
            value_raw="0xC8",
            unit="ms",
            evidence=(
                "Capstone movs r0,#0xc8; bl 0x2C6444FC @ VA 0x2C49932A in display "
                "thread ESD/reinit path; 0x2C6444FC is CMSIS osDelay wrapper "
                "(jbd013_reconstructed.c names it osDelayMs)"
            ),
            file_offset="0x49932A",
            confidence="high",
        )
    )
    entries.append(
        entry(
            "JBD_TIMER",
            "display",
            value_ms=None,
            value_raw="JBD_TIMER",
            unit="ms",
            evidence="Named osTimer object string; period not recovered as immediate",
            file_offset=s_off("JBD_TIMER"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "lvgl_os_tick_timer",
            "display",
            value_ms=None,
            value_raw="lvgl_os_tick_timer",
            unit="ms",
            evidence=(
                "String 'lvgl_os_tick_timer' + 'Warning: can not create lvgl os_tick "
                "timer' / 'lvgl tick Timeout: tick_elaps: %d' — LVGL tick feeder; "
                "period UNRECOVERED"
            ),
            file_offset=s_off("lvgl_os_tick_timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "screen_off_timeout_change",
            "display",
            value_ms=None,
            value_raw='{"timeout_value":"%d","time":"%s"}',
            unit="s",
            evidence=(
                "Handler string screen_off_timeout_change + JSON schema "
                "timeout_value — phone-configurable screen-off; concrete default "
                "UNRECOVERED in M55 immediates"
            ),
            file_offset=s_off("screen_off_timeout_change"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "display_notify_timer",
            "display",
            value_ms=None,
            value_raw="display_notify_timer_handler",
            unit="ms",
            evidence="FWK-Display_Ctrl display_notify_timer_handler / input_timer / restore_timer",
            file_offset=s_off("display_notify_timer_handler"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "displayAdvTimerCallBack",
            "display",
            value_ms=None,
            value_raw="displayAdvTimerCallBack",
            unit="ms",
            evidence="StarryNet ADV display timer callback string",
            file_offset=s_off("displayAdvTimerCallBack"),
            confidence="low",
        )
    )

    # ── system_wdt ───────────────────────────────────────────────────────
    entries.append(
        entry(
            "app_watchdog",
            "system_wdt",
            value_ms=None,
            value_raw="../../apps/common/app_watchdog.c",
            unit="ms",
            evidence=(
                "Source path + 'feed watchdog' / 'wdt_ping_timer' / "
                "'watchdog start timer error' / app_wdt_irq_handle / "
                "pmu_wdt_irq_handle — system ping watchdog; ping period UNRECOVERED"
            ),
            file_offset=s_off("../../apps/common/app_watchdog.c"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "wdt_ping_timer",
            "system_wdt",
            value_ms=None,
            value_raw="wdt_ping_timer",
            unit="ms",
            evidence="Named timer for app_watchdog feed path; also present on BTH",
            file_offset=s_off("wdt_ping_timer"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "pmu_wdt_irq_handle",
            "system_wdt",
            value_ms=None,
            value_raw="pmu_wdt_irq_handle",
            unit="ms",
            evidence="PMU hardware WDT IRQ handler string; 'Error: pmu wdt reboot failed!'",
            file_offset=s_off("pmu_wdt_irq_handle"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "utest_wdt",
            "factory",
            value_ms=None,
            value_raw="utest_wdt delaytime(ms) timeout(s) cnt",
            unit="s",
            evidence=(
                "Eshell unittest: parameterized delaytime(ms) + timeout(s); "
                "'WDT ADDR BASE[0x%08x] wdt open[timeout:%ds]' / "
                "'wait wdt timeout...%dms' — no fixed default baked as sole immediate"
            ),
            file_offset=s_off("utest_wdt"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "sensing_wdt_stk5115",
            "sensor",
            value_ms=None,
            value_raw="sensing wdt trigger",
            unit="ms",
            evidence=(
                "Strings 'sensing wdt trigger, flag=%x' / "
                "'%s/%d: sensing wdt trigger' / stk5115_wdt_timer — SAR sensing WDT"
            ),
            file_offset=s_off("sensing wdt trigger, flag=%x"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "sensing_wdt_stk501xx",
            "sensor",
            value_ms=None,
            value_raw="[SAR5]: sar sensing wdt trigger",
            unit="ms",
            evidence="STK501xx SAR sensing WDT trigger log",
            file_offset=s_off("[SAR5]: sar sensing wdt trigger"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "aw883_dsp_wdt",
            "audio",
            value_ms=None,
            value_raw="dsp wdt status error=%d",
            unit="ms",
            evidence="[Awinic][dev%d]%s: dsp wdt status error=%d — AW883xx DSP watchdog status",
            file_offset=s_off("dsp wdt status error=%d"),
            confidence="high",
        )
    )

    # ── protocol ─────────────────────────────────────────────────────────
    for name, cat, note in [
        ("OTA_TRANSFER_TIMEOUT_TIMER", "protocol", "ota transfer file timeout / ota_transfer_timeout_timer_handler"),
        ("APP_PING_BTH_CONN_TIMER", "protocol", "sys ping bth timeout:%d"),
        ("IOS_CTKD_BOND_TIMER", "protocol", "ios_ctkd_bond_timeout_handler / bond timeout timer take effect"),
        ("WAIT_EMERGENCY_MSG_ACK_TIMER", "protocol", "wait_emergency_msg_ack_timer_handler"),
        ("WAIT_EXTERNAL_MSG_ACK_TIMER", "protocol", "wait_external_msg_ack_timer_handler"),
        ("CHANNEL_RECV_WAIT_MSG_ACK_TIMER", "protocol", "channel_recv_wait_msg_ack_timer_handler"),
        ("CHANNEL_SEND_WAIT_MSG_ACK_TIMER", "protocol", "channel_send_wait_msg_ack_timer_handler"),
        ("SPP_CNANNEL_CONN_TIMER", "protocol", "spp_channel_conn_timer_handler (typo CNANNEL)"),
        ("SPP_CNANNEL_MSG_RECV_TIMER", "protocol", "spp_channel_msg_recv_timer_handler"),
        ("UPDATE_ADV_DATA_TIMER", "protocol", "BLE ADV data refresh timer"),
        ("PING_CIRCLE_JSON_TIMER", "protocol", "ping_circle_json_timer_id"),
        ("APP_MSG_NEG_FALLBACK_TIMER", "protocol", "fallback timer tiger, neg fallback to default"),
        ("BOND_CANCEL_OR_TIMEOUT", "protocol", "STARRY__BTSTATUS__BOND_CANCEL_OR_TIMEOUT enum/string"),
    ]:
        entries.append(
            entry(
                name,
                cat,
                value_ms=None,
                value_raw=name,
                unit="ms",
                evidence=f"Named timer/status string; {note}; period UNRECOVERED",
                file_offset=s_off(name if name != "BOND_CANCEL_OR_TIMEOUT" else "BOND_CANCEL_OR_TIMEOUT"),
                confidence="medium",
            )
        )

    entries.append(
        entry(
            "ios_wait_bt_connect_timeout",
            "protocol",
            value_ms=None,
            value_raw="iosWaitBtConnectCallBack timeOut = %d",
            unit="ms",
            evidence=(
                "StarryNet iosSetConnectBtTimeOut / handleIosWaitBtTimeOut / "
                "iosWaitBtConnectCallBack timeOut=%d — runtime timeout argument; "
                "phone keepalive docs cite 60s/cycleCount 5 but M55 default immediate UNRECOVERED"
            ),
            file_offset=s_off("iosWaitBtConnectCallBack timeOut = %d"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "app_mcu_to_bth_bridge_wait_rsp_timeout",
            "protocol",
            value_ms=None,
            value_raw="app_mcu_to_bth_bridge_wait_rsp_timeout",
            unit="ms",
            evidence="INTERCORE bridge wait-response timeout (M55 + BTH)",
            file_offset=s_off("app_mcu_to_bth_bridge_wait_rsp_timeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "mcpp_cmd_wait_rsp_timeout",
            "protocol",
            value_ms=None,
            value_raw="mcpp_cmd_wait_rsp_timeout",
            unit="ms",
            evidence="MCPP cmd wait rsp timeout logs with cmdCode/timeout:%d",
            file_offset=s_off("mcpp_cmd_wait_rsp_timeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "ota_check_sema_wait_timeout",
            "protocol",
            value_ms=None,
            value_raw="ota check sema wait timeout!",
            unit="ms",
            evidence="OTA semaphore wait timeout string",
            file_offset=s_off("ota check sema wait timeout!"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "starrynet_retry_br_connect_timeout",
            "protocol",
            value_ms=None,
            value_raw="retry br connect timeout, reconn_cont is %d",
            unit="ms",
            evidence="BR reconnect timeout log with reconn_cont",
            file_offset=s_off("retry br connect timeout"),
            confidence="medium",
        )
    )

    # Capstone: 60000 ms passed as r1 with r0=3 to 0x2C47245C (timer helper)
    entries.append(
        entry(
            "timer_helper_period_60000",
            "protocol",
            value_ms=60000,
            value_raw="0xEA60",
            unit="ms",
            evidence=(
                "Capstone movw r1,#0xea60; movs r0,#3; bl 0x2C47245C at file "
                "0x479DBC / 0x47A434 (repeated). Helper takes (id, period_ms); "
                "concrete binding to named StarryNet timer not proven — treat as "
                "recovered 60 s software-timer period constant in protocol cluster"
            ),
            file_offset="0x479DBC",
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "osTimerStart_period_60000_site",
            "ui",
            value_ms=60000,
            value_raw="0xEA60",
            unit="ms",
            evidence=(
                "Capstone movw r1,#0xea60 then tail-call 0x2C6448B4 (osTimerStart-class) "
                "@ file 0x485CD6 — 60 s start period"
            ),
            file_offset="0x485CD6",
            confidence="medium",
        )
    )

    # ── audio / speech UI timeouts ───────────────────────────────────────
    entries.append(
        entry(
            "music_loading_timeout_timer",
            "audio",
            value_ms=4000,
            value_raw="4s later",
            unit="ms",
            evidence=(
                "startLoadingTimeOutTimer / loading_timeout_timer; log "
                "'loadingTimerCallback: 4s later …' — 4 s loading timeout"
            ),
            file_offset=s_off("loadingTimerCallback: 4s later current timer change"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "music_check_status_timer",
            "audio",
            value_ms=2000,
            value_raw="2s later",
            unit="ms",
            evidence="checkMusicStatusTimer log '2s later current timer change'",
            file_offset=s_off("checkMusicStatusTimer: 2s later current timer change"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "music_heart_beat_timer",
            "audio",
            value_ms=None,
            value_raw="onHeartBeatTimerCallBack",
            unit="ms",
            evidence="startHeartTimer / heart_beat_timer / onHeartBeatTimerCallBack — period UNRECOVERED",
            file_offset=s_off("onHeartBeatTimerCallBack"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "music_checkSendPolicyTimeOut",
            "audio",
            value_ms=None,
            value_raw="checkSendPolicyTimeOut",
            unit="ms",
            evidence="AirMusicController send-policy timeout callback",
            file_offset=s_off("checkSendPolicyTimeOut"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "tts_mute_timeout",
            "audio",
            value_ms=None,
            value_raw="mute_timeout_callback",
            unit="ms",
            evidence="ai_speech_tts_api::mute_timeout_callback / muteTimeout — period UNRECOVERED",
            file_offset=s_off("mute_timeout_callback"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "ASR_ERROR_TIMEOUT",
            "audio",
            value_ms=None,
            value_raw="ASR_ERROR_TIMEOUT",
            unit="ms",
            evidence="[%s] ASR_ERROR_TIMEOUT / STATE_ERROR_TIMEOUT speech path",
            file_offset=s_off("ASR_ERROR_TIMEOUT"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "anc_switching_timers",
            "audio",
            value_ms=None,
            value_raw="anc_ff_switching_timer_handler",
            unit="ms",
            evidence="ANC FF/FB set_gain + switching hwtimers (alloc fail strings)",
            file_offset=s_off("anc_ff_switching_timer_handler"),
            confidence="low",
        )
    )
    entries.append(
        entry(
            "XJXRAudioAdapter_timer_timeout",
            "audio",
            value_ms=None,
            value_raw="XJXRAudioAdapter timer timeout",
            unit="ms",
            evidence="Audio adapter timer expiry log",
            file_offset=s_off("XJXRAudioAdapter timer timeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "audio_finish_timeout",
            "audio",
            value_ms=None,
            value_raw="[audio_finish] timeout.",
            unit="ms",
            evidence="Audio finish path timeout string",
            file_offset=s_off("[audio_finish] timeout."),
            confidence="medium",
        )
    )

    # ── UI / assistant ───────────────────────────────────────────────────
    entries.append(
        entry(
            "StateContext_Fallback_timeout",
            "ui",
            value_ms=None,
            value_raw="StateContext Fallback timeout reached.",
            unit="ms",
            evidence="StateContext::resetTimeoutTimer / cancelTimeoutTimer / Fallback timeout reached",
            file_offset=s_off("StateContext Fallback timeout reached."),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "wakeup_Fallback_timeout",
            "ui",
            value_ms=None,
            value_raw="wakeup Fallback timeout reached.",
            unit="ms",
            evidence="startWakeupTimer / wakeup Fallback timeout reached",
            file_offset=s_off("wakeup Fallback timeout reached."),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "prompt_timeout",
            "ui",
            value_ms=None,
            value_raw="prompt_timeout",
            unit="ms",
            evidence="prompt_timeout symbol string",
            file_offset=s_off("prompt_timeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "waitForReplyTimeout",
            "ui",
            value_ms=None,
            value_raw="waitForReplyTimeout",
            unit="ms",
            evidence="waitForReplyTimeout symbol",
            file_offset=s_off("waitForReplyTimeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "PhonePage_answer_hangup_timers",
            "ui",
            value_ms=None,
            value_raw="startAnswerTimer/startHangupTimer",
            unit="ms",
            evidence="PhonePage startAnswerTimer / startHangupTimer / reset out|hangup timer",
            file_offset=s_off("startAnswerTimer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "RMoveTimer_auto_move",
            "ui",
            value_ms=None,
            value_raw="[RMoveTimer]refresh auto move right timer",
            unit="ms",
            evidence="Ring move UI auto-scroll timer",
            file_offset=s_off("[RMoveTimer]refresh auto move right timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "show_connect_timer_timeout",
            "ui",
            value_ms=None,
            value_raw="show connect timer timeout!",
            unit="ms",
            evidence="showConnectResultTimerCb / show connect timer timeout!",
            file_offset=s_off("show connect timer timeout!"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "onRecordingTimeout",
            "ui",
            value_ms=None,
            value_raw="onRecordingTimeout",
            unit="ms",
            evidence="Recording UI timeout callback",
            file_offset=s_off("onRecordingTimeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "onWearTimeout",
            "ui",
            value_ms=None,
            value_raw="onWearTimeout",
            unit="ms",
            evidence="Wear-detect UI timeout",
            file_offset=s_off("onWearTimeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "private_chat_timer_intervals",
            "ui",
            value_ms=None,
            value_raw="private chat case N, timer interval:%d",
            unit="ms",
            evidence="Three private-chat timer interval logs (runtime %d)",
            file_offset=s_off("private chat case 1, timer interval:%d"),
            confidence="low",
        )
    )
    entries.append(
        entry(
            "message_clear_timeout",
            "ui",
            value_ms=None,
            value_raw="single message timeout and needs to be cleared",
            unit="ms",
            evidence="timer_message_{ext,min,max}_callback / reset_message_timer",
            file_offset=s_off("single message timeout and needs to be cleared"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "Launcher_hide_dock_timer",
            "ui",
            value_ms=None,
            value_raw="pauseDockTimer / resume hide dock timer",
            unit="ms",
            evidence="LauncherViewController dock hide timer",
            file_offset=s_off("pauseDockTimer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "NaviPage_autoScrollTimer",
            "ui",
            value_ms=None,
            value_raw="autoScrollTimerCb",
            unit="ms",
            evidence="NaviPage autoScrollTimerCb / hide timer",
            file_offset=s_off("autoScrollTimerCb"),
            confidence="medium",
        )
    )

    # ── sensor ───────────────────────────────────────────────────────────
    entries.append(
        entry(
            "STK501XX_WEAR_DAEMON_TIMER",
            "sensor",
            value_ms=100,
            value_raw="0x64",
            unit="ms",
            evidence=(
                "Named timer string @ file 0x148C28; Capstone near SRAM-alias "
                "literal pool use: movs r1,#0x64; bl 0x2C62BDD8 @ VA 0x2C5296CC "
                "(osTimerStart-class) — 100 ms wear-daemon period"
            ),
            file_offset="0x5296CC",
            confidence="high",
        )
    )
    entries.append(
        entry(
            "STK501XX_FAR_CHECK_TIMER",
            "sensor",
            value_ms=None,
            value_raw="STK501XX_FAR_CHECK_TIMER",
            unit="ms",
            evidence="Named far-check timer; period UNRECOVERED",
            file_offset=s_off("STK501XX_FAR_CHECK_TIMER"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "STK501XX_TRACE_DATA_TIMER",
            "sensor",
            value_ms=None,
            value_raw="STK501XX_TRACE_DATA_TIMER",
            unit="ms",
            evidence="Named trace-data timer",
            file_offset=s_off("STK501XX_TRACE_DATA_TIMER"),
            confidence="medium",
        )
    )
    for name in (
        "stk5115_wdt_timer",
        "stk5115_stk_timer",
        "stk5115_phase_timer",
        "stk5115_alg_timer",
        "SAR_TIMER",
        "SAR_TIMER_51155",
        "SAR_TIMER_51158",
        "SAR_TIMER_51155_4pad",
    ):
        entries.append(
            entry(
                name,
                "sensor",
                value_ms=None,
                value_raw=name,
                unit="ms",
                evidence=f"Named SAR/STK timer object '{name}'",
                file_offset=s_off(name),
                confidence="medium",
            )
        )
    entries.append(
        entry(
            "sensor_hub_ping_mcu_timer",
            "sensor",
            value_ms=None,
            value_raw="sensor_hub_ping_mcu_timer",
            unit="ms",
            evidence="app_sensor_hub_core_timer_init / hub↔MCU ping timer",
            file_offset=s_off("sensor_hub_ping_mcu_timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "wear_detect_not_wearing_timer",
            "sensor",
            value_ms=None,
            value_raw="not_wearing_timer_handler",
            unit="ms",
            evidence="FWK-Wear_detect not_wearing_timer_handler / xjxr_wear_unknown_timer_handler",
            file_offset=s_off("not_wearing_timer_handler"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "timer_helper_period_6000",
            "sensor",
            value_ms=6000,
            value_raw="0x1770",
            unit="ms",
            evidence=(
                "Capstone movw r1,#0x1770; bl 0x2C62BDD8 @ file 0x5CF852 — "
                "6 s osTimerStart-class period (nearby sensor/protocol cluster)"
            ),
            file_offset="0x5CF852",
            confidence="medium",
        )
    )

    # ── power ────────────────────────────────────────────────────────────
    entries.append(
        entry(
            "Drain_timeout",
            "power",
            value_ms=None,
            value_raw="Drain timeout: level=%u status=0x%08X",
            unit="ms",
            evidence="Power/drain path timeout log with level+status",
            file_offset=s_off("Drain timeout: level=%u status=0x%08X"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "battery_info_timer",
            "power",
            value_ms=None,
            value_raw="battery_info_timer",
            unit="ms",
            evidence="Named battery info periodic timer",
            file_offset=s_off("battery_info_timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "BATTERSTATS_TIMER",
            "power",
            value_ms=None,
            value_raw="BATTERSTATS_TIMER",
            unit="ms",
            evidence="start_batterystats_timer / BATTERSTATS_TIMER (typo BATTER)",
            file_offset=s_off("BATTERSTATS_TIMER"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "dump_battery_info_timer",
            "power",
            value_ms=None,
            value_raw="dump_battery_info_timer",
            unit="ms",
            evidence="Named dump battery info timer",
            file_offset=s_off("dump_battery_info_timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "SYSTEM_SLEEP_AGAIN_TIMER",
            "power",
            value_ms=None,
            value_raw="SYSTEM_SLEEP_AGAIN_TIMER",
            unit="ms",
            evidence="xjxr_sleep_confirm_timer / SYSTEM_SLEEP_AGAIN_TIMER",
            file_offset=s_off("SYSTEM_SLEEP_AGAIN_TIMER"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "pmu_pwrkey_check_timer",
            "power",
            value_ms=None,
            value_raw="pmu_pwrkey_check_timer",
            unit="ms",
            evidence="PMU power-key check timer",
            file_offset=s_off("pmu_pwrkey_check_timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "gra_wakelock_timeout",
            "power",
            value_ms=None,
            value_raw="gra_wakelock_timeout",
            unit="ms",
            evidence="Graphics/system wakelock timeout symbol",
            file_offset=s_off("gra_wakelock_timeout"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "temp_monitor_timer",
            "power",
            value_ms=None,
            value_raw="temp_monitor_timer_cb",
            unit="ms",
            evidence="Temperature monitor timer callback / panel temp timer strings",
            file_offset=s_off("temp_monitor_timer_cb"),
            confidence="medium",
        )
    )

    # ── factory / delay APIs ─────────────────────────────────────────────
    entries.append(
        entry(
            "osDelay",
            "factory",
            value_ms=None,
            value_raw="osDelay",
            unit="ticks",
            evidence="CMSIS-RTOS2 osDelay export string @ cmsis_os2 cluster",
            file_offset=s_off("osDelay\x00") if find_str(m55, b"osDelay\x00") >= 0 else s_off("osDelay"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "osDelayUntil",
            "factory",
            value_ms=None,
            value_raw="osDelayUntil",
            unit="ticks",
            evidence="CMSIS-RTOS2 osDelayUntil export string",
            file_offset=s_off("osDelayUntil"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "msleep",
            "factory",
            value_ms=None,
            value_raw="Usage: msleep delay_ms",
            unit="ms",
            evidence="Eshell msleep command — caller-supplied delay_ms",
            file_offset=s_off("Usage: msleep delay_ms"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "shell_sleep",
            "factory",
            value_ms=None,
            value_raw="shell_sleep",
            unit="ms",
            evidence="Eshell shell_sleep command alias",
            file_offset=s_off("shell_sleep"),
            confidence="high",
        )
    )
    entries.append(
        entry(
            "ESHELL_SLEEP_TIMER",
            "factory",
            value_ms=None,
            value_raw="ESHELL_SLEEP_TIMER",
            unit="ms",
            evidence="eshell_sleep_timer_id / ESHELL_SLEEP_TIMER",
            file_offset=s_off("ESHELL_SLEEP_TIMER"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "ITEM_TIMEOUT",
            "factory",
            value_ms=None,
            value_raw="ITEM_TIMEOUT / item:%s timeout",
            unit="ms",
            evidence="Factory/MMI item timeout status",
            file_offset=s_off("ITEM_TIMEOUT"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "cpu_usage_timer",
            "factory",
            value_ms=None,
            value_raw="cpu_usage_timer",
            unit="ms",
            evidence="show_threads_usage periodic cpu_usage_timer",
            file_offset=s_off("cpu_usage_timer"),
            confidence="medium",
        )
    )
    entries.append(
        entry(
            "hal_key_debounce_timer",
            "factory",
            value_ms=None,
            value_raw="hal_key_debounce_timer_restart",
            unit="ms",
            evidence="Failed to alloc key debounce timer / restart — input debounce",
            file_offset=s_off("hal_key_debounce_timer_restart"),
            confidence="low",
        )
    )

    # Capstone 3000 / 5000 / 10000 samples as recovered period constants
    entries.append(
        entry(
            "movw_period_3000_cluster",
            "protocol",
            value_ms=3000,
            value_raw="0xBB8",
            unit="ms",
            evidence=(
                "Multiple Capstone movw #0xbb8 sites (e.g. file 0x470C78, 0x4859B4) — "
                "3 s period immediates; specific named binding UNRECOVERED"
            ),
            file_offset="0x470C78",
            confidence="low",
        )
    )
    entries.append(
        entry(
            "movw_period_5000_cluster",
            "protocol",
            value_ms=5000,
            value_raw="0x1388",
            unit="ms",
            evidence="Multiple Capstone movw #0x1388 sites (e.g. file 0x4ACC68) — 5 s periods",
            file_offset="0x4ACC68",
            confidence="low",
        )
    )
    entries.append(
        entry(
            "movw_period_10000_cluster",
            "protocol",
            value_ms=10000,
            value_raw="0x2710",
            unit="ms",
            evidence="Multiple Capstone movw #0x2710 sites (e.g. file 0x46FEE2) — 10 s periods",
            file_offset="0x46FEE2",
            confidence="low",
        )
    )

    # ── BTH skim (note only; same leaf catalog) ──────────────────────────
    bth_names = [
        ("APP_FAST_BLE_ADV_TIMEOUT_TIMER", "protocol"),
        ("APP_CUSTOM_CMD_RSP_SUPERVISION_TIMER", "protocol"),
        ("APP_BLE_UPDATE_CI_TIMEOUT", "protocol"),
        ("BT_SCO_RECOV_TIMER", "protocol"),
        ("BT_DEVICE_CONNECT_TIMER0", "protocol"),
        ("BT_PROFILE_CONNECT_TIMER0", "protocol"),
        ("APP_A2DP_DELAY_RECONNECT_TIMER", "audio"),
        ("APP_AVRCP_RECONNECT_TIMER0", "audio"),
        ("APP_BT_STREAM_TRIGGER_TIMEOUT", "audio"),
        ("GAPC_TIMER", "protocol"),
        ("hci_cmd_wait_complete_timeout", "protocol"),
        ("wdt_ping_timer_bth", "system_wdt"),
    ]
    for name, cat in bth_names:
        key = "wdt_ping_timer" if name.endswith("_bth") else name
        off = find_str(bth, key)
        entries.append(
            entry(
                name,
                cat,
                value_ms=None,
                value_raw=key,
                unit="ms",
                evidence=(
                    f"BTH binary string '{key}' @ best1600_watch_bth.bin; "
                    "period not extracted in this leaf (skim only)"
                ),
                file_offset=off_hex(off) if off >= 0 else "UNRECOVERED",
                confidence="low",
                binary="bth",
            )
        )

    return entries


def scan_extra_strings(m55: bytes, existing: set[str]) -> list[dict]:
    """Add additional distinct timeout/wdt/timer symbol-like strings not already curated."""
    pat = re.compile(rb"[\x20-\x7e]{6,80}")
    extras: list[dict] = []
    # Prefer symbol-like names
    sym_re = re.compile(
        r"(?i)^(?=.*(?:timeout|watchdog|_wdt|wdt_|_timer|Timer))[A-Za-z][A-Za-z0-9_:]{3,60}$"
    )
    cat_rules = [
        ("system_wdt", ("wdt", "watchdog")),
        ("display", ("jbd", "lvgl", "display", "screen_off", "panel")),
        ("sensor", ("sar", "stk", "wear", "sensor", "sensing")),
        ("audio", ("audio", "anc", "a2dp", "avrcp", "tts", "asr", "music", "aw883", "dsp wdt", "mute")),
        ("power", ("battery", "pmu", "sleep", "wakelock", "temp_monitor", "drain")),
        ("factory", ("utest", "eshell", "msleep", "shell_sleep", "cpu_usage", "item_timeout")),
        ("ui", ("timer", "timeout", "fallback", "phone", "launcher", "navi", "prompt")),
        ("protocol", ("ota", "spp", "bond", "channel", "starry", "ble", "bt_", "ping", "ack", "ios")),
    ]

    def categorize(s: str) -> str:
        low = s.lower()
        for cat, keys in cat_rules:
            if any(k in low for k in keys):
                return cat
        return "protocol"

    seen = set(existing)
    for m in pat.finditer(m55):
        s = m.group().decode("ascii", "ignore")
        if not sym_re.match(s):
            continue
        # skip CMSIS/FreeRTOS boilerplate noise
        if s.startswith(("xTimer", "vTimer", "pcTimer", "prv", "osTimer", "HWTIMER", "Evr")):
            continue
        if s in seen:
            continue
        if s.count("_") == 0 and not s.endswith(("Timeout", "Timer", "timeout", "timer")):
            continue
        seen.add(s)
        extras.append(
            entry(
                s[:80],
                categorize(s),
                value_ms=None,
                value_raw=s,
                unit="ms",
                evidence=f"M55 printable symbol-like string match for timeout/wdt/timer",
                file_offset=off_hex(m.start()),
                confidence="low",
            )
        )
        if len(extras) >= 30:
            break
    return extras


def main() -> int:
    m55 = M55.read_bytes()
    bth = BTH.read_bytes()
    entries = curated(m55, bth)
    existing = {e["name"] for e in entries}
    # Ensure ≥40 from curated alone; extras pad uniqueness
    if len(entries) < 45:
        entries.extend(scan_extra_strings(m55, existing))

    # Dedup by name keeping higher confidence
    rank = {"high": 3, "medium": 2, "low": 1}
    by_name: dict[str, dict] = {}
    for e in entries:
        prev = by_name.get(e["name"])
        if prev is None or rank.get(e["confidence"], 0) > rank.get(prev["confidence"], 0):
            by_name[e["name"]] = e
    entries = sorted(by_name.values(), key=lambda e: (e["category"], e["name"]))

    cat_counts = {c: 0 for c in CATEGORIES}
    numeric = []
    for e in entries:
        cat_counts[e["category"]] = cat_counts.get(e["category"], 0) + 1
        if e["value_ms"] is not None:
            numeric.append((e["name"], e["value_ms"], e["unit"]))

    doc = {
        "firmware": {
            "m55": "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
            "bth": "Reverse/firmware/x_1.0.12.83/best1600_watch_bth.bin",
            "xip_base": hex(XIP),
        },
        "leaf": "leaf-1.2.1",
        "entry_count": len(entries),
        "category_counts": cat_counts,
        "numeric_ms_recovered": [
            {"name": n, "value_ms": v, "unit": u} for n, v, u in numeric if u in ("ms", "s") or v is not None
        ],
        "entries": entries,
    }
    OUT.write_text(json.dumps(doc, indent=2) + "\n")
    print(f"wrote {OUT} entries={len(entries)}")
    print("category_counts", json.dumps(cat_counts))
    print("numeric", json.dumps(doc["numeric_ms_recovered"], indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
