# Battery circle postmortem (Star Air / XGA010C, 1.0.12.83)

What we tried, what actually shipped, and why v5/v6 bootlooped the glasses.
Authoritative addresses are file offsets in `platform_tester.bin` unless marked VA.
XIP map: **VA = `0x2C000000` + file offset**.

This is not a recovery guide. The circle work is frozen. Do not flash another
object-creating veneer until the unit boots again.

---

## 1. Goal

Show a **live numeric battery percent** on the HUD **without the phone**,
**keep the existing battery icon**, and **do not put the number on the clock
circle**. The requested UI was a **new 140px circle** next to the clock.

Two stock UIs share time/battery chrome and must not be confused:

| UI | Circles | Who draws `HH:MM` | Battery icon |
|---|---|---|---|
| Idle / “normal HUD” | 2 (time+icon, phone-disconnect) | `customTimeAndBatteryWidget` + `TimeModel` | yes |
| Launcher main menu | 4 (time, weather, date `24 Mon.`, Flyme logo) | Dock factory `FUN_2c508910` / `FUN_2c508c10` (loop 5, 4 visible) | on the time tile |

Settings cards reuse the **same dock factory** (`FUN_2c508910` tail). Hooking
that factory garbles Settings (`km` / tofu / `em`/`gm`/`bm`). Those sites
must stay stock.

---

## 2. Hard constraints

- Same-length in-place patch of `platform_tester.bin` (~6.77 MB). No extra
  segments, no relocated `.text`.
- OTA zip is two bins: `platform_tester.bin` + `best1600_watch_bth.bin`.
  Circle work only touched the M55 HUD bin.
- Code cave: file **`0x12F2E4`** / VA **`0x2C12F2E4`**, ~5.9 KB of zeros.
- Thumb `BL` range ±16 MB covers the whole image from the cave.
- Do not remap Latin glyph slots (that turned HUD copy into BIBA).
- A literal `%` in a time string is parsed as another format specifier and
  paints intern tofu. Digits only unless `lv_label_set_text` is used with a
  font that has `%` and the string is never fed back into `*printf`.
- Canary (successful apply): disconnect copy
  `Open BIMA App to connect the HUD3!` (was `…the phone`).
- Flash path that worked for v1–v4: MyvuDemo on iPhone, BLE OTA of
  `ota_star-air_1.0.12.83_BIMA.zip`. Documents copy takes priority over the
  app bundle.

Patcher: `Reverse/firmware/patch_bima.py`.
Packager: `Reverse/tools/bima_ota.py build`.

---

## 3. Battery SOC (verified)

| What | Where |
|---|---|
| Getter | `FUN_2c48A2C4`, file `0x48A2C4`, VA `0x2C48A2C4` |
| Body | `ldrh r0, [DAT_2c48a2cc]` → **`0x3C408A6E`** (u16, clamped 0–100 in veneers) |
| Thunk used by the time widget | `FUN_2c5d68d8` VA `0x2C5D68D8`: `push {r3,lr}; bl getter; pop {r3,pc}` |
| Do **not** use | `FUN_2c49E3B0` (TP / stk51158) |

Ctor of the time+battery widget **must return SOC in `r0`** after the getter
BL. The next instruction is `bl FUN_2c5cfe2c` which picks the battery-icon
src from that value, then `FUN_2c63140c` applies it to `this+0x50`.

---

## 4. The two time pipelines (why “new circle” was hard)

### 4.1 TimeModel — string only, no LVGL objects

`FUN_2c5cdde8` / VA `0x2C5CDDE8` (`updateTimeLabelWithOffset`).

Unique `snprintf` site, file **`0x5CDE2A`**, stock `9df011fb` =
`bl 0x2C66B450`.

```
snprintf(buf, 15, "%02d:%02d", hour, min)   // 16-byte stack temp sp+0x24
copy into TimeModel+0x10
event_publish(0x3E9, time_str)
```

This is how **v4** put `18:46 80` on the clock tile. No new widgets. Confirmed
on device (photos: `18:46 80` / `19:23 68`). Idle 2-circle HUD was never
photographed; launcher 4-circle was.

