#!/usr/bin/env python3
"""Leaf 1.1.2: recover StandByView / LauncherViewController code from platform_tester.bin.

Writes Reverse/firmware/analysis/hud_ready/standby_view/standby_view.json.
Does not print the leaf verifier success token.
"""
from __future__ import annotations

import json
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE.parent / "scripts"))

from fw_common import (  # noqa: E402
    B,
    N,
    XIP,
    cstr_off,
    dec_ldr_literal,
    dword_xrefs,
    find_all,
    hexoff,
    prologue_hex,
    u16,
)

try:
    from capstone import CS_ARCH_ARM, CS_MODE_THUMB, Cs
except ImportError as e:  # pragma: no cover
    raise SystemExit("capstone is required") from e

MD = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
# star_air_lvgl rodata runtime VA = file_off + this delta (same as intern_sites.json)
RODATA_DELTA = 0x3BFD7C0C
RUNTIME_THUMB = 0x2C010000  # labeled separately from va_xip
INTERN_POOL = 0x198FFC
OUT = HERE / "standby_view.json"


def va_xip(file_off: int) -> str:
    return hexoff(XIP + file_off)


def is_push(off: int) -> bool:
    """Thumb PUSH T1 or PUSH.W T2 (STMDB sp!). fw_common's T2 mask never matches."""
    if off < 0 or off + 2 > N:
        return False
    hw = u16(off)
    if (hw & 0xFE00) == 0xB400:
        return True
    # PUSH.W: 1110 1001 0010 x101  (Rn=SP, L=0, typically W=1 → 0xE92D)
    if hw in (0xE92D, 0xE90D) and off + 4 <= N:
        return True
    return False


def lands(start: int, site: int, limit: int = 0x900) -> bool:
    hi = min(N, max(site + 8, start + 8))
    if hi - start > limit:
        hi = start + limit
    for ins in MD.disasm(B[start:hi], XIP + start):
        if ins.address - XIP == site:
            return True
        if ins.address - XIP > site:
            return False
    return False


def nearest_push(site: int, back: int = 0x800) -> int | None:
    o = site & ~1
    lo = max(0, o - back)
    while o >= lo:
        if is_push(o) and lands(o, site):
            return o
        o -= 2
    return None


def literal_refs(pool_off: int, window: int = 0x1010) -> list[tuple[int, int, str, int]]:
    out = []
    lo = max(0, pool_off - window) & ~1
    hi = min(N, pool_off + 8)
    for off in range(lo, hi, 2):
        r = dec_ldr_literal(off)
        if r and r[0] == pool_off:
            out.append((off, r[1], r[2], r[3]))
    return out


def true_cstr(text: str) -> int:
    """Prefer a true NUL-preceded start; else first exact match of text+NUL."""
    hits = cstr_off(text)
    if hits:
        return hits[0]
    pat = text.encode("ascii") + b"\x00"
    i = B.find(pat)
    if i < 0:
        raise SystemExit(f"string not found: {text!r}")
    return i


def recover_from_string(text: str) -> list[dict]:
    """LDR-literal sites whose pool word is file_off + RODATA_DELTA."""
    soff = true_cstr(text)
    rt = (RODATA_DELTA + soff) & 0xFFFFFFFF
    recs = []
    seen_fn = set()
    for pool in dword_xrefs(rt):
        for ldr_off, rd, form, sz in literal_refs(pool):
            fn = nearest_push(ldr_off)
            if fn is None:
                continue
            if fn in seen_fn:
                recs.append(
                    {
                        "string_file_off": hexoff(soff),
                        "ldr_file_off": hexoff(ldr_off),
                        "fn_file_off": hexoff(fn),
                        "dup": True,
                    }
                )
                continue
            seen_fn.add(fn)
            recs.append(
                {
                    "string_file_off": hexoff(soff),
                    "string_rt_va": hexoff(rt),
                    "pool_file_off": hexoff(pool),
                    "ldr_file_off": hexoff(ldr_off),
                    "ldr_form": form,
                    "rd": rd,
                    "fn_file_off": hexoff(fn),
                    "va_xip": va_xip(fn),
                    "prologue_hex": prologue_hex(fn, 8 if u16(fn) in (0xE92D, 0xE90D) else 4),
                    "dup": False,
                }
            )
    return recs, soff, rt


