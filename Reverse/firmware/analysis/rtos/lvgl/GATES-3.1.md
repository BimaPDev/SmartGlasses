# Gates: leaf-3.1 TRACE intern-ID resolution for the LVGL thread log strings

OWNS: Reverse/firmware/analysis/rtos/lvgl/intern_sites.json, Reverse/firmware/analysis/rtos/lvgl/GATES-3.1.md, Reverse/firmware/analysis/rtos/lvgl/scripts/lvgl_intern_sites.py, Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs

Scope: recover the BES TRACE string-reference encoding from the pre-existing hud_map intern map, apply it to the LVGL thread log/path strings, and emit every code site that references them together with the enclosing Thumb function bounds, all independently re-provable from the stock platform_tester.bin bytes.

- [x] G0: this ledger states outcomes that can fail
  CHECK: node .agents/skills/unlazy/scripts/gate-lint.mjs Reverse/firmware/analysis/rtos/lvgl/GATES-3.1.md
  EXPECT: LINT OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=48630b7361dd44ee870917b12c3d19b9d7bdea738aaca16bb04d4cab83b772d2; output-bytes=8

- [x] G1: the recovered reference encoding reproduces the pre-existing hud_map intern map from raw bytes
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --encoding
  EXPECT: G1-ENCODING-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=fcbfc2d467a3aebbbbac0dbd3d9d9268b75a5ff85b9179e4cf2d8a776672ce15; output-bytes=21

- [x] G2: every LVGL target string in intern_sites.json is byte-exact at its claimed file offset in the stock image
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --strings
  EXPECT: G2-STRINGS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=3ddd3b91f9b3e28dc824f19b6a81d6856f93c3a35a220a4f39ac561e1becefce; output-bytes=32

- [x] G3: every claimed code site's stock instruction bytes decode to the claimed reference form and yield the claimed target address
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --sites
  EXPECT: G3-SITES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=78bad2c963c2793b36feb09c5502b61a2c32518076d05373e96f691f8f6c3b12; output-bytes=29

- [x] G4: the direct-pointer scan counts are re-measured from the image and the scanner is proven live by a positive control string that IS directly referenced
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --scan
  EXPECT: G4-SCAN-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=9fecb2ef538c7c68385adc8fa779b731cc5e7ef0202b9f3ef40effe21a994895; output-bytes=69

- [x] G5: every claimed enclosing function has a real Thumb push-lr prologue at its start VA and a real return/pool boundary at its end, with the site strictly inside
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --funcs
  EXPECT: G5-FUNCS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=25ab1a3d2cbff6ca84430afe19d4572697c85aca821eb854ce688d4b4e1cc78b; output-bytes=73

- [x] G6: the task-handler strings and the async-handler strings resolve into two distinct enclosing functions
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --threads
  EXPECT: G6-TWO-THREADS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=b3d7a987c578a9ff74a260cd147cbe68cb1083fc9cf8ca1e5d29853ff382d130; output-bytes=102

- [x] G7: every function-start recovery carries an explicit high/low confidence label with a stated reason, and no site is silently dropped
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --confidence
  EXPECT: G7-CONFIDENCE-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=5d249d68b7ba31667c7020b7730f31129f903995f54670c204fab6a086c43f09; output-bytes=50

- [x] G8: the generator script reproduces intern_sites.json from the stock image alone
  CHECK: node Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.1.mjs --regen
  EXPECT: G8-REGEN-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=aa66b604237fe6af789dcfb67e2066e2b745c5a14c9292bea09d8a5a2bb3ac16; output-bytes=18
