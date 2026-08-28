#!/usr/bin/env python3
"""leaf 1.1.4 — recover Launcher / PageManager lifecycle TRACE sites.

Writes Reverse/firmware/analysis/hud_ready/page_ready/page_ready.json from
stock platform_tester.bin bytes. No bin patches. File offsets only.

Encoding recovered here (same as star_air_lvgl TRACE in intern_sites.json):
  runtime string VA = file_off + 0x3BFD7C0C
  code site         = LDR (literal) T1/T2 whose pool dword equals that VA

The 16-bit MOVW intern form (hud_map pool 0x198FFC) cannot address these
strings (file 0x191xxx is *before* the pool). That form is recorded as
UNRECOVERED because it is not the encoding, not because the strings are missing.
"""
from __future__ import annotations

import json
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
SCRIPTS = HERE.parent / "scripts"
sys.path.insert(0, str(SCRIPTS))

from fw_common import (  # noqa: E402
    B,
    N,
    ROOT,
    THUMB_RUNTIME,
    XIP,
    BIN_PATH,
    containing_fn,
    cstr_off,
    dec_ldr_literal,
    dword_xrefs,
    hexoff,
    is_push_prologue,
)

OUT = HERE / "page_ready.json"
RODATA_DELTA = 0x3BFD7C0C
HUD_POOL = 0x198FFC
LVGL_UI_ENTRY = 0x62F228
WAIT_HANDLER_BL = 0x62F2C2
WAIT_BACK_EDGE = 0x62F2D4

# (json name, exact NUL-terminated ascii, idle_hud, note)
TARGETS = [
    (
        "onViewLoad",
        "[Launcher]Launcher::onViewLoad",
        "no",
        "Launcher.cpp TRACE at the start of onViewLoad (vtable slot). "
        "Body then constructs services/widgets; splash/default widgets can still "
        "be building. Not idle HUD.",
    ),
    (
        "onViewDidLoad",
        "[Launcher]Launcher::onViewDidLoad",
        "no",
        "DidLoad TRACE-only stub after load. Page exists; it has not appeared and "
        "StandBy vs dock is undecided.",
    ),
    (
        "onViewWillAppear",
        "[Launcher]Launcher::onViewWillAppear",
        "no",
        "WillAppear TRACE plus a short follow-up; still before DidAppear / switchFinish.",
    ),
    (
        "onViewDidAppear",
        "[Launcher]Launcher::onViewDidAppear",
        "maybe",
        "DidAppear is a TRACE-only method (push, log line 0x4a, pop). Launcher page "
        "has appeared, but this site has no bond check, no Pages/StarryNetApp vs "
        "Pages/Launcher discriminator, and no StandByView vs DockviewV2 switch. "
        "Idle HUD is not proved.",
    ),
    (
        "onPageSwitchFinish",
        "[Launcher]Launcher::onPageSwitchFinish, show launcher.",
        "maybe",
        "Bonded branch of onPageSwitchFinish: isLauncherAppOnTop is true and the "
        "bond probe returned non-zero, then this TRACE. Closer to home UI than "
        "DidAppear, but LauncherViewController::switchView isShowDock still "
        "selects DockviewV2 vs StandByView after the page is up.",
    ),
    (
        "onPageSwitchFinish_not_bond",
        "[Launcher]Launcher::onPageSwitchFinish not bond, show starrynet app.",
        "no",
        "Unbonded branch of the same onPageSwitchFinish: TRACE then LDR Pages/StarryNetApp "
        "and tail-call into startAppByPageName. Pairing / connect-guide UI, not idle HUD.",
    ),
    (
        "onViewDidDisappear",
        "[Launcher]Launcher::onViewDidDisappear",
        "no",
        "DidDisappear TRACE-only stub. Launcher is leaving the screen.",
    ),
    (
        "onViewWillDisappear",
        "[Launcher]Launcher::onViewWillDisappear",
        "no",
        "WillDisappear TRACE. Teardown path, not ready.",
    ),
    (
        "onViewUnload",
        "[Launcher]Launcher::onViewUnload",
        "no",
        "Unload TRACE. Page teardown, not ready.",
    ),
    (
        "onViewDidUnload",
        "[Launcher]Launcher::onViewDidUnload",
        "no",
        "DidUnload TRACE-only stub. Page gone.",
    ),
    (
        "backHome",
        "[Launcher]LauncherProvider::backHome enter",
        "maybe",
        "LauncherProvider::backHome after isLauncherAppOnTop is false. Navigates "
        "toward Pages/Launcher, but OTA/StarryNet skip "
        "('[Launcher]current in ota or starrynetApp, not call backHome') and "
        "landing view may still be dock.",
    ),
    (
        "isLauncherAppOnTop",
        "isLauncherAppOnTop",
        "no",
        "Query, not a ready event. TRACE tag loaded on empty-stack / null "
        "_pageManager error paths. Used *by* onPageSwitchFinish and backHome.",
    ),
    (
        "startAppByPageName",
        "[Launcher]LauncherProvider::startAppByPageName with pageName %s ",
        "no",
        "Stack push of an arbitrary PAGE name (Pages/Launcher, Pages/StarryNetApp, "
        "Pages/Ota, Pages/Assistant, Pages/StartupGuide, ...). Navigation, not idle HUD.",
    ),
    (
        "startServices",
        "[Launcher]Launcher::startServices start!",
        "no",
        "Service bring-up TRACE from onViewLoad. Happens while widgets may still be created.",
    ),
]