### 4.2 Dock factory — four circles, shared with Settings

`FUN_2c508c10` builds a flex row. Child factory `FUN_2c508910`.
`lv_label_set_text` sites:

| Site | File | Stock | Meaning |
|---|---|---|---|
| Dock apply HH:MM | `0x5088A8` | `2ff142ff` | leave stock |
| Dock build first paint | `0x508A98` | `2ff14abe` | leave stock |

v2 hooked the shared tail at `0x508A98` → Settings cards tofu. Idle HUD
unchanged. Those BLs stay stock forever.

### 4.3 `customTimeAndBatteryWidget` — the idle/spec time tile

C-string `customTimeAndBatteryWidget` at file `0x199860`.

Constructed from spec-widget factory `FUN_2c5d9c78`, **case 3**:

```
FUN_2c5d931c(this, param_4, param_8, param_10);
```

Ctor `FUN_2c5d931c` / file `0x5D931C` / VA `0x2C5D931C`.

Layout (partial):

| Offset | Meaning |
|---|---|
| `this+0x04` | clock `lv_obj_t*` (parent of labels/icon) |
| `this+0x50` | battery `lv_img` |
| `this+0x44` | optional lv_timer (refresh path `FUN_2c5d8494`) |
| `this+0x48` | last SOC |

Near the end of the ctor (asm):

```
str r0, [r4, #0x50]          ; battery img
mov r5, r0
bl  0x2c607048               ; set_size 26x24
bl  0x2c5d68d8               ; GETTER  ← unique BL, file 0x5D9426, stock fdf757fa
bl  0x2c5cfe2c               ; pick icon from r0
; stack canary check, then
b.w 0x2c63140c               ; img_set_src(battery, icon)
```

`r4` is still `this` at the getter BL (`mov r4, r0` at prologue).

LVGL8 object layout used by the veneer (from `FUN_2c5fefc8`):

```
obj+0x00 = class pointer
obj+0x04 = parent
obj+0x08 = spec_attr (child list lives here once allocated)
```

`lv_obj_create` = `FUN_2c606a10` / VA `0x2C606A10`
→ `FUN_2c5fefc8(DAT_2c606a24, parent)` then `FUN_2c5ff0b8`.
Class pointer `DAT_2c606a24` = **`0x3C3F2CAC`** (0x3C data alias, not 0x2C).

---

## 5. Versions before the circle (needed to understand the failure)

### v1

Hooked dock day/night label. Clipped/hidden on device. Disconnect canary
applied so flash was visible.

### v2

Hooked dock HH:MM `set_text` **and** `FUN_2c508910` shared tail `0x508A98`.
Settings garbled. Idle HUD unchanged.

### v3

TimeModel snprintf format `"%02d:%02d %d%%"`. Clock tile tofu `em▯9?`.
Cause: `%` in the time string is parsed as another format specifier.

### v4 — last known-good HUD

Hook **only** TimeModel snprintf at `0x5CDE2A` → cave.

Veneer:

1. Preserve snprintf 5th arg (min) across `push` (`ldr r6, [sp, #24]` after
   `push {r4-r6,lr}` + `sub sp, #8`).
2. Call stock `snprintf` for `"HH:MM"`.
3. `bl FUN_2c48A2C4`, clamp 0–100.
4. Hand-append `" NN"` onto the buffer. **No `%` character.**

Clock tile showed `HH:MM` + space + SOC. Battery icon kept. Settings OK.
No new LVGL objects. This is what `patch_bima.py` currently rebuilds.

Idle 2-circle HUD with percent was **never** confirmed with a photo.

---

## 6. What “the circle” actually was

User request after v4: **do not put `%` on the clock circle — create a new
circle** for the percent.

That cannot be done in TimeModel (strings only). It cannot be done in the
dock factory (Settings-shared). The remaining unique site is the
**`customTimeAndBatteryWidget` ctor getter BL** at file **`0x5D9426`**.

Plan:

- Revert TimeModel to stock `HH:MM` (`9df011fb` must stay stock).
- At the getter BL, call the real getter, then create a **sibling** of the
  clock object: parent = `clock->parent` = `[[this+4], #4]`.
- Style it like a dock circle: 140×140, `LV_RADIUS_CIRCLE` (`0x7FFF`),
  outline 1, transparent fill, centered label with SOC digits.
- `lv_timer` 500 ms to refresh the label.
- Return SOC in `r0` so icon pick still works.

---

## 7. v5 — shipped, bootlooped

**Pack label:** `BIMA + batt circle v5 · 1.0.12.83`  
**Hook:** file `0x5D9426` `bl` retargeted from `0x2C5D68D8` to cave `0x2C12F2E4`.  
**TimeModel / dock:** left stock.

### 7.1 Veneer (ctor path, runs *inside* `FUN_2c5d931c`)

Entry: `r4 = this`. Callee-saved, not pushed.

```
push {r5, r6, r7, lr}
bl   GETTER                    ; r0 = soc
mov  r7, r0
ldr  r0, [r4, #4]              ; clock lv_obj
cbz  restore
ldr  r0, [r0, #4]              ; parent
cbz  restore
bl   lv_obj_create             ; FUN_2c606a10
cbz  restore
mov  r5, r0                    ; circle

; DANGEROUS
movs r1, #0
movw r2, #0xffff
movt r2, #0xf                  ; r2 = 0x000FFFFF
bl   FUN_2c603a04              ; "add_style" with selector mask 0xfffff

mov  r0, r5
movs r1, #140
movs r2, #140
bl   lv_obj_set_size           ; FUN_2c607048

movw r1, #0x7FFF
bl   lv_obj_set_style_radius   ; FUN_2c62C7E8

pad 12, outline width 1, bg opa 0

ldr  r0, =0x3D6940D0           ; dock factory color pointer (SRAM)
ldr  r0, [r0]                  ; load color
bl   bg_color / outline_color  ; FUN_2c606d60 / FUN_2c606d84

bl   lv_label_create           ; FUN_2c637344
bl   FUN_2c5e2e80(0x3C13E6FC)  ; font get
bl   set_font / align CENTER (9)
paint(label, soc)              ; itoa, no '%', lv_label_set_text 0x2C638730

movw r0, timer_cb|1
movw r1, #500
mov  r2, r6                    ; user_data = label
bl   lv_timer_create           ; FUN_2c62BDD8

restore:
mov  r0, r7                    ; MUST return soc
pop  {r5, r6, r7, pc}
```

Timer callback: `user_data` at `timer+0x0c`, call getter, `paint(label, soc)`.

`lv_timer_t` from `FUN_2c62bdd8`:

| Offset | Field |
|---|---|
| `+0x00` | period |
| `+0x04` | last_run tick |
| `+0x08` | callback |
| `+0x0c` | user_data |
| `+0x10` | repeat_count (`-1` = forever) |
| `+0x14` bit0 | paused (`FUN_2c62be40` sets it) |

### 7.2 Why v5 crashed (ranked)

Observed: **stuck on reboot/splash for a while, then shutdown, then reboot
again.** Classic M55 watchdog. After some loops A/B showed **v4 UI**
(`19:23 68` on the clock) — the v5 bank was rejected or the other bank
still had v4.

This ctor also has a **stack canary** (`local_1c` / `DAT_2c5d94cc`).
`stack_chk_fail` is noreturn. Heap smash or frame smash in the veneer
would look identical to a watchdog loop.

**1. `FUN_2c603a04(obj, 0, 0xfffff)` on a brand-new object**

This is not `lv_obj_add_style` with a style pointer. `param_2 == 0` and
`param_3 = 0xfffff`. The function walks `*(obj+0x0c)` as an array of
8-byte style records, gated on `*(ushort *)(obj+0x22) & 0x1f8`.

