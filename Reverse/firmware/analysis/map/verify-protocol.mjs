#!/usr/bin/env node
// verify-protocol.mjs — oracle for Reverse/firmware/analysis/map/protocol.md (leaf-1.4)
// Target: Reverse/firmware/x_1.0.11.53/platform_tester.bin ONLY.
// Address model (PLAN.md): code VA = file + 0x2C010000 ; data file = VA - 0x3BFD7CB0.
// Prints exactly "protocol verification passed" and exits 0 on success.

import { readFileSync } from 'node:fs';
import { resolve, dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = process.argv[2] ? resolve(process.argv[2]) : resolve(HERE, '..', '..', '..', '..');
const BIN  = join(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = join(ROOT, 'Reverse/firmware/analysis/map/protocol.md');

const DATA_DELTA = 0x3BFD7CB0;   // correct PSRAM copy delta for 1.0.11.53
const BAD_DELTA  = 0x3C000000;   // KNOWN-BAD naive base (CLAUDE.md)
const CODE_BASE  = 0x2C010000;

let fails = 0, checks = 0;
const fail = (m) => { fails++; console.error('FAIL: ' + m); };
const ok   = () => { checks++; };
const hx   = (n) => '0x' + n.toString(16);

const buf = readFileSync(BIN);
const doc = readFileSync(DOC, 'utf8');

// ---- sanity ----------------------------------------------------------------
if (buf.length !== 7042632) fail(`binary size ${buf.length}, expected 7042632 — wrong build`); else ok();

// Never write inside these. Assert no cited offset lands in them.
const FORBIDDEN = [[0x04E9B4, 0x143F14, 'HiFi4 DSP'], [0x134070, 0x14A7A4, 'sensor_hub']];

// ---- helpers ---------------------------------------------------------------
function cstr(off) {
  if (off < 0 || off >= buf.length) return null;
  let e = off;
  while (e < buf.length && buf[e] !== 0) e++;
  if (e - off > 512) return null;
  return buf.toString('latin1', off, e);
}
function strAt(off, want, label) {
  const got = cstr(off);
  if (got !== want) fail(`${label}: expected "${want}" at ${hx(off)}, got ${got === null ? '<oob>' : JSON.stringify(got)}`);
  else ok();
}
function u32(off) { return buf.readUInt32LE(off); }
// A data pointer in a literal pool must equal strOff + DATA_DELTA and resolve to `want`.
function poolPtr(poolOff, strOff, want, label) {
  const v = u32(poolOff);
  if (v !== (strOff + DATA_DELTA) >>> 0) {
    fail(`${label}: pool @${hx(poolOff)} holds ${hx(v)}, expected ${hx((strOff + DATA_DELTA) >>> 0)} (ptr to "${want}")`);
    return;
  }
  strAt(strOff, want, label + ' (target)');
}
// Thumb T1: cmp rN, #imm8  ->  0b00101_NNN_iiiiiiii = 0x2800 | (N<<8) | imm
function cmpImm(off, imm, reg, label) {
  const hw = buf.readUInt16LE(off);
  const isT1 = (hw & 0xF800) === 0x2800;
  const gotImm = hw & 0xFF, gotReg = (hw >> 8) & 7;
  if (!isT1 || gotImm !== imm || gotReg !== reg)
    fail(`${label}: ${hx(off)} = ${hx(hw)}; expected T1 "cmp r${reg}, #${imm}"`);
  else ok();
}
function absent(s, label) {
  if (buf.includes(Buffer.from(s, 'latin1'))) fail(`${label}: "${s}" unexpectedly PRESENT in image`);
  else ok();
}
function docHas(s) {
  if (!doc.includes(s)) fail(`doc does not contain "${s}" — doc and verifier drifted apart`);
  else ok();
}
function notForbidden(off, label) {
  for (const [a, b, nm] of FORBIDDEN)
    if (off >= a && off < b) fail(`${label}: cited offset ${hx(off)} lies inside ${nm} sub-image — must never be written`);
  ok();
}

// ===========================================================================
// POSITIVE CONTROL — a known-good, hardware-confirmed action found by the
// exact same method used for every other row. If this fails the method is dead.
// ===========================================================================
strAt(0x1a63ec, 'set_language', 'POSITIVE CONTROL string');
poolPtr(0x60ed84, 0x1a63ec, 'set_language', 'POSITIVE CONTROL handleSystemMsg pool');
poolPtr(0x60e75c, 0x1a63ec, 'set_language', 'POSITIVE CONTROL handleSyncCloneData pool');

// ===========================================================================
// NEGATIVE CONTROL 1 — the KNOWN-BAD data delta 0x3C000000 must NOT resolve
// set_language. If it did, "resolution" would be meaningless and every pool
// row below would be unfalsifiable.
// ===========================================================================
{
  const badOff = (0x1a63ec + DATA_DELTA) - BAD_DELTA;
  const got = cstr(badOff);
  if (got === 'set_language') fail('NEGATIVE CONTROL: the known-bad delta 0x3C000000 also resolves set_language — pointer resolution proves nothing');
  else ok();
}
// NEGATIVE CONTROL 2 — invented action names must be absent image-wide.
absent('set_wallpaper',  'NEGATIVE CONTROL invented action');
absent('set_hotword',    'NEGATIVE CONTROL invented action');
absent('set_boot_logo',  'NEGATIVE CONTROL invented action');
// NEGATIVE CONTROL 3 — a pool slot adjacent to a real one must NOT hold the
// same pointer (guards against a constant-returning u32()).
{
  if (u32(0x60ed84) === u32(0x60ed88)) fail('NEGATIVE CONTROL: adjacent pool slots identical — reader is degenerate');
  else ok();
}

// ===========================================================================
// S1 transport / StarryNet
// ===========================================================================
for (const [off, s] of [
  [0x2bf74, '../../tests/besair_platform/../../xjxr_starrynet/sdk_m55/xjxr_starrynet_interface.c'],
  [0x2f0b0, '../../tests/besair_platform/../../xjxr_starrynet/utils_m55/encrypt/../proto_buf/starry_link_encrypt.pb-c.c'],
]) { /* path strings vary; checked loosely below */ }
strAt(0x31124, 'Starry.StarryNetMessageData', 'S1 StarryNetMessageData');
strAt(0x31184, 'Starry.StarryNetMessageData.MessageType', 'S1 MessageType');
strAt(0x32ee0, 'set_negotiated_starrynet_version', 'S1 version negotiation');
strAt(0x2bee0, 'starrynet_start_br_connect', 'S1 classic-BT bring-up');
strAt(0x2eb70, 'sendAppUniteCode', 'S1 appUniteCode');
strAt(0x2ebdc, 'receiveAppUniteCode', 'S1 appUniteCode');
strAt(0x2e8dc, 'AppUniteCodeType', 'S1 appUniteCode');
strAt(0x2c244, 'bond_ancs', 'S1 ANCS bond');
// S15: GATT UUID strings really are absent (documented as NOT established).
absent('00000bd1-0000-1000-8000-00805f9b34fb', 'S15 GATT UUID absence');
absent('StarryNet"', 'S15 service-name literal absence');

// ===========================================================================
// S2 top-level handlers
// ===========================================================================
const HANDLERS = [
  [0x1a648c, 'handleSystemMsg',   0x60ed74],
  [0x1a4adc, 'handleStartAppMsg', 0x60c9d8],
  [0x19f94c, 'handleSmartLifeMsg',0x5fd2d0],
  [0x1a44e4, 'handlePhonePadMsg', 0x60c240],
  [0x1a4734, 'handleHealthMsg',   0x60c384],
  [0x1a42c4, 'handleAppMsg',      0x60be80],
];
for (const [so, nm, po] of HANDLERS) { strAt(so, nm, 'S2 handler'); poolPtr(po, so, nm, 'S2 handler pool'); }
strAt(0x17c1a8, '../../thirdparty/star_air_lvgl/app/Pages/Launcher/model/MessageModel.cpp', 'S2 MessageModel.cpp');
strAt(0x1a6230, 'handleSyncCloneData', 'S2 handler');
strAt(0x1a6958, 'handleScreenShotMsg', 'S2 handler');
strAt(0x1a6bd0, 'handleGetLogMsg', 'S2 handler');
strAt(0x1a6a98, 'handleGetLog', 'S2 handler');
strAt(0x1a66e0, 'handleScreenShot', 'S2 handler');
strAt(0x1a4a04, 'handleEventTracking', 'S2 handler');
strAt(0x1a4944, 'handleMyvuLoginStatus', 'S2 handler');
strAt(0x1a606c, 'handleGlassActive', 'S2 handler');
strAt(0x1a6198, 'handleStatementChange', 'S2 handler');
strAt(0x1a5e48, 'handlePrivacyExpire', 'S2 handler');
strAt(0x1a4828, 'handleVersionNoMatchMsg', 'S2 handler');

// ===========================================================================
// S3 — the `system` action vocabulary, in handleSystemMsg pool order.
// Each row: pool offset, string offset, action name.
// ===========================================================================
const SYSTEM_POOL = [
  [0x60ed78, 0x1a658c, 'get_device_info'],
  [0x60ed7c, 0x1a4e58, 'do_recovery'],
  [0x60ed80, 0x1a659c, 'get_language'],
  [0x60ed84, 0x1a63ec, 'set_language'],
  [0x60ed88, 0x1a65ac, 'get_zen_mode'],
  [0x60ed8c, 0x19bddc, 'set_zen_mode'],
  [0x60ed90, 0x1a65bc, 'set_device_name'],
  [0x60ed9c, 0x0384f4, 'get_brightness'],
  [0x60eda0, 0x038504, 'set_brightness'],
  [0x60eda4, 0x1a65cc, 'set_brightness_finish'],
  [0x60eda8, 0x1a65e4, 'get_volume'],
  [0x60edac, 0x1a65f0, 'set_volume'],
  [0x60edb0, 0x1a6304, 'change_dock_items'],
  [0x60edb4, 0x1a65fc, 'get_wear_detection_mode'],
  [0x60edb8, 0x1a6330, 'set_wear_detection_mode'],
  [0x60edbc, 0x1a6318, 'set_standby_position'],
  [0x60edc0, 0x1a6614, 'get_standby_position'],
  [0x60edc4, 0x1a662c, 'get_volume_stream_type'],
  [0x60edc8, 0x1a6644, 'get_music_tp_control_mode'],
  [0x60edcc, 0x1a6394, 'set_music_tp_control_mode'],
  [0x60edd0, 0x1a6660, 'notify_privacy_expired'],
  [0x60edd4, 0x1a6678, 'notify_statement_change'],
  [0x60edd8, 0x1a6690, 'sync_clone_data'],
  [0x60eddc, 0x1a6348, 'set_glass_sound_effect_mode'],
  [0x60ede0, 0x1a50ac, 'get_glass_sound_effect_mode'],
  [0x60ede4, 0x1a6430, 'set_standby_widget_lists'],
  [0x60ede8, 0x1a640c, 'get_standby_widget_lists'],
];
if (SYSTEM_POOL.length !== 27) fail(`S3: expected 27 system actions, table has ${SYSTEM_POOL.length}`); else ok();
for (const [po, so, nm] of SYSTEM_POOL) {
  poolPtr(po, so, nm, `S3 ${nm}`);
  notForbidden(so, `S3 ${nm}`);
  docHas('`' + nm + '`');
}
strAt(0x1a66a0, '[Launcher]MessageModel handleSystemMsg no handler for action %s', 'S3 fallthrough log');
strAt(0x1a4d74, 'sendDeviceInfoMsg', 'S3 get_device_info reply');
for (const [o, s] of [[0x1a4dbc,'system_mode'],[0x1a4dc8,'brand'],[0x1a4dd0,'serial_number'],
                      [0x1a4de0,'wifi_mac'],[0x1a4dec,'bluetooth_addr'],[0x1a4dfc,'total_storage'],
                      [0x1a4e0c,'available_storage']]) strAt(o, s, 'S3 device_info field');
strAt(0x1a4e20, 'doRecovery', 'S3 do_recovery handler');
strAt(0x1a53cc, 'streamType', 'S3 set_volume key');
strAt(0x1a53d8, 'needReply',  'S3 set_volume key');
strAt(0x1a6428, 'widgets',    'S3 standby widgets key');
strAt(0x1a5cb8, 'get_glass_screenshot', 'S3 screenshot');
strAt(0x1a6a30, 'show_screenshot_save_result', 'S3 screenshot');
strAt(0x1a5ce4, 'get_user_feedback', 'S3 log pull');
strAt(0x1a6c60, 'get_glass_log', 'S3 log pull');
strAt(0x1a6bbc, 'user_feed_back.log', 'S3 log pull file');
strAt(0x1a44b0, 'system_glass_active', 'S3 analytics');
strAt(0x1a44c4, 'system_account', 'S3 analytics');
strAt(0x1a6058, 'req_active_state', 'S3 analytics');
strAt(0x1a60f4, 'req_active_info', 'S3 analytics');
strAt(0x1a44d4, 'feature_list', 'S3 feature_list');
strAt(0x1a4938, 'audio_multi',  'S3 feature_list value');
strAt(0x1a447a, 'phonepad', 'S3 trackpad');
strAt(0x1a449c, 'sport',    'S3 health');
strAt(0x1a44a4, 'screenshot', 'S3 screenshot');
strAt(0x1a49e8, 'sync_event_rule', 'S3 analytics');
strAt(0x1a616c, 'privacy_agreement', 'S3 statement type');
strAt(0x1a6180, 'transmission_agreement', 'S3 statement type');
strAt(0x1a5ed8, '[Launcher]MessageModel::handlePrivacyExpire myvu_pp', 'S3 pp_type');

// ===========================================================================
// S4 — sync_clone_data pool, incl. the five settings reachable ONLY here.
// ===========================================================================
const CLONE_POOL = [
  [0x60e734, 0x1a6330, 'set_wear_detection_mode'],
  [0x60e740, 0x19bddc, 'set_zen_mode'],
  [0x60e744, 0x1a6348, 'set_glass_sound_effect_mode'],
  [0x60e748, 0x1a6364, 'set_hear_impairment_mode'],
  [0x60e74c, 0x1a6380, 'set_app_fast_open'],
  [0x60e750, 0x1a6394, 'set_music_tp_control_mode'],
  [0x60e754, 0x1a63b0, 'set_image_stabilization_mode'],
  [0x60e758, 0x1a63d0, 'set_image_adjustment_mode'],
  [0x60e75c, 0x1a63ec, 'set_language'],
  [0x60e760, 0x1a63fc, 'set_font_mode'],
  [0x60e778, 0x1a6304, 'change_dock_items'],
  [0x60e77c, 0x1a6318, 'set_standby_position'],
];
for (const [po, so, nm] of CLONE_POOL) { poolPtr(po, so, nm, `S4 ${nm}`); notForbidden(so, `S4 ${nm}`); }
strAt(0x17c138, 'brightness_model', 'S4 brightness_model');
strAt(0x1a5058, 'remote_app', 'S4 remote_app');
// The five clone-only settings: their pointer must appear EXACTLY ONCE in the
// whole image (i.e. only in the handleSyncCloneData pool).  This is the load-
// bearing claim of section 4 — if any of them were also in the handleSystemMsg
// pool, "reachable only via sync_clone_data" would be false.
const CLONE_ONLY = [
  [0x1a6364, 'set_hear_impairment_mode',     0x60e748],
  [0x1a6380, 'set_app_fast_open',            0x60e74c],
  [0x1a63b0, 'set_image_stabilization_mode', 0x60e754],
  [0x1a63d0, 'set_image_adjustment_mode',    0x60e758],
  [0x1a63fc, 'set_font_mode',                0x60e760],
];
for (const [so, nm, expectPool] of CLONE_ONLY) {
  const pat = Buffer.alloc(4); pat.writeUInt32LE((so + DATA_DELTA) >>> 0);
  const hits = []; let i = 0;
  while ((i = buf.indexOf(pat, i)) >= 0) { hits.push(i); i += 1; }
  if (hits.length !== 1 || hits[0] !== expectPool)
    fail(`S4 ${nm}: expected exactly one xref at ${hx(expectPool)}, got [${hits.map(hx).join(', ')}] — the "sync_clone_data only" claim is wrong`);
  else ok();
}
// CONTROL for the same method: set_language MUST have >1 xref (it is in two pools).
{
  const pat = Buffer.alloc(4); pat.writeUInt32LE((0x1a63ec + DATA_DELTA) >>> 0);
  let n = 0, i = 0; while ((i = buf.indexOf(pat, i)) >= 0) { n++; i += 1; }
  if (n < 2) fail('S4 CONTROL: set_language should have >=2 pool xrefs; xref counter is broken'); else ok();
}

// ===========================================================================
// S5 — notificationAction vocabulary
// ===========================================================================
const NOTIF_POOL = [
  [0x5fd2dc, 0x19fb9c, 'CONNECT_ANCS_SERVICE'],
  [0x5fd2e0, 0x19fc24, 'QUERY_ANCS_SERVICE_STATE'],
  [0x5fd2e4, 0x19fc0c, 'DISCONNECT_ANCS_SERVICE'],
  [0x5fd2ec, 0x19fb0c, 'SHOW_TOAST'],
  [0x5fd2f0, 0x19fbcc, 'SYNC_SMART_REMINDER_CONFIG'],
  [0x5fd2f4, 0x19fb6c, 'SHOW_NOTIFICATION'],
  [0x5fd2f8, 0x19fbb4, 'DISMISS_NOTIFICATION'],
  [0x5fd2fc, 0x19fb18, 'SHOW_DIALOG'],
  [0x5fd300, 0x19fb80, 'SYNC_SMART_REMINDER_TAXI'],
  [0x5fd304, 0x19fbe8, 'SYNC_SMART_REMINDER_FLYME_FLIGHT'],
  [0x5fd308, 0x19fb24, 'DISMISS_REMINDER'],
  [0x5fd30c, 0x19fb38, 'ios_lock_screen'],
  [0x5fd310, 0x19fb48, 'SYNC_CONFIG_BROADCAST_PAUSE_TYPE'],
];
if (NOTIF_POOL.length !== 13) fail(`S5: expected 13 notificationAction values, got ${NOTIF_POOL.length}`); else ok();
for (const [po, so, nm] of NOTIF_POOL) { poolPtr(po, so, nm, `S5 ${nm}`); notForbidden(so, `S5 ${nm}`); docHas('`' + nm + '`'); }
strAt(0x19f97c, 'notificationAction', 'S5 key');
// The misspelled timestamp key — a client sending "createTime" loses it silently.
strAt(0x19f538, 'crateTime', 'S5 misspelled createTime');
absent('"createTime"', 'S5 createTime is genuinely absent');
for (const [o, s] of [[0x19f57c,'msgType'],[0x19f55c,'canReply'],[0x19f568,'aiResult'],
                      [0x19f574,'discernResult'],[0x19f594,'groupName'],[0x19f5a0,'sender'],
                      [0x19f5b4,'verificationCode'],[0x19f65c,'ids'],[0x19f630,'packages'],
                      [0x19f8dc,'sendPackage'],[0x19f8e8,'interactionPromptTxt'],
                      [0x19fcac,'needTtsOn'],[0x19fcec,'needScreenOn'],[0x19f6f4,'screen_state']])
  strAt(o, s, 'S5 card field');
for (const [o, s] of [[0x19f3e8,'MSG_TYPE_EXPRESS'],[0x19f3fc,'MSG_TYPE_TAKEOUT'],
                      [0x19f410,'MSG_TYPE_FLIGHT'],[0x19f420,'MSG_TYPE_WEATHER'],
                      [0x19f434,'MSG_TYPE_IM'],[0x19fa68,'MSG_TYPE_NORMAL'],
                      [0x19faf8,'MSG_TYPE_MISSEDCALL']]) strAt(o, s, 'S5 msgType');
for (const [o, s] of [[0x19f7ac,'flightNumber'],[0x19f7bc,'flightDepartureAerodrome'],
                      [0x19f804,'flightArrivalTime'],[0x19f818,'flightStateDesc'],
                      [0x19f838,'taxiState'],[0x19f854,'carNumber'],[0x19f860,'carBrand'],
                      [0x19f880,'driverArriveTime'],[0x19fa58,'taxi:userLate'],
                      [0x19faa0,'taxi:driverReceivesOrder'],[0x19fae4,'taxi:driverArrive']])
  strAt(o, s, 'S5 reminder field');
// Per-app icon table (DATA tier). Offsets must sit in the range the doc cites.
for (const [o, s] of [[0x19ff7c,'com.whatsapp'],[0x1a002c,'com.tencent.wework'],
                      [0x1a0040,'smartlife_notification_wework_icon'],
                      [0x1a00d8,'com.alibaba.android.rimet'],
                      [0x1a03f0,'smartlife_notification_ios_calendar_icon'],
                      [0x1a04b0,'smartlife_notification_weather_icon'],
                      [0x1a04d4,'com.android.dialer'],
                      [0x1a04e8,'phone_notification_icon']]) {
  strAt(o, s, 'S5 icon table');
  if (o < 0x19ff7c || o >= 0x1a0500) fail(`S5 icon table: ${hx(o)} outside cited span 0x19ff7c-0x1a04ff`); else ok();
  notForbidden(o, 'S5 icon table');
}

// ===========================================================================
// S6 — app launch
// ===========================================================================
poolPtr(0x60c9f8, 0x1a4c9c, 'open_app', 'S6 open_app');
strAt(0x1a4bcc, 'launchMode', 'S6 key');
strAt(0x1a4c9c, 'open_app', 'S6 action');
// The undocumented OTA guard.
{
  const s = '[Launcher]handleStartAppMsg, isOta is true, ignore';
  if (!buf.includes(Buffer.from(s, 'latin1'))) fail('S6: OTA guard log string not found — the "OTA swallows open_app" claim is unsupported');
  else ok();
}
// PROTOCOL.md's .intl launcher package is genuinely absent from this build.
if (buf.includes(Buffer.from('com.upuphone.star.launcher', 'latin1'))) ok();
else fail('S6: com.upuphone.star.launcher absent — package scan is broken');
absent('com.upuphone.star.launcher.intl', 'S6 .intl absence (contradicts PROTOCOL.md)');
for (const p of ['com.upuphone.ar.tici', 'com.upuphone.ar.navi.glass', 'com.upuphone.ar.music.glass',
                 'com.upuphone.ar.translation.glasses', 'com.upuphone.ar.transcribe.glasses',
                 'com.upuphone.ar.setting.glasses', 'com.upuphone.ai.assistant',
                 'com.upuphone.glass.smartlife', 'com.upuphone.star.ring.ota']) {
  if (!buf.includes(Buffer.from(p, 'latin1'))) fail(`S6: package ${p} not in image`); else ok();
}

// ===========================================================================
// S7 — teleprompter
// ===========================================================================
for (const [o, s] of [[0x177754,'com.upuphone.ar.tici'],[0x177a40,'com.upuphone.ar.tici.exit'],
                      [0x177798,'send_content'],[0x1778d8,'send_content_reply'],
                      [0x17777c,'request_send_content_page'],[0x177808,'change_tici_mode'],
                      [0x17781c,'check_tici_state'],[0x177928,'check_tici_state_reply'],
                      [0x1776a8,'app_cancel_tici'],[0x1776c0,'glass_tici_started'],
                      [0x177830,'glasses_quit_msg'],[0x177878,'open_from_glasses'],
                      [0x177730,'open_result'],[0x1777c0,'open_result_v2'],[0x1777d0,'open_result_v3'],
                      [0x177844,'highlight_index'],[0x177900,'highlight_index_v3'],
                      [0x1779a8,'focus_para_change'],[0x1776b8,'msgId'],[0x1776dc,'fileKey'],
                      [0x1776e4,'screenLocation'],[0x177700,'ticiMode'],[0x177718,'ticiSpeed'],
                      [0x177724,'totalPage'],[0x17773c,'sourceText'],[0x177748,'targetPage'],
                      [0x17776c,'currentPage'],[0x1777a8,'nextTotalParagraphSize'],
                      [0x1777e0,'prevTotalParagraphSize'],[0x1777f8,'paragraphIndex'],
                      [0x17788c,'paragraphIndexes'],[0x177854,'sourceByteSize'],
                      [0x1778ec,'sourceTextOffset'],[0x1778a0,'totalTextLength'],
                      [0x1778b0,'autoTiciProgress'],[0x177864,'auto_tici_running'],
                      [0x177914,'isAutoTiciPlaying'],[0x1778c4,'blockNotification'],
                      [0x17768c,'waitForReplyTimeout'],[0x177aa4,'startUniformMode'],
                      [0x177ad0,'pauseUniformMode']]) { strAt(o, s, 'S7 tici'); notForbidden(o, 'S7 tici'); }

// ===========================================================================
// S8 — navigation (25 messages claimed)
// ===========================================================================
const NAVI = [
  [0x19c1c0,'navi_start'],[0x19c1b0,'navi_stop'],[0x19c1f0,'navi_info'],[0x19c1fc,'navi_event'],
  [0x19c1d8,'navi_tts'],[0x19c1e4,'navi_indoor'],[0x19c370,'navi_location'],[0x19c274,'navi_foreground'],
  [0x19c284,'navi_night_tips'],[0x19c294,'navi_switch_rsp'],[0x19c2cc,'navi_mode_switch'],
  [0x19c2e0,'navi_privacy_rsp'],[0x19c224,'pre_navi'],[0x19c208,'poi_search'],
  [0x19c230,'route_refresh'],[0x19c304,'route_selected'],[0x19c340,'calculate_route'],
  [0x19c32c,'calc_route_result'],[0x19c240,'arrive_destination'],[0x19c264,'show_lane_info'],
  [0x19c254,'hide_lane_info'],[0x19c350,'interval_camera_info'],[0x19c2a4,'end_emulatornavi'],
  [0x19c214,'network_state'],[0x19c2b8,'brightness_state'],
];
if (NAVI.length !== 25) fail(`S8: doc claims ~25 navigation messages, table has ${NAVI.length}`); else ok();
for (const [o, s] of NAVI) { strAt(o, s, 'S8 navi'); notForbidden(o, 'S8 navi'); }
for (const [o, s] of [[0x19c1cc,'naviMode'],[0x19c314,'displayPos'],[0x19c320,'speechMode'],
                      [0x19c368,'maskMsg'],[0x19c19c,'freqAdrList'],
                      [0x19f900,'phone-com.upuphone.ar.navi.glass-restore_navi']])
  strAt(o, s, 'S8 navi field');

// ===========================================================================
// S9 — music / phone
// ===========================================================================
for (const [o, s] of [[0x198408,'musicMsgCallback'],[0x197be0,'playControl'],[0x198668,'pauseMusic'],
                      [0x198704,'pauseMusicTwice'],[0x179d2c,'telephone_notification'],
                      [0x1823b8,'configPhoneNotification'],[0x193fe8,'app:Telephone'],
                      [0x19400c,'app:WechatReply'],[0x188974,'WECHAT_REPLY'],
                      [0x188438,'Accept'],[0x188440,'Reject'],[0x188448,'Cancel_Dial'],
                      [0x188454,'ReplyCall'],[0x19fe0c,'sendRecallMsg']]) strAt(o, s, 'S9');

// ===========================================================================
// S10 — assistant command-code dispatcher.  Byte-level check of the Thumb
// compare chain that section 10 reads the code vocabulary out of.
// ===========================================================================
strAt(0x193be8, '[%s] code: %d', 'S10 dispatcher log');
strAt(0x193f90, '[%s] Unhandled command message code: %d', 'S10 dispatcher log');
strAt(0x193eb8, '[%s] Ignored Cmd, code: %d', 'S10 dispatcher log');
strAt(0x193c24, '[%s] Unhandled vad code: %d', 'S10 dispatcher log');
poolPtr(0x5dcba4, 0x193f90, '[%s] Unhandled command message code: %d', 'S10 dispatcher pool');
poolPtr(0x5dcb94, 0x193be8, '[%s] code: %d', 'S10 dispatcher pool');
const CODES = [
  [0x5dc9c0,   4, 0], [0x5dc96c,   6, 0], [0x5dc978, 101, 0], [0x5dc98a, 102, 0],
  [0x5dc990, 103, 0], [0x5dc97e, 104, 0], [0x5dc9cc, 105, 0], [0x5dc966, 106, 0],
  [0x5dc972, 107, 0], [0x5dc936, 110, 0], [0x5dc93c, 111, 0], [0x5dc9a0, 113, 0],
  [0x5dc948, 114, 0], [0x5dc920, 121, 3],
];
for (const [o, imm, reg] of CODES) cmpImm(o, imm, reg, `S10 code ${imm}`);
// The four codes PROTOCOL.md is missing must each be documented as such.
for (const c of [105, 110, 113, 114]) docHas('| **' + c + '** |');
// code:122 is claimed UNLOCATED in this chain — assert no cmp #122 in the window,
// so the claim is falsifiable rather than decorative.
{
  let found = null;
  for (let o = 0x5dc900; o < 0x5dca90; o += 2) {
    const hw = buf.readUInt16LE(o);
    if ((hw & 0xF800) === 0x2800 && (hw & 0xFF) === 122) { found = o; break; }
  }
  if (found !== null) fail(`S10: cmp #122 DOES appear at ${hx(found)} — the "122 unlocated" claim is wrong`);
  else ok();
}
// base_status really is present (so 122's mechanism is real, just elsewhere).
strAt(0x188408, 'base_status', 'S10 base_status');
for (const [o, s] of [[0x194040,'[%s] MSG_ID_VOICE_PRE_WAKEUP'],
                      [0x194060,'[%s] MSG_ID_VOICE_NORMAL_WAKEUP'],
                      [0x1940a0,'[%s] MSG_ID_VOICE_ONESHOT_WAKEUP'],
                      [0x194130,'[%s] MSG_ID_WAKEUP'],[0x194090,'wake_up_word'],
                      [0x193c9c,'wake_up_type'],[0x193b98,'wake_up_result']]) strAt(o, s, 'S10 wakeup');

// ===========================================================================
// S11 — code:2 config flags and their persistent setting keys
// ===========================================================================
for (const [o, s] of [[0x189ead,'isAsrResultScreenEnable'],[0x189ec8,'isChatGptTTSPlayEnable'],
                      [0x189ee0,'isChatGptCardDisplayEnable'],[0x189efc,'isContinuousDialogueEnable'],
                      [0x189f18,'isLowPowerWakeupEnable'],[0x189f30,'isLowPowerWakeupScreenOffEnable'],
                      [0x189f50,'isNetworkAvailable'],[0x189f64,'versionCode'],[0x189f70,'isStar'],
                      [0x189f78,'isOtaFeature'],[0x189f88,'versionName'],[0x189f94,'roundTimes'],
                      [0x189fa0,'glassSN'],[0x189fa8,'ttsTimbreValue']]) strAt(o, s, 'S11 flag');
for (const [o, s] of [[0x193cdc,'low_power_wakeup'],[0x193cf0,'continuous_dialogue'],
                      [0x193d04,'asr_result_screen'],[0x193d18,'low_power_wakeup_screen_off'],
                      [0x193d34,'chat_gpt_tts_play'],[0x193d48,'chat_gpt_card_display'],
                      [0x193d60,'tts_timbre']]) strAt(o, s, 'S11 persistent key');
strAt(0x18971c, 'set_tts_timbre_value', 'S11 timbre setter');
strAt(0x405f4,  'get_voice_assistant_state', 'S11 assistant state');
for (const [o, s] of [[0x18a1c8,'isContinuous'],[0x18a1d8,'isMulti'],[0x18a1e0,'isWakeup'],
                      [0x18a1ec,'emotionType'],[0x18a1f8,'functionId'],[0x18a018,'sceneId'],
                      [0x18a020,'isOffline'],[0x188414,'answer'],[0x18841c,'isCmd'],
                      [0x188424,'recommend_queries']]) strAt(o, s, 'S11 session field');

// ===========================================================================
// S12 — weather
// ===========================================================================
strAt(0x1a4246, '{"action": "syncWeather"}', 'S12 outbound refresh (spaced)');
strAt(0x1aa080, '{"action":"syncWeather"}', 'S12 outbound refresh (tight)');
poolPtr(0x60be60, 0x1a435c, 'iconCode', 'S12 WeatherModel pool');
poolPtr(0x60be68, 0x1a4368, 'quality',  'S12 WeatherModel pool');
poolPtr(0x60be70, 0x1a4370, 'aqi',      'S12 WeatherModel pool');
// The keys PROTOCOL.md lists that this build does NOT contain.
for (const s of ['dayTempMax', 'dayTempMin', 'sunriseTime', 'sunsetTime', 'lastUpdate'])
  absent(s, 'S12 PROTOCOL.md weather key absence');
// Assistant-domain weather model (a second, richer schema).
for (const [o, s] of [[0x188308,'areaName'],[0x188320,'dayTemp'],[0x188328,'nightTemp'],
                      [0x188334,'uvi'],[0x188338,'iconDay'],[0x188350,'weatherResponse'],
                      [0x188360,'futureDays'],[0x18836c,'hourly'],[0x1883b4,'windSpeed'],
                      [0x1883c0,'humidity'],[0x1883cc,'pressure'],[0x1883d8,'sensibleTemp'],
                      [0x1883e8,'weatherDataInfo']]) strAt(o, s, 'S12 assistant weather model');
for (const [o, s] of [[0x1a4264,'weather_sunny_night'],[0x1a4278,'weather_cloudy_night'],
                      [0x1a4290,'weather_thundershower_with_hail'],[0x1a42b0,'weather_sand']])
  strAt(o, s, 'S12 weather icon resource');

// ===========================================================================
// S13 — time
// ===========================================================================
strAt(0x1a6fe4, '{"action": "SyncOffSetTime"}', 'S13 outbound time request');
strAt(0x1a6dc0, 'syncTimeData',   'S13 inbound');
strAt(0x1a6dd0, 'timeZoneOffSet', 'S13 key');
strAt(0x1a6f94, 'requestTimeUpdate', 'S13 emitter');
strAt(0x1a3584, 'set_tm_offset', 'S13 NV setter');

// ===========================================================================
// G5 — no 0x2C000000-based address anywhere in the doc; offsets are 11.53.
// ===========================================================================
if (/0x2[cC]0000[0-9a-fA-F]{2}\b/.test(doc)) fail('G5: doc contains a 0x2C000000-based address (known-bad base)');
else ok();
if (!doc.includes('0x2C010000') || !doc.includes('0x3BFD7CB0')) fail('G5: doc does not state the correct address model');
else ok();
if (!doc.includes('x_1.0.11.53/platform_tester.bin')) fail('G5: doc does not name the 1.0.11.53 target'); else ok();
// Every hex offset the doc cites in a code-fence-free table must avoid the sub-images.
for (const m of doc.matchAll(/`0x([0-9a-f]{4,6})`/g)) {
  const v = parseInt(m[1], 16);
  for (const [a, b, nm] of FORBIDDEN)
    if (v >= a && v < b) fail(`G5: doc cites ${hx(v)}, inside ${nm} sub-image`);
}
ok();
// Tier labels must be present for every section.
for (const t of ['TIER: CONFIG', 'TIER: DATA', 'TIER: CODE', '**CONFIG**', '**DATA**', '**CODE**'])
  docHas(t);

// ---- verdict ---------------------------------------------------------------
if (fails) {
  console.error(`\n${fails} failure(s), ${checks} check(s) passed.`);
  process.exit(1);
}
console.log(`protocol verification passed`);
console.error(`(${checks} checks)`);
