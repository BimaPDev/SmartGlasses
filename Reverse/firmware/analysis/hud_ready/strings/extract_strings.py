#!/usr/bin/env python3
"""Rebuild hud-ready string inventory from platform_tester.bin.

Run from repo root:
  python3 Reverse/firmware/analysis/hud_ready/strings/extract_strings.py

Prints a short status line. Never prints leaf/delay verifier success tokens.
"""
from __future__ import annotations

import json
import struct
import sys
from pathlib import Path

SCRIPTS = Path(__file__).resolve().parent.parent / "scripts"
sys.path.insert(0, str(SCRIPTS))
import fw_common as fw  # noqa: E402

RODATA_DELTA = 0x3BFD7C0C
ALIAS = 0x3C000000
INTERN_POOL = 0x198FFC
OUT = Path(__file__).resolve().parent / "strings_inventory.json"
BIN_REL = "Reverse/firmware/x_1.0.12.83/platform_tester.bin"

# Curated catalog: idle-HUD-ready candidates, the stock DELAY, and known false positives.
# Offsets are measured from the binary at runtime; do not copy prose numbers.
CATALOG = [
    {
        "id": "launcher_onViewDidAppear",
        "ascii": "[Launcher]Launcher::onViewDidAppear",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "launcher_onViewDidDisappear",
        "ascii": "[Launcher]Launcher::onViewDidDisappear",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "launcher_onViewWillAppear",
        "ascii": "[Launcher]Launcher::onViewWillAppear",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "launcher_onViewLoad",
        "ascii": "[Launcher]Launcher::onViewLoad",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "onPageSwitchFinish",
        "ascii": "onPageSwitchFinish",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "onPageSwitchFinish_show_launcher",
        "ascii": "[Launcher]Launcher::onPageSwitchFinish, show launcher.",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "onPageSwitchFinish_starrynet",
        "ascii": "[Launcher]Launcher::onPageSwitchFinish not bond, show starrynet app.",
        "role": "pairing",
        "kind": "event",
    },
    {
        "id": "wait_starrynet_exit",
        "ascii": "[Launcher]current app is not launcher, wait for starrynet app exit",
        "role": "pairing",
        "kind": "event",
    },
    {
        "id": "flag_launcher_is_on_standby_view",
        "ascii": "launcher_is_on_standby_view.",
        "role": "flag",
        "kind": "flag",
    },
    {
        "id": "standby_onLauncherEnterCallback_delay_exec",
        "ascii": "[Launcher]StandByView:: onLauncherEnterCallback delay exec",
        "role": "delay",
        "kind": "delay",
    },
    {
        "id": "tips_onLauncherEnterCallback_delay_exec",
        "ascii": "[Launcher]TipsModel:: onLauncherEnterCallback delay exec",
        "role": "delay",
        "kind": "delay",
    },
    {
        "id": "onLauncherEnterCallback",
        "ascii": "onLauncherEnterCallback",
        "role": "delay",
        "kind": "delay",
    },
    {
        "id": "tips_onLauncherEnterCallback",
        "ascii": "[Launcher]TipsModel:: onLauncherEnterCallback",
        "role": "delay",
        "kind": "delay",
    },
    {
        "id": "standby_widgets_count",
        "ascii": "[Launcher]standby widgets count: %d",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "switchView_isShowDock",
        "ascii": "[Launcher]LauncherViewController::switchView isShowDock %d isAnim %d",
        "role": "dock",
        "kind": "event",
    },
    {
        "id": "hide_launcher_assistant",
        "ascii": "[Launcher]LauncherViewController::switchView assistant show, hide launcher",
        "role": "dock",
        "kind": "event",
    },
    {
        "id": "resume_hide_dock_timer",
        "ascii": "[Launcher]LauncherViewController current on dockView, resume hide dock timer",
        "role": "dock",
        "kind": "event",
    },
    {
        "id": "standby_changeHideStatus",
        "ascii": "[Launcher]StandByView::changeHideStatus isHide %d, isAnim %d",
        "role": "other",
        "kind": "event",
    },
    {
        "id": "createDefaultWidgets",
        "ascii": "createDefaultWidgets",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "launcher_createDefaultWidgets",
        "ascii": "[Launcher]createDefaultWidgets",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "createDefaultWidgets_widgetList",
        "ascii": "[Launcher]createDefaultWidgets widgetList size: %d",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "createSpecWidgets",
        "ascii": "createSpecWidgets",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "StandByView_cpp",
        "ascii": "../../thirdparty/star_air_lvgl/app/Pages/Launcher/view/StandByView.cpp",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "StandByWidgetManager_cpp",
        "ascii": "../../thirdparty/star_air_lvgl/app/Pages/Launcher/widget/StandByWidgetManager.cpp",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "customTimeAndBatteryWidget",
        "ascii": "customTimeAndBatteryWidget",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "unbond_reset_standby_widgets",
        "ascii": "[Launcher]unbond, reset standby view widget to default status",
        "role": "pairing",
        "kind": "event",
    },
    {
        "id": "SplashView_cpp",
        "ascii": "../../thirdparty/star_air_lvgl/app/Pages/Navigation/view/SplashView.cpp",
        "role": "splash",
        "kind": "other",
    },
    {
        "id": "Pages_StartupGuide",
        "ascii": "Pages/StartupGuide",
        "role": "splash",
        "kind": "other",
    },
    {
        "id": "StartupGuide",
        "ascii": "StartupGuide",
        "role": "splash",
        "kind": "other",
    },
    {
        "id": "lvgl_boot_completed",
        "ascii": "boot completed.\r\n",
        "role": "splash",
        "kind": "other",
    },
    {
        "id": "welcome_to_lvgl",
        "ascii": "Welcome to LVGL\r\n",
        "role": "splash",
        "kind": "other",
    },
    {
        "id": "launcher_onViewDidLoad",
        "ascii": "[Launcher]Launcher::onViewDidLoad",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "launcher_onViewDidUnload",
        "ascii": "[Launcher]Launcher::onViewDidUnload",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "launcher_onViewWillDisappear",
        "ascii": "[Launcher]Launcher::onViewWillDisappear",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "launcher_onViewUnload",
        "ascii": "[Launcher]Launcher::onViewUnload",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "flag_isLauncherAppOnTop",
        "ascii": "isLauncherAppOnTop",
        "role": "flag",
        "kind": "flag",
    },
    {
        "id": "tips_isLauncherShow",
        "ascii": "[Launcher]TipsModel::isConnect=%d, isLauncherShow=%d, isSuperAppInstall=%d, isPipShow=%d, isAssistantShow=%d, isWearOn=%d, isForceUpgradeModeOpen=%d, isShowDock=%d",
        "role": "flag",
        "kind": "flag",
    },
    {
        "id": "tips_wait_back_to_standby",
        "ascii": "[Launcher]TipsModel:: current show dock, wait for back to standby",
        "role": "dock",
        "kind": "event",
    },
    {
        "id": "tips_tts_extra_5s_delay",
        "ascii": "[Launcher]tts is speaking, add more 5 second to hide tips",
        "role": "delay",
        "kind": "delay",
    },
    {
        "id": "tips_delay_show_operation",
        "ascii": "[Launcher]TipsModel::delay show operation Tips since other type is showing",
        "role": "delay",
        "kind": "delay",
    },
    {
        "id": "dock_changeAppPos_isReady",
        "ascii": "[Launcher]DockviewV2::changeAppPos isReady: %d, isChangeSeq: %d",
        "role": "dock",
        "kind": "flag",
    },
    {
        "id": "in_starrynet_no_connect_toast",
        "ascii": "[Launcher]current in starrynet app, not show connect toast",
        "role": "pairing",
        "kind": "event",
    },
    {
        "id": "StateDidAppearExecute",
        "ascii": "StateDidAppearExecute",
        "role": "lifecycle",
        "kind": "event",
    },
    {
        "id": "disp_flush_area",
        "ascii": "disp_flush_area",
        "role": "other",
        "kind": "other",
    },
    {
        "id": "music_onViewDidLoad_turn_on_screen",
        "ascii": "onViewDidLoad turn on screen",
        "role": "splash",
        "kind": "event",
    },
]


