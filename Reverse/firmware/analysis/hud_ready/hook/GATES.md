# Gates: leaf-1.2.1 ranked idle-HUD hook

OWNS: Reverse/firmware/analysis/hud_ready/hook/**

Scope: Rank one splash-safe non-delay idle-HUD-ready hook from remeasured platform_tester.bin bytes and the four 1.1 evidence leaves.

- [x] G0: this ledger states outcomes that can fail
  CHECK: node ../../../../../.agents/skills/unlazy/scripts/gate-lint.mjs GATES.md
  EXPECT: LINT OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/hud_ready/hook; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=48630b7361dd44ee870917b12c3d19b9d7bdea738aaca16bb04d4cab83b772d2; output-bytes=8

- [x] G1: ranked hook JSON remeasures against the binary and names a splash-safe non-delay site
  CHECK: node ../scripts/verify-hook.mjs
  EXPECT: hook ranking verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/hud_ready/hook; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=b5d613b91aaaa99fc1f45d7e3712097d3244e3915993786d26efa84614589685; output-bytes=33

- [x] G2: recommended name or file_off appears in at least two 1.1 child artifacts
  CHECK: node ../scripts/verify-integration.mjs
  EXPECT: integration verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/hud_ready/hook; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=5186c48a7cc8aef665a1fa023cfbc32a8de2f3376c6bd1277f31a309598029b3; output-bytes=32

- [x] G3: synthesis still rejects the v5/v6 ctor BL and the 100 ms delay
  CHECK: node ../scripts/verify-regressions.mjs
  EXPECT: regression verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/hud_ready/hook; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=4311f181d93e44373f6368ab7a72333520818939534b9be0b1f3e956ae299d2e; output-bytes=31
