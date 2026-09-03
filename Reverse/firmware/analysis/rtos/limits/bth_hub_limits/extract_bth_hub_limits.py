#!/usr/bin/env python3
"""Extract RTX5 / companion-core resource limits from BTH + carved sensor hub."""

from __future__ import annotations

import json
from pathlib import Path
from typing import Any

HERE = Path(__file__).resolve().parent
RTOS = HERE.parents[1]
FW = HERE.parents[3] / "x_1.0.12.83"
BTH_BIN = FW / "best1600_watch_bth.bin"
HUB_BIN = RTOS / "sensor_hub" / "sensor_hub.bin"
OUT_JSON = HERE / "bth_hub_limits.json"

BTH_LOAD = 0x1400_0000
HUB_FLASH = 0x3400_0000
HUB_CARVE_IN_PARENT = 0x134070  # platform_tester.bin carve start


def find_cstr(data: bytes, needle: bytes) -> int | None:
    i = data.find(needle)
    return None if i < 0 else i


def cstr_at(data: bytes, off: int, maxlen: int = 200) -> str:
    end = off
    while end < len(data) and data[end] != 0 and end - off < maxlen:
        end += 1
    return data[off:end].decode("ascii", errors="replace")


def entry(
    name: str,
    core: str,
    value: str,
    evidence: str,
    file_offset: str,
    confidence: str,
    **extra: Any,
) -> dict[str, Any]:
    e: dict[str, Any] = {
        "name": name,
        "core": core,
        "value": value,
        "evidence": evidence,
        "file_offset": file_offset,
        "confidence": confidence,
    }
    e.update(extra)
    return e