def hx(off: int) -> str:
    return f"0x{off:x}"


def va_xip(off: int) -> str:
    return f"0x{fw.XIP + off:x}"


def decode_movw(off: int):
    """Thumb-2 MOVW T3. Returns (rd, imm16) or None."""
    if off + 4 > fw.N:
        return None
    hw1, hw2 = struct.unpack_from("<HH", fw.B, off)
    if (hw1 & 0xFBF0) != 0xF240:
        return None
    i = (hw1 >> 10) & 1
    imm4 = hw1 & 0xF
    imm3 = (hw2 >> 12) & 7
    rd = (hw2 >> 8) & 0xF
    imm8 = hw2 & 0xFF
    imm16 = (imm4 << 12) | (i << 11) | (imm3 << 8) | imm8
    return rd, imm16


def intern_ids_for(file_off: int) -> list[tuple[str, int]]:
    ids = []
    if 0 <= file_off < 0x10000:
        ids.append(("file_off16", file_off))
    if INTERN_POOL <= file_off < INTERN_POOL + 0x10000:
        ids.append(("pool_delta", file_off - INTERN_POOL))
    return ids


def is_push_fn(off: int) -> bool:
    """Thumb PUSH T1 (fw_common) plus PUSH.W T2 (0xE92D). fw_common's T2 mask never matches."""
    if fw.is_push_prologue(off):
        return True
    if off + 4 <= fw.N and fw.u16(off) == 0xE92D:
        return True
    return False


