# Uniden R/TACH reverse

All Uniden reverse artifacts stay in this directory. Input: `R_TACH_1.0.9_APKPure.xapk` (`com.uniden.rtach` 1.0.9).

Companion app for Uniden R-series radar detectors over BLE GATT. Settings writes are ASCII `BTreqSETC:{write_index}={n}`; the detector pushes a packed settings blob plus alert/ETC notifies. Phone HTTP is firmware JSON/bin on `www.unidenup.com` only.

Start here: [`analysis/full_rev/FULL_APP_MAP.md`](analysis/full_rev/FULL_APP_MAP.md)

| Path | Contents |
|---|---|
| `xapk/` | Extracted XAPK (base APK + language/density splits) |
| `decompiled/` | jadx output of `com.uniden.rtach.apk` |
| `analysis/fingerprint.md` | Framework / SDK triage |
| `analysis/full_rev/` | Per-leaf writeups + `FULL_APP_MAP.md` |
| `.unlazy/uniden/` | Orchestration plan and gates |

See `analysis/README.md` for leaf owners.
