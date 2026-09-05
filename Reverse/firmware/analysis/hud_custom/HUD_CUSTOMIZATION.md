# HUD customization — consolidated findings (1.0.12.83)

Integration writeup for the hud_custom work scope. Binary:
`Reverse/firmware/x_1.0.12.83/platform_tester.bin`. Address model: code VA = file +
`0x2C010000`; data file = VA − `0x3BFD7C0C`. All offsets are **file offsets**.

Gate ledger: `.unlazy/hud-custom/GATES.md`. Verifier over all leaf byte claims:

```sh
node Reverse/firmware/analysis/hud_custom/verify-hud-custom.mjs "$PWD"
# -> "hud_custom verification passed"  (161/161 byte claims, 5 manifests)
```

Leaf writeups: `protocol/PROTOCOL.md`, `widgets/WIDGETS.md`, `statusbar/` (icons.json +
47 PNGs), `fonts/HUD_FONTS.md`, `push/PUSH_PATHS.md`, `schedule/SCHEDULE_CARD.md`.

---

## 1. The reference mockup, element by element

| mockup element | route | patch tier |
|---|---|---|
| `08:32` clock | `time` widget (id 1) | none needed; **4-byte asset patch** upgrades it to the 19×26 AA digit face (§3) |
| `Fri 10/24` | `weekday` widget (id 5) | none |
| status icons + `100%` | 47 named icons mapped, all replaceable in place | asset patch |
| `H: 28°C L: 22°C Sydney` | `weather_1x2` widget (id 3, costs 2 of 4 grid slots) | none |
| `"Be in the room…"` quote | tips label is chosen **on-device** by resource id — not phone-supplied | code patch (or replace the tips string table) |
| Schedule card | **no schedule/calendar/agenda widget exists on standby** | see §4 |

Hard constraint: the standby grid has **4 slots** and `weather_1x2` costs 2. The full
mockup (clock + date + weather + quote + schedule) does not fit the grid even before
considering that two of its elements don't exist.

---

## 2. Widget vocabulary — recovered from the binary, no hardware needed

Exactly six names, proven twice in opposite directions (strcmp chain name→id in
`rebuildFromWidgetSeq` f`0x5db9dc`; `StandByWidget::getName` id→name jump table at
f`0x5d8be0` + pointer table `0x5d8c10`). They agree.

| name | id | grid | builder | data source |
|---|---|---|---|---|
| `time` | 1 | 1 | `customTimeAndBatteryWidget` f`0x5d931c` | msg 0x3E9/0x3EB + DateTime provider |
| `weather_1x1` | 2 | 1 | `createNormalWidget` f`0x5d8f2c` | msg 0x7D2/0x7D3 |
| `weather_1x2` | 3 | 2 | `createWeather1x2Widget` f`0x5d9708` | msg 0x40A/0x40B/0x40C/0x7D3 |
| `steps` | 4 | 1 | f`0x5d8d84` | msg 0x3FA |
| `weekday` | 5 | 1 | `createTextWidget` f`0x5d904c` | msg 0x401/0x402 + DateTime provider |
| `aiBall` | 6 | 1 | f`0x5d8cf8` | image only |

Plus `0x7FFFFFFF` (disconnect placeholder, always appended, hidden) and `0x7FFFFFFE`
(sports card, style 9, no caller in this build).

```json
{"action":"set_standby_widget_lists","value":{"widgets":["time","weekday","weather_1x2"]}}
```

Unknown names are **silently skipped**. `get_standby_widget_lists` echoes the stored name
vector verbatim — including unrecognised names — and returns `[]` on a device that has
never received a `set_` (defaults are rebuilt from the packed preference, not the vector).
There is **no count cap** on the JSON path: six valid names create six widgets and
overflow the 4-slot flex row (untested what that looks like).

**Packing** (preference key `0x47`, int64): 4 bits per entry, 15 nibbles. Nibble 0 =
count (excluding the placeholder), nibbles 1–14 = ids in display order, bits 60–63
unused. Pack loop f`0x5dbb0a`, unpack f`0x5db816`. **Capstone 5.0.7 mis-decodes the
Armv8.1-M `LSLL`/`ASRL` in these loops as architecturally-impossible `orrs.w …, sp` —
this is what defeated the first analysis attempt.** Do not trust capstone on long shifts
anywhere in this image.

**Defaults** (no stored preference): `time, weather_1x1, steps, aiBall` when step count
is supported, else `time, weather_1x1, weekday, aiBall`; `aiBall` drops out when the
provider predicate at f`0x5c896c` is false.

**Free-form text cannot reach the HUD through this API.** Names only select among the
six. `createTextWidget` structurally accepts an arbitrary `std::string`, but its only
caller is the `weekday` arm feeding it DateTime strings. The plausible unpatch-free
channel is publishing to the widgets' UI message ids through f`0x620fa4` (pub/sub list at
VA `0x3D6A0BEC`) — untested; see `push/PUSH_PATHS.md`.

---

## 3. Fonts — and the 4-byte clock patch

Nine `lv_font_t` objects (one table, f`0x466f88`–`0x4670f0`, stride 40), nine dsc faces,
ten `FONT_*` names. Key facts (full detail + renders in `fonts/HUD_FONTS.md`):

- `FONT_DUMMY_16/20/24` are **empty stub faces** delegating via LVGL `fallback` to
  `FONT_CN_16/20/24_NORMAL`. The whole UI draws through the DUMMY names.
