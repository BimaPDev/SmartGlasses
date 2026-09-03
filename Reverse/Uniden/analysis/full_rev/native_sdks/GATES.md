# Gates: leaf-1.9 native_sdks

OWNS: Reverse/Uniden/analysis/full_rev/native_sdks/**

Scope: Inventory Uniden R/TACH 1.0.9 SDKs, resource API keys, Firebase Crashlytics vs Analytics, and confirm no JNI .so payload.

- [ ] G1: Leaf 1.9 verifier accepts NATIVE_SDKS.md and manifest.json
  CHECK: node analysis/scripts/verify-leaf.mjs 1.9
  EXPECT: leaf 1.9 verification passed
  CWD: Reverse/Uniden
  EVIDENCE: pending
