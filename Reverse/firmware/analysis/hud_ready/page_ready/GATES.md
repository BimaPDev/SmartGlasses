# Gates: leaf 1.1.4 page_ready

OWNS: Reverse/firmware/analysis/hud_ready/page_ready/**

Scope: recover PageManager/Launcher lifecycle TRACE sites that could mean home UI is up, prove the lvgl_ui wait loop is not idle-HUD-ready, and emit remmeasurable page_ready artifacts.

- [x] G1: extract_page.py writes page_ready.json and leaf 1.1.4 verification passes
  CHECK: python3 extract_page.py && node ../scripts/verify-leaf.mjs 1.1.4
  EXPECT: leaf 1.1.4 verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/hud_ready/page_ready; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=6e1cd585a30b097aa6f739204cde894f8301efa3c30c8c4047bd179a1855589a; output-bytes=182
