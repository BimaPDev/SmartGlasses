# Standby (HUD) widgets — name vocabulary, id enum, packing, defaults

**Binary:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (1.0.12.83, 6,771,708 B)
**Address model** (per `../../AUDIT_2026-09-03.md`):
`code VA = file_off + 0x2C010000` · `data VA = file_off + 0x3BFD7C0C`
All addresses below are **file offsets** unless written as `VA`.
Disassembly: capstone 5.0.7 `Cs(CS_ARCH_ARM, CS_MODE_THUMB)`.
Function starts were recovered by scanning every BL/BLX in `0x469954..EOF` and collecting
targets (8,034 entries) — not from `export/1.0.12.83/functions/m55/`, which the audit
showed to be partly invalid.

> **Capstone caveat that matters here.** The M55 is Armv8.1-M. Two instructions in the
> pack/unpack loops are Armv8.1-M **long shifts by register** (`LSLL`/`ASRL`), which
> capstone 5.0.7 mis-renders as `orrs.w r3, r2, sp, lsl #4` / `... asr #4` (Rm = SP is
> architecturally UNPREDICTABLE — a tell that the decode is wrong). Decoded by hand:
> `hw1 = 1110 1010 0101 RdaLo(3) 0`, `hw2 = Rm(4) RdaHi(4) 0000 1101` (LSLL) /
> `... 0010 1101` (ASRL). See §4.

---

## 1. THE ANSWER: the widget name vocabulary

**Exactly six names.** They are C string literals in one contiguous block, and they are
the strings compared by `StandByWidgetManager::rebuildFromWidgetSeq`.

| name string | file off | data VA |
|---|---|---|
| `time` | `0x195960` | `0x3C16D56C` |
| `weather_1x1` | `0x199798` | `0x3C1713A4` |
| `weather_1x2` | `0x199774` | `0x3C171380` |
| `steps` | `0x199780` | `0x3C17138C` |
| `weekday` | `0x199788` | `0x3C171394` |
| `aiBall` | `0x199790` | `0x3C17139C` |

Any other string in the `"widgets"` array is **silently ignored** (the strcmp chain falls
through to `adds r5,#1` at `0x5dba52`, which only advances the index).

This is not inference — the map is recovered **twice, independently, in opposite
directions**, and the two agree perfectly:

* **name → id**: `rebuildFromWidgetSeq` (`0x5db9dc`) — a chain of `strcmp` (`0x66b624`)
  against those six literals, each arm loading a different `r1` immediate before
  `bl createWidget` (`0x5db5e4`).
* **id → name**: `StandByWidget::getName` (`0x5d8be0`) — `ldr r3,[r0,#0x54]` (the id),
  `subs #1`, `cmp #5`, `tbb [pc,r3]` into six `ldr r0,[pc,…]; bx lr` stubs that return
  pointers from the table at `0x5d8c10`.

---

## 2. Widget table

| name | id | grid | created by | render style | StandByWidget builder (inlined) | data source (subscribed UI msg ids) | in default set |
|---|---|---|---|---|---|---|---|
| `time` | **1** | 1 slot | `0x5db590` | 3 | `customTimeAndBatteryWidget` → `0x5d931c` | `0x3E9` (1001), `0x3EB` (1003); initial text from DateTime provider `0x5c6a68` | **yes**, index 0 |
| `weather_1x1` | **2** | 1 slot | `0x5db3c8` | 1 | `createNormalWidget` → `0x5d8f2c` | `0x7D2` (2002), `0x7D3` (2003); placeholder title `"--°"` | **yes**, index 1 |
| `weather_1x2` | **3** | **2 slots** | `0x5db41a` | 8 | `createWeather1x2Widget` → `0x5d9708` | `0x40A` (1034), `0x40C` (1036), `0x7D3` (2003), `0x40B` (1035); placeholders `"--°"`, `"--"` | no |
| `steps` | **4** | 1 slot | `0x5db49c` | 4 | (unnamed) → `0x5d8d84` | `0x3FA` (1018) | conditional, index 2 |
| `weekday` | **5** | 1 slot | `0x5db2e0` | 6 | `createTextWidget` → `0x5d904c` | `0x401` (1025), `0x402` (1026); initial text from DateTime provider `0x5c6d84` / `0x5c6d7c` | conditional, index 3 |
| `aiBall` | **6** | 1 slot | `0x5db39a` | 0 | (unnamed) → `0x5d8cf8` | image only: `launcher_standby_freestyle_default` (`0x1980E4`) | **yes**, index 4 |
| *(none — not reachable by name)* | `0x7FFFFFFF` | 1 slot | `0x5db27e` | 0 | `0x5d8cf8` | image `launcher_standby_disconnect` (`0x199AE0`) | always appended last, hidden |
| *(none — no caller in this build)* | `0x7FFFFFFE` | 1 slot | `0x5db4c4` | 9 | `0x5d9990` | `0x3A9A`, `0x3A99`, `0x3A9C`; icon `sports_standby_icon` (`0x199AFC`), text `"--"` / `"--:--"` | no — **dead code**, see §7 |

