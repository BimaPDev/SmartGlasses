# BLE / classic BT connectivity — Halliday ATS3089 (official OTA)

Leaf `1.5` ownership: `Reverse/firmware/Halliday/analysis/full_rev/ble_connectivity/**`.

This note maps the **Halliday smart-glasses connectivity surface** on the Actions
Semi ATS3089 Zephyr `bt_watch` image: Zephyr `bt_stack`, Actions `bt_manager`,
dual-BLE (`dualble`), branded classic SPP (`Halliday SPP`), iOS ANCS/AMS,
classic HFP call handling, and the Halliday-specific vendor BLE command channel.
Symbol manifest: `manifest.json`.

**Recovery honesty:** Unlike leaf `1.2.1` (`full_rev/ble_starrynet`), this leaf has
**no Ghidra function export** for `app.bin` yet. Everything below is recovered from
`Reverse/firmware/Halliday/export/official/strings/` (primarily `ble_bluetooth.txt` and targeted
`app_ascii.txt` greps). Function names are **log-string / symbol anchors**, not
confirmed Thumb entry VAs unless noted.

## 1. Image and addressing

| Item | Value |
|---|---|
| Binary | `Reverse/firmware/Halliday/export/official/layer3/app.bin` |
| Source OTA | `Reverse/firmware/Halliday/HallidayOfficialOTA.bin` |
| Size | 1,662,592 bytes |
| Platform | `ats3089_dev_watch`, build `1.00_2601211113` |
| XIP base | **`0x10000000`** (README + entry PC cluster `0x10068xxx`) |
| String offsets | File offsets in export; runtime VA = **`0x10000000 + offset`** |
| Primary strings | `Reverse/firmware/Halliday/export/official/strings/categorized/ble_bluetooth.txt` (1224 hits) |

Re-run export: `python3 Reverse/firmware/Halliday/tools/export_halliday.py`.

## 2. End-to-end architecture (string-evidence edges)

```
iPhone / Android companion
  │  Classic BR/EDR: A2DP + AVRCP + HFP + SPP ("Halliday SPP")
  │  BLE link #1: iOS ANCS + AMS (notification / media control)
  │  BLE link #2: dualble service (second LE identity / handover)
  │  BLE vendor GATT: xs_vendor_ble_stream (CMD/KEY phone ↔ glasses)
  ▼
bt_service_main_loop / btsrv_*          (classic profile daemons)
  ▼
bt_manager (framework/bluetooth/bt_manager)
  │  bt_manager_init, ble_advertise_manager, dual_ble_*, sppble_*, hfp_*
  ▼
bt_stack (framework/bluetooth/bt_stack) — Zephyr-derived HCI/GATT/SMP
  │  hci_core.c, gatt.c, att.c, smp.c, conn.c, l2cap.c
  ▼
bt_watch application
  ├─ launcher: _launcher_bt_event_handle, bt_connection_event_handle
  ├─ btcall: btcall_bt_event_proc, BT_HFP_CALL_* UI events
  └─ xs_app (Halliday):
       vendor_ble_rx_event_proc  (phone commands)
       ble_ring_service          (ring accessory LE)
       ble_send_to_app / BLE RECV: CMD:0x%x, KEY:0x%x
```

**Call-graph edge (required, string-only):** Phone traffic enters through
`vendor_ble_rx_event_proc` @ file `0x15a4b8` (source
`xs_app/xs_ble_service/xs_vendor_ble_stream.c` @ `0x15caad`) and fans out to
`_ble_rx_*` command handlers (`_ble_rx_set_command`, `_ble_rx_voice_ai`, OTA,
navigation, factory, ring pairing). Classic phone audio/calls ride
`bt_manager` → `_bt_manager_hfp_callback` → `btcall_bt_event_proc` @ `0x14b853`.

## 3. Zephyr `bt_stack` paths

Source paths embedded in rodata confirm a **Zephyr-style Bluetooth host stack**
under `WEST_TOPDIR/framework/bluetooth/bt_stack/`:

