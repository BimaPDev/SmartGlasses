# Gates: leaf-1.1.3 splash vs idle

OWNS: Reverse/firmware/analysis/hud_ready/splash_vs_idle/**

Scope: Re-measure customTimeAndBatteryWidget ctor callers and produce a non-delay splash-vs-idle discriminator (or honest UNRECOVERED) from platform_tester.bin.

- [x] G0: this ledger states outcomes that can fail
  CHECK: node .agents/skills/unlazy/scripts/gate-lint.mjs Reverse/firmware/analysis/hud_ready/splash_vs_idle/GATES.md
  EXPECT: LINT OK
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=48630b7361dd44ee870917b12c3d19b9d7bdea738aaca16bb04d4cab83b772d2; output-bytes=8

- [x] G1: extract_splash.py writes splash_vs_idle.json whose ctor prologue matches the binary
  CHECK: python3 Reverse/firmware/analysis/hud_ready/splash_vs_idle/extract_splash.py
  EXPECT: wrote splash_vs_idle.json
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=497e88642dc6554a8ad26526d3e97395d47e8abdd49db18ba5b19c4589d7cda6; output-bytes=165

- [x] G2: leaf 1.1.3 verifier re-measures ctor, callers, and a non-delay discriminator
  CHECK: node Reverse/firmware/analysis/hud_ready/scripts/verify-leaf.mjs 1.1.3
  EXPECT: leaf 1.1.3 verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=035c8da63988871e22894a5d8b4761028c673d633ddc1a74d200e80083adf5e0; output-bytes=31

- [x] G3: pre-hook splash check rejects delay discriminators
  CHECK: node Reverse/firmware/analysis/hud_ready/scripts/verify-pre-hook.mjs splash
  EXPECT: pre-hook evidence verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=738b205f58a0dc5e25ff5883c0c45245a6b5ccdd249fb698e60aae0f900928a9; output-bytes=38