`grid` = slots consumed out of **4**. Only `weather_1x2` costs 2; everything else costs 1
(`createSpecWidgets` `0x5db664`–`0x5db686`: strcmp each stored name against `"weather_1x2"`,
`+2` on match else `+1`, then `rsb r5, r5, #4`). `adjustFlexPadColumn` (`0x5da6a8`) sets the
LVGL flex `pad_column` to `11` when the row holds exactly 4 widgets, else `10` — corroborating
a 4-across row. `"1x2"` = 1 row × 2 columns.

**Render style** is a separate small enum stored in `StandByWidget+0x18` and dispatched by a
10-entry `tbb` in the constructor. Ids and styles are *not* the same number; the factory picks
the style per id.

### Constructor / dispatch anatomy

`StandByWidget::StandByWidget` is at **`0x5d9c78`** (VA `0x2C5E9C78`), ends `0x5d9e50`.
`0x5d9c7e: strb r2,[r0,#0x18]` stores the style byte; `0x5d9cf4: ldrb r2,[r4,#0x18];
cmp r2,#9; bhi; tbb [pc,r2]` with the 10-byte table at **`0x5d9cfe`** =
`1f 25 05 31 3b 40 45 53 60 10`, base `0x5d9cfe`:

| style | branch | builder called | evidence |
|---|---|---|---|
| 0 | `0x5d9d3c` | `0x5d8cf8` | — |
| 1 | `0x5d9d48` | `0x5d8f2c` | error log `createNormalWidget` line 89 @ `0x5d9e06` |
| 2 | `0x5d9d08` | `0x5d9190` | — |
| 3 | `0x5d9d60` | `0x5d931c` | error log `customTimeAndBatteryWidget` line 294 @ `0x5d9df2` |
| 4 | `0x5d9d74` | `0x5d8d84` | — |
| 5 | `0x5d9d7e` | `0x5d8810` | — |
| 6 | `0x5d9d88` | `0x5d904c` | error log `createTextWidget` line 114 @ `0x5d9d92` |
| 7 | `0x5d9da4` | `0x5d94e8` | — |
| 8 | `0x5d9dbe` | `0x5d9708` | error log `createWeather1x2Widget` line 720 @ `0x5d9e18` |
| 9 | `0x5d9d1e` | `0x5d9990` | uses `sports_standby_mask` @ `0x5d9c60` |

All four `create…Widget` helpers named in the strings were **inlined into this one
constructor** — that is why their four `__func__` pointers share one literal pool at
`0x5d9e2c`–`0x5d9e4c`.

### Widget factory (id → object)

**`0x5db204`** (VA `0x2C5EB204`), reached only via `createWidget` (`0x5db5e4`) which
tail-calls it (`0x5db600: b.w 0x5db204`).
Dispatch: `cmp r1,#6 / bhi` (the two `0x7FFFFFFx` sentinels), `cmp r1,#0 / beq → NULL`,
then `subs r5,r1,#2; cmp r5,#4; bhi → 0x5db590 (id 1)`, `tbh [pc,r5,lsl#1]` with the
5-halfword table at **`0x5db264`** = `b2 00 db 00 1c 01 3e 00 9b 00`, base `0x5db264`:
id 2→`0x5db3c8`, 3→`0x5db41a`, 4→`0x5db49c`, 5→`0x5db2e0`, 6→`0x5db39a`.

Self-check: every arm stores its own id literal into the descriptor field that
`StandByWidget::getId` (`0x5d8bdc` = `ldr r0,[r0,#0x54]`) later returns — `movs #1` @
`0x5db5b2`, `#2` @ `0x5db3f6`, `#3` @ `0x5db472`, `#4` @ `0x5db49c`, `#5` @ `0x5db374`,
`#6` @ `0x5db3ae`. Table arm and stored id agree for all six.

### Descriptor passed to the constructor

