# Why It Bootlooped — and What's Safe to Patch

A plain-language explainer. The deep technical versions are
[`BATT_CIRCLE_POSTMORTEM.md`](BATT_CIRCLE_POSTMORTEM.md) and
[`hud_ready/splash_vs_idle/SPLASH_VS_IDLE.md`](hud_ready/splash_vs_idle/SPLASH_VS_IDLE.md).
This doc is the "explain it to me like a human" version.

---

## The one-sentence version

**The patched code was correct — it just ran too early.**

It tried to draw something on screen while the screen system was still starting up.
That crashed the device, which rebooted, which ran the same code again, which crashed
again — forever.

---

## The analogy

The compiler is the tool that checks your **blueprint** for mistakes. Your blueprint was
fine. The problem was that you **tried to hang a picture on a wall that hadn't been built yet.**

That's not a drawing error. It's a *timing* error — and no amount of blueprint-checking
catches it.

---

## How the screen actually gets built

The display is a grid of **tiles**: clock, battery, weather, steps. There's an assembly
line that builds them:

```
StandByView                    "build the standby screen"
  └─ createDefaultWidgets      0x5db7c4   "make the default set of tiles"
      └─ createSpecWidgets     0x5db5e4   "for each tile, pick its type"
          └─ kind switch       0x5db204   type 1 = the time tile
              └─ factory       0x5d9c78   case 3
                  └─ ctor      0x5d931c   ← customTimeAndBatteryWidget
```

That last line — the **constructor** — is what v5/v6 hooked. It's the function that
builds the clock + battery tile.

---

## The core problem: one path, two situations

That same assembly line runs in **two completely different situations**:

1. **At boot** — building the very first screen while the device is still starting up
2. **Later** — every time the screen rebuilds (waking, returning to standby)

It is genuinely *one* code path, not two. There is only a **single `BL`** (call
instruction) reaching that constructor in the entire firmware.

So when your hook fires inside the constructor, it's in a room with no windows. It cannot
tell whether the house is still under construction or someone just walked in the front
door. Same function, same caller, same parameters, both times.

- **At boot**, the screen system isn't ready to accept new objects yet → asking it to
  create one **crashes**.
- **Later**, it's fully up → the same request is fine.

Identical code. Opposite outcomes.

---

## Six ways we tried to tell them apart — all failed

| Attempt | Why it failed |
|---|---|
| Check **who called us** | Only one caller exists — identical both times |
| Check the **parent object** | One construction path, same parent |
| Check the **page name** | The constructor isn't passed one; boot is already on `Pages/Launcher` |
| Check the **view mode** | That flag is dock-vs-standby, not boot-vs-running |
| Check **which function** | `createDefaultWidgets` is used by both |
| Check a **"standby" flag** | Turned out to be a debug-log label, not a readable boolean |

All six are recorded as `UNRECOVERED`.

### Why "just wait" didn't work either
v6 tried deferring the work by 100 ms. That failed because:
- 100 ms is **still inside** the boot window — the house still isn't finished.
- Boot doesn't take a fixed amount of time, so waiting is a guess, not knowledge.
- If the screen tears down that tile before the timer fires, the callback touches
  freed memory (a use-after-free) — a *second*, independent crash.

---

## The way out: modify, don't create

**Stop trying to create something new. Change something that already exists.**

This is exactly why **v4 worked**. It didn't build a new circle. It took the clock label
that was *already on screen* and appended the battery number to its text:

```
18:46 80
```

The distinction is the whole game:

| Action | Needs the screen system to be… | Safe? |
|---|---|---|
| **Create** a new object | fully up and accepting new objects | ❌ crashes if too early |
| **Edit text** on an existing object | already up — *because the object exists* | ✅ safe |

If the object is there to be edited, the system that made it is by definition already
running. You never race boot, because you never ask for anything new.

---

## Safe / unsafe cheat sheet

**Safe**
- Editing text on a label that already exists (v4's approach)
- Same-length string replacement
- Theme values: colors, radius, immediates
- Swapping embedded assets (audio is easy; images are BES-tiled and need decoder work)
- Rearranging which tiles appear — **use the BLE commands** `set_standby_widget_lists` /
  `set_standby_position`; no firmware patch needed at all

**Unsafe (this is what bricked v5/v6)**
- `lv_obj_create`, `lv_label_create`, `lv_timer_create` inside the clock/dock constructor
- Hooking `FUN_2c508910` / `0x508A98`
- A `%` character in TimeModel output (it gets parsed as a format specifier → garbage)
- Reading SRAM colors from `0x3Dxxxxxx` during boot UI
- Adding a brand-new tile type (needs new table entries — never implemented)

---

## The related bug that hid all this

Separately, there was an **analysis** error that made this harder to see.

The same bytes are reachable through two different memory "windows," and they are not the
same address:

- Wrong: treat a string as `0x3C000000 + offset`
- Right: text strings remap to `offset + 0x3BFD7C0C`

The gap is about **165 KB**. Reading at the wrong one didn't produce garbage — it landed on
**real but unrelated text**, which made a boot-time function *look* like it only ran on the
idle screen. That's what made hooking it seem safe.

Plausible-looking wrong data is the dangerous kind. A full audit
([`ADDRESS_AUDIT.md`](ADDRESS_AUDIT.md)) confirmed this mistake does **not** appear anywhere
else in the analysis.

---

## Current state

The unit is **still bricked** — bootlooped on v6, and BLE never comes up, so OTA can't reach
it. The v4 restore package exists but **cannot be flashed** while the device won't boot
(`do_ota_rollback` only fires on a *failed* update, not one that applied fine and then
crashed).

**Recovering the device via UART is step zero.** Nothing above is testable until it boots.
