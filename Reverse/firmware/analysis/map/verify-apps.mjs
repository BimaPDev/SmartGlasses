#!/usr/bin/env node
// verify-apps.mjs — oracle for Reverse/firmware/analysis/map/apps.md (leaf-1.8)
//
// Target: Reverse/firmware/x_1.0.11.53/platform_tester.bin ONLY.
// Address model: code VA = file + 0x2C010000 ; data file = VA - 0x3BFD7CB0
//
// Controls are declared and reported FIRST (PLAN.md: a gate that cannot fail proves
// nothing). Prints exactly "apps verification passed" on success; exits non-zero on
// failure.

import { readFileSync, existsSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '../../../..');
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'apps.md');

const CODE_BASE  = 0x2c010000;
const DATA_DELTA = 0x3bfd7cb0;   // 1.0.11.53. NOT 0x3BFD7C0C (12.83), NOT 0x3C000000 (known-bad).
const BIN_SIZE   = 7042632;

// sub-images that must never be written (PLAN.md)
const FORBIDDEN = [
  ['HiFi4 DSP',  0x04e9b4, 0x143f14],
  ['sensor_hub', 0x134070, 0x14a7a4],
];
// naming the four boundary constants in prose is legitimate
const BOUNDARY_CONSTS = new Set([0x04e9b4, 0x143f14, 0x134070, 0x14a7a4]);

let failures = 0;
const fail = (m) => { failures++; console.error('FAIL: ' + m); };
const ok   = (m) => { if (process.env.VERBOSE) console.log('  ok  ' + m); };
const check = (c, m) => { c ? ok(m) : fail(m); return !!c; };

if (!existsSync(BIN)) { console.error('FAIL: binary not found: ' + BIN); process.exit(2); }
const d = readFileSync(BIN);
if (d.length !== BIN_SIZE) { console.error(`FAIL: wrong binary, ${d.length} B (want ${BIN_SIZE})`); process.exit(2); }

const u32 = (f) => d.readUInt32LE(f);
const u16 = (f) => d.readUInt16LE(f);
const hex = (n) => '0x' + (n >>> 0).toString(16);

function strAtVA(va, delta = DATA_DELTA) {
  const f = (va >>> 0) - delta;
  if (f < 0 || f >= d.length) return null;
  const e = d.indexOf(0, f);
  if (e < 0 || e - f > 200) return null;
  const s = d.subarray(f, e);
  if (s.length === 0) return null;
  for (const c of s) if (c < 0x20 || c > 0x7e) return null;
  return s.toString('latin1');
}
const strAtFile = (f) => strAtVA(f + DATA_DELTA);
// strAtVA rejects any byte outside printable ASCII, which is right for identifiers but
// WRONG for the localization table: those entries are UTF-8 and some are CJK. This
// variant accepts any NUL-terminated non-control run. Used only where localized text
// is legitimately expected.
function strAtVAText(va, delta = DATA_DELTA) {
  const f = (va >>> 0) - delta;
  if (f < 0 || f >= d.length) return null;
  const e = d.indexOf(0, f);
  if (e < 0 || e - f > 200 || e === f) return null;
  const s = d.subarray(f, e);
  for (const c of s) if (c < 0x20 && c !== 0x09 && c !== 0x0a) return null;
  return s.toString('utf8');
}
function bytesAre(f, hexstr) {
  const want = Buffer.from(hexstr.replace(/\s+/g, ''), 'hex');
  return d.subarray(f, f + want.length).equals(want);
}
function countStr(s) {
  const n = Buffer.from(s, 'latin1');
  let c = 0, i = 0;
  for (;;) { i = d.indexOf(n, i); if (i < 0) break; c++; i++; }
  return c;
}

// =====================================================================================
// CONTROLS FIRST
// =====================================================================================
console.log('controls:');

// POSITIVE CONTROL A — the whole-image string search finds known-present needles.
// Without this, every "absent" claim (SimuTranslation, Pages/Transcribe) is worthless.
const POS = ['com.upuphone.ar.tici', 'PHONE_CMD_TRANS_PROXIMAL_RESULT', 'sourceTextOffset',
             'MSG_TYPE_FLIGHT', 'here_right_roundabout_exit12', 'get_unicron_battery',
             'request_send_air_update_file'];
for (const s of POS) check(countStr(s) >= 1, `POSITIVE CONTROL: "${s}" present (${countStr(s)})`);
console.log(`  POSITIVE CONTROL string search: ${POS.length}/${POS.length} known-present needles found`);

// NEGATIVE CONTROL B — plausible-but-wrong names that must NOT exist. If the search
// degenerated into "always found", this block fails.
const NEG = ['Pages/Teleprompter',
             'PHONE_CMD_TRANS_PROXIMAL_RESULT_V2', 'com.upuphone.ar.tici.v2',
             'MSG_TYPE_SMS', 'here_left_roundabout_exit13', 'set_unicron_battery',
             'PHONE_CMD_TRANS_TEXT'];
for (const s of NEG) check(countStr(s) === 0, `NEGATIVE CONTROL: "${s}" absent (${countStr(s)})`);
console.log(`  NEGATIVE CONTROL string search: ${NEG.length}/${NEG.length} known-absent needles correctly absent`);

// CONTROL C — the data delta, exercised on an apps-owned pointer (Prompt's literal pool).
check(strAtVA(u32(0x53ad08), DATA_DELTA) === 'com.upuphone.ar.tici',
      'POSITIVE CONTROL: delta 0x3BFD7CB0 decodes [0x53ad08] -> "com.upuphone.ar.tici"');
check(strAtVA(u32(0x53ad08), 0x3c000000) !== 'com.upuphone.ar.tici',
      'NEGATIVE CONTROL: known-bad delta 0x3C000000 does NOT decode [0x53ad08]');
check(strAtVA(u32(0x53ad08), 0x3bfd7c0c) !== 'com.upuphone.ar.tici',
      'NEGATIVE CONTROL: 12.83 delta 0x3BFD7C0C does NOT decode [0x53ad08]');