The factory builds a stack struct (base `sp+0x40`) and hands it to `0x5d9fe4`
(`new StandByWidget(desc, parent, style)`), which explodes it into the ctor's args:

| desc off | meaning |
|---|---|
| `+0x00` | `const char*` (defaults to `""` @ `0x199F00`) |
| `+0x04` | image handle from `getImage(name)` (`0x5e2e8c`) |
| `+0x0C` | `std::string` title (24 B) |
| `+0x24` | `std::string` content (24 B) |
| `+0x3C`,`+0x40`,`+0x44`,`+0x48` | UI message ids subscribed at construction |
| `+0x50` | **widget id** → `StandByWidget+0x54` |

The "UI message ids" are subscription keys for a global pub/sub list at VA `0x3D6A0BEC`:
`0x620f3c(msgId, lv_obj, userdata)` allocates a 0x14-byte node `{msgId, handler, userdata,
obj, flag}` and links it; `0x620fa4(msgId, payload)` publishes. *The semantics of individual
ids (1001/1003/2002/2003/1018/1025/1026/1034-1036) are **UNVERIFIED** — they are not decoded
here.*

---

## 3. `createTextWidget` — can free-form text reach the HUD?

**Short answer: not through `set_standby_widget_lists`.** Names select among the six fixed
widgets; there is no text field anywhere in that protocol path.

Signature, from the single call site (`0x5d9de4`) and the body (`0x5d904c`):

```
createTextWidget(StandByWidget* this,
                 const std::string* title,   // desc+0x0C, r1
                 uint32_t msgIdLine1,        // desc+0x3C, r2
                 uint32_t msgIdLine2)        // desc+0x40, r3
```

Body: two `lv_label_create` (`0x637344`) children at `this+0x10` / `this+0x14`, both seeded
from `title.c_str()` (`ldr r1,[r5]` @ `0x5d906c` and `0x5d90b4` → `0x638730`), font
`FONT_DUMMY_20` (`0x166AF0`) via `0x5e2e80`, width `LV_SIZE_CONTENT` (`0x27D1`). If
`msgIdLine1 != 0` the first label is subscribed via `0x620f3c` and the handle pushed into a
vector at `this+0x38`; likewise `msgIdLine2` for the second label.

So the *string* argument is an ordinary caller-supplied `std::string` — structurally,
arbitrary text is accepted. But the **only** caller is factory arm id 5 (`weekday`), which
fills it from the DateTime provider (`0x5c6d84` → title, `0x5c6d7c` → content) and pins the
ids to `0x401`/`0x402`. There is no i18n-id indirection and no path from the JSON command
to this argument.

**Practical consequence:** free-form HUD content requires either (a) new code, or (b)
finding a channel that *publishes* to msg ids `0x401`/`0x402` (or `0x3E9`/`0x3EB`/`0x7D2`/…)
through `0x620fa4`. (b) is untested here and belongs to the push leaf.

---

## 4. The packed int64 — layout, and its two loops

Storage key is preference **`0x47` (71)**, an `int64`. Getter `0x5e31b4(key, &out)` walks a
16-byte-stride table at VA `0x3D69A338` (count at `+0x7C8`, signed-byte key at entry`+8`,
value at entry`+0x10`); setter `0x5e317c`.

**Layout — 4 bits per entry, 15 entries, little end first:**

```
nibble 0  (bits  0.. 3) = widget count N          (N = |widgets| - 1, i.e. excluding the
                                                   always-appended 0x7FFFFFFF placeholder)
nibble i  (bits 4i..4i+3), i = 1..14 = widget id of the i-th widget, display order
bits 60..63                        = never written
```

**Pack** — `rebuildFromWidgetSeq` `0x5dbac0`–`0x5dbb56`:

```
0x5dbac0  ldrd r2,r3,[r4,#0x10]      ; mWidgets vector begin,end
0x5dbac8  asr  r0,r0,#2              ; element count (incl. placeholder)
0x5dbacc  add  r0,r0,#-1             ; N = count-1
0x5dbad2  strb r0,[r4,#0x24]         ; bytes[0] = N
0x5dbae2..0x5dbb08                   ; bytes[i] = widgets[i-1]->id, skipping id==0x7FFFFFFF
0x5dbb0a  ldrb r0,[r4,#0x24]         ; r1=0 (shift), r5=hi=0, r6=lo=0, r7=0
0x5dbb1a  ldrb r0,[r4,#1]!           ; next byte
0x5dbb24  LSLL r2,r3,r1              ; {r3:r2} = (uint64)byte << shift   [Armv8.1-M]
0x5dbb28  add  r1,r1,#4
0x5dbb2c  orr  r6,r6,r2              ; lo |=
0x5dbb30  orr  r5,r5,r3              ; hi |=
0x5dbb34  bne  loop                  ; flags from `cmp r1,#0x3c` at 0x5dbb22
0x5dbb36  log "[Launcher]changeStandbyWidgetSeq, storeValue: %lld"
0x5dbb54  setPreference(0x47, {r6,r5})
```
`cmp r1,#0x3c` is evaluated **before** the `+4`, so the shift takes values `0,4,…,0x38`
→ **15 iterations → 15 nibbles**. Max storable widgets = **14**.