def literal_refs(pool_off: int, window: int = 0x1020) -> list[tuple[int, int, str, int]]:
    out = []
    lo = max(0, pool_off - window)
    hi = min(N, pool_off + 8)
    for off in range(lo, hi, 2):
        r = dec_ldr_literal(off)
        if r and r[0] == pool_off:
            out.append((off, r[1], r[2], r[3]))
    return out


def recover_ldr(string_off: int) -> dict:
    """Try dword xrefs under documented bases; return LDR-literal sites."""
    bases = {
        "rodata_delta": RODATA_DELTA,
        "xip_flat": XIP,
        "thumb_runtime": THUMB_RUNTIME,
    }
    recovered = []
    scan = {}
    for label, base in bases.items():
        va = (base + string_off) & 0xFFFFFFFF
        pools = dword_xrefs(va)
        scan[label] = {"va": hexoff(va), "pool_count": len(pools)}
        for p in pools:
            for off, rt, form, size in literal_refs(p):
                fn = containing_fn(off)
                recovered.append(
                    {
                        "encoding": label,
                        "pool_file_off": hexoff(p),
                        "code_file_off": hexoff(off),
                        "form": form,
                        "rt": rt,
                        "size": size,
                        "insn_hex": B[off : off + size].hex(),
                        "fn_file_off": hexoff(fn) if fn is not None else None,
                    }
                )
    intern = intern_attempt(string_off)
    return {"sites": recovered, "ptr_scan": scan, "intern": intern}


def thumb_bl_target(off: int) -> int | None:
    if off + 4 > N:
        return None
    hw1 = B[off] | (B[off + 1] << 8)
    hw2 = B[off + 2] | (B[off + 3] << 8)
    if (hw1 & 0xF800) != 0xF000 or (hw2 & 0xD000) != 0xD000:
        return None
    s = (hw1 >> 10) & 1
    j1 = (hw2 >> 13) & 1
    j2 = (hw2 >> 11) & 1
    imm10 = hw1 & 0x3FF
    imm11 = hw2 & 0x7FF
    i1 = 1 - (j1 ^ s)
    i2 = 1 - (j2 ^ s)
    imm32 = (s << 24) | (i1 << 23) | (i2 << 22) | (imm10 << 12) | (imm11 << 1)
    if imm32 & (1 << 24):
        imm32 -= 1 << 25
    return off + 4 + imm32


def intern_attempt(string_off: int) -> dict:
    """hud_map MOVW intern form: imm16 = file_off - 0x198FFC. Expect miss."""
    need = string_off - HUD_POOL
    if not (0 <= need <= 0xFFFF):
        return {
            "form": "UNRECOVERED",
            "reason": (
                f"string_file_off {hexoff(string_off)} - HUD_POOL {hexoff(HUD_POOL)} "
                f"= {need} is not a 16-bit intern id"
            ),
            "movw_sites": 0,
        }
    hits = []
    i = 0
    while i + 4 <= N:
        hw1 = B[i] | (B[i + 1] << 8)
        hw2 = B[i + 2] | (B[i + 3] << 8)
        if (hw1 & 0xFBF0) == 0xF240 and (hw2 & 0x8000) == 0:
            imm = (
                ((hw1 & 0xF) << 12)
                | (((hw1 >> 10) & 1) << 11)
                | (((hw2 >> 12) & 7) << 8)
                | (hw2 & 0xFF)
            )
            if imm == need:
                hits.append(hexoff(i))
                if len(hits) >= 8:
                    break
            i += 4
            continue
        i += 2
    return {
        "form": "UNRECOVERED" if not hits else "MOVW intern",
        "required_id": hexoff(need),
        "movw_sites": len(hits),
        "first": hits[:4],
    }