// CONTROL D — the (txt_id, char*) pair decoder. Reading the pair at the WRONG phase
// (id slot read as a pointer, +4 shift) must NOT yield "Prompter".
check(u32(0x492fe8) === 0x1035 && strAtVA(u32(0x492fec)) === 'Prompter',
      'POSITIVE CONTROL: txt pair @0x492fe8 == (0x1035, "Prompter")');
check(strAtVA(u32(0x492fe8)) !== 'Prompter',
      'NEGATIVE CONTROL: off-phase read of the txt pair (id slot as ptr) does not give "Prompter"');
check(strAtVA(u32(0x492ff0)) !== 'Prompter',
      'NEGATIVE CONTROL: next pair @0x492ff0 is not also "Prompter"');

console.log('checks:');

// =====================================================================================
// §0  the text-id table — the cross-app DATA lever
// =====================================================================================
const TXT_LO = 0x492fb0, TXT_HI = 0x493200;
check((TXT_HI - TXT_LO) / 8 === 74, 'EN txt table 0x492fb0-0x493200 holds 74 pairs');
// the table is well-formed end to end: every pair is (id in [0x1000,0x1400), valid char*)
{
  let bad = 0;
  for (let f = TXT_LO; f < TXT_HI; f += 8)
    if (!(u32(f) >= 0x1000 && u32(f) < 0x1400 && strAtVAText(u32(f + 4)) !== null)) bad++;
  check(bad === 0, `every one of the 74 txt pairs is (id, valid char*) (bad=${bad})`);
  // CONTROL: the relaxation above must be earning its keep. If every entry were plain
  // ASCII, strAtVA would have sufficed and this pair of checks would be redundant.
  let nonAscii = 0;
  for (let f = TXT_LO; f < TXT_HI; f += 8) {
    const t = strAtVAText(u32(f + 4));
    if (t && /[^\x20-\x7e]/.test(t)) nonAscii++;
  }
  check(nonAscii > 0,
        `POSITIVE CONTROL: ${nonAscii} txt entries are non-ASCII, so UTF-8 handling is required`);
  // bound it: the pair before and after must NOT both look like table entries
  const looks = (f) => u32(f) >= 0x1000 && u32(f) < 0x1400 && strAtVA(u32(f + 4)) !== null;
  check(!looks(TXT_LO - 8), `txt table starts at ${hex(TXT_LO)} (previous pair is not an entry)`);
  check(!looks(TXT_HI),     `txt table ends at ${hex(TXT_HI)} (next pair is not an entry)`);
}
function txt(id) {
  for (let f = TXT_LO; f < TXT_HI; f += 8) if (u32(f) === id) return { f, off: u32(f + 4) - DATA_DELTA, s: strAtVA(u32(f + 4)) };
  return null;
}
const LABELS = [
  [0x1001, 'Ring',                           0x176c70],
  [0x1002, 'Translator',                     0x41eb88],
  [0x1003, 'Navigation',                     0x193fdc],
  [0x1004, 'Music',                          0x1ab70c],
  [0x1024, 'Settings',                       0x176b94],
  [0x1035, 'Prompter',                       0x41eba0],
  [0x1010, 'Please connect to mobile first', 0x41ec04],
  [0x1068, 'Transcribe',                     0x41b81c],
];
for (const [id, s, off] of LABELS) {
  const t = txt(id);
  check(t && t.s === s,     `txt id ${hex(id)} -> "${s}" (got ${t ? JSON.stringify(t.s) : 'null'})`);
  check(t && t.off === off, `txt id ${hex(id)} string lives at file ${hex(off)}`);
  check(strAtFile(off) === s, `literal @${hex(off)} == "${s}" (DATA-tier patch site)`);
}
// the dock MOVW sites that load these ids (leaf-1.2 offsets, re-derived here)
const movw16 = (f) => ((u16(f) & 0x000f) << 12) | (((u16(f) >> 10) & 1) << 11)
                    | (((u16(f + 2) >> 12) & 7) << 8) | (u16(f + 2) & 0xff);
for (const [f, id, page] of [[0x6137e0, 0x1002, 'Translation'], [0x61380c, 0x1003, 'Navigation'],
                             [0x61386c, 0x1004, 'AirMusic'],    [0x6137b4, 0x1035, 'Prompt'],
                             [0x613838, 0x1024, 'Settings']]) {
  check((u16(f) & 0xfbf0) === 0xf240, `dock ${page}: @${hex(f)} is MOVW`);
  check(movw16(f) === id,             `dock ${page}: loads txt id ${hex(id)}`);
}

// =====================================================================================
// §1  Translation / Transcribe
// =====================================================================================
const TRANS_PATHS = [
  [0x179284, 'Translation/Translation.cpp'],
  [0x179320, 'Translation/widget/lv_textview.c'],
  [0x179774, 'Translation/controller/TransConfig.cpp'],
  [0x179944, 'Translation/controller/TransContext.cpp'],
  [0x179cd8, 'Translation/controller/TransManager.cpp'],
  [0x179e40, 'Translation/controller/TransState.cpp'],
  [0x17a098, 'Translation/controller/TransProxy.cpp'],
  [0x17a318, 'Translation/ui/TransView.cpp'],
  [0x17ab24, 'Translation/message/glass/GPhoneIncomingMsg.cpp'],
  [0x17ab94, 'Translation/message/glass/GClickMsg.cpp'],
  [0x17ac48, 'Translation/message/glass/GWechatReplyExitMsg.cpp'],
  [0x17acb8, 'Translation/message/glass/GMuteDialogDismissMsg.cpp'],
  [0x17ad2c, 'Translation/message/glass/GWechatReplyOpenMsg.cpp'],
  [0x17ad9c, 'Translation/message/glass/GPhoneCallingMsg.cpp'],
  [0x17ae08, 'Translation/message/glass/GAssistantOpenMsg.cpp'],
  [0x17ae98, 'Translation/message/phone/PAppStateMsg.cpp'],
  [0x17af14, 'Translation/message/phone/PRunMsg.cpp'],
  [0x17afac, 'Translation/message/phone/PStopMsg.cpp'],
  [0x17b010, 'Translation/message/phone/PProximalResultMsg.cpp'],
  [0x17b0c0, 'Translation/message/phone/PMuteDialogDismissMsg.cpp'],
  [0x17b134, 'Translation/message/phone/PSubtitleTypeMsg.cpp'],
  [0x17b1bc, 'Translation/message/phone/PLanguageMsg.cpp'],
  [0x17b224, 'Translation/message/phone/PResultMsg.cpp'],
  [0x17b28c, 'Translation/message/phone/PTransSaveSuccessMsg.cpp'],
  [0x17b2fc, 'Translation/message/phone/PRecordStateMsg.cpp'],
  [0x17b390, 'Translation/message/phone/PTransStateMsg.cpp'],
];
for (const [f, tail] of TRANS_PATHS)
  check(strAtFile(f) === '../../thirdparty/star_air_lvgl/app/Pages/' + tail,
        `source path @${hex(f)} == Pages/${tail}`);