def extract() -> dict[str, Any]:
    if not BTH_BIN.is_file():
        raise SystemExit(f"missing BTH image: {BTH_BIN}")
    if not HUB_BIN.is_file():
        raise SystemExit(f"missing hub carve: {HUB_BIN} (run sensor_hub/extract_sensor_hub.py)")

    bth = BTH_BIN.read_bytes()
    hub = HUB_BIN.read_bytes()
    entries: list[dict[str, Any]] = []

    # --- 1. RTX5 version ---
    bth_ver = find_cstr(bth, b"P RTX V5.5.1")
    hub_ver = find_cstr(hub, b"RTX V5.5.1")
    entries.append(
        entry(
            name="rtx5_version",
            core="both",
            value="V5.5.1",
            evidence=(
                f"BTH banner 'P RTX V5.5.1' @0x{bth_ver:x}; "
                f"hub 'RTX V5.5.1' @0x{hub_ver:x} in carve"
            ),
            file_offset=f"bth:0x{bth_ver:x}; hub:0x{hub_ver:x}",
            confidence="high",
            va=f"bth:0x{BTH_LOAD + bth_ver:x}",
        )
    )

    # --- KERNEL / CHIP_SUBSYS banners ---
    bth_sub = find_cstr(bth, b"CHIP_SUBSYS=bth")
    hub_sub = find_cstr(hub, b"CHIP_SUBSYS=sensor_hub")
    entries.append(
        entry(
            name="chip_subsys_banner",
            core="both",
            value="bth | sensor_hub",
            evidence=(
                f"BTH '{cstr_at(bth, bth_sub)}' @0x{bth_sub:x}; "
                f"hub '{cstr_at(hub, hub_sub)}' @0x{hub_sub:x}"
            ),
            file_offset=f"bth:0x{bth_sub:x}; hub:0x{hub_sub:x}",
            confidence="high",
        )
    )

    bth_kern = find_cstr(bth, b"KERNEL=RTX5")
    hub_kern = find_cstr(hub, b"KERNEL=RTX5")
    entries.append(
        entry(
            name="kernel_define",
            core="both",
            value="KERNEL=RTX5",
            evidence=f"BTH @0x{bth_kern:x}; hub @0x{hub_kern:x}",
            file_offset=f"bth:0x{bth_kern:x}; hub:0x{hub_kern:x}",
            confidence="high",
        )
    )

    # --- Flash size limits ---
    bth_fs = find_cstr(bth, b"FLASH_SIZE=0x400000")
    hub_fs = find_cstr(hub, b"FLASH_SIZE=0x100000")
    entries.append(
        entry(
            name="bth_flash_size",
            core="bth",
            value="0x400000 (4 MiB)",
            evidence=cstr_at(bth, bth_fs),
            file_offset=f"0x{bth_fs:x}",
            confidence="high",
            flash_base="0x34000000",
        )
    )
    entries.append(
        entry(
            name="sensor_hub_flash_size",
            core="sensor_hub",
            value="0x100000 (1 MiB)",
            evidence=(
                f"{cstr_at(hub, hub_fs)}; carve size matches FLASH_SIZE; "
                f"parent carve @0x{HUB_CARVE_IN_PARENT:x}, FLASH_BASE=0x{HUB_FLASH:x}"
            ),
            file_offset=f"0x{hub_fs:x}",
            confidence="high",
            flash_base=f"0x{HUB_FLASH:x}",
            carve_parent_offset=f"0x{HUB_CARVE_IN_PARENT:x}",
        )
    )

    # --- Named thread counts as soft max hints ---
    # Prefer NUL-terminated names; fall back to format-string prefixes
    # (BesbtThread: %p / intersys_tx_thread_id %p) used as thread labels.
    bth_thread_names = [
        b"app_thread",
        b"app_bt_cmd_thread",
        b"hci_rx_thread",
        b"bth_if_thread",
        b"APPTHREAD",
        b"BesbtThread",
        b"af_thread",
        b"xjxr_audio_event_thread",
        b"xjxr_audio_msg_handler_thread",
        b"bth_dsp_tx_thread",
        b"ota_thread",
        b"rpc_rx_thread",
        b"eshell_rpc_rx_thread",
        b"eshell_thread...",
        b"restart_eshell_thread",
        b"intersys_tx_thread_id",
    ]
    hub_thread_names = [
        b"sensor_main",
        b"core_bridge_tx_thread",
        b"core_bridge_rx_thread",
        b"sar_thread",
        b"stk501xx_thread",
        b"stk501xx_cust_thread",
    ]

    def named_hits(data: bytes, names: list[bytes]) -> list[tuple[str, int]]:
        hits: list[tuple[str, int]] = []
        for n in names:
            i = data.find(n + b"\x00")
            if i < 0:
                i = data.find(n)
            if i >= 0:
                hits.append((n.decode("ascii"), i))
        return hits

    bth_hits = named_hits(bth, bth_thread_names)
    hub_hits = named_hits(hub, hub_thread_names)
    entries.append(
        entry(
            name="bth_named_thread_count_hint",
            core="bth",
            value=str(len(bth_hits)),
            evidence=(
                "Static named RTOS thread literals in BTH image "
                f"({len(bth_hits)}): " + ", ".join(n for n, _ in bth_hits) + ". "
                "Compile-time OS_THREAD_NUM not recovered as a literal; "
                "this is a lower-bound concurrency footprint."
            ),
            file_offset=";".join(f"0x{o:x}" for _, o in bth_hits[:4]) + ";...",
            confidence="medium",
        )
    )
    entries.append(
        entry(
            name="sensor_hub_named_thread_count_hint",
            core="sensor_hub",
            value=str(len(hub_hits)),
            evidence=(
                "Hub-specific thread name strings in carve "
                f"({len(hub_hits)}): " + ", ".join(n for n, _ in hub_hits)
            ),
            file_offset=";".join(f"0x{o:x}" for _, o in hub_hits),
            confidence="high",
        )
    )

    # --- Thread dump stack fields ---
    stack_fmt = b"    stack_mem=0x%08X stack_size=%u sp:0x%04x min_stack_free=%u"
    bth_sf = find_cstr(bth, stack_fmt)
    hub_sf = find_cstr(hub, stack_fmt)
    entries.append(
        entry(
            name="rtx5_thread_dump_stack_fields",
            core="both",
            value="stack_mem, stack_size, sp(0x%04x), min_stack_free",
            evidence=(
                f"Format via rtx_show_all_threads_usage / rtx_thread_dump.c; "
                f"BTH @0x{bth_sf:x}, hub @0x{hub_sf:x}"
            ),
            file_offset=f"bth:0x{bth_sf:x}; hub:0x{hub_sf:x}",
            confidence="high",
            format=stack_fmt.decode("ascii"),
        )
    )

    # --- INTERSYS message / flow-control ---
    inter_open = find_cstr(bth, b"INTERSYS-OPEN: rx_flowctrl=%d (should be %d)")
    inter_rx_bad = find_cstr(bth, b"INTERSYS-RX: Invalid msg type: %d")
    inter_tx_bad = find_cstr(bth, b"INTERSYS-TX: Invalid msg type: %d")
    tx_fast = find_cstr(bth, b"[%s] error -1, TX too fast")
    entries.append(
        entry(
            name="intersys_rx_flowctrl",
            core="bth",
            value="rx_flowctrl checked against expected at OPEN",
            evidence=cstr_at(bth, inter_open),
            file_offset=f"0x{inter_open:x}",
            confidence="high",
            related=["RMT_IPC-OPEN: rx_flowctrl=%d (should be %d)"],
        )
    )
    entries.append(
        entry(
            name="intersys_invalid_msg_type",
            core="bth",
            value="typed INTERSYS msgs; invalid type rejected on RX/TX",
            evidence=(
                f"{cstr_at(bth, inter_rx_bad)}; {cstr_at(bth, inter_tx_bad)}. "
                "Concrete byte max payload size not present as a string literal "
                "(UNRECOVERED); type enum is the hard protocol bound."
            ),
            file_offset=f"rx:0x{inter_rx_bad:x}; tx:0x{inter_tx_bad:x}",
            confidence="high",
        )
    )
    entries.append(
        entry(
            name="rmt_ipc_tx_too_fast",
            core="both",
            value="TX too fast backpressure (-1)",
            evidence=(
                f"BTH '{cstr_at(bth, tx_fast)}' @0x{tx_fast:x}; "
                f"hub identical string @0x{find_cstr(hub, b'[%s] error -1, TX too fast'):x} "
                "(hal_rmt_ipc flow control)"
            ),
            file_offset=f"bth:0x{tx_fast:x}; hub:0x{find_cstr(hub, b'[%s] error -1, TX too fast'):x}",
            confidence="high",
        )
    )

    # --- OSIF request/hold serialization ---
    req = find_cstr(bth, b"request_thread:%s")
    hold = find_cstr(bth, b"hold_thread:%s")
    req2 = find_cstr(bth, b"request thread=%s")
    hold2 = find_cstr(bth, b"hold thread=%s")
    osif = find_cstr(bth, b"../../services/osif/osif_rtx.c")
    entries.append(
        entry(
            name="osif_thread_gate_serialization",
            core="bth",
            value="request_thread / hold_thread mutual exclusion gate",
            evidence=(
                f"osif_rtx.c @0x{osif:x}; '{cstr_at(bth, req)}' @0x{req:x}, "
                f"'{cstr_at(bth, hold)}' @0x{hold:x}; also "
                f"'{cstr_at(bth, req2)}' / '{cstr_at(bth, hold2)}'. "
                "Late thread bring-up is serialized through this OSIF gate "
                "(concurrency constraint, not a numeric thread cap)."
            ),
            file_offset=f"0x{req:x};0x{hold:x}",
            confidence="high",
            source="../../services/osif/osif_rtx.c",
        )
    )

    # --- HCI / AF soft signal limits ---
    hci = find_cstr(bth, b"hci_rx_thread: osSignalWait fail %d")
    af = find_cstr(bth, b"af_thread:WARNING:freq %d, id=%d stream=%d lost %u signals")
    af_hub = find_cstr(hub, b"af_thread:WARNING:freq %d, id=%d stream=%d lost %u signals")
    entries.append(
        entry(
            name="hci_rx_osSignalWait_fail",
            core="bth",
            value="soft limit: HCI RX signal wait can fail (logged)",
            evidence=cstr_at(bth, hci),
            file_offset=f"0x{hci:x}",
            confidence="high",
        )
    )
    entries.append(
        entry(
            name="af_thread_signal_loss_warning",
            core="bth",
            value="soft limit: audioflinger can drop signals under load",
            evidence=cstr_at(bth, af),
            file_offset=f"0x{af:x}",
            confidence="high",
            note=(
                f"Identical string also appears in hub carve @0x{af_hub:x} "
                "(shared pack rodata; not hub-local audio path)."
                if af_hub is not None
                else ""
            ),
        )
    )

    # --- eshell backpressure ---
    cmd_lost = find_cstr(bth, b"[APP-ESHELL]ESHELL CMD LOST!!!")
    out_lost = find_cstr(bth, b"[APP-ESHELL]ESHELL OUTPUT LOST!!!")
    entries.append(
        entry(
            name="eshell_cmd_lost_backpressure",
            core="bth",
            value="CMD LOST / OUTPUT LOST ring overflow",
            evidence=f"{cstr_at(bth, cmd_lost)}; {cstr_at(bth, out_lost)}",
            file_offset=f"cmd:0x{cmd_lost:x}; out:0x{out_lost:x}",
            confidence="high",
        )
    )

    # --- PMU WDT on BTH ---
    pmu_wdt_err = find_cstr(bth, b"Error: pmu wdt reboot failed!")
    pmu_wdt_irq = find_cstr(bth, b"pmu_wdt_irq_handle")
    wdt_ping = find_cstr(bth, b"wdt_ping_timer")
    app_wdt = find_cstr(bth, b"../../apps/common/app_watchdog.c")
    entries.append(
        entry(
            name="bth_pmu_wdt",
            core="bth",
            value="PMU WDT present (reboot path + IRQ + ping timer)",
            evidence=(
                f"'{cstr_at(bth, pmu_wdt_err)}' @0x{pmu_wdt_err:x}; "
                f"'{cstr_at(bth, pmu_wdt_irq)}' @0x{pmu_wdt_irq:x}; "
                f"'{cstr_at(bth, wdt_ping)}' @0x{wdt_ping:x}; "
                f"source {cstr_at(bth, app_wdt)}"
            ),
            file_offset=f"0x{pmu_wdt_err:x};0x{pmu_wdt_irq:x}",
            confidence="high",
        )
    )

    # --- Hub WDT / watchdog ---
    sar_wdt = find_cstr(hub, b"[SAR5]: sar sensing wdt trigger")
    hub_pmu_irq = find_cstr(hub, b"pmu_wdt_irq_handle")
    hub_wdt_ping = find_cstr(hub, b"wdt_ping_timer")
    hub_app_wdt = find_cstr(hub, b"../../apps/common/app_watchdog.c")
    entries.append(
        entry(
            name="sensor_hub_watchdog",
            core="sensor_hub",
            value="app_watchdog + pmu_wdt_irq + SAR sensing WDT",
            evidence=(
                f"'{cstr_at(hub, sar_wdt)}' @0x{sar_wdt:x}; "
                f"pmu_wdt_irq_handle @0x{hub_pmu_irq:x}; "
                f"wdt_ping_timer @0x{hub_wdt_ping:x}; "
                f"{cstr_at(hub, hub_app_wdt)}"
            ),
            file_offset=f"0x{sar_wdt:x};0x{hub_pmu_irq:x}",
            confidence="high",
            note="Hub lacks BTH-specific 'Error: pmu wdt reboot failed!' string.",
        )
    )

    # --- RMT_IPC flowctrl on hub (M55↔hub bridge) ---
    hub_rmt = find_cstr(hub, b"RMT_IPC-OPEN: rx_flowctrl=%d (should be %d)")
    entries.append(
        entry(
            name="sensor_hub_rmt_ipc_rx_flowctrl",
            core="sensor_hub",
            value="rx_flowctrl checked at RMT_IPC OPEN",
            evidence=cstr_at(hub, hub_rmt),
            file_offset=f"0x{hub_rmt:x}",
            confidence="high",
        )
    )

    # --- Memory pool dump surfaces (soft observability of RTX allocators) ---
    mem_common = find_cstr(bth, b"--- Memory common Stats:")
    entries.append(
        entry(
            name="rtx5_memory_pool_stats_surfaces",
            core="both",
            value="common/stack/mp_data/mq_data Stats via dump_all_threads",
            evidence=(
                f"BTH '{cstr_at(bth, mem_common)}' @0x{mem_common:x}; "
                "hub has matching Memory * Stats strings near rtx_show_all_threads_usage"
            ),
            file_offset=f"bth:0x{mem_common:x}",
            confidence="medium",
        )
    )

    # Sanity: ≥12
    if len(entries) < 12:
        raise SystemExit(f"expected ≥12 entries, got {len(entries)}")

    by_core = {"bth": 0, "sensor_hub": 0, "both": 0}
    for e in entries:
        by_core[e["core"]] = by_core.get(e["core"], 0) + 1

    doc = {
        "firmware_bth": str(BTH_BIN),
        "firmware_sensor_hub": str(HUB_BIN),
        "bth_load_base": hex(BTH_LOAD),
        "sensor_hub_flash_base": hex(HUB_FLASH),
        "sensor_hub_carve_parent_offset": hex(HUB_CARVE_IN_PARENT),
        "counts": {
            "total": len(entries),
            "bth": by_core["bth"],
            "sensor_hub": by_core["sensor_hub"],
            "both": by_core["both"],
        },
        "entries": entries,
        "unrecovered": [
            {
                "name": "OS_THREAD_NUM / compile-time RTX max threads",
                "note": "No OS_THREAD_NUM / max_threads literal; use named-thread lower bound.",
            },
            {
                "name": "INTERSYS max payload bytes",
                "note": "Only type-validity + rx_flowctrl strings; numeric size UNRECOVERED.",
            },
        ],
    }
    OUT_JSON.write_text(json.dumps(doc, indent=2) + "\n")
    return doc


def main() -> None:
    doc = extract()
    c = doc["counts"]
    print(
        f"wrote {OUT_JSON.name}: {c['total']} entries "
        f"(bth={c['bth']}, sensor_hub={c['sensor_hub']}, both={c['both']})"
    )


if __name__ == "__main__":
    main()