def vtable_slot(fn_off: int | None) -> str | None:
    if fn_off is None:
        return None
    thumb = (THUMB_RUNTIME + fn_off) | 1
    hits = dword_xrefs(thumb)
    # Prefer the slot sitting in the Launcher.cpp string cluster (~0x191fc8).
    for h in hits:
        if 0x191FC0 <= h <= 0x192020:
            return hexoff(h)
    return hexoff(hits[0]) if hits else None


def pick_site(sites: list[dict]) -> dict | None:
    """Prefer the LDR whose containing fn is the Launcher.cpp vtable method."""
    ro = [s for s in sites if s["encoding"] == "rodata_delta"] or list(sites)
    if not ro:
        return None

    def score(s: dict) -> tuple:
        fn = int(s["fn_file_off"], 16) if s.get("fn_file_off") else None
        in_vt = 1 if vtable_slot(fn) else 0
        # TRACE stubs load the format string immediately after PUSH.
        code = int(s["code_file_off"], 16)
        near = 0 if fn is None else abs(code - fn)
        return (in_vt, -near)

    return max(ro, key=score)


def require_lvgl_wait_loop() -> dict:
    """Remeasure the documented lvgl_ui wait loop; never claim it is HUD-ready."""
    if not is_push_prologue(LVGL_UI_ENTRY):
        raise SystemExit(f"no Thumb push prologue at lvgl_ui entry {hexoff(LVGL_UI_ENTRY)}")
    bl = B[WAIT_HANDLER_BL : WAIT_HANDLER_BL + 4]
    # BL to handler @ file 0x62bbe8 / VA 0x2C63BBE8 (LVGL_THREAD.md).
    if bl != bytes.fromhex("fcf791fc"):
        raise SystemExit(
            f"wait-loop handler BL mismatch at {hexoff(WAIT_HANDLER_BL)}: {bl.hex()}"
        )
    if B[WAIT_BACK_EDGE : WAIT_BACK_EDGE + 2] != bytes.fromhex("f5d1"):
        raise SystemExit(
            f"wait-loop back-edge mismatch at {hexoff(WAIT_BACK_EDGE)}: "
            f"{B[WAIT_BACK_EDGE:WAIT_BACK_EDGE+2].hex()}"
        )
    handler = thumb_bl_target(WAIT_HANDLER_BL)
    if handler is None:
        raise SystemExit(f"wait-loop BL at {hexoff(WAIT_HANDLER_BL)} did not decode")
    return {
        "entry_file_off": hexoff(LVGL_UI_ENTRY),
        "entry_prologue_hex": B[LVGL_UI_ENTRY : LVGL_UI_ENTRY + 2].hex(),
        "handler_bl_file_off": hexoff(WAIT_HANDLER_BL),
        "handler_bl_hex": bl.hex(),
        "handler_target_file_off": hexoff(handler),
        "back_edge_file_off": hexoff(WAIT_BACK_EDGE),
        "back_edge_hex": B[WAIT_BACK_EDGE : WAIT_BACK_EDGE + 2].hex(),
        "note": (
            f"After init (including creating lvgl_async) the thread pumps "
            f"handler @ {hexoff(handler)} then blocking wait. That pump starts while "
            "splash / createDefaultWidgets can still be building LVGL objects. "
            "No page-name, bond, or StandByView discriminator lives in this loop."
        ),
    }


def one_cstr(text: str) -> int:
    hits = cstr_off(text)
    if not hits:
        raise SystemExit(f"NUL-terminated string not found: {text!r}")
    if len(hits) != 1:
        # Page names can alias inside paths; lifecycle TRACE strings must be unique.
        if text.startswith("Pages/"):
            return hits[0]
        raise SystemExit(f"expected unique cstr for {text!r}, got {[hexoff(h) for h in hits]}")
    return hits[0]


