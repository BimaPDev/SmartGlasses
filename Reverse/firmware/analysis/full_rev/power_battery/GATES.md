# Gates: Power / battery / PMU (leaf-1.1.4)

OWNS: Reverse/firmware/analysis/full_rev/power_battery/**

Scope: Reverse Star Air M55 power/battery/PMU/sleep/charger path into POWER_BATTERY.md, power_reconstructed.c, and manifest.json. Evidence from platform_tester.bin XIP 0x2C000000 + m55 decomp export. Cite BATT_CIRCLE_POSTMORTEM.md; do not rewrite it.

- [x] G1: verify-leaf oracle passes for 1.1.4
  CHECK: node Reverse/firmware/analysis/full_rev/scripts/verify-leaf.mjs 1.1.4
  EXPECT: leaf 1.1.4 verification passed
  EVIDENCE: exit 0; stdout "leaf 1.1.4 verification passed"; POWER_BATTERY.md ≥160 lines; power_reconstructed.c ≥300 lines; manifest.functions ≥3

- [x] G2: reconstructed C and manifest map ≥3 VAs with battery/PMU roles
  EVIDENCE: manifest lists 0x2C48A2C4 battery_soc_get, 0x2C489BD0 battery_mgr_poll_level_voltage, 0x2C49D134 cw221x_get_capacity_percent, 0x2C642C66 lv_power hooks, plus FG/charger path strings; Capstone confirmed SOC strh @ 0x2C489C08

- [x] G3: overview covers battery SOC path, charger/FG drivers, wear-gated sleep, and cites 0x2C XIP
  EVIDENCE: POWER_BATTERY.md has XIP 0x2C000000, battery SOC table, cw221X/sc7288/pmu sections, wear-gated sleep policy, cites BATT_CIRCLE_POSTMORTEM without rewrite