| Source file | Symbols / log tags (file offset) |
|---|---|
| `bt_stack/hci_core.c` @ `0x185bbb` | `bt_hci_core`, `bt_enable`, `bt_disable`, `bt_le_adv_start_legacy`, `dual_ble_addrsss_copy`, `dualble id dualble smp sec info request` @ `0x18610b` |
| `bt_stack/conn.c` @ `0x186a0d` | `bt_conn`, `bt_conn_send_cb`, `bt_conn_unref` |
| `bt_stack/l2cap.c` @ `0x186f54` | `bt_l2cap`, `bt_l2cap_chan_send` |
| `bt_stack/gatt.c` @ `0x1874eb` | `bt_gatt`, `bt_gatt_discover`, `bt_gatt_attr_write_ccc` |
| `bt_stack/att.c` @ `0x187abf` | `bt_att`, `bt_att_recv`, `bt_att_create_pdu` |
| `bt_stack/smp.c` @ `0x18809f` | `bt_smp`, `bt_smp_accept`, `bt_smp_distribute_keys` |
| `bt_stack/sdp.c` @ `0x184dfc` | `bt_sdp`, `bt_sdp_discover` |
| `libbt_stack/hfp_hf.c` @ `0x18c95f` | `bt_hfp_hf`, `HFP RX:`, `HFP TX:` |
| `libbt_stack/a2dp.c` @ `0x18b9c3` | `bt_a2dp`, `bt_avdtp` |

Full HCI error enum (`BT_HCI_ERR_*`) @ `0x14e596`–`0x14ecbc` indicates the
standard Zephyr HCI error table is linked in-image.

## 4. Actions `bt_manager`

`bt_manager_*` symbols cluster @ `0x1826a5`–`0x1848f4`:

| Area | Key anchors |
|---|---|
| Lifecycle | `bt_manager_init` @ `0x182817`, `bt_manager_deinit` @ `0x182827` |
| Naming | `Halliday SPP` @ **`0x182867`**, `bt_manager_bt_name`, `BT_LE_NAME`, `bt_manager_set_bt_ble_name` |
| Classic audio | `_bt_manager_a2dp_callback`, `_bt_manager_avrcp_callback`, `_bt_manager_sco_callback` |
| HFP | `_bt_manager_hfp_callback` @ `0x18334c`, `bt_manager_hfp_*` call control API |
| BLE phone link | `bt_manager_ble_adv_start/stop`, `bt_manager_ble_send_data`, `bt_manager_ble_disconnect`, `ble_advertise_manager_work_callback` |
| Dual BLE | `dualble_advertising_handover`, `bt_manager_set_dualble_connection_param`, `bt_manager_dualble_send_data` |
| SPP+BLE mux | `sppble_init`, `sppble_register`, `stream_spp_connected_cb`, `_sppble_connect_cb` |
| OTA transport | `ota_backend_bt_init`, `open sppble_stream`, `ota_bt_send_cmd` @ `0x1802d1` |

Status enums exposed to UI @ `0x158492`–`0x15857c`:
`BT_STATUS_CONNECTED`, `BT_STATUS_BLE_ADV`, `BT_STATUS_BLE_CONNECTED`, etc.

Shell surface @ `0x18420e`: `Bluetooth manager commands` with `ble_test`, `ble_speed`, `send hfp cmd`.

## 5. Dual BLE (`dualble`)

Second LE identity / advertising handover is explicit in strings:

