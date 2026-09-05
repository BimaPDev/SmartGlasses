# Native Todo and Schedule domains — CORRECTION

**This retracts an earlier conclusion in this repo that "no calendar/schedule widget
exists" and that an on-glasses checkable todo list was not achievable.** Both are wrong.
The firmware ships both, in every build examined including 1.0.11.53 (the device in hand).

## How the earlier claim went wrong

The search that produced it piped through `head -15`. `sort -u` put the source-path
strings (which begin with `.`) below the cut, so `TodoDomainView.cpp` and
`ScheduleDomainView.cpp` were truncated out of the output. A `head` created an
absence-of-evidence result — the third such failure in this audit.

## What exists

Source paths (1.0.11.53):

```
Pages/Assistant//domain/todo/TodoDomain.cpp        + TodoDomainView.cpp
Pages/Assistant//domain/schedule/ScheduleDomain.cpp + ScheduleDomainView.cpp
```

Present in 12.83, 11.53 and (schedule only) 7.83:

| view | 1.0.12.83 | 1.0.11.53 | 1.0.7.83 |
|---|---|---|---|
| `TodoDomainView` | yes | **yes** | no |
| `ScheduleDomainView` | yes | **yes** | yes |

### Todo intents

```
TODO_CREATE_LIST      TODO_QUERTY_LIST   (vendor typo for QUERY)
TODO_UPDATE_LIST      TODO_UPDATE_SELECT  <- check / uncheck
TODO_DELETE_LIST      TODO_DELETE_SELECT
```
Handlers: `selectTodo`, `showCreateTodo`, `todoDataInfo.type = %d`,
`[%s] parse todo data fail`, `todo list is blank, can not create view`.

### Schedule intents

```
SCHEDULE_ADD  SCHEDULE_DELETE  SCHEDULE_MODIFY  SCHEDULE_VIEW or SCHEDULE_LIST
```
Plus the label `New schedule` and `[%s] parse schedule data fail`.

### Checkbox artwork — already on the device

| resource | size | 11.53 dsc / data |
|---|---|---|
| `assistant_todo_domian_undone` (empty circle) | 8x8 | `0x34964c` / `0x349690` |
| `assistant_todo_domian_done` (filled circle) | 8x8 | `0x34dc9c` / `0x34dcd0` |

(The vendor's own typo: "domian".) Both render — see the PNGs beside this file. They are
IDX4 like every other asset, so they are replaceable with the builder if 8x8 is too small.

### The list widget behind it

Immediately adjacent in the binary: `nextPage`, `previousPage`, `toPage`, `getPageIndex`,
`selectItem`, `listView is nullptr, can not operate`. This is the same paginated,
selectable list the contact picker uses (`onGetItemCount`, `onDrawItem`, `handleSelectIndex`).

## What this means

The mockup's schedule card is almost certainly `ScheduleDomainView`, and a checkable todo
list is `TodoDomainView` — **native, no firmware patch needed**. Both are Assistant domains
fed by phone data (`parse todo/schedule data fail` implies JSON arriving from the phone).

## STILL OPEN

- The exact JSON payload for each intent. Not yet recovered.
- How a domain is opened: whether it can be pushed on demand, or only reached through an
  assistant flow (they live under `Pages/Assistant/`, dispatched near `AiCommandType`).
- Whether `TODO_UPDATE_SELECT` originates on-device (user taps) or from the phone. This is
  the crux for tap-to-check and is NOT yet established — `selectTodo` + `selectItem` are
  suggestive but not proof.

The repo's SDK implements none of this.