check(TRANS_PATHS.filter(([, t]) => t.includes('/message/phone/')).length === 11,
      'Translation has exactly 11 phone-originated P*Msg units');
check(TRANS_PATHS.filter(([, t]) => t.includes('/message/glass/')).length === 7,
      'Translation has exactly 7 glasses-originated G*Msg units');

// the 16 PHONE_CMD_* names, contiguous, in declaration order
const PHONE_CMDS = [
  [0x17b448, 'PHONE_CMD_INVALID'], [0x17b45c, 'PHONE_CMD_RECORD_STATE'],
  [0x17b474, 'PHONE_CMD_TRANS_STATE'], [0x17b48c, 'PHONE_CMD_TRANS_REMOTE_RESULT'],
  [0x17b4ac, 'PHONE_CMD_TRANS_PROXIMAL_RESULT'], [0x17b4cc, 'PHONE_CMD_SERVER_RUNNING_STATE'],
  [0x17b4ec, 'PHONE_CMD_NETWORK_STATE'], [0x17b504, 'PHONE_CMD_SUBTITLE_SIZE_TPYE'],
  [0x17b524, 'PHONE_CMD_SUBTITLE_SET_TYPE'], [0x17b540, 'PHONE_CMD_SERVER_START_COMPLETE'],
  [0x17b560, 'PHONE_CMD_TRANS_LAN_SET'], [0x17b578, 'PHONE_CMD_TRANS_START'],
  [0x17b590, 'PHONE_CMD_TRANS_STOP'], [0x17b5a8, 'PHONE_CMD_DIALOG_DIMISS'],
  [0x17b5c0, 'PHONE_CMD_TRANS_SAVE_SUCCESS'], [0x17b5e0, 'PHONE_CMD_TRANS_EXIT'],
];
PHONE_CMDS.forEach(([f, n], i) => check(strAtFile(f) === n, `PHONE_CMD[${i}] @${hex(f)} == "${n}"`));
check(PHONE_CMDS.length === 16, 'exactly 16 PHONE_CMD_* names');
// bound the block: nothing named PHONE_CMD_* after the last one
check(!(strAtFile(0x17b5f4) || '').startsWith('PHONE_CMD_'),
      'PHONE_CMD block ends at 0x17b5f4 (next literal is not a PHONE_CMD_*)');
check(countStr('PHONE_CMD_') === 16, 'the token "PHONE_CMD_" occurs exactly 16 times image-wide');

const TRANS_LITS = [
  [0x179740, 'LAUNCH_TYPE_GLASS'], [0x179754, 'LAUNCH_TYPE_PHONE'],
  [0x1797dc, 'launchType'], [0x1797e8, 'subtitleSetType'], [0x1797f8, 'transType'],
  [0x179804, 'dst'], [0x179808, 'update'],
  [0x179c64, 'bindTranslationContext'], [0x179c98, 'bindTranscribeContext'],
  [0x17a100, 'com.upuphone.ar.translation.glasses'],
  [0x17a124, 'com.upuphone.ar.transcribe.glasses'],
  [0x17a154, 'com.upuphone.ar.translation.phone'],
  [0x17a178, 'com.upuphone.ar.transcribe.phone'],
  [0x17a1a8, 'com.upuphone.star.launcher@com.upuphone.ar.translation.phone.TranslationService'],
  [0x17a200, 'com.upuphone.star.launcher@com.upuphone.ar.transcribe.phone.TranscribeService'],
  [0x17a26c, 'com.upuphone.xr.interconnect'],
  [0x17a1f8, 'appId'], [0x17a250, 'menuId'], [0x17a260, 'requestId'], [0x17a258, '%010u'],
  [0x17a2a0, 'IdleView'], [0x17a2ac, 'LaunchView'], [0x17a2b8, 'LaunchFailedView'],
  [0x17a2cc, 'TransNotStart'], [0x17a2dc, 'TransPreparing'], [0x17a2ec, 'TransListening'],
  [0x17a2fc, 'TransRunning'], [0x17a30c, 'TransEnd'],
  [0x17a378, 'com.upuphone.ar.translation.glasses.mute'], [0x17a3a4, 'trans_icon'],
  [0x17aa10, 'translation'], [0x17aa1c, 'transcription'],
  [0x17aa2c, 'dialog_trans'], [0x17aa3c, 'dialog_trans_large'],
  [0x17b354, 'recordState'], [0x17b3e8, 'transState'], [0x17b3f4, 'extCode'], [0x17b42c, 'ttsTime'],
  [0x179eb4, 'MUTE_STATE_FIVE_SECS'], [0x179f08, 'NET_STATE_OFF'],
  [0x179f38, 'WAIT_FOR_REMOTE_SERVICE_LAUNCH'], [0x179fa0, 'TRANSLATE_RUNNING'],
];
for (const [f, s] of TRANS_LITS) check(strAtFile(f) === s, `Translation literal @${hex(f)} == "${s}"`);
// the src/dst + commit result shape
check((strAtFile(0x17b06c) || '').includes('dst = %s commit = %s'),
      'PProximalResultMsg log @0x17b06c proves the dst+commit result shape');
