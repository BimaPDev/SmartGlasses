# Gates: branch-3 — LVGL thread integration

OWNS: Reverse/firmware/analysis/rtos/lvgl/LVGL_THREAD.md, Reverse/firmware/analysis/rtos/lvgl/GATES-3.md, Reverse/firmware/analysis/rtos/lvgl/scripts/verify-branch3.mjs, Reverse/firmware/analysis/rtos/RTOS_MAP.md

Scope: integrate leaves 3.1-3.4 into a single verified answer for "where is the LVGL thread", with the entry VA corroborated by at least two independent methods, and update RTOS_MAP.md section 2.

- [x] G1: every child leaf ledger reports all gates met with evidence
  CHECK: node scripts/verify-branch3.mjs --children
  EXPECT: BRANCH3_CHILDREN_OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=83d4260443e300af110b5889e358d979b7c46b6d6d6b176aee33281fc52e75eb; output-bytes=20

- [x] G2: the claimed LVGL thread entry VA is reproduced by at least two independent leaves (intern-log-site back-scan, osThreadNew enumeration, structural loop discovery) and the agreeing VAs are byte-identical
  CHECK: node scripts/verify-branch3.mjs --corroborate
  EXPECT: BRANCH3_CORROBORATION_OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=badf4dacb9160c973ef433cd2e277f8f00b43a389ae3eb4cfa9523946062c9dc; output-bytes=25

- [x] G3: the claimed entry VA decodes to a Thumb function prologue in the stock binary, and the claimed service-loop backward branch decodes to the claimed target
  CHECK: node scripts/verify-branch3.mjs --decode
  EXPECT: BRANCH3_DECODE_OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=fd3d97a193a6346bd63f73973aeef11436dce260a3b23abdfabdf3d7c3576b70; output-bytes=18

- [x] G4: LVGL_THREAD.md states, for each claim, the method and confidence, and every unresolved item is listed in an explicit gaps section
  EVIDENCE: manual review of LVGL_THREAD.md — sections "Method / confidence legend" (7 rows with method+confidence) and "Gaps" (5 explicit unresolved items: callee rename, leaf-3.1 base labeling, Ghidra import base, lv_disp_draw_buf, on-device TCB); corroboration table ties each entry claim to leaves 3.1/3.2/3.3

- [x] G5: RTOS_MAP.md section 2 high-confidence-entry-VA table gains the LVGL rows and its count line matches the table's row count
  CHECK: node scripts/verify-branch3.mjs --map
  EXPECT: BRANCH3_MAP_OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=40e175c9f3ffab1cf5205e5d41d4d4f5d108b92c53f48e7001b1b7798b68f2fb; output-bytes=24
