# Gates: leaf-3.4 LVGL core map — porting-layer strings, IPC descriptors, tick source, flush path

OWNS: Reverse/firmware/analysis/rtos/lvgl/lv_core_map.json, Reverse/firmware/analysis/rtos/lvgl/GATES-3.4.md, Reverse/firmware/analysis/rtos/lvgl/scripts/lv_core_map.py, Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.4.mjs

Scope: map the runtime environment of the LVGL threads in platform_tester.bin — the complete star_air_lvgl porting-layer string inventory, the CMSIS-RTOS2 descriptor structs behind every named LVGL/display IPC object, the lv_tick source, and the BGRA8888 flush path — with every claim carrying a file offset or address that a verifier re-proves against the stock binary bytes.

- [x] G0: this ledger states outcomes that can fail
  CHECK: node ../../../../../.agents/skills/unlazy/scripts/gate-lint.mjs GATES-3.4.md
  EXPECT: LINT OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=48630b7361dd44ee870917b12c3d19b9d7bdea738aaca16bb04d4cab83b772d2; output-bytes=8

- [x] G1: the stock image is the exact artifact analysed (size and SHA-256 measured from disk, not copied from the map)
  CHECK: node scripts/verify-3.4.mjs --image
  EXPECT: G1-IMAGE-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=3f6aa7089afec5909958f2c55dd578e7f1af9ffb66eee567f11eb9bc50879d0d; output-bytes=18

- [x] G2: both address bases are re-derived from image bytes alone and agree with the map (rodata/data 0x3C alias and Thumb text base)
  CHECK: node scripts/verify-3.4.mjs --bases
  EXPECT: G2-BASES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=26eaf7365bf55b6b5b838137590e5dc1aa3c3afceba15cd4f1c3257f99b9ee0e; output-bytes=75

- [x] G3: every catalogued porting-layer string is byte-exact and NUL-terminated at its claimed file offset, and the inventory size is recounted from the image rather than read from the map
  CHECK: node scripts/verify-3.4.mjs --strings
  EXPECT: G3-STRINGS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=7545f1cfe4056be695c414f99a02671911151d813fc5e616e74cc53c10e73228; output-bytes=73

- [x] G4: every claimed descriptor struct is re-proved field by field from stock bytes — the 4 bytes at the claimed name-field offset equal the claimed name address, and every other decoded field matches
  CHECK: node scripts/verify-3.4.mjs --descriptors
  EXPECT: G4-DESCRIPTORS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=4741cb08ed5666242b78c1fc065860ee7f94866ff6b1e25f55058113f9769d4a; output-bytes=37

- [x] G5: the tick source is proved from decoded instruction bytes — a periodic osTimer whose callback calls the lv_tick_inc routine with the claimed period, and no SysTick/periodic-thread alternative is present
  CHECK: node scripts/verify-3.4.mjs --tick
  EXPECT: G5-TICK-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=00c028586fd9d1ee9b18632ca9aa1387d0eacd41acc9d7b2ab2d32a22080565a; output-bytes=62

- [x] G6: the flush path facts are re-proved from bytes — disp_flush_area prologue, the 32-bit-per-pixel source stride, the 640-pixel row stride computed in-code, and the packed destination buffer address
  CHECK: node scripts/verify-3.4.mjs --flush
  EXPECT: G6-FLUSH-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=5bda2e99e3cb8adaf0aa376c89a51f4b7a85ccb5f8193c2a40c5c58f1da0c1db; output-bytes=68

- [x] G7: the absence claim "no LVGL object-name string is referenced by a plain XIP-base pointer word" is re-measured, and the same scanner is proved live by a known-positive control it must find
  CHECK: node scripts/verify-3.4.mjs --absence
  EXPECT: G7-ABSENCE-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=d2f2d2d9c3eaefcd1670d059f8f083fcf8a5eb3072656f84d08ab85f16c9d81b; output-bytes=48

- [x] G8: the map's cross-references into the pre-existing m55/ipc_inventory.json and jbd013 leaf are checked, and every disagreement is recorded in the map rather than silently dropped
  CHECK: node scripts/verify-3.4.mjs --crossrefs
  EXPECT: G8-CROSSREFS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=77a4ab63f9d8e48868d3481d4abf77579964a45da302408983869d5e40cef665; output-bytes=78

- [x] G9: the generator script rebuilds lv_core_map.json byte-identically from the stock image alone
  CHECK: node scripts/verify-3.4.mjs --regen
  EXPECT: G9-REGEN-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=eb34ce1be2d09ad5a6fc4d071f612b7d7eea23dfb752fec44900352634d3b184; output-bytes=18

- [x] G10: every inference in the map is explicitly labelled as an inference and carries a stated reason, and no claim is left unlabelled
  CHECK: node scripts/verify-3.4.mjs --labels
  EXPECT: G10-LABELS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=fea1e51b72ceab5b16c62bf46dac81e6bd33e037cba1153079078f52826f5f66; output-bytes=40