**Unpack** — `createDefaultWidgets` `0x5db816`–`0x5db836`:

```
0x5db816  add  r0,r4,#0x23           ; &bytes[-1]; bytes[] lives at this+0x24
0x5db81a  movs r1,#0
0x5db81c  ldrd r7,r6,[sp,#0x10]      ; the stored int64
0x5db824  ASRL r2,r3,r1              ; {r3:r2} = value >> shift          [Armv8.1-M]
0x5db82a  and  r2,r2,#0xf
0x5db82e  cmp  r1,#0x40              ; after the +4 → shifts 0,4,…,0x3c
0x5db830  strb r2,[r0,#1]!           ; bytes[0..15]
```
16 nibbles are extracted into `this+0x24 .. this+0x33`; only `bytes[0]` (the count) and
`bytes[1..count]` are consumed afterwards.

**Caveat (UNVERIFIED but implied):** a count nibble of 15 would make the rebuild loop read
`bytes[15]`, which the packer never writes. Ids > 6 in a nibble reach the factory's
`bhi`/`beq NULL` paths and yield no widget. Neither is reachable from the JSON path
(names → ids 1..6), only from a hand-crafted preference blob.

---

## 5. Command → widget pipeline (fully traced)

```
BLE JSON {"action":"set_standby_widget_lists","value":{"widgets":["…", …]}}
  └ MessageModel::handleStandbyWidgetsChange           0x5cc56c   (parse; logs
        "[Launcher]standby widgets count: %d" @0x5cc5f0; builds vector<std::string>,
        24-byte elements; NO name validation, NO count cap here)
  └ LauncherProvider::setStandbyWidgets                0x5c7434   (this+8 → …)
  └ 0x5d4f80  → +0x148 → 0x5d4468 → +0x98 →
  └ StandByWidgetManager::changeStandbyWidgetSeq       0x5dbbe4
        · compares new vector against mWidgetNames (manager+0x34..+0x3C, vector<string>)
        · equal → "[Launcher]widget seq is same, no need to change" (line 379)
        · manager+0x40 != 0 → "[Launcher]current in sports mode, not refresh view" (line 388)
        · else copy, log "[Launcher]update mStandbyWidgetSeq, size %d" (line 386), then
  └ StandByWidgetManager::rebuildFromWidgetSeq         0x5db9dc
        · destroy + free every existing widget, empty mWidgets (0x5da928)
        · per element: strcmp against the six names → createWidget(id, index)
        · append createWidget(0x7FFFFFFF, 0x7FFFFFFF), then hide it (0x5daa20(…,0))
        · pack + setPreference(0x47)
```

`get_standby_widget_lists` (handler at `0x5cc484`–`0x5cc4d6`) answers by **copying
`manager+0x34` verbatim** (`0x5c749c` → `0x5d4f88` → `0x5d4470` → `getWidgetNameList`
`0x5dab10`) into a cJSON string array under `value.widgets`. It therefore echoes exactly the
names last accepted — **including names the firmware did not recognise**, and it returns an
**empty array** on a device that has never received a `set_…`, because the default widgets
are built from the packed int64, not from the name vector.
(`syncWidgetNamesFromWidgets` at `0x5dafe8` does refill `manager+0x34` from the live widget
list — via `getName` — but it is only called from `createDefaultWidgets` and
`remoteDeviceTypeChangeCallback` (`0x5db770`), not from the JSON path.)

---

## 6. Default widget set (no stored preference)

`createDefaultWidgets` **`0x5db7c4`**. If `getPreference(0x47)` returns false:

```
0x5db8d2  if (0x5c5cf8(provider))            // provider+0x298 → 0x5c896c; semantics UNVERIFIED
0x5db910      createSpecWidgets(this)        // 0x5db634
0x5db8d8  createWidget(id=1 time,        index=0)
0x5db8ea  createWidget(id=2 weather_1x1, index=1)
0x5db8fc  createWidget(id=6 aiBall,      index=4)
0x5db892  createWidget(id=0x7FFFFFFF,    index=0xFF)   // disconnect placeholder, then hidden
0x5db8a6  0x5da60c ; 0x5da66c ; syncWidgetNamesFromWidgets(0x5dafe8) ; 0x5daad0
```

`createSpecWidgets` (`0x5db634`) fills the gap at index 2/3:

```
if getPreference(0x47) → "createSpecWidgets, has saved sp, return"
free = 4 - Σ cost(existing names)          // weather_1x2 = 2, else 1
if free <= 0 → "createSpecWidgets, no space left, return"
log "createSpecWidgets, isSupportStepCountWidget: %d"     // 0x5da9e8
if  isSupportStepCountWidget: ensure id 4 (steps)   at index 2 ; drop id 5 (weekday)
else                        : ensure id 5 (weekday) at index 3 ; drop id 4 (steps)
```

**Default order, therefore:**

| condition | default set (display order) |
|---|---|
| provider predicate true, step count supported | `time`, `weather_1x1`, `steps`, `aiBall` |
| provider predicate true, step count unsupported | `time`, `weather_1x1`, `weekday`, `aiBall` |
| provider predicate false | `time`, `weather_1x1`, `aiBall` |

`isSupportStepCountWidget` (`0x5da9e8`) is a chain of remote-device/phone-capability queries
(`0x525874`, `0x5259c0`, `0x526780`, `0x52674c`, `0x526cbc`, `0x526cb4`) — **its exact
predicate is UNVERIFIED here**; only the branch structure is established.

---

## 7. Notes, edge cases and honest gaps

* **`createWidget` deduplicates.** `0x5db5e4` first calls `findWidgetById` (`0x5da7cc`); on a
  hit it logs `[Launcher]createWidget, already exist widget id %d, just change index`
  (line 162, `0x5db604`) and only re-indexes (`0x5d8bd4`). A repeated name in the JSON array
  therefore moves the widget rather than duplicating it.
* **No count cap on the JSON path.** Neither the handler nor `rebuildFromWidgetSeq` nor
  `insertWidget` (`0x5db1c0`, a plain `push_back` on `manager+0x10`) enforces the 4-slot
  budget — only `createSpecWidgets` respects it. Sending 6 valid names will create 6 widgets
  and overflow the flex row. **UNVERIFIED what that looks like on screen.**
* **`aiBall` has one dead branch.** `0x5db39a` calls `0x5c6e8c`, which is a stub
  (`movs r0,#0; bx lr`), so the `launcher_standby_hear_imp_mode` image (`0x199AC0`) is never
  selected in 1.0.12.83; `launcher_standby_freestyle_default` (`0x1980E4`) always wins.
* **`0x7FFFFFFE` (the "sports"/step-count standby card, style 9, `sports_standby_icon`) has
  no caller** in this image: the constant appears only in the factory's own literal pool
  (`0x5db4b0`); a BL-target scan of the whole code region finds no `createWidget` call site
  passing it. Treat it as dead code for 1.0.12.83. *(UNVERIFIED against indirect/vtable
  dispatch — the scan only covers direct BL/BLX.)*
* **`0x7FFFFFFF`** is not addressable by name (it has no entry in `getName`'s `tbb` — it
  falls to the default arm returning `""` at `0x429258`), so it can never appear in
  `get_standby_widget_lists` output either.
* **The pointer stored at `StandByWidget+0` is `&"adjustFlexPadColumn"`** (`0x5d9cb8`,
  literal `0x3C17150C` → `0x199900`). Curious; **not resolved**. It is not a vtable — the
  target bytes are that ASCII literal.
* **Not investigated:** what publishes the UI message ids; the contents of the six unnamed
  style builders (`0x5d8810`, `0x5d8cf8`, `0x5d8d84`, `0x5d8f2c`, `0x5d9190`, `0x5d931c`,
  `0x5d94e8`, `0x5d9708`, `0x5d9990`); whether other OTA versions carry a different name set.
* **What one hardware round trip would still settle:** nothing about the vocabulary — that is
  now recovered from the binary in both directions. A `get_standby_widget_lists` round trip
  after a `set_…` would, however, cheaply confirm the echo-verbatim behaviour described in §5
  and whether unknown names are stored but ignored.