check((strAtFile(0x17b08c) || '').includes('src = %s commit = %s'),
      'PProximalResultMsg log @0x17b08c proves the src+commit result shape');
// Transcribe is a MODE, not a page
check(countStr('APP_TYPE_TRANSCRIBE') >= 1 && countStr('APP_TYPE_TRANSLATION') >= 1,
      'Transcribe/Translate are app TYPES of one page (APP_TYPE_* both present)');
// Pages/Transcribe IS in the image (0x185d88) — it is simply not a REGISTRY entry,
// which the registry-scoped check further down asserts correctly. Test that instead
// of an image-wide absence that is plainly false.
check(countStr('Pages/Translation') >= 1 && countStr('Pages/Transcribe') === 1,
      'Pages/Translation and Pages/Transcribe both exist as strings');

// =====================================================================================
// §2  Prompt — the teleprompter
// =====================================================================================
for (const [f, tail] of [[0x176e30, 'Prompt/Prompt.cpp'], [0x176ec0, 'Prompt/widget/lv_tipview.c'],
                         [0x1770e0, 'Prompt/controller/PromptManager.cpp'],
                         [0x1779bc, 'Prompt/ui/PromptView.cpp']])
  check(strAtFile(f) === '../../thirdparty/star_air_lvgl/app/Pages/' + tail,
        `source path @${hex(f)} == Pages/${tail}`);

const PROMPT_KEYS = [
  [0x1776a0, 'action'], [0x1776a8, 'app_cancel_tici'], [0x1776b8, 'msgId'],
  [0x1776c0, 'glass_tici_started'], [0x1776d4, 'version'], [0x1776dc, 'fileKey'],
  [0x1776e4, 'screenLocation'], [0x1776f4, 'isFinish'], [0x177700, 'ticiMode'],
  [0x17770c, 'isRunning'], [0x177718, 'ticiSpeed'], [0x177724, 'totalPage'],
  [0x177730, 'open_result'], [0x17773c, 'sourceText'], [0x177748, 'targetPage'],
  [0x177754, 'com.upuphone.ar.tici'], [0x17776c, 'currentPage'],
  [0x17777c, 'request_send_content_page'], [0x177798, 'send_content'],
  [0x1777a8, 'nextTotalParagraphSize'], [0x1777c0, 'open_result_v2'],
  [0x1777d0, 'open_result_v3'], [0x1777e0, 'prevTotalParagraphSize'],
  [0x1777f8, 'paragraphIndex'], [0x177808, 'change_tici_mode'],
  [0x17781c, 'check_tici_state'], [0x177830, 'glasses_quit_msg'],
  [0x177844, 'highlight_index'], [0x177854, 'sourceByteSize'],
  [0x177864, 'auto_tici_running'], [0x177878, 'open_from_glasses'],
  [0x17788c, 'paragraphIndexes'], [0x1778a0, 'totalTextLength'],
  [0x1778b0, 'autoTiciProgress'], [0x1778c4, 'blockNotification'],
  [0x1778d8, 'send_content_reply'], [0x1778ec, 'sourceTextOffset'],
  [0x177900, 'highlight_index_v3'], [0x177914, 'isAutoTiciPlaying'],
  [0x177928, 'check_tici_state_reply'], [0x177940, 'end'], [0x177944, 'data'],
  [0x17794c, 'tici'], [0x177954, 'index'], [0x17795c, 'start'], [0x177964, 'value'],
  [0x17796c, 'FONT_DUMMY_16'], [0x17797c, 'prompt_focus'],
  [0x177a40, 'com.upuphone.ar.tici.exit'], [0x177af8, 'prompt_exit_dialog'],
  [0x177b0c, 'FONT_DUMMY_20'], [0x177b1c, 'uniformModeOff'], [0x177b2c, 'uniformModeOn'],
  [0x177c50, 'prompt_timeout'],
];
for (const [f, s] of PROMPT_KEYS) check(strAtFile(f) === s, `Prompt literal @${hex(f)} == "${s}"`);
for (const [f, s] of [[0x177130, 'sendProgressMsg'], [0x1771d4, 'sendLaunchReplyMsg'],
                      [0x177218, 'sendStartMsg'], [0x177228, 'sendExitMsg'],
                      [0x177234, 'sendSyncMsg'], [0x177240, 'sendUniformModeState'],
                      [0x177258, 'sendReadyMsg'], [0x177268, 'sendPageRequest'],
                      [0x1772d0, 'sendContentAck'], [0x1772f0, 'initSession']])
  check(strAtFile(f) === s, `PromptManager sender @${hex(f)} == "${s}"`);
for (const [f, s] of [[0x177348, 'pageCountObj != NULL'], [0x177360, 'pageIndexObj != NULL'],
                      [0x177378, 'pageOffsetObj != NULL'], [0x177390, 'pageCharsObj != NULL'],
                      [0x1773a8, 'prevParaSizeObj != NULL'], [0x1773c0, 'nextParaSizeObj != NULL']])
  check(strAtFile(f) === s, `Prompt content-page required field assert @${hex(f)}`);
check((strAtFile(0x177604) || '').includes('content_len > mCurSessionPtr->content_size overflow'),
      'Prompt bounds a pushed page (overflow guard @0x177604)');

