# Gates: leaf-1.3.1 Launcher UI

OWNS: Reverse/firmware/analysis/full_rev/launcher_ui/**

Scope: Map LVGL app domains/views and launcher navigation graph with VAs/strings for Star Air M55 — LAUNCHER_UI overview, domain_map, manifest.

- [x] G1: verify-leaf oracle passes for 1.3.1
  CHECK: node Reverse/firmware/analysis/full_rev/scripts/verify-leaf.mjs 1.3.1
  EXPECT: leaf 1.3.1 verification passed
  EVIDENCE: 2026-08-25 exit 0; stdout "leaf 1.3.1 verification passed"; LAUNCHER_UI.md 239 lines with Launcher+Domain; manifest.functions ≥3 with va+name+role

- [x] G2: domain_map lists ≥10 Domain*.cpp / Pages/* entries with string VA evidence
  EVIDENCE: domain_map.md §2 enumerates 21 Domain*.cpp rows with path/name VAs; §6 Pages/* matrix; measured ≥10

- [x] G3: LAUNCHER_UI.md documents LauncherProvider navigation edges (startAppByPageName / backHome / DockviewV2) with string anchors
  EVIDENCE: LAUNCHER_UI.md §2–§5 + §8; startAppByPageName 0x2c190db4, backHome 0x2c191094, DockviewV2::onClick 0x2c196c00, Pages/Launcher 0x2c165b98