def fn_entry(
    name: str,
    file_off: int,
    kind: str,
    role: str,
    extra: dict | None = None,
) -> dict:
    hw = u16(file_off)
    n = 8 if hw in (0xE92D, 0xE90D) else 4
    # isOnStandByView is a 4-byte ldr.w leaf; keep 8 bytes so the verifier has payload
    n = max(n, 4)
    if hw in (0xE92D, 0xE90D):
        n = 8
    rec = {
        "name": name,
        "file_off": hexoff(file_off),
        "va_xip": va_xip(file_off),
        "prologue_hex": prologue_hex(file_off, n),
        "kind": kind,
        "role": role,
    }
    if extra:
        rec.update(extra)
    return rec


def intern_hunt(soff: int) -> dict:
    intern_id = soff - INTERN_POOL
    movw_hits = 0
    # MOVW T3 imm16 == intern_id only if encodable
    encodable = 0 <= intern_id <= 0xFFFF
    if encodable:
        o = 0
        while o + 4 <= N:
            hw1 = u16(o)
            hw2 = u16(o + 2)
            if (hw1 & 0xFBF0) == 0xF240 and (hw2 & 0x8000) == 0:
                imm = ((hw1 & 0xF) << 12) | (((hw1 >> 10) & 1) << 11) | (((hw2 >> 12) & 7) << 8) | (hw2 & 0xFF)
                if imm == intern_id:
                    movw_hits += 1
            o += 2
    return {
        "intern_pool": hexoff(INTERN_POOL),
        "intern_id": hexoff(intern_id & 0xFFFFFFFF),
        "encodable_imm16": encodable,
        "movw_sites": movw_hits,
        "dword_xip": len(dword_xrefs(XIP + soff)),
        "dword_alias_3c": len(dword_xrefs(0x3C000000 + soff)),
        "dword_rodata_delta": len(dword_xrefs((RODATA_DELTA + soff) & 0xFFFFFFFF)),
        "dword_file": len(dword_xrefs(soff)),
    }


def thumb_ptr_xrefs(file_off: int) -> list[int]:
    """Runtime Thumb pointers stored as file_off + 0x2C010000 | 1."""
    return dword_xrefs((RUNTIME_THUMB + file_off) | 1)