def containing_fn(off: int, back: int = 0x800) -> int | None:
    o = off & ~1
    lo = max(0, o - back)
    while o >= lo:
        if is_push_fn(o):
            return o
        o -= 2
    return None


def scan_movw_sites(want_imm: set[int]) -> dict[int, list[int]]:
    hits: dict[int, list[int]] = {i: [] for i in want_imm}
    o = 0
    n = fw.N
    b = fw.B
    while o + 4 <= n:
        hw1 = b[o] | (b[o + 1] << 8)
        if (hw1 & 0xFBF0) != 0xF240:
            o += 2
            continue
        decoded = decode_movw(o)
        if decoded:
            _rd, imm16 = decoded
            if imm16 in hits:
                hits[imm16].append(o)
            o += 4
            continue
        o += 2
    return hits


def ldr_to_pool(pool_off: int, window: int = 0x400) -> list[tuple[int, str, int]]:
    """LDR (literal) sites whose literal slot is `pool_off`."""
    sites = []
    lo = max(0, (pool_off - window) & ~1)
    p = lo
    while p < pool_off:
        dec = fw.dec_ldr_literal(p)
        if dec and dec[0] == pool_off:
            _lit, rt, form, size = dec
            sites.append((p, form, rt))
            p += size
            continue
        p += 2
    return sites


def recover_ldr_from_va(runtime_va: int) -> list[dict]:
    """LDR (literal) sites that load `runtime_va`.

    Per pool dword, keep the closest LDR before the pool (TRACE format/__FILE__
    pattern) and walk back to a Thumb PUSH / PUSH.W prologue. Mark UNRECOVERED
    rather than inventing when no LDR hits the pool.
    """
    out = []
    seen_fn: set[int] = set()
    for pool in fw.dword_xrefs(runtime_va):
        ldrs = ldr_to_pool(pool)
        if not ldrs:
            continue
        site, form, rt = max(ldrs, key=lambda t: t[0])
        fn = containing_fn(site)
        if fn is None:
            continue
        if fn in seen_fn:
            continue
        seen_fn.add(fn)
        out.append(
            {
                "file_off": hx(fn),
                "va_xip": va_xip(fn),
                "note": (
                    f"{form} @ {hx(site)} rt={rt} loads pool {hx(pool)} "
                    f"value {hx(runtime_va)}; containing-fn prologue {hx(fn)} "
                    f"bytes {fw.prologue_hex(fn, 4)}"
                ),
            }
        )
    return out


