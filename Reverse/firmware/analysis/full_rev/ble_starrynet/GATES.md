# Gates: leaf-1.2.1 BLE StarryNet

OWNS: Reverse/firmware/analysis/full_rev/ble_starrynet/**

Scope: StarryNet JSON action surface map for Star Air M55 — overview, handler table, manifest.

- [x] G1: verify-leaf oracle passes for 1.2.1
  CHECK: node Reverse/firmware/analysis/full_rev/scripts/verify-leaf.mjs 1.2.1
  EXPECT: leaf 1.2.1 verification passed
  EVIDENCE: verify-leaf.mjs 1.2.1 exit 0; EXPECT matched; gate-check ALL MET (3)

- [x] G2: handler/domain map lists ≥10 named actions with VA or string evidence
  EVIDENCE: starrynet_handlers.md §2 = 27 packed actions with VAs; ≥67 action-like tokens measured; verify-leaf exit 0.

- [x] G3: overview names at least one TRACE/string evidence path and one call-graph edge into LVGL/StarryNet/RTOS
  EVIDENCE: BLE_STARRYNET.md §2 TRACE 0x2c194f68 + xjxr_starrynet→MessageModel.cpp / register_starry_net edge.