# Unique TRACE format strings → recovered containing functions
TRACE_TARGETS = [
    (
        "[Launcher]StandByView::createHintLabel moveLabelHint = %d",
        "StandByView::createHintLabel",
        "lifecycle",
        "builds the standby move-hint label; not idle-HUD-ready",
    ),
    (
        "[Launcher]StandByView::updateHintIndicatorStatus isHide = %d",
        "StandByView::updateHintIndicatorStatus",
        "other",
        "reads isHide and updates the hint indicator",
    ),
    (
        "[Launcher]StandByView::updateTipsViewAlign textWidth = %d",
        "StandByView::updateTipsViewAlign",
        "other",
        "realigns the standby tips row",
    ),
    (
        "[Launcher]StandByView:: onLauncherEnterCallback delay exec",
        "StandByView::onLauncherEnterCallback",
        "delay",
        "stock 100 ms delay callback after launcher enter; NOT the idle-HUD-ready signal",
    ),
    (
        "[Launcher]StandByView::showDisconnectHint isFirstShow = %d",
        "StandByView::showDisconnectHint",
        "other",
        "disconnect hint on the idle face",
    ),
    (
        "[Launcher]StandByView::onRingEvent keycode = %d",
        "StandByView::onRingEvent",
        "other",
        "ring key while standby is showing",
    ),
    (
        "[Launcher]StandByView::onSwipe direction = %d",
        "StandByView::onSwipe",
        "other",
        "swipe on standby (typically toward dock)",
    ),
    (
        "[Launcher]StandByView::handleConnectStatusChange isConnect %d",
        "StandByView::handleConnectStatusChange",
        "other",
        "BLE/BR connect status while on standby",
    ),
    (
        "[Launcher]StandByView::changeHideStatus isHide %d, isAnim %d",
        "StandByView::changeHideStatus",
        "switch",
        "show/hide standby chrome; switchView calls this with isHide==0 on enter standby",
    ),
    (
        "[Launcher]LauncherViewController::Create",
        "LauncherViewController::Create",
        "lifecycle",
        "constructs Dockview at +8 and StandByView at +0x148; stores current-view ptr +0x258 = standby",
    ),
    (
        "[Launcher]LauncherViewController::release",
        "LauncherViewController::release",
        "lifecycle",
        "tears down LVC",
    ),
    (
        "[Launcher]LauncherViewController::switchView isShowDock %d isAnim %d",
        "LauncherViewController::switchView",
        "switch",
                "isShowDock==0 -> standby (strb 0 at +0x260, str &standByView at +0x258); ==1 -> dock",
    ),
    (
        "[Launcher]LauncherViewController current on dockView, resume hide dock timer",
        "LauncherViewController::onExitRingHoldStatus",
        "other",
        "reads isShowDock byte at +0x260; if set, logs dockView and resumes hide-dock timer",
    ),
    (
        "[Launcher]createDefaultWidgets",
        "StandByWidgetManager::createDefaultWidgets",
        "lifecycle",
        "fills the standby widget grid; called from StandByWidgetManager ctor",
    ),
    (
        "[Launcher]createSpecWidgets, no space left, return",
        "StandByWidgetManager::createSpecWidgets",
        "lifecycle",
        "adds step-count/spec widgets when space remains; completion returns to caller",
    ),
    (
        "[Launcher]unbond, reset standby view widget to default status",
        "StandByWidgetManager::unBondReset",
        "lifecycle",
        "unbond path; tails into createDefaultWidgets",
    ),
    (
        "[Launcher]TipsModel:: onLauncherEnterCallback delay exec",
        "TipsModel::onLauncherEnterCallback",
        "delay",
        "second stock enter-delay (tips); also not idle-HUD-ready",
    ),
    (
        "launcher_is_on_standby_view.",
        "indev_xjxr_keypad_proc",
        "other",
        "indev TRACE when the standby predicate returns true; string is a log, not a SRAM symbol",
    ),
]


def recover_is_on_standby() -> int:
    """Leaf getter: ldr.w r2,[r0,#0x258]; compare to &r0+0x148."""
    pat = bytes.fromhex("d0f8582232b1")  # ldr.w r2,[r0,#0x258]; cbz r2
    hits = find_all(pat)
    # Prefer the site that switchView's current-view field lives next to (LVC code cluster)
    for h in hits:
        if 0x5D4F00 <= h <= 0x5D5000:
            return h
    if hits:
        return hits[0]
    raise SystemExit("isOnStandByView pattern not found")


def recover_delay_register(delay_fn: int) -> int | None:
    ptrs = thumb_ptr_xrefs(delay_fn)
    for p in ptrs:
        fn = nearest_push(p, back=0x80)
        if fn is not None:
            return fn
        # literal often sits just after a tiny function; walk back past the pool word
        fn = nearest_push(p - 2, back=0x80)
        if fn is not None:
            return fn
    return None