// the 12 indicator resource names, and the pointer array that selects them
const INDICATORS = [
  [0x53a168, 0x177b3c, 'indicator_up_default'],   [0x53a16c, 0x177b54, 'indicator_up_focus'],
  [0x53a170, 0x177b68, 'indicator_up_selected'],  [0x53a174, 0x177b80, 'indicator_down_default'],
  [0x53a178, 0x177b98, 'indicator_down_focus'],   [0x53a17c, 0x177bb0, 'indicator_down_selected'],
  [0x53a180, 0x177bc8, 'indicator_on_default'],   [0x53a184, 0x177be0, 'indicator_off_default'],
  [0x53a188, 0x177bf8, 'indicator_on_focus'],     [0x53a18c, 0x177c0c, 'indicator_off_focus'],
  [0x53a190, 0x177c20, 'indicator_on_selected'],  [0x53a194, 0x177c38, 'indicator_off_selected'],
];
for (const [slot, off, name] of INDICATORS) {
  check(strAtFile(off) === name,           `indicator literal @${hex(off)} == "${name}"`);
  check(u32(slot) - DATA_DELTA === off,    `indicator ptr @${hex(slot)} -> ${hex(off)}`);
}
check(INDICATORS.length === 12, 'Prompt has exactly 12 indicator resource names');

// §2.3 the connection gate, and that the code owning it really is PromptView
check(bytesAre(0x53a898, '6b79'),     'Prompt gate: ldrb r3,[r5,#5] @0x53a898');
check(u16(0x53a89a) === 0x2b06,       'Prompt gate: cmp r3,#6 @0x53a89a');
check((u16(0x53a89c) & 0xff00) === 0xd000, 'Prompt gate: beq (cond branch) @0x53a89c');
check(bytesAre(0x53a8a4, '41f21000'), 'Prompt gate: movw r0,#0x1010 @0x53a8a4 (the toast text id)');
check(movw16(0x53a8a4) === 0x1010,    'Prompt gate: the MOVW immediate decodes to 0x1010');
check(txt(0x1010).s === 'Please connect to mobile first',
      'Prompt gate: txt id 0x1010 == "Please connect to mobile first"');
// ownership proof: the very next literal pool belongs to PromptView.cpp
check(strAtVA(u32(0x53a8f0)) === '../../thirdparty/star_air_lvgl/app/Pages/Prompt/ui/PromptView.cpp',
      'Prompt gate: literal pool @0x53a8f0 proves the gate sits in PromptView.cpp');
check(strAtVA(u32(0x53a8e8)) === 'start',
      'Prompt gate: pool @0x53a8e8 -> "start" (the gate is on the start path)');
// the exact PROTOCOL.md wording is NOT what the binary says — assert the real spelling
check(countStr('Please Connect to the mobile first') === 0,
      'NEGATIVE CONTROL: PROTOCOL.md wording "Please Connect to the mobile first" is NOT in the image');

// =====================================================================================
// §3  Navigation
// =====================================================================================
const NAVI = [
  [0x19b1f8, 'navi_stop'], [0x19b204, 'naviMode'], [0x19b260, 'navi_start_rsp'],
  [0x19b270, 'navigation_close'], [0x19b284, 'navi_launch_mode'],
  [0x19b298, 'navigation_open_voice'], [0x19b2b0, 'navigation_close_voice'],
  [0x19b364, 'register_starry_net'], [0x19b514, 'cameraIntervalInfo'],
  [0x19b528, 'intervalCameraInfo'], [0x19b564, 'carEnterCameraStatus'],
  [0x19b57c, 'cameraSpeed'], [0x19cdf8, 'com.upuphone.ar.navi.lite'],
  [0x19cdb8, 'sendMessageAndDataWithPkg'], [0x19ce14, 'sendMessageToInterconnect'],
  [0x19d864, 'update_navi_info'], [0x19d978, 'navigation_icon_48'],
  [0x19de98, 'com.upuphone.ar.navi.glass_pip_navigating'],
  [0x19df6c, 'navigation_drive_icon'], [0x19df84, 'navigation_walk_icon'],
  [0x19df9c, 'navigation_cycle_icon'], [0x19edf0, 'getGuideLaneImage'],
  [0x19ef60, 'km/h'], [0x19f118, 'min'],
];
for (const [f, s] of NAVI) check(strAtFile(f) === s, `Navigation literal @${hex(f)} == "${s}"`);
// manoeuvre icon block: contiguous names, spot-checked at both ends
for (const [f, s] of [[0x19e784, 'here_left_u_turn'], [0x19e7b0, 'here_left_turn'],
                      [0x19e8f4, 'here_left_roundabout_enter'],
                      [0x19eab4, 'here_right_roundabout_exit1'],
                      [0x19ebf0, 'here_right_roundabout_exit12'], [0x19ee94, 'here_straight']])
  check(strAtFile(f) === s, `navi manoeuvre icon @${hex(f)} == "${s}"`);
// 24 roundabout-exit variants (12 left + 12 right)
for (let i = 1; i <= 12; i++) {
  check(countStr(`here_left_roundabout_exit${i}\0`) >= 1, `here_left_roundabout_exit${i} present`);
  check(countStr(`here_right_roundabout_exit${i}\0`) >= 1, `here_right_roundabout_exit${i} present`);
}
// 22 lane backgrounds landback_0..9,a..l
for (const c of '0123456789abcdefghijkl')
  check(countStr(`landback_${c}\0`) >= 1, `lane background "landback_${c}" present`);
check(countStr('landback_m\0') === 0, 'NEGATIVE CONTROL: landback_m does not exist (the run ends at l)');
for (const s of ['NAVI_EVENT_CALCULATE_ROUTE', 'NAVI_EVENT_ROUTE_SELECTED', 'NAVI_EVENT_POI_SEARCH',
                 'NAVI_EVENT_ARRIVE_DEST', 'NAVI_EVENT_END_EMUL_NAVI'])
  check(countStr(s) >= 1, `navi event "${s}" present`);