def recover_sites(file_off: int, movw_index: dict[int, list[int]]):
    """Try dword XIP, rodata-delta LDR-literal, then MOVW intern ids."""
    xip_va = fw.XIP + file_off
    alias_va = ALIAS + file_off
    rodata_va = (file_off + RODATA_DELTA) & 0xFFFFFFFF

    xip_dwords = fw.dword_xrefs(xip_va) + fw.dword_xrefs(xip_va + 1)
    alias_dwords = fw.dword_xrefs(alias_va)
    rodata_dwords = fw.dword_xrefs(rodata_va)

    ldr_sites = recover_ldr_from_va(rodata_va)
    if not ldr_sites:
        ldr_sites = recover_ldr_from_va(xip_va)
        if ldr_sites:
            return ldr_sites, "ldr_literal", "xip"
        ldr_sites = recover_ldr_from_va(alias_va)
        if ldr_sites:
            return ldr_sites, "ldr_literal", "alias"

    if ldr_sites:
        return ldr_sites, "ldr_literal", "rodata_delta"

    intern_sites = []
    for label, imm in intern_ids_for(file_off):
        for site in movw_index.get(imm, []):
            fn = containing_fn(site)
            if fn is None:
                continue
            intern_sites.append(
                {
                    "file_off": hx(fn),
                    "va_xip": va_xip(fn),
                    "note": (
                        f"MOVW intern {label} #{hx(imm)} @ {hx(site)}; "
                        f"containing-fn prologue {hx(fn)}. "
                        "Not treated as proven TRACE intern without a following "
                        "TRACE call; recorded only because no LDR-literal/dword site exists."
                    ),
                }
            )
    if intern_sites:
        return intern_sites, "intern_movw", "movw"

    if rodata_dwords or xip_dwords or alias_dwords:
        notes = []
        if rodata_dwords:
            notes.append(
                "rodata-delta dwords at " + ",".join(hx(p) for p in rodata_dwords[:8])
                + " (no Thumb LDR to those pools recovered)"
            )
        if xip_dwords:
            notes.append("XIP dwords at " + ",".join(hx(p) for p in xip_dwords[:4]))
        if alias_dwords:
            notes.append("alias dwords at " + ",".join(hx(p) for p in alias_dwords[:4]))
        return [], "dword_ptr", "; ".join(notes) if notes else "dword"

    return [], "unrecovered", (
        "TRACE intern / PIC: zero XIP dwords "
        f"({hx(xip_va)}), zero alias dwords ({hx(alias_va)}), "
        f"zero rodata-delta dwords ({hx(rodata_va)}), zero MOVW intern ids"
    )


def measure(ascii_text: str) -> int:
    hits = fw.cstr_off(ascii_text)
    if not hits:
        raise SystemExit(f"UNRECOVERED string (not a NUL-terminated start): {ascii_text!r}")
    return hits[0]


def main() -> int:
    want_imm: set[int] = set()
    measured: list[tuple[dict, int]] = []
    for item in CATALOG:
        off = measure(item["ascii"])
        measured.append((item, off))
        for _label, imm in intern_ids_for(off):
            want_imm.add(imm)

    movw_index = scan_movw_sites(want_imm) if want_imm else {}

    strings = []
    n_sites = 0
    n_unrec = 0
    for item, off in measured:
        sites, xref_kind, how = recover_sites(off, movw_index)
        if xref_kind == "unrecovered":
            n_unrec += 1
        if sites:
            n_sites += 1
        entry = {
            "id": item["id"],
            "ascii": item["ascii"],
            "file_off": hx(off),
            "va_xip": va_xip(off),
            "role": item["role"],
            "kind": item["kind"],
            "code_sites": sites,
            "xref_kind": xref_kind,
        }
        if xref_kind in ("dword_ptr", "unrecovered") and how:
            entry["xref_note"] = how
        strings.append(entry)

    inv = {
        "bin": BIN_REL,
        "xip": "0x2C000000",
        "rodata_delta": hex(RODATA_DELTA),
        "method": {
            "dword_xip": "scan LE dword 0x2C000000+file_off (and +1); typically ZERO for these strings",
            "rodata_delta": "scan LE dword file_off+0x3BFD7C0C, then LDR (literal) to that pool",
            "intern_movw": "MOVW imm16 = file_off (<0x10000) or file_off-0x198FFC; TRACE intern often has ZERO absolute xrefs — used only if LDR/dword fail",
        },
        "strings": strings,
    }
    OUT.write_text(json.dumps(inv, indent=2) + "\n", encoding="utf-8")
    rel = OUT.relative_to(fw.ROOT)
    print(
        f"wrote {rel} ({len(strings)} strings, "
        f"{n_sites} with code_sites, {n_unrec} xref_kind=unrecovered)"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