| String | Offset | Role (inferred) |
|---|---|---|
| `dual_ble` | `0x1843f0` | Shell / feature token |
| `enter dual ble` / `exit dual ble` | `0x18464b` / `0x184718` | Service lifecycle |
| `dual_ble_event_handle` | `0x1848c1` | Central event dispatcher |
| `DUAL_BLE_CONECTED_IND` | `0x1846a6` | Connect indication |
| `DUAL_BLE_DISCONECTED_IND` | `0x1846e9` | Disconnect indication |
| `dualble connected MAC:` / `dualble disconnected MAC:` | `0x1844c8` / `0x184492` | Link telemetry |
| `dualble_advertising_handover` | `0x183d9f` | Adv handoff between identities |
| `shell_set_dualble_adv_connected` | `0x14af4c` | Factory/shell hook |
| `dualble adv connected` | `0x14b072` | Adv-connected state log |
| `BT_ID_DUALBLE` | `0x1844fb` | Bond identity guard |
| `dualble id dualble smp sec info request` | `0x18610b` | SMP key store in hci_core |

Message pump types: `dual ble msg app adv`, `dual ble msg timer`, `dual ble msg EVENT`, `dual ble msg sys event` @ `0x1845f9`–`0x184634`.

## 6. Halliday SPP and `sppble` stream

Classic **Serial Port Profile** is branded for Halliday:

- Service name literal **`Halliday SPP`** @ file `0x182867` (VA `0x10182867`).
- Registration path: `bt_manager_spp_reg_uuid` @ `0x183621`, `btsrv_spp_reg` @ `0x18b7d7`, `Failed register spp uuid` @ `0x183fb6`.
- Combined SPP+BLE transport: `sppble_init`, `sppble_connect_cb`, `_sppble_get_rx_data`, `_sppble_put_tx_data` @ `0x14dca0`–`0x14dcc7`.
- OTA uses the same mux: `ota_backend_bt_open/read/close`, `open sppble_stream %p` @ `0x1802d1`.
- Test harness: `spp_test_backend_callback`, `tool_spp_test_main` @ `0x14bae9`.

This is **not** StarryNet JSON — Halliday uses a **binary CMD/KEY vendor BLE
protocol** (§8) plus classic SPP for bulk/OTA paths.

## 7. ANCS / AMS (iOS notification + media)

Dedicated ANCS/AMS client strings @ `0x149e38`–`0x14a917`:

| Component | Evidence |
|---|---|
| AMS Remote Command (RC) | `subscribe AMS RC handle`, `AMS RC subscribe success/failed` |
| AMS Entity Update (EU) | `subscribe AMS EU handle`, `ams gatt_write`, `ams write busy!` |
| ANCS Notification (N) | `subscribe ANCS N handle`, `ANCS N subscribe success` |
| ANCS Data Source (DS) | `subscribe ANCS DS handle`, `ancs write pending` |
| Parser | `ancs_parse_data` @ `0x14a777` (duplicate anchor @ `0x14a787`) |
| Link state | `ANCS_AMS connnected` / `disconnnected` @ `0x14a7a0` / `0x14a7b5` |
| App events | `BLE_ANCS_EVENT_NOTIFICATION_ATTR_REQ_COMPLETE`, `BLE_AMS_EVENT_WRITE_ENTITY_UPDATE`, `BLE_AMS_EVENT_READ_ENTITY_UPDATE` |
| Service change | `Service change disconnect ble, need phone or apk connect ble again!` @ `0x14a917` |

HFP layer also stores ANCS-derived caller names:
`BT_MANAGER_HFP: Set ANCS contact name` / `bt_manager_hfp_set_ancs_contact_name` @ `0x182ece`.

Halliday UI notification prefs (`Notify_IsEnable`, `notify_pin_filter_*`) sit in
`xs_msg/` views and are orthogonal to the ANCS GATT client.

## 8. HFP / `btcall` (present)

Classic **Hands-Free Profile** call handling is fully represented:

**bt_manager HFP** (`_bt_manager_hfp_callback`, `btmgr_hfp_*_proc`):
`hfp call incoming`, `hfp call ongoing`, `hfp sco cnnected`, `hfp accept/reject/hangup call`, Siri/volume/multiparty strings @ `0x182d5a`–`0x18334c`.

