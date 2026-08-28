#!/usr/bin/env python3
"""leaf 1.1.3 — re-measure customTimeAndBatteryWidget ctor vs splash/idle.

Writes Reverse/firmware/analysis/hud_ready/splash_vs_idle/splash_vs_idle.json
from stock platform_tester.bin. No bin patches. File offsets only.

Address model (same as hud_ready strings / page_ready):
  XIP code VA          = file + 0x2C000000
  TRACE string runtime = file + 0x3BFD7C0C   (LDR literal pool dwords)
  Thumb vtable ptr     = file + 0x2C010000 | 1
  intern MOVW          = hud_map pool 0x198FFC (cited only; names have 0 sites)

Success token (gate G1): "wrote splash_vs_idle.json"
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
    cstr_off,
    dword_xrefs,
    hexoff,
    prologue_hex,
    u16,
)

OUT = HERE / "splash_vs_idle.json"
RODATA_DELTA = 0x3BFD7C0C
INTERN_POOL = 0x198FFC

# Contract anchors — re-measured, never invented.
CTOR_OFF = 0x5D931C
FACTORY_OFF = 0x5D9C78
GETTER_BL_OFF = 0x5D9426  # v5/v6 hook; leave stock
WRAPPER_OFF = 0x5D9FE4  # FUN that BLs the factory
SWITCH_OFF = 0x5DB204  # spec-widget kind switch; param_2==1 → factory type 3
CREATE_SPEC_OFF = 0x5DB5E4
CREATE_DEFAULT_OFF = 0x5DB7C4  # PUSH.W; fw_common.is_push_prologue misses E92D
UNBOND_OFF = 0x5DB9A0
STANDBY_UNBOND_CALLER = 0x5D2A8C
SPLASHVIEW_OFF = 0x5B394C
REBOOT_VIEW_OFF = 0x525A58
LVGL_UI_OFF = 0x62F228
INDEV_FLAG_LDR = 0x602AF0


def decode_bl(off: int) -> int | None:
    """Thumb BL T1 target as XIP VA, or None."""
    if off + 4 > N:
        return None
    hw1, hw2 = u16(off), u16(off + 2)
    if (hw1 & 0xF800) != 0xF000:
        return None
    if (hw2 & 0xD000) != 0xD000:
        return None
    s = (hw1 >> 10) & 1
    imm10 = hw1 & 0x3FF
    j1 = (hw2 >> 13) & 1
    j2 = (hw2 >> 11) & 1
    imm11 = hw2 & 0x7FF
    i1 = 1 - (j1 ^ s)
    i2 = 1 - (j2 ^ s)
    imm32 = (s << 24) | (i1 << 23) | (i2 << 22) | (imm10 << 12) | (imm11 << 1)
    if s:
        imm32 -= 1 << 25
    return (XIP + off + 4 + imm32) & 0xFFFFFFFF


def find_bl_to(file_off: int) -> list[int]:
    want = (XIP + file_off) & ~1
    hits: list[int] = []
    for o in range(0, N - 4, 2):
        t = decode_bl(o)
        if t is not None and (t & ~1) == want:
            hits.append(o)
    return hits


def is_push_w(off: int) -> bool:
    """PUSH.W / STMDB sp! (T2). fw_common.is_push_prologue misses E92D."""
    return 0 <= off + 2 <= N and u16(off) == 0xE92D


def one_cstr(text: str) -> int:
    hits = cstr_off(text)
    if not hits:
        raise SystemExit(f"missing NUL-terminated string {text!r}")
    return hits[0]


def rodata_va(file_off: int) -> int:
    return (file_off + RODATA_DELTA) & 0xFFFFFFFF


def caller_entry(
    name: str,
    file_off: int,
    context: str,
    note: str,
    prologue_n: int = 8,
) -> dict:
    if file_off < 0 or file_off >= N:
        raise SystemExit(f"bad caller offset {name} {file_off:#x}")
    return {
        "name": name,
        "file_off": hexoff(file_off),
        "prologue_hex": prologue_hex(file_off, prologue_n),
        "context": context,
        "note": note,
    }


def type3_sites(wrapper_bls: list[int]) -> list[str]:
    """BL-to-wrapper sites whose last r2 immediate before the BL is #3.

    `movs r2,#3` can appear earlier in the same window as a stack store
    (e.g. 0x5db472 then `movs r2,#8` at 0x5db47a → factory type 8). Only
    the final r2 write counts.
    """
    out = []
    for bl in wrapper_bls:
        lo = max(0, bl - 0x20) & ~1
        last_r2: int | None = None
        p = lo
        while p < bl:
            hw = u16(p)
            # movs r2, #imm8
            if (hw & 0xFF00) == 0x2200:
                last_r2 = hw & 0xFF
                p += 2
                continue
            # mov.w r2, #imm
            if p + 4 <= bl and u16(p) == 0xF04F and (u16(p + 2) & 0x0F00) == 0x0200:
                last_r2 = u16(p + 2) & 0xFF
                p += 4
                continue
            p += 2
        if last_r2 == 3:
            out.append(hexoff(bl))
    return out


def build() -> dict:
    if not BIN_PATH.is_file():
        raise SystemExit(f"missing binary {BIN_PATH}")

    ctor_hex = prologue_hex(CTOR_OFF, 8)
    if not ctor_hex.startswith("2de9"):
        raise SystemExit(f"ctor prologue unexpected at 0x{CTOR_OFF:x}: {ctor_hex}")
    fac_hex = prologue_hex(FACTORY_OFF, 8)
    if fac_hex[:4] != "70b5":
        raise SystemExit(f"factory prologue unexpected: {fac_hex}")

    ctor_bls = find_bl_to(CTOR_OFF)
    fac_bls = find_bl_to(FACTORY_OFF)
    wrap_bls = find_bl_to(WRAPPER_OFF)
    spec_bls = find_bl_to(CREATE_SPEC_OFF)
    default_bls = find_bl_to(CREATE_DEFAULT_OFF)
    unbond_bls = find_bl_to(UNBOND_OFF)

    if ctor_bls != [0x5D9D6E]:
        raise SystemExit(f"ctor BL sites remeasured {list(map(hex, ctor_bls))}, expected [0x5d9d6e]")
    if fac_bls != [0x5DA032]:
        raise SystemExit(f"factory BL sites remeasured {list(map(hex, fac_bls))}")

    type3 = type3_sites(wrap_bls)
    if type3 != ["0x5db5c0"]:
        raise SystemExit(f"type-3 wrapper BL remeasured {type3}, expected [0x5db5c0]")

    # TRACE string anchors (file offsets remeasured).
    s_ctor_name = one_cstr("customTimeAndBatteryWidget")
    s_standby_cpp = one_cstr(
        "../../thirdparty/star_air_lvgl/app/Pages/Launcher/view/StandByView.cpp"
    )
    s_widget_cpp = one_cstr(
        "../../thirdparty/star_air_lvgl/app/Pages/Launcher/widget/StandByWidget.cpp"
    )
    s_mgr_cpp = one_cstr(
        "../../thirdparty/star_air_lvgl/app/Pages/Launcher/widget/StandByWidgetManager.cpp"
    )
    s_create_def = one_cstr("createDefaultWidgets")
    s_create_spec = one_cstr("createSpecWidgets")
    s_splash_cpp = one_cstr(
        "../../thirdparty/star_air_lvgl/app/Pages/Navigation/view/SplashView.cpp"
    )
    s_startup = one_cstr("Pages/StartupGuide")
    s_reboot = one_cstr("createPowerOffAndRebootView")
    s_welcome = one_cstr("Welcome to LVGL\r\n")
    s_boot = one_cstr("boot completed.\r\n")
    s_flag = one_cstr("launcher_is_on_standby_view.")
    s_delay = one_cstr("[Launcher]StandByView:: onLauncherEnterCallback delay exec")

    if not is_push_w(SWITCH_OFF) or not is_push_w(CREATE_DEFAULT_OFF):
        raise SystemExit("kind switch / createDefaultWidgets must be PUSH.W (E92D)")

    intern_sites: list = []  # intern 0x864: 0 MOVW (time_widget.json, cited)

    # Rodata-delta confirmation: factory pool holds StandByWidget.cpp + widget name.
    factory_file_va = rodata_va(s_widget_cpp)
    factory_name_va = rodata_va(s_ctor_name)
    fac_file_pools = dword_xrefs(factory_file_va)
    fac_name_pools = dword_xrefs(factory_name_va)
    if 0x5D9E38 not in fac_file_pools and 0x5D9E40 not in fac_name_pools:
        # Accept either slot; Ghidra DAT names differ. Require at least one hit
        # inside the factory literal pool 0x5d9e2c–0x5d9e50.
        pool_lo, pool_hi = 0x5D9E20, 0x5D9E50
        in_pool = [
            p
            for p in fac_file_pools + fac_name_pools
            if pool_lo <= p < pool_hi
        ]
        if not in_pool:
            raise SystemExit(
                "factory TRACE pool does not hold StandByWidget.cpp / "
                "customTimeAndBatteryWidget rodata VAs"
            )

    # Splash pages: LDR-literal recovered, but zero BL into the ctor/factory.
    splash_bls_to_ctor = [
        o
        for o in ctor_bls
        if SPLASHVIEW_OFF <= o < SPLASHVIEW_OFF + 0x800
        or REBOOT_VIEW_OFF <= o < REBOOT_VIEW_OFF + 0x4000
        or LVGL_UI_OFF <= o < LVGL_UI_OFF + 0x200
    ]
    if splash_bls_to_ctor:
        raise SystemExit(f"unexpected ctor BL from splash window {splash_bls_to_ctor}")

    # StandByView vtable (Thumb runtime) holds the unbond caller.
    vtbl_word = (THUMB_RUNTIME + STANDBY_UNBOND_CALLER + 1) & 0xFFFFFFFF
    vtbl_sites = dword_xrefs(vtbl_word)
    if 0x197BB0 not in vtbl_sites:
        raise SystemExit(
            f"StandByView vtable slot for unbond caller missing; got {list(map(hex, vtbl_sites[:8]))}"
        )

    getter_hex = B[GETTER_BL_OFF : GETTER_BL_OFF + 4].hex()
    if getter_hex != "fdf757fa":
        raise SystemExit(f"getter BL at 0x5d9426 must stay stock fdf757fa, got {getter_hex}")

    callers = [
        caller_entry(
            "FUN_2c5d9c78_spec_factory_case_3",
            FACTORY_OFF,
            "shared",
            (
                f"Unique BL to ctor @ {hexoff(ctor_bls[0])} (case 3). TRACE pool "
                f"rodata VA {hexoff(factory_file_va)} = StandByWidget.cpp, "
                f"{hexoff(factory_name_va)} = customTimeAndBatteryWidget. "
                "This factory is the only flash caller of the ctor; splash pages "
                "do not BL 0x5d931c. Boot still runs this factory while building "
                "StandByView, so the caller does not separate splash-time "
                "construction from idle HUD."
            ),
        ),
        caller_entry(
            "FUN_2c5d9fe4_factory_wrapper",
            WRAPPER_OFF,
            "shared",
            (
                f"Unique BL to factory @ {hexoff(fac_bls[0])}. Allocates 0x5c and "
                f"forwards kind in r2. Type-3 (time+battery) BLs at {', '.join(type3)}."
            ),
        ),
        caller_entry(
            "FUN_2c5db204_spec_kind_switch",
            SWITCH_OFF,
            "shared",
            (
                "param_2==1 (switch default when 1..6 and not 2..6) calls the "
                "wrapper with factory type 3 and TimeModel events 0x3e9/0x3eb. "
                "PUSH.W prologue 2de9f04f; fw_common containing_fn reports 0x5db1c0 "
                "because it misses E92D. Shared by createSpecWidgets."
            ),
        ),
        caller_entry(
            "createSpecWidgets",
            CREATE_SPEC_OFF,
            "idle",
            (
                f"StandByWidgetManager.cpp TRACE (rodata {hexoff(rodata_va(s_create_spec))}). "
                f"BL sites into this fn: {', '.join(hexoff(x) for x in spec_bls[:8])}. "
                "Idle-path builder; also runs when createDefaultWidgets first "
                "constructs the standby grid at boot."
            ),
        ),
        caller_entry(
            "createDefaultWidgets",
            CREATE_DEFAULT_OFF,
            "idle",
            (
                f"StandByWidgetManager.cpp TRACE createDefaultWidgets "
                f"(string {hexoff(s_create_def)}). PUSH.W at {hexoff(CREATE_DEFAULT_OFF)}; "
                f"direct BL from {', '.join(hexoff(x) for x in default_bls) or 'none'}. "
                "Idle HUD widget grid. Same function is the boot construction path "
                "for StandByView — not a splash-vs-idle discriminator by itself."
            ),
        ),
        caller_entry(
            "unBondReset_StandByView",
            UNBOND_OFF,
            "idle",
            (
                f"BL from StandByView method {hexoff(STANDBY_UNBOND_CALLER)} "
                f"(sites {', '.join(hexoff(x) for x in unbond_bls)}). "
                f"Thumb vtable dword {hexoff(vtbl_word)} at file {hexoff(vtbl_sites[0])}, "
                f"next to StandByView.cpp ({hexoff(s_standby_cpp)}). "
                "Reconnect/unbond rebuild, not boot splash."
            ),
        ),
        caller_entry(
            "SplashView_Navigation",
            SPLASHVIEW_OFF,
            "splash",
            (
                f"SplashView.cpp ({hexoff(s_splash_cpp)}) TRACE-recovered. "
                "Zero BL into ctor/factory. Navigation-local splash, not the "
                "boot/reboot hang from BATT_CIRCLE_POSTMORTEM.md."
            ),
        ),
        caller_entry(
            "PowerOffAndRebootView",
            REBOOT_VIEW_OFF,
            "splash",
            (
                f"createPowerOffAndRebootView TRACE at {hexoff(s_reboot)} "
                "(StarryNetApp toplayer reboot screen). Nearby BLs at 0x5dc51c/"
                "0x5dc53c are UTF-8 helpers, not the spec-widget factory. "
                "Zero BL to FUN_2c5d931c."
            ),
        ),
        caller_entry(
            "Pages_StartupGuide",
            0x5C52EC,
            "splash",
            (
                f"Pages/StartupGuide ({hexoff(s_startup)}) LDR-literal in "
                "LauncherProvider startApp path. First-run guide page name; "
                "does not construct customTimeAndBatteryWidget."
            ),
        ),
        caller_entry(
            "lvgl_ui_boot_completed",
            LVGL_UI_OFF,
            "splash",
            (
                f"Welcome to LVGL ({hexoff(s_welcome)}) and boot completed "
                f"({hexoff(s_boot)}) TRACE in the lvgl_ui thread. Event pump; "
                "page_ready leaf already proved this loop is not idle-HUD-ready. "
                "Zero BL to the widget ctor."
            ),
        ),
        caller_entry(
            "onLauncherEnterCallback_delay_exec",
            0x5D3BC0,
            "idle",
            (
                f"StandByView TRACE {hexoff(s_delay)} is a DELAY (stock "
                "onLauncherEnterCallback). Recorded so it is not reused as a "
                "discriminator. kind must not be delay."
            ),
        ),
    ]

    methods = [
        "Thumb BL scan of whole image to ctor 0x5d931c, factory 0x5d9c78, wrapper 0x5d9fe4",
        "Rodata-delta 0x3bfd7c0c LDR-literal TRACE (StandByWidget.cpp vs Phone 3C-alias collision)",
        "Thumb vtable scan (file+0x2c010000|1) for StandByView unbond caller",
        "Zero-BL negative control: SplashView.cpp, PowerOffAndRebootView, lvgl_ui, Pages/StartupGuide",
        "launcher_is_on_standby_view. LDR @ 0x602af0 is lv_indev_xjxr.c TRACE, not a ctor getter",
        "parent_object = factory param_2 / FUN_2c5cfd1c(*this); single construction path, no second parent",
        "view_mode switchView isShowDock distinguishes dock vs StandBy, not boot vs idle",
        "intern MOVW 0x864 (customTimeAndBatteryWidget) — 0 sites (time_widget.json intern notes, cited)",
    ]

    discriminator = {
        "kind": "caller",
        "status": "UNRECOVERED",
        "detail": (
            "Direct ctor caller is uniquely factory case 3 (file 0x5d9d6e) inside "
            "StandByWidget.cpp. SplashView / StartupGuide / PowerOffAndRebootView / "
            "lvgl_ui boot do not BL the ctor. That does not yield a ctor-visible "
            "splash-vs-idle predicate: createDefaultWidgets/createSpecWidgets build "
            "the same type-3 widget during LVGL boot while the reboot/splash face "
            "is still up (BATT_CIRCLE_POSTMORTEM.md v5/v6). "
            "launcher_is_on_standby_view. (file "
            f"{hexoff(s_flag)}) is a TRACE tag in indev keypad proc at "
            f"{hexoff(INDEV_FLAG_LDR)}, not a boolean the ctor can load. "
            "parent_object, page_name, view_mode, and function were tried; none "
            "is true on idle HUD and false on boot StandByView construction "
            "without using a millisecond delay. Methods: " + "; ".join(methods) + "."
        ),
    }

    why_timer = (
        "A timer created inside FUN_2c5d931c cannot tell splash from idle because "
        "the ctor is the same function on both: createDefaultWidgets → "
        "createSpecWidgets → factory case 3 → customTimeAndBatteryWidget. "
        "lv_timer period (v6 100 ms) is not a view discriminator; the tick still "
        "runs during boot/splash while StandByView widgets are first built, and "
        "may UAF if splash tears down the clock object (user_data) before the "
        "callback. There is no page_name, parent class, or standby flag check in "
        "the ctor or in a timer started from it. Stock onLauncherEnterCallback "
        "delay exec is a delay and must not be reused as the discriminator."
    )

    return {
        "leaf": "1.1.3",
        "bin": str(BIN_PATH.relative_to(ROOT)),
        "ctor_file_off": hexoff(CTOR_OFF),
        "ctor_prologue_hex": ctor_hex,
        "ctor_va_xip": hexoff(XIP + CTOR_OFF),
        "factory_file_off": hexoff(FACTORY_OFF),
        "factory_prologue_hex": fac_hex,
        "getter_bl_file_off": hexoff(GETTER_BL_OFF),
        "getter_bl_stock_hex": getter_hex,
        "strings": {
            "customTimeAndBatteryWidget": hexoff(s_ctor_name),
            "StandByView.cpp": hexoff(s_standby_cpp),
            "StandByWidget.cpp": hexoff(s_widget_cpp),
            "StandByWidgetManager.cpp": hexoff(s_mgr_cpp),
            "createDefaultWidgets": hexoff(s_create_def),
            "createSpecWidgets": hexoff(s_create_spec),
            "SplashView.cpp": hexoff(s_splash_cpp),
            "Pages/StartupGuide": hexoff(s_startup),
            "PowerOffAndRebootView": hexoff(s_reboot),
            "launcher_is_on_standby_view": hexoff(s_flag),
        },
        "intern_0x864_movw_sites": intern_sites,
        "intern_id_customTimeAndBatteryWidget": hexoff(s_ctor_name - INTERN_POOL),
        "type3_wrapper_bls": type3,
        "callers": callers,
        "discriminator": discriminator,
        "why_timer_fails": why_timer,
        "cited_only": [
            "Reverse/firmware/analysis/BATT_CIRCLE_POSTMORTEM.md",
            "Reverse/firmware/analysis/hud_map/time_widget.json",
        ],
    }


def main() -> int:
    doc = build()
    OUT.write_text(json.dumps(doc, indent=2) + "\n", encoding="utf-8")
    rel = OUT.relative_to(ROOT)
    print(
        f"wrote splash_vs_idle.json ({rel}) "
        f"ctor={doc['ctor_prologue_hex']} callers={len(doc['callers'])} "
        f"discriminator={doc['discriminator']['kind']}/{doc['discriminator']['status']}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