def build() -> dict:
    wait = require_lvgl_wait_loop()
    lifecycle = []
    intern_unrecovered = 0
    ldr_recovered = 0
    for name, ascii_s, idle, note in TARGETS:
        soff = one_cstr(ascii_s)
        rec = recover_ldr(soff)
        site = pick_site(rec["sites"])
        if rec["intern"]["form"] == "UNRECOVERED":
            intern_unrecovered += 1
        code = site["code_file_off"] if site else None
        fn = site["fn_file_off"] if site else None
        if site:
            ldr_recovered += 1
            slot = vtable_slot(int(fn, 16) if fn else None)
            extra_note = (
                f" Recovered {site['form']} @ {site['code_file_off']} "
                f"(pool {site['pool_file_off']}, fn {fn}"
                + (f", vtable {slot}" if slot else "")
                + "). Intern form UNRECOVERED."
            )
        else:
            extra_note = " Code site UNRECOVERED (no LDR-literal / XIP ptr / intern)."
        lifecycle.append(
            {
                "name": name,
                "string_ascii": ascii_s,
                "string_file_off": hexoff(soff),
                "code_file_off": code,
                "fn_file_off": fn,
                "vtable_file_off": vtable_slot(int(fn, 16) if fn else None) if site else None,
                "form": site["form"] if site else None,
                "encoding": site["encoding"] if site else None,
                "idle_hud": idle,
                "intern": rec["intern"]["form"],
                "ptr_scan": rec["ptr_scan"],
                "note": note + extra_note,
            }
        )

    pages = []
    for pname in (
        "Pages/Launcher",
        "Pages/StarryNetApp",
        "Pages/StartupGuide",
        "Pages/Ota",
        "Pages/Assistant",
    ):
        pages.append({"name": pname, "string_file_off": hexoff(one_cstr(pname))})

    return {
        "leaf": "1.1.4",
        "bin": str(BIN_PATH.relative_to(ROOT)),
        "lvgl_wait_loop_is_idle_hud_ready": False,
        "lvgl_ui_entry_file_off": hexoff(LVGL_UI_ENTRY),
        "lvgl_wait_loop": wait,
        "encoding": {
            "string_runtime": "file_off + 0x3bfd7c0c",
            "code_form": "LDR (literal) T1/T2 of that dword in a Thumb literal pool",
            "intern_form": "UNRECOVERED",
            "intern_reason": (
                "hud_map MOVW imm16 + pool 0x198ffc cannot address Launcher.cpp "
                "TRACE strings at 0x191xxx (delta is negative). Direct XIP "
                "0x2c000000 dwords are also 0; only the rodata delta hits."
            ),
        },
        "recovery_counts": {
            "lifecycle_events": len(lifecycle),
            "ldr_literal_recovered": ldr_recovered,
            "intern_unrecovered": intern_unrecovered,
        },
        "pages": pages,
        "lifecycle": lifecycle,
        "false_positives": [
            {
                "signal": "onPageSwitchFinish not bond, show starrynet app",
                "why_not_idle_hud": "Pages/StarryNetApp pairing / connect-guide, not StandByView",
            },
            {
                "signal": "LauncherViewController::switchView isShowDock=1",
                "why_not_idle_hud": "DockviewV2 app strip, not the idle StandByView face",
            },
            {
                "signal": "onViewLoad / splash / createDefaultWidgets",
                "why_not_idle_hud": "widgets still being constructed on the LVGL pump",
            },
            {
                "signal": "lvgl_ui wait loop (handler + blocking wait)",
                "why_not_idle_hud": (
                    "thread event pump; starts after init while splash can still "
                    "build widgets; no page/bond/view discriminator"
                ),
            },
        ],
    }


def main() -> None:
    doc = build()
    OUT.write_text(json.dumps(doc, indent=2) + "\n", encoding="utf-8")
    print(
        f"wrote {OUT} events={doc['recovery_counts']['lifecycle_events']} "
        f"ldr={doc['recovery_counts']['ldr_literal_recovered']} "
        f"intern_unrecovered={doc['recovery_counts']['intern_unrecovered']}"
    )


if __name__ == "__main__":
    main()