**Application btcall** layer:
| Symbol | Offset |
|---|---|
| `btcall_bt_event_proc` | `0x14b853` |
| `BT_HFP_CALL_INCOMING` | `0x14b76e` |
| `BT_HFP_CALL_ONGOING` | `0x14b79b` |
| `BT_HFP_CALL_RING_STATR_EVENT` | `0x14b6cb` |
| `BT_HFP_CALL_CONTACT_NAME_UPDATE` | `0x14b70f` |
| `BT_HFP_CALL_CCWA_EVENT` | `0x14b756` |
| `_bt_call_hfp_disconnected` | `0x14b839` |
| `bt_call_start_play` / `bt_call_stop_play` | `0x14b97a` / `0x14b98d` |
| `BTCALL_BOX_VIEW: HFP name found` | `0x151c2b` |
| `bt_call_touch_event_handle` | `0x158cd2` |

SCO gating: `bt_manager_allow_sco_connect true/false` @ `0x14c0fa` / `0x14c0a8`;
source `bt_manager_sco.c` @ `0x18353f`.

## 9. Halliday vendor BLE (phone app channel)

Source: `xs_vendor_ble_stream.c` @ `0x15caad`.

| Layer | Functions |
|---|---|
| Stream | `ble_stream_init/open/close`, `stream_ble_connect_cb`, `ble_send_to_app`, `ble_data_read` |
| RX dispatch | `vendor_ble_rx_event_proc` → `_ble_rx_set_command`, `_ble_rx_voice_ai`, `_ble_rx_ota`, `_ble_rx_ring_command`, `_ble_rx_fctory_command`, … |
| TX framing | `BLE SEND: CMD:0x%x, KEY:0x%x`, `BLE RECV: CMD:0x%x, KEY:0x%x` |
| Features | AI (`ble_ai_state`, `ble_rx_ai_loading_progress`), translate, prompter, navigation, OTA, factory test, ring pairing |
| Ring accessory | `ble_ring_service` / `ble_ring_stream.c` @ `0x15d876` — separate LE stream for ring gestures |

Connection telemetry: `>>>ble:%s,bt:%s,ring:%d` @ `0x15838c`, `ble_is_connected`, `system_ble_adv_start`.

## 10. Absences — do not invent

| Claim | Export fact |
|---|---|
| StarryNet JSON actions | **Absent** — no `xjxr_starrynet`, `handleSystemMsg`, or StarryNet protobuf strings |
| Recovered Thumb VAs for handlers | **Absent** — only string anchors until Ghidra export exists |
| Wi-Fi companion path | **Absent** in BLE string set |
| `set_demo_mode` shop-demo API | **Absent** (Star Air artifact; not in Halliday export) |

## 11. Why Thumb method VAs are missing

Halliday `app.bin` has not been through the same Ghidra pipeline as
`platform_tester.bin` (leaf 1.2.1). String tables list symbol names adjacent to
format strings and `WEST_TOPDIR/...` paths, but **no MOVW/MOVT or xref scan** has
been run on this image. Manifest entries therefore use **string VAs**
(`0x10000000 + file_offset`) as stable anchors, matching the honest disclaimer
pattern from `full_rev/ble_starrynet/manifest.json`.

## 12. Artifacts produced by this leaf

| File | Role |
|---|---|
| `BLE_CONNECTIVITY.md` | This overview |
| `manifest.json` | ≥5 `{va,name,role}` connectivity anchors |

## 13. Pass record

1. **Implement** — grep `app_ascii.txt` for Halliday SPP, dualble, ANCS, AMS,
   bt_manager, HFP; full pass over `ble_bluetooth.txt`.
2. **Structure** — mirror `full_rev/ble_starrynet/BLE_STARRYNET.md` sections;
   mark all recovery as string-only.
3. **Cross-check** — `Reverse/firmware/Halliday/export/README.md` connectivity hints align with
   dual BLE + SPP + ANCS/AMS summary.
4. **Verify** — `node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs 1.5`.