- `FONT_CN_36_BOLD`/`FONT_EN_36_BOLD` = one dedicated digit face covering exactly
  `-.0123456789:°`, 19×26 px, bpp4 anti-aliased, `line_height 52`. Used today only for
  the Starrynet pairing code and a navigation ETA.
- **The standby clock does not use it.** `customTimeAndBatteryWidget` f`0x5d931c` selects
  `FONT_DUMMY_20` → `FONT_CN_20_NORMAL` (shared 6032-glyph face, digits 11×14).
- Fonts are 1,675,505 B = **24.7 % of the image**; 1,214,813 B of CJK bitmap is
  reclaimable (with `bitmap_index` compaction). Free zero space elsewhere: ~10 KB, mostly
  inside the DSP sub-image (untouchable).

**Minimal clock patch** (verified: the literal is loaded by exactly one instruction,
f`0x5d934e`; the other 111 `FONT_DUMMY_20` references are unaffected; `36_BOLD`'s charset
is a strict superset of what `%02d:%02d` emits):

| file offset | current | patch to |
|---|---|---|
| `0x5d94d0` | `fc e6 13 3c` (`"FONT_DUMMY_20"`) | `1c 78 14 3c` (`"FONT_CN_36_BOLD"`) |

Effect: clock digits 11×14 → 19×26 anti-aliased (`fonts/renders/CLOCK_36BOLD_1234.png`).
The label is `LV_SIZE_CONTENT` anchored `TOP_MID, 0, +11` on a 640×480 panel, so size and
position are not hard-coded. The firmware clock is 24-hour — the mockup's `AM` has no
glyph and no format string.

**Risk class:** this patch site lives in the function that bootlooped v5/v6, but the
failure mode there was *creating LVGL objects during boot*. This patch creates nothing;
it changes which pointer is passed to a call that already runs. Static analysis only —
**not flashed**.

Beyond: `line_height`/`base_line` are 2-byte fields at `0x466f90`/`0x466f92` (shared with
pairing code + nav ETA). The unused `font@0x466fd8` (`FONT_CN_32_NORMAL`, zero lookup
sites) can be repurposed wholesale for a custom clock face placed in compacted CN_20
space — passive data + one literal word, no instruction lengths change.

---

## 4. The schedule card — honest verdict

**The exact card is not achievable on the standby HUD without code patching, and code
patching in this exact subsystem is what bricked the device twice (v5/v6).**

What exists (detail in `schedule/SCHEDULE_CARD.md`):

- The mockup's card is already compiled into the firmware — `ScheduleDomainView::
  showSingleInnerHor` f`0x5762d4` draws 264×144, radius 12, 1 px green border @ 40 %,
  FONT_DUMMY_20 title over FONT_DUMMY_16 secondary. But it lives on `Pages/Assistant`,
  behind the assistant gate list, and never appears on standby.
- The notification PIP card (`layout_message_ui` f`0x5e9924`) draws 324×auto, radius 16,
  1 px green border, black fill, with title + 5-line content + a dim-60 % FONT_DUMMY_16
  sub-line — and **takes free-form text from the phone** (`title`, `content`, … in
  `createNormalMsg` f`0x18d7f0`). A `packageName` of `com.apple.mobilecal` (or the
  Android calendar ids) gets the calendar icon automatically. But it is **transient by
  design** and occludes the HUD while up.
- Every standby tile is already a rounded green-bordered container (72×72, radius 36,
  2 px border @ 36 %) — set in the base ctor before the type dispatch.

Risk-tiered routes:

| route | fidelity | risk |
|---|---|---|
| standby `createTextWidget` | ~5 chars wide, one font, no border of its own, **no phone-text path** | n/a — not viable |
| notification PIP card (b1) | high visual match; transient | **zero — no patch** |
| assistant ScheduleDomainView (b2) | pixel match; needs live assistant session | zero, but reachability is the blocker |
| patch new widget into ctor `tbb` (c1) | resident | **HIGH — the v5/v6 failure mode verbatim** |
| patch into `rebuildFromWidgetSeq` (c2) | resident | MEDIUM — phone-triggered only, structurally cannot run at boot; still needs a text transport |
| v4-style rewrite of an existing label (c3) | — | LOW, but no standby label can carry schedule text |

If a patch is ever attempted, `rebuildFromWidgetSeq` f`0x5db9dc` is the safest injection
point found: it runs only in response to a phone command, so the boot-vs-not question
that defeated six heuristics in v5/v6 does not arise. **Do not** create LVGL objects or
timers in f`0x5d931c` / the base ctor before f`0x5d9cfa`, do not use a deferred timer as
a boot-avoidance trick, and do not add a `tbb` case without extending the table and bound.

**Zero-risk route available today:** push a notification with `packageName` a calendar
bundle id, `title` = "Schedule", `content` = the bulleted entries. You get the rounded
green-bordered box, calendar icon, bright title, dim sub-line — the mockup's visual
language, no bytes changed. You do not get persistence.

---

## 5. Still open (hardware handoff)

- **No claim here has been flashed or sent to a device.** The device is still bricked
  pending UART recovery; `set_standby_widget_lists` has never been observed on hardware.
  A single `get_`→`set_`→`get_` round trip would confirm the echo-verbatim behaviour and
  the silent-skip of unknown names.
- UNVERIFIED items tracked per leaf: semantics of the UI message ids, the
  `isSupportStepCountWidget` predicate, the third `FONT_CN_36_BOLD` site, what
  `set_font_mode` actually changes, why the DUMMY indirection exists, the app icon on the
  PIP card (indicated, not proven).