On a just-created `lv_obj`, `+0x0c` is often NULL / empty. Walking that
list is a **null deref or infinite walk**. Copied from a misread of the
dock factory literal `0xfffff` at `0x508A9C`, which is a **selector mask
for an already-styled circle**, not something you pass to a fresh child
mid-ctor.

This is the strongest single crash cause.

**2. Load from SRAM `0x3D6940D0`**

Dock factory does `ldr r1, [0x2c508aa0]; ldr r5, [r1]` where the pool
value is `0x3D6940D0`. That is a **relocated RAM color**, valid when the
launcher dock has already started.

`customTimeAndBatteryWidget` also runs on **boot/splash UI construction**.
If BSS/color RAM is not up, `ldr r0, [0x3D6940D0]` is a **bus fault**.
Same reboot-screen hang.

**3. Creating LVGL children inside the parent’s constructor**

`lv_obj_create(parent)` inserts into `parent->spec_attr` child array
(`FUN_2c5fefc8`). At this point:

- The clock’s parent may still be mid-flex layout (`FUN_2c508c10` has not
  necessarily called `lv_obj_update_layout`).
- Spec-attr / child count may be reallocating.
- The same widget type is used on **splash**, not only the idle HUD.

LVGL’s own rule: create extra objects from a **timer callback** after the
current constructor returns, not from inside `lv_obj` construction.

**4. Font `0x3C13E6FC` via `FUN_2c5e2e80`**

Wrong font id → null font → later `set_text` fault. Secondary to (1)(2).

**5. Timer callback Thumb bit**

Cave callbacks used `|1`. Correct. Unlikely the first fault.

**6. Alignment**

Ctor frame is 8-byte aligned (`push {r4-r8,lr}` + `sub sp, #8`). Veneer
`push {r5-r7,lr}` keeps that. `set_size` / `align` have their own
canaries and need 8-byte `sp`. Alignment was checked; not the prime
suspect vs (1)(2)(3).

### 7.3 Why BLE dies

Bluetooth lives on the same BES2700 (`best1600_watch_bth.bin`). M55
watchdog / `stack_chk_fail` resets the **chip**. Advertising never stays
up. OTA cannot apply a fix if the user image never finishes boot.

`do_ota_rollback` runs when an OTA **fails to apply** (MD5 / magic), not
when a successfully written image later crashes in LVGL. v5 **applied**,
then paniced. Bootloader still treats that slot as valid. The other bank
may still hold v4 or 1.0.12.88; there is no user-facing “boot other slot”
key. Engineer/MMI mode is in the **running** app.

---

## 8. v6 — still bootlooped

Hypothesis: defer object creation to `lv_timer` so the ctor only does
getter + `lv_timer_create`, then build the circle on the next tick.

**Pack label:** `BIMA + batt circle v6`  
**Ctor veneer (minimal):**

```
bl GETTER
mov r7, r0
ldr r0, [r4, #4]            ; clock
cbz restore
mov r6, r0
; r0 = create_cb|1
movw r1, #100               ; 100 ms
mov r2, r6                  ; user_data = clock
bl lv_timer_create
restore:
mov r0, r7
pop ...
```

**Timer `create_cb`:** pause self (`FUN_2c62be40`), check class high byte
`0x2C` or `0x3C`, `parent = clock->parent`, then `lv_obj_create`,
`set_size(140,140)`, radius `0x7FFF`, outline 1, outline color
`0xFF00FF00` (immediate, **no** `0x3D6940D0`), bg opa 0, label, align 9,
paint, start 500 ms paint timer. **No `FUN_2c603a04`. No font get.**

Device report: **hard reboot loop**, BLE never usable. Worse than v5’s
“hang on splash then A/B to v4.”

### Why deferral was not enough

**A. `lv_timer_create` in this ctor is not proven safe**

The widget’s own timer is created later in `FUN_2c5d8494`, and only when
`this+0x44` is already set by other paths. Splash construction may run
**before** the timer linked-list (`DAT_2c62be10` / `FUN_2c62c938`) is
ready. Allocating a timer then is a crash **in the ctor**, same as v5.

**B. 100 ms still fires during splash**