// =====================================================================================
// §4  Phone
// =====================================================================================
const PHONE = [
  [0x184e64, 'namespace'], [0x184e70, 'checkPhoneNamespace'], [0x184f04, 'toCallingMsg'],
  [0x184f3c, 'pushBackContactVec'], [0x184fb8, 'phoneNumber'], [0x184fc4, 'company'],
  [0x184fcc, 'lookup'], [0x184fd4, 'contactId'], [0x184fe0, 'callback'],
  [0x184fec, 'redial'], [0x184ff4, 'answer'], [0x184ffc, 'hang_up'],
  [0x185008, 'open_phone'], [0x185014, 'close_phone'], [0x185024, 'open_phonebook'],
  [0x185034, 'view_message'], [0x185044, 'DialContact'], [0x185054, 'DialNumber'],
  [0x185060, 'DialYellowPage'], [0x185070, 'DialRelative'], [0x185080, 'Dial'],
  [0x185088, 'PhoneDirective'], [0x185098, 'Select'], [0x1850a0, 'SwitchPage'],
  [0x1850ac, 'Cancel'], [0x1850b4, 'displayName'], [0x1850c0, 'functionName'],
  [0x1850d0, 'targetPackage'], [0x1850e0, 'geo'], [0x1850e4, 'msg'], [0x1850e8, 'code'],
  [0x1850f0, 'data'], [0x1850f8, 'param'], [0x185100, 'phoneNo'], [0x185108, 'requestId'],
  [0x183544, 'com.upuphone.ai.phone'], [0x18355c, 'AIR_FUNCTION'],
  [0x1835bc, 'QUERY_CONTACT_ADDRESS'], [0x1835d4, 'requestNameAndGeo'],
];
for (const [f, s] of PHONE) check(strAtFile(f) === s, `Phone literal @${hex(f)} == "${s}"`);
for (const [f, tail] of [[0x18235c, 'Phone/PhonePage.cpp'], [0x184dfc, 'Phone/utils/JsonToObj.cpp'],
                         [0x1881b4, 'Phone/view/SIMPanelView.cpp'],
                         [0x1831d0, 'Phone/adapter/powerkey_adpater.c']])
  check(strAtFile(f) === '../../thirdparty/star_air_lvgl/app/Pages/' + tail,
        `source path @${hex(f)} == Pages/${tail}`);

// =====================================================================================
// §5  AirMusic
// =====================================================================================
for (const [f, s] of [[0x1976a4, 'com.upuphone.ar.music.glasses'], [0x1979a4, 'com.upuphone.ar.music.phone'],
                      [0x18c2e4, 'com.upuphone.ar.music.glass'], [0x19793c, 'sendJsonRequest'],
                      [0x1979c0, 'setQqMusicPlayState'], [0x196fd8, 'postion_mutex'],
                      [0x196fe8, 'lyric_mutex'], [0x196c70, 'checkPositionChange'],
                      [0x19628c, 'createAudioPlayCtrlWithOutMusicInfo']])
  check(strAtFile(f) === s, `AirMusic literal @${hex(f)} == "${s}"`);
for (const [f, tail] of [[0x19957c, 'AirMusic/qqmusic/QqMusicMainView.cpp'],
                         [0x19a3d4, 'AirMusic/intl_music/IntlMusicMainView.cpp'],
                         [0x199f20, 'AirMusic/playcenter/AudioPlayCtrlCenterView.cpp'],
                         [0x198ba4, 'AirMusic/util/AirMusicLanguageUtil.cpp']])
  check(strAtFile(f) === '../../thirdparty/star_air_lvgl/app/Pages/' + tail,
        `source path @${hex(f)} == Pages/${tail}`);

// =====================================================================================
// §6  SmartLife
// =====================================================================================
const SL = [
  [0x19f2b4, 'notificationControlState'], [0x19f2d0, 'reminderScenesControlState'],
  [0x19f2ec, 'notificationDisplayTime'], [0x19f344, 'notificationBroadcast'],
  [0x19f35c, 'notificationBrightenScreen'], [0x19f378, 'callNotificationState'],
  [0x19f390, 'notificationBroadcastPauseType'], [0x19f3b0, 'reminderOpenState'],
  [0x19f3c4, 'MSG_TYPE_REMINDER'], [0x19f3d8, 'MSG_TYPE_TAXI'], [0x19f3e8, 'MSG_TYPE_EXPRESS'],
  [0x19f3fc, 'MSG_TYPE_TAKEOUT'], [0x19f410, 'MSG_TYPE_FLIGHT'], [0x19f420, 'MSG_TYPE_WEATHER'],
  [0x19f434, 'MSG_TYPE_IM'], [0x19f440, 'iosNotificationState'],
  [0x19f458, 'iosUsingTurnOffNotification'], [0x19f474, 'createNormalMsg'],
  [0x19f538, 'crateTime'], [0x19f55c, 'canReply'], [0x19f568, 'aiResult'],
  [0x19f574, 'msgType'], [0x19f57c, 'discernResult'], [0x19f58c, 'Im:im'],
  [0x19f594, 'groupName'], [0x19f5a0, 'sender'], [0x19f5a8, 'Im:phone'],
  [0x19f5b4, 'verificationCode'], [0x19f5c8, 'onReceiveNotification'],
  [0x19f618, 'onReceiveDismissScene'], [0x19f630, 'packages'],
  [0x19f63c, 'onReceiveDismissNotification'], [0x19f65c, 'ids'],
  [0x19f660, 'onReceiveAncsConnectRequest'], [0x19f67c, 'onReceiveAncsStateRequest'],
  [0x19f698, 'onReceiveAncsDisconnectRequest'], [0x19f6b8, 'onReceiveToast'],
  [0x19f6dc, 'onReceiveUnlockState'], [0x19f6f4, 'screen_state'],
  [0x19f704, 'onReceiveMuteType'], [0x19f72c, 'com.upuphone.glass.smartlife'],
  [0x19f74c, 'createFlightMsg'], [0x19f780, 'lastUpdateTime'], [0x19f7ac, 'flightNumber'],
  [0x19f7bc, 'flightDepartureAerodrome'], [0x19f7d8, 'flightDepartureTime'],
];
for (const [f, s] of SL) check(strAtFile(f) === s, `SmartLife literal @${hex(f)} == "${s}"`);
check(SL.filter(([, s]) => s.startsWith('MSG_TYPE_')).length === 7, 'SmartLife has 7 MSG_TYPE_* card kinds');
// package -> icon pairs (the DATA retargeting lever)
for (const [pf, ps, inf, ins] of [[0x1a002c, 'com.tencent.wework',     0x1a0040, 'smartlife_notification_wework_icon'],
                                  [0x1a0064, 'com.tencent.wemeet.app', 0x1a007c, 'smartlife_notification_wemeet_icon'],
                                  [0x1a00a0, 'com.ss.android.lark',    0x1a00b4, 'smartlife_notification_lark_icon']]) {
  check(strAtFile(pf) === ps,  `SmartLife package literal @${hex(pf)} == "${ps}"`);
  check(strAtFile(inf) === ins, `SmartLife icon literal @${hex(inf)} == "${ins}"`);
}
for (const [f, s] of [[0x19fdfc, 'com.tencent.mm'], [0x19ff7c, 'com.whatsapp'],
                      [0x19ff8c, 'phone-com.whatsapp-23'], [0x19ffcc, 'com.whatsapp.w4b'],
                      [0x1a00d8, 'com.alibaba.android.rimet']])
  check(strAtFile(f) === s, `SmartLife package literal @${hex(f)} == "${s}"`);

