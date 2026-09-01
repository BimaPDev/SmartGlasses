# Gates: leaf-1.6 ui_features

OWNS: Reverse/Uniden/analysis/full_rev/ui_features/**

Scope: Catalog every Uniden R/TACH 1.0.9 Activity with launcher flag, drawer items, dashboard, settings, BLE list, firmware, wifi, and webview, mapping clicks to ViewModels.

- [ ] G1: Leaf 1.6 verifier accepts UI_FEATURES.md and manifest.json
  CHECK: node analysis/scripts/verify-leaf.mjs 1.6
  EXPECT: leaf 1.6 verification passed
  CWD: Reverse/Uniden
  EVIDENCE: pending
