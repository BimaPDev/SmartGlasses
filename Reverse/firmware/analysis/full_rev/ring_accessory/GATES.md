# Gates: Ring accessory (leaf-1.3.3)

OWNS: Reverse/firmware/analysis/full_rev/ring_accessory/**

Scope: Fully reverse the Star Air ring BLE bond/OTA/gesture path; write RING.md, ring_reconstructed.c, manifest.json under the owned directory. Evidence from platform_tester.bin (+ BTH HOGPRH cross-core strings). Four-pass completion.

- [x] G1: verify-leaf oracle passes for 1.3.3
  CHECK: node Reverse/firmware/analysis/full_rev/scripts/verify-leaf.mjs 1.3.3
  EXPECT: leaf 1.3.3 verification passed
  EVIDENCE: exit 0; stdout "leaf 1.3.3 verification passed" (2026-08-25); RING.md 161 lines, ring_reconstructed.c 409 lines, manifest.functions ≥3

- [x] G2: readable reconstructed C maps ≥3 VAs to semantic names
  EVIDENCE: ring_reconstructed.c documents 0x2C5CA080, 0x2C5CC130, 0x2C5CB758, 0x2C5CBC30, 0x2C5CC710, 0x2C5CD118, 0x2C531C44 with matching manifest.json entries; litpool spot-check OK

- [x] G3: overview names at least one TRACE/string evidence path and one call-graph edge into LVGL/StarryNet/RTOS
  EVIDENCE: RING.md cites xr_hogprh_unicron.c / ring_ota.c / ring_manager.c string paths; call-graph edges bl 0x2C62C82C (TRACE) and bl 0x2C5E33F0 (registry) from ConnectedViewV1 @ 0x2C5CBC30; BTH→M55 XR_RING_AUTO_CONN