def main() -> None:
    functions: list[dict] = []
    callbacks: list[dict] = []
    recovered: dict[str, dict] = {}
    string_offs: dict[str, int] = {}

    for text, name, kind, role in TRACE_TARGETS:
        recs, soff, rt = recover_from_string(text)
        string_offs[name] = soff
        primaries = [r for r in recs if not r.get("dup")]
        if not primaries:
            raise SystemExit(f"no LDR-literal function for {text!r}")
        # Prefer the site whose LDR is closest to its prologue (real containing fn)
        primaries.sort(key=lambda r: int(r["ldr_file_off"], 16) - int(r["fn_file_off"], 16))
        best = primaries[0]
        fn = int(best["fn_file_off"], 16)
        recovered[name] = best
        extra = {
            "string_file_off": hexoff(soff),
            "ldr_file_off": best["ldr_file_off"],
            "trace_rt_va": hexoff(rt),
        }
        functions.append(fn_entry(name, fn, kind, role, extra))
        if kind == "delay" or "delay" in role.lower():
            callbacks.append(fn_entry(name, fn, "delay", role, extra))

    delay_fn = int(recovered["StandByView::onLauncherEnterCallback"]["fn_file_off"], 16)
    delay_reg = recover_delay_register(delay_fn)
    if delay_reg is not None:
        functions.append(
            fn_entry(
                "StandByView::registerOnLauncherEnterDelay",
                delay_reg,
                "delay",
                "lv_timer-style create(period=0x64=100) of StandByView::onLauncherEnterCallback; v6's 100 ms guess belongs here, not customTimeAndBatteryWidget",
                {"callback_file_off": hexoff(delay_fn), "timer_period_imm": "0x64"},
            )
        )
        callbacks.append(
            fn_entry(
                "StandByView::onLauncherEnterCallback",
                delay_fn,
                "delay",
                "function pointer stored at runtime-Thumb 0x2C010000+|1; registered with period 100",
                {"register_file_off": hexoff(delay_reg)},
            )
        )

    pred = recover_is_on_standby()
    functions.append(
        fn_entry(
            "LauncherViewController::isOnStandByView",
            pred,
            "other",
            "returns 1 iff this+0x258 == &this.standByView (+0x148). Real idle-HUD-showing predicate",
            {"encoding": "ldr.w r2,[r0,#0x258]; cbz; addw r3,r0,#0x148; clz/lsr"},
        )
    )

    # StandByWidgetManager ctor: first BL to createDefaultWidgets in 0x5db900-0x5db980
    defw = int(recovered["StandByWidgetManager::createDefaultWidgets"]["fn_file_off"], 16)
    spec = int(recovered["StandByWidgetManager::createSpecWidgets"]["fn_file_off"], 16)
    ctor = None
    for o in range(0x5DB900, 0x5DB980, 2):
        if is_push(o) and lands(o, o):  # push exists
            # disasm looking for bl defw
            for ins in MD.disasm(B[o : o + 0x80], XIP + o):
                if ins.mnemonic == "bl" and "#0x" in ins.op_str:
                    try:
                        t = int(ins.op_str.split("#")[-1], 16) - XIP
                    except ValueError:
                        continue
                    if t == defw:
                        ctor = o
                        break
            if ctor is not None:
                break
    if ctor is not None:
        functions.append(
            fn_entry(
                "StandByWidgetManager::ctor",
                ctor,
                "lifecycle",
                "StandByView init (+0x98) constructs the manager then BL createDefaultWidgets",
                {"calls_createDefaultWidgets": hexoff(defw)},
            )
        )

    # StandByView init from LVC::Create BL
    create_fn = int(recovered["LauncherViewController::Create"]["fn_file_off"], 16)
    sbv_init = None
    for ins in MD.disasm(B[create_fn : create_fn + 0x80], XIP + create_fn):
        if ins.mnemonic == "bl" and "#0x" in ins.op_str:
            try:
                t = int(ins.op_str.split("#")[-1], 16) - XIP
            except ValueError:
                continue
            if 0x5D4800 <= t <= 0x5D4900:
                sbv_init = t
                break
    if sbv_init is not None:
        functions.append(
            fn_entry(
                "StandByView::Create",
                sbv_init,
                "lifecycle",
                "LVGL root + StandByWidgetManager ctor at +0x98 + createHintLabel; called from LVC::Create",
                {"caller": "LauncherViewController::Create"},
            )
        )

    # Dedup by (name, file_off) keeping first
    uniq = []
    seen = set()
    for f in functions:
        k = (f["name"], f["file_off"])
        if k in seen:
            continue
        seen.add(k)
        uniq.append(f)
    functions = uniq

    cb_uniq = []
    seen = set()
    for c in callbacks:
        k = (c["name"], c["file_off"])
        if k in seen:
            continue
        seen.add(k)
        cb_uniq.append(c)
    callbacks = cb_uniq

    flag_off = true_cstr("launcher_is_on_standby_view.")
    hunt = intern_hunt(flag_off)
    indev = recovered["indev_xjxr_keypad_proc"]
    switch_off = int(recovered["LauncherViewController::switchView"]["fn_file_off"], 16)
    create_off = int(recovered["LauncherViewController::Create"]["fn_file_off"], 16)

    flags = [
        {
            "name": "launcher_is_on_standby_view",
            "string_file_off": hexoff(flag_off),
            "setters": [
                {
                    "name": "LauncherViewController::Create",
                    "file_off": hexoff(create_off),
                    "va_xip": va_xip(create_off),
                    "store": "str this+0x258, &this+0x148 (StandByView embed)",
                },
                {
                    "name": "LauncherViewController::switchView",
                    "file_off": hexoff(switch_off),
                    "va_xip": va_xip(switch_off),
                    "store": "strb isShowDock at this+0x260; str current-view at this+0x258",
                },
            ],
            "readers": [
                {
                    "name": "LauncherViewController::isOnStandByView",
                    "file_off": hexoff(pred),
                    "va_xip": va_xip(pred),
                    "load": "this+0x258 == &this+0x148",
                },
                {
                    "name": "indev_xjxr_keypad_proc",
                    "file_off": indev["fn_file_off"],
                    "va_xip": indev["va_xip"],
                    "load": "BL thunk then TRACE launcher_is_on_standby_view. when predicate is true",
                    "ldr_file_off": indev["ldr_file_off"],
                },
                {
                    "name": "LauncherViewController::onExitRingHoldStatus",
                    "file_off": recovered["LauncherViewController::onExitRingHoldStatus"]["fn_file_off"],
                    "load": "ldrb this+0x260 (isShowDock); dock path resumes hide-dock timer",
                },
            ],
            "status": "recovered",
            "note": (
                "The ASCII is a TRACE log in lv_indev_xjxr.c, not a named SRAM global. "
                "Attempted intern: MOVW imm16 + pool 0x198FFC needs id "
                f"{hunt['intern_id']} (encodable={hunt['encodable_imm16']}, movw_sites={hunt['movw_sites']}). "
                f"dword XIP={hunt['dword_xip']} ALIAS_3C={hunt['dword_alias_3c']} file={hunt['dword_file']}; "
                f"rodata-delta 0x3bfd7c0c hits={hunt['dword_rodata_delta']} (pool+LDR recovered). "
                "Stored state is LVC instance fields +0x258 (current-view pointer) and +0x260 (isShowDock byte). "
                "No standalone SRAM flag address is claimed."
            ),
            "intern_hunt": hunt,
            "widget_completion": {
                "createDefaultWidgets": hexoff(defw),
                "createSpecWidgets": hexoff(spec),
                "ctor_calls_createDefaultWidgets": hexoff(ctor) if ctor else None,
                "unBondReset_tails_to_createDefaultWidgets": True,
            },
        }
    ]

    doc = {
        "bin": "Reverse/firmware/x_1.0.12.83/platform_tester.bin",
        "va_xip_rule": "file_off + 0x2C000000",
        "rodata_runtime_delta": hexoff(RODATA_DELTA),
        "runtime_thumb_base": hexoff(RUNTIME_THUMB),
        "functions": functions,
        "callbacks": callbacks,
        "flags": flags,
    }
    OUT.write_text(json.dumps(doc, indent=2) + "\n")
    print(f"wrote {OUT} functions={len(functions)} callbacks={len(callbacks)}")


if __name__ == "__main__":
    main()
