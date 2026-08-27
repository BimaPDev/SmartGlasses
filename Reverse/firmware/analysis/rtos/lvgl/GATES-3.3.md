# Gates: leaf-3.3 — LVGL service-loop dumps (Capstone)

OWNS: Reverse/firmware/analysis/rtos/lvgl/service_loops.json, Reverse/firmware/analysis/rtos/lvgl/disasm/capstone/**, Reverse/firmware/analysis/rtos/lvgl/GATES-3.3.md, Reverse/firmware/analysis/rtos/lvgl/scripts/dump_service_loops.py, Reverse/firmware/analysis/rtos/lvgl/scripts/verify-3.3.mjs

Scope: recover the Thumb bodies of the `lvgl_async` and `lvgl_ui` thread entries from stock platform_tester.bin bytes, dump Capstone listings with correct text-base VAs, and prove each body's service-loop back-edge from instruction encodings alone (independent of Ghidra and of lv_core_map.json).

- [x] G0: this ledger states outcomes that can fail
  CHECK: node ../../../../../.agents/skills/unlazy/scripts/gate-lint.mjs GATES-3.3.md
  EXPECT: LINT OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=48630b7361dd44ee870917b12c3d19b9d7bdea738aaca16bb04d4cab83b772d2; output-bytes=8

- [x] G1: the stock image is the exact artifact analysed (size and SHA-256 measured from disk, not copied from the artifact)
  CHECK: node scripts/verify-3.3.mjs --image
  EXPECT: G1-IMAGE-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=3f6aa7089afec5909958f2c55dd578e7f1af9ffb66eee567f11eb9bc50879d0d; output-bytes=18

- [x] G2: the Thumb text base is re-derived from image bytes alone and agrees with the artifact
  CHECK: node scripts/verify-3.3.mjs --bases
  EXPECT: G2-BASES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=5898033d51f9bf60bb3bdef88986a7757d597fce5f7ddae06c49764b7e1415a0; output-bytes=61

- [x] G3: both thread entries are re-recovered from name→osThreadAttr_t→packed entry and each entry file offset is a real PUSH{..,lr} prologue
  CHECK: node scripts/verify-3.3.mjs --entries
  EXPECT: G3-ENTRIES-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=7df10e8e2f2456d1e592f14e5978aa940c84460df1c244da63ca22cfc3c5067e; output-bytes=20

- [x] G4: every dumped instruction listing matches the stock image bytes at the claimed file offsets, and the dump files exist under disasm/capstone/
  CHECK: node scripts/verify-3.3.mjs --dumps
  EXPECT: G4-DUMPS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=c2d826a063ad642eb1842432158834593a9182f86382800c89db53ef400de01c; output-bytes=18

- [x] G5: each thread's claimed service-loop back-edge re-decodes from stock bytes to the claimed target, and the loop scanner is proved live by finding that edge
  CHECK: node scripts/verify-3.3.mjs --loops
  EXPECT: G5-LOOPS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=c35e98f4c0a8cef97e245fbb1d0887f357705a750baafcce34cfaf49364385c3; output-bytes=18

- [x] G6: the generator script rebuilds service_loops.json and the Capstone dumps byte-identically from the stock image alone
  CHECK: node scripts/verify-3.3.mjs --regen
  EXPECT: G6-REGEN-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=c8989437a44cfc7ba36974a97d364d9b3cdfb7fb47bae3a95eade04cd4707976; output-bytes=18

- [x] G7: every inference in the artifact is explicitly labelled as an inference and carries a stated reason, and no claim is left unlabelled
  CHECK: node scripts/verify-3.3.mjs --labels
  EXPECT: G7-LABELS-REPROVED
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/rtos/lvgl; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=ce4a96355a5bb0edc9f9fa8d57027b27e2279bec1d9a29970b0ae974eb3ca685; output-bytes=39