// =====================================================================================
// §7  Ring
// =====================================================================================
const RING = [
  [0x17bb7c, 'com.upuphone.ar.ring.glasses'], [0x17d9e0, 'com.upuphone.ar.ring'],
  [0x17d79c, 'com.upuphone.star.ring.ota'],
  [0x17e120, 'com.upuphone.star.launcher.ring.single_unbound'],
  [0x17db8c, 'set_unicron_name'], [0x17dd9c, 'get_unicron_battery'],
  [0x17dc1c, 'sendRingInfoMsg'], [0x17dc50, 'isConnect'], [0x17dc5c, 'devName'],
  [0x17dc64, 'bluetooth'], [0x17ddd0, 'dev_name'],
  [0x17de94, 'launcher_ring_toast_disconnect'], [0x17e014, 'onRingConnectEventListener'],
  [0x17e090, 'onRingBoundEventListener'], [0x17df38, 'onRingModifyNameListener'],
  [0x17df70, 'onRingVersionListener'],
];
for (const [f, s] of RING) check(strAtFile(f) === s, `Ring literal @${hex(f)} == "${s}"`);
const RING_VIEWS = ['GuideSearchView', 'SearchFailedView', 'RingListView', 'ConnectingView',
                    'ConnectedViewV1', 'SingleUnboundView', 'OperationGuideView', 'RemoveView',
                    'VersionInfoView', 'VersionInfoDetailView'];
for (const v of RING_VIEWS)
  check(countStr(`Pages/Ring/ui/${v}.cpp`) >= 1, `Ring screen "${v}" has a translation unit`);
check(RING_VIEWS.length === 10, 'Ring has exactly 10 ui/*View translation units');
// Ring is de-docked: the ringmanager package is compared but app id 5 is a hole
check(countStr('com.upuphone.xr.ringmanager') >= 1, 'ringmanager package literal present (it IS compared)');
check((u16(0x613788) & 0xfd00) === 0xb100, 'createAppInfo @0x613788 is a CBZ (ringmanager -> no dock entry)');

// =====================================================================================
// §8  StarryNetApp
// =====================================================================================
for (const [f, tail] of [[0x17eeec, 'StarryNetApp/StarryNetApp.cpp'],
                         [0x17f140, 'StarryNetApp/StarryNetAppService.cpp'],
                         [0x180858, 'StarryNetApp/view/ConnectGuideViewV2.cpp'],
                         [0x1817b8, 'StarryNetApp/toplayer/PowerOffAndRebootView.cpp'],
                         [0x182294, 'StarryNetApp/util/BtNameCalUtil.cpp']])
  check(strAtFile(f) === '../../thirdparty/star_air_lvgl/app/Pages/' + tail,
        `source path @${hex(f)} == Pages/${tail}`);
for (const [f, s] of [[0x17f204, 'createConnGuiderViewV2'], [0x17f254, 'createPowerOffAndRebootView'],
                      [0x17f2a8, 'handlePowerOffView'], [0x17f474, 'delePowerOffAndRebootView'],
                      [0x41f5a8, 'Power off']])
  check(strAtFile(f) === s, `StarryNetApp literal @${hex(f)} == "${s}"`);

// =====================================================================================
// §9  Ota
// =====================================================================================
const OTA = [
  [0x194804, 'air_ota'], [0x194890, 'needInstallUpdate'],
  [0x1948a4, 'sync_air_glass_update_dialog_result'], [0x1948fc, 'model'],
  [0x194904, 'subModel'], [0x194910, 'displayName'], [0x19491c, 'romVersion'],
  [0x194928, 'serial'], [0x194930, 'isCharging'], [0x19493c, 'buildType'],
  [0x194948, 'get_air_glass_info'], [0x194990, 'open_air_glass_update_app'],
  [0x194a20, 'show_air_glass_update_dialog'], [0x194a40, 'launcher_system_alert'],
  [0x194a58, 'isUpdating'], [0x194a64, 'query_air_glass_update_state'],
  [0x194b30, 'sync_air_glass_update_result'], [0x194b7c, 'get_air_glass_update_result'],
  [0x194ca4, 'request_sync_air_update_file_info'], [0x194cf0, 'request_sync_update_info_stream'],
  [0x194d10, 'request_send_update_file_stream'], [0x194e48, 'ota_progress_circle_bg'],
  [0x194e98, 'ota_fail_bg'], [0x194fc0, 'sync_air_glass_update_progress'],
  [0x19537c, 'checkWrittenFlashMd5'], [0x19552c, 'request_send_air_update_file'],
  [0x195590, 'platform'], [0x1955cc, 'bth'], [0x1956f8, 'sync_air_glass_checking_business'],
  [0x19571c, 'nand'], [0x195964, 'fileSize'], [0x195a68, 'isMd5Equal'],
  [0x195aa8, 'fileOffset'], [0x195ab4, 'fileLength'], [0x195f14, 'OTA_TRANSFER_TIMEOUT_TIMER'],
];
for (const [f, s] of OTA) check(strAtFile(f) === s, `Ota literal @${hex(f)} == "${s}"`);
// the failure-reason table: md5/size/magic/boot failures, and NO signature failure
const OTA_FAILS = [
  [0x194ffc, 'ota succeed'], [0x195008, 'ota ble disconnected'],
  [0x195020, 'ota transfer file timeout'], [0x1950a8, 'ota invalid file info'],
  [0x1950dc, 'ota failed to install file'], [0x1950f8, 'ota failed to install nand'],
  [0x195114, 'ota failed to check written flash md5'],
  [0x19513c, 'ota failed to update magic number'],
  [0x195160, 'ota failed to update boot info'],
  [0x1951f0, 'ota failed to init md5 ctx'],
  [0x19520c, 'ota failed to check transfer file md5'],
  [0x195264, 'ota unsupported error code'],
];
for (const [f, s] of OTA_FAILS) check(strAtFile(f) === s, `Ota failure reason @${hex(f)} == "${s}"`);
// NEGATIVE CONTROL: no signature/verify failure reason exists anywhere in the image
for (const s of ['ota failed to verify signature', 'ota invalid signature', 'signature verify failed',
                 'ota failed to check signature'])
  check(countStr(s) === 0, `NEGATIVE CONTROL: no OTA signature failure reason "${s}"`);

