# Gates: leaf 1.1.1 hud-ready strings

OWNS: Reverse/firmware/analysis/hud_ready/strings/**

Scope: catalog every firmware string that could be the idle-HUD-ready signal, with measured offsets and recovered or UNRECOVERED code sites

- [ ] G1: extractor rebuilds inventory from platform_tester.bin and leaf 1.1.1 verifier passes
  CHECK: python3 Reverse/firmware/analysis/hud_ready/strings/extract_strings.py && node Reverse/firmware/analysis/hud_ready/scripts/verify-leaf.mjs 1.1.1
  EXPECT: leaf 1.1.1 verification passed
  CWD: .
  EVIDENCE: pending

- [ ] G2: stock onLauncherEnterCallback is catalogued as a delay, not idle-HUD-ready
  CHECK: node Reverse/firmware/analysis/hud_ready/scripts/verify-delay-named.mjs strings
  EXPECT: stock delay named verification passed
  CWD: .
  EVIDENCE: pending