Splash uses this widget. A timer 100 ms after ctor still creates a 140px
child on the **boot parent**, corrupting splash layout or UAF if splash
destroys the clock before the tick.

**C. Use-after-free**

`user_data = clock lv_obj*`. If splash constructs, starts the timer, then
destroys the widget, the callback dereferences a freed object.

**D. Class check was a near-miss, not a fix**

`lv_obj` class is `0x3C3F2CAC`. A `0x2C`-only check would skip create
(boot lives, no circle). v6 accepted `0x2C` **or** `0x3C`, so create still
ran — and still crashed.

**E. Extra child still mutates LVGL from a timer during early bring-up**

`lv_timer_handler` runs on the same thread as rendering. Creating a flex
sibling while the boot UI is still in the reboot-screen state can still
watchdog. We never proved this widget is idle-HUD-only.

---

## 9. What we reverted

`patch_bima.py` is **v4** again:

- Cave = TimeModel append `" NN"`.
- Hook `0x5CDE2A` only.
- `0x5D9426` **must remain** stock `fdf757fa`.
- Dock `0x5088A8` / `0x508A98` stock.

That pack was copied to Testing1 as `BIMA + batt% v4 · 1.0.12.83` but
**could not be flashed** because v6 never brought BLE up.

---

## 10. Address cheat sheet

| Item | File off | VA |
|---|---|---|
| Cave | `0x12F2E4` | `0x2C12F2E4` |
| TimeModel snprintf BL (v4 hook) | `0x5CDE2A` | `0x2C5CDE2A` |
| Stock snprintf | | `0x2C66B450` |
| Ctor getter BL (v5/v6 hook; leave stock) | `0x5D9426` | `0x2C5D9426` |
| Getter thunk | | `0x2C5D68D8` |
| SOC getter | `0x48A2C4` | `0x2C48A2C4` |
| SOC u16 | | `0x3C408A6E` |
| Widget ctor | `0x5D931C` | `0x2C5D931C` |
| Spec factory (case 3) | `0x5D9C78` | `0x2C5D9C78` |
| Dock apply / build | `0x5088A8` / `0x508A98` | |
| `lv_obj_create` | | `0x2C606A10` |
| `lv_obj_set_size` | | `0x2C607048` |
| `lv_obj_set_style_radius` | | `0x2C62C7E8` |
| `FUN_2c603a04` (do not call on new obj) | | `0x2C603A04` |
| `lv_label_create` | | `0x2C637344` |
| `lv_label_set_text` | | `0x2C638730` |
| `lv_timer_create` | | `0x2C62BDD8` |
| `lv_timer_pause` | | `0x2C62BE40` |
| Dock color ptr (do not deref from ctor) | pool `0x508AA0` | `0x3D6940D0` |
| `lv_obj` class | | `0x3C3F2CAC` |

---

## 11. If this is ever attempted again (do not flash until recovered)

Safe:

- TimeModel append digits (v4). No new objects.
- A **dedicated** label that already exists in the widget, if one is proven
  unused and not a format string.

Unsafe until proven on a second unit:

- Any `lv_obj_create` / `lv_label_create` / `lv_timer_create` in
  `FUN_2c5d931c`.
- Any hook of `FUN_2c508910` / `0x508A98`.
- `%` in TimeModel output.
- SRAM color loads from `0x3Dxxxxxx` during boot UI.
- `FUN_2c603a04(..., 0, 0xfffff)`.

To add a fifth circle the factory would have to grow the flex loop and
register a new spec-widget type **in the existing tables**, same-length,
with a discriminator so Settings is untouched. That was never implemented.

---

## 12. Outcome

| Pack | On device | Result |
|---|---|---|
| v4 TimeModel `HH:MM NN` | yes | Boots. Percent on clock tile. Settings OK. |
| v5 sibling create in ctor | yes | Splash hang, watchdog, A/B sometimes back to v4. |
| v6 deferred timer create | yes | Hard bootloop. BLE never usable. **Current brick.** |
| v4 restore zip | on phone only | Cannot OTA; glasses never finish boot. |
