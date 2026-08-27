# Gates: leaf-3.2 — LVGL thread creation sites (osThreadAttr_t + osThreadNew)

OWNS: Reverse/firmware/analysis/rtos/lvgl/thread_create_sites.json, Reverse/firmware/analysis/rtos/lvgl/GATES-3.2.md, Reverse/firmware/analysis/rtos/lvgl/scripts/find_thread_create.py, Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.2.mjs

Scope: recover the CMSIS-RTOS2 osThreadAttr_t descriptors and the Thumb create sites that call the shared osThreadNew peeler for `lvgl_async` and `lvgl_ui` (the task-handler thread) from stock platform_tester.bin bytes, independently of lv_core_map.json.

- [x] G0: this ledger states outcomes that can fail
  CHECK: node ../../../../../.agents/skills/unlazy/scripts/gate-lint.mjs GATES-3.2.md
  EXPECT: LINT OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=48630b7361dd44ee870917b12c3d19b9d7bdea738aaca16bb04d4cab83b772d2; output-bytes=8

- [x] G1: the stock image is the exact artifact analysed (size and SHA-256 measured from disk, not copied from the artifact)
  CHECK: node scripts/verify-3.2.mjs --image
  EXPECT: G1-IMAGE-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=3f6aa7089afec5909958f2c55dd578e7f1af9ffb66eee567f11eb9bc50879d0d; output-bytes=18

- [x] G2: both address bases are re-derived from image bytes alone and agree with the artifact (rodata/data 0x3C alias and Thumb text base)
  CHECK: node scripts/verify-3.2.mjs --bases
  EXPECT: G2-BASES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=26eaf7365bf55b6b5b838137590e5dc1aa3c3afceba15cd4f1c3257f99b9ee0e; output-bytes=75

- [x] G3: the `lvgl_async` and `lvgl_ui` name strings are byte-exact, NUL-terminated true starts at the claimed file offsets, and each has exactly one true start in the image
  CHECK: node scripts/verify-3.2.mjs --strings
  EXPECT: G3-STRINGS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=0d6fa835edf33aa367795c2cbc95edee4d4c51e8524804a723a7263db071e3e3; output-bytes=20

- [x] G4: every claimed osThreadAttr_t is re-proved field by field from stock bytes — the name-field dword equals the claimed name VA, and stack_size / priority / stack_mem match
  CHECK: node scripts/verify-3.2.mjs --attrs
  EXPECT: G4-ATTRS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=9c80f53c2ef2ed0c5a1b47bcae46bcae1d6aefd82fc7a0ce3e2d14e8f42be122; output-bytes=18

- [x] G5: the packed entry word is Thumb-odd, and `(entry & ~1) - text_base` is a real PUSH{..,lr} prologue in the stock image
  CHECK: node scripts/verify-3.2.mjs --entries
  EXPECT: G5-ENTRIES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=ea8f7cf8cd7e621f8fb7d610215d04e9cc829e619a45488b70f29d144275800d; output-bytes=20

- [x] G6: each create site is an LDR (literal) of the packed {entry,attr} dword followed by a BL to the same peeler, the attr-alone VA has zero hits, and the packed-def VA scanner is proved live by a positive control
  CHECK: node scripts/verify-3.2.mjs --creates
  EXPECT: G6-CREATES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=e7306d50b59fb1a39240aff2c1e3bce82c0233c00244b06fc4ad814a5803d1e1; output-bytes=62

- [x] G7: the two threads are distinct — different name strings, entry file offsets, stack buffers, and stack sizes
  CHECK: node scripts/verify-3.2.mjs --distinct
  EXPECT: G7-DISTINCT-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=69f3cf69e0f7e3f8059e596b1b90f219d1dfcdd4cfa8a1989d05982c8174bbd1; output-bytes=58

- [x] G8: the generator script rebuilds thread_create_sites.json byte-identically from the stock image alone
  CHECK: node scripts/verify-3.2.mjs --regen
  EXPECT: G8-REGEN-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=aa66b604237fe6af789dcfb67e2066e2b745c5a14c9292bea09d8a5a2bb3ac16; output-bytes=18

- [x] G9: every inference in the artifact is explicitly labelled as an inference and carries a stated reason, and no claim is left unlabelled
  CHECK: node scripts/verify-3.2.mjs --labels
  EXPECT: G9-LABELS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=bf375c44ec5008868bf3ab3778a1333b39ce96e3488913a048480f1f265fab3c; output-bytes=39