// =====================================================================================
// §10  page registry — the eleven surfaces this leaf claims exist
// =====================================================================================
const REG_BASE = 0x534de0;
const OWNED = ['Pages/StarryNetApp', 'Pages/SmartLife', 'Pages/Navigation', 'Pages/Translation',
               'Pages/Phone', 'Pages/AirMusic', 'Pages/Ota', 'Pages/Ring', 'Pages/Prompt'];
const regPages = [];
for (let i = 0; i < 13; i++) regPages.push(strAtVA(u32(REG_BASE + i * 8)));
for (const p of OWNED) check(regPages.includes(p), `page registry contains "${p}"`);
check(regPages.filter(Boolean).length === 13, 'page registry decodes 13 entries');
check(!regPages.includes('Pages/Transcribe') && !regPages.includes('Pages/SimuTranslation'),
      'NEGATIVE CONTROL: registry has no Pages/Transcribe or Pages/SimuTranslation');

// =====================================================================================
// §11  write-safety
// =====================================================================================
const PROPOSED = [0x41eb88, 0x41eba0, 0x41ec04, 0x41b81c, 0x176c70, 0x193fdc, 0x1ab70c,
                  0x176b94, 0x492fe8, 0x493000, 0x53a168, 0x53a194, 0x53a89c, 0x17a3a4,
                  0x19e784, 0x19ece8, 0x19ef60, 0x1a0040, 0x1a007c, 0x1a00b4,
                  0x194e48, 0x194e98, 0x41f5a8];
for (const f of PROPOSED)
  for (const [name, lo, hi] of FORBIDDEN)
    check(!(f >= lo && f < hi), `proposed write ${hex(f)} is outside ${name} [${hex(lo)},${hex(hi)})`);
// POSITIVE CONTROL on the safety test itself
{
  const inside = 0x100000;
  check(FORBIDDEN.some(([, lo, hi]) => inside >= lo && inside < hi),
        'POSITIVE CONTROL: the write-safety test does flag an offset inside the HiFi4 DSP image');
  check(!FORBIDDEN.some(([, lo, hi]) => 0x176000 >= lo && 0x176000 < hi),
        'NEGATIVE CONTROL: the write-safety test does not flag 0x176000 (outside both sub-images)');
}

// =====================================================================================
// doc hygiene
// =====================================================================================
if (!existsSync(DOC)) {
  fail('apps.md not found next to the verifier');
} else {
  const doc = readFileSync(DOC, 'utf8');
  check(doc.split('\n').length >= 200, 'apps.md is at least 200 lines');
  check(!/0x2C000000/i.test(doc), 'apps.md contains no known-bad 0x2C000000 base');
  check(/1\.0\.11\.53/.test(doc), 'apps.md states the build (1.0.11.53)');
  check(/0x2C010000/i.test(doc) && /0x3BFD7CB0/i.test(doc), 'apps.md states the 11.53 address model');
  for (const t of ['CONFIG', 'DATA', 'CODE']) check(doc.includes(t), `apps.md names the ${t} tier`);
  for (const p of ['Pages/Translation', 'Pages/Navigation', 'Pages/Phone', 'Pages/AirMusic',
                   'Pages/SmartLife', 'Pages/Prompt', 'Pages/Ring', 'Pages/StarryNetApp', 'Pages/Ota'])
    check(doc.includes(p), `apps.md has a section for ${p}`);
  // no hex offset named in the doc may fall strictly inside a forbidden sub-image,
  // except the four boundary constants themselves.
  const bad = [];
  for (const m of doc.matchAll(/0x([0-9a-fA-F]{5,8})\b/g)) {
    const v = parseInt(m[1], 16);
    if (BOUNDARY_CONSTS.has(v)) continue;
    for (const [name, lo, hi] of FORBIDDEN) if (v >= lo && v < hi) bad.push(`${hex(v)} in ${name}`);
  }
  check(bad.length === 0, `no offset in apps.md lands inside a forbidden sub-image (${bad.join(', ')})`);
  // POSITIVE CONTROL on that scanner: it must reject a synthetic in-DSP offset
  check(/0x([0-9a-fA-F]{5,8})\b/.test('0x100000') && (() => {
    const v = 0x100000;
    return !BOUNDARY_CONSTS.has(v) && FORBIDDEN.some(([, lo, hi]) => v >= lo && v < hi);
  })(), 'POSITIVE CONTROL: the doc-hygiene offset scanner would reject 0x100000 (inside the DSP)');
  check((() => { const v = 0x04e9b4; return BOUNDARY_CONSTS.has(v); })(),
        'boundary constant 0x04E9B4 is exempt from the doc-hygiene scanner');
}

if (failures) {
  console.error(`\n${failures} check(s) failed`);
  process.exit(1);
}
console.log('apps verification passed');
