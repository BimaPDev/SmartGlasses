# Standby-widget configuration protocol

**Status:** partially recovered inline after the leaf-1.1 agent was killed by an
account spend limit. Schema is byte-verified; the widget **name vocabulary** is NOT.

## `set_standby_widget_lists` — payload schema (VERIFIED by disassembly)

Handler prologue at file `0x5cc56c` (`push.w {r4-r8,sb,sl,lr}`), VA `0x2c5dc56c`.
Parse sequence, each step read off the disassembly:

| Addr (file) | Call | Meaning |
|---|---|---|
| `0x5cc5d8` | `ldr r1, -> 0x194cf0 'widgets'` | key name |
| `0x5cc5dc` | `bl 0x48e42c` | `cJSON_GetObjectItem(root, "widgets")` |
| `0x5cc5e2` | `bl 0x48e85c` | **must be an array** — else bail to `0x5cc586` |
| `0x5cc5ec` | `bl 0x48e3f0` | `GetArraySize` -> count |
| `0x5cc602` | TRACE | logs `[Launcher]standby widgets count: %d` |
| `0x5cc60e` | `ble` | **count <= 0 bails** |
| `0x5cc616` | `bl 0x48e408` | `GetArrayItem(arr, i)` |
| `0x5cc61c` | `bl 0x48e84c` | **each element must be a STRING** |
| `0x5cc622` | `ldr sl,[r5,#0x10]` | `->valuestring` |
| `0x5cc63e` | `bl 0x66c4ec` | `strlen` |
| `0x5cc642` | `cmp r0,#0xf` | SSO threshold 15 — short names stored inline |
| loop | | each name becomes a 24-byte `std::string` pushed into a vector |

So the payload is:

```json
{"action":"set_standby_widget_lists","data":{"widgets":["<name>","<name>", ...]}}
```

**Elements are NAMES (strings), not numeric ids.** An integer array is rejected at
`0x5cc61c`.

Companion actions found in the same dispatch table (`handleSystemMsg`, action-name
strings at `0x194bcc`-`0x194f68`):
`get_standby_widget_lists` `0x194cd4` · `set_standby_position` `0x194be0` ·
`get_standby_position` `0x194edc` · `change_dock_items` `0x194bcc` ·
`set_font_mode` `0x194cc4`

## Storage

`handleStandbyWidgetsChange` (`0x194d14`) feeds `changeStandbyWidgetSeq`
(`0x199e20`), which persists a packed **int64**:
`[Launcher]changeStandbyWidgetSeq, storeValue: %lld` (`0x199dac`).
`createDefaultWidgets` reads it back: `found sp value : %lld` (`0x199cb8`), and
`rebuildFromWidgetSeq` (`0x199d94`) reconstructs the view.
`[Launcher]widget seq is same, no need to change` (`0x199e98`) short-circuits no-ops.

**UNVERIFIED:** bits-per-widget and max count in that int64. Not recovered.

## THE GAP: valid widget names

**Not recovered.** Attempts that failed:
- The consumer at `0x5c7434` is a generic string/vector helper, not the mapper.
- The Android app's Flutter strings (`libapp-strings.txt`) contain only the phone's
  own UI widget class names (`BatteryLevelWidget` etc.), not glasses HUD names, and
  contain no occurrence of `set_standby_widget_lists` at all.

**The cheap way to close this gap is the device, not the disassembler.** Send:

```json
{"action":"get_standby_widget_lists"}
```

The reply enumerates the current layout and therefore hands you the exact name
vocabulary and spelling. One round trip replaces an unbounded RE hunt.

Function-name evidence suggests the widget families are time+battery, weather (1x2),
step-count/health, and a generic text widget — but the **config strings** for these
are not the function names and must not be guessed. Writing an unrecognised name is
untested behaviour.
