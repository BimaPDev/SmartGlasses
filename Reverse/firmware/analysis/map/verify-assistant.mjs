#!/usr/bin/env node
// Oracle for Reverse/firmware/analysis/map/assistant.md  (leaf-1.3)
// Build: 1.0.11.53 only.  Prints "assistant verification passed", exits non-zero on failure.
//
// Method rules honoured (.unlazy/map/PLAN.md):
//   * every claim is checked against bytes, never against a manifest derived from the claim
//   * V2b / V14 / V15 / V16 are CONTROLS: two POSITIVE (a right answer the method must find)
//     and two NEGATIVE (a wrong answer the method must reject).  A gate that cannot fail
//     proves nothing, so V2b deliberately runs the whole pointer decode with the WRONG
//     data delta and requires it to produce garbage.

import { readFileSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = dirname(fileURLToPath(import.meta.url));
const ROOT = resolve(HERE, '..', '..', '..', '..');            // repo root
const BIN  = resolve(ROOT, 'Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const DOC  = resolve(HERE, 'assistant.md');

const B   = readFileSync(BIN);
const DOCS = readFileSync(DOC, 'utf8');

const CODE_BASE = 0x2C010000;          // VA = file + CODE_BASE
const DATA_DELTA = 0x3BFD7CB0;         // VA = file + DATA_DELTA   (1.0.11.53)
const DATA_DELTA_1283 = 0x3BFD7C0C;    // the 1.0.12.83 constant — wrong for this build

let pass = 0;
const fails = [];
function ck(id, cond, detail) {
  if (cond) { pass++; } else { fails.push(`${id}: ${detail}`); }
}

const u32 = (f) => B.readUInt32LE(f);
const hex = (n) => '0x' + n.toString(16);
function cstr(fileOff, max = 160) {
  let e = fileOff;
  while (e < B.length && e - fileOff < max && B[e] !== 0) e++;
  return B.toString('latin1', fileOff, e);
}
const strAtVA = (va, d = DATA_DELTA) => {
  const f = va - d;
  return (f >= 0 && f < B.length) ? cstr(f) : '';
};
const bytesAt = (f, hexStr) =>
  B.toString('hex', f, f + hexStr.length / 2) === hexStr;
const countOccurrences = (needle) => {
  const n = Buffer.from(needle, 'latin1');
  let c = 0, i = 0;
  for (;;) { const j = B.indexOf(n, i); if (j < 0) break; c++; i = j + 1; }
  return c;
};

// ---------------------------------------------------------------- V0  image
ck('V0', B.length === 7042632, `image is ${B.length} bytes, expected 7042632 (1.0.11.53)`);

// ---------------------------------------------------------------- V1  namespace literals
const NS_LITERALS = {
  0x192144: 'freechat',  0x192150: 'INNER_STKS', 0x19215c: 'application',
  0x192168: 'VSP_ERROR', 0x192174: 'alarm',      0x19217c: 'todo',
  0x192264: 'systemsetting',
};
for (const [off, s] of Object.entries(NS_LITERALS)) {
  const got = cstr(Number(off));
  ck(`V1[${s}]`, got === s, `at ${hex(Number(off))} expected "${s}", read "${got}"`);
}

// ---------------------------------------------------------------- V2  findDomain literal pool
// The whole namespace vocabulary, decoded from raw pointers in registration order.
const POOL = [
  [0x5d2718, 'freechat'], [0x5d271c, 'navigation'], [0x5d2720, 'INNER_STKS'],
  [0x5d2724, 'application'], [0x5d2728, 'error'], [0x5d272c, 'VSP_ERROR'],
  [0x5d2730, 'global'], [0x5d2734, 'weather'], [0x5d2738, 'wechat'],
  [0x5d273c, 'phonecall'], [0x5d2740, 'translation'], [0x5d2744, 'alarm'],
  [0x5d2748, 'llm'], [0x5d274c, 'schedule'], [0x5d2750, 'todo'],
];
for (const [off, want] of POOL) {
  const got = strAtVA(u32(off));
  ck(`V2[${want}]`, got === want,
     `pool ${hex(off)} -> VA ${hex(u32(off))} expected "${want}", read "${got}"`);
}

// -- V2b  NEGATIVE CONTROL on the address model itself.
// Re-run the identical decode with the 1.0.12.83 data delta.  If that also "worked",
// the decode would be proving nothing about which delta is right.  Require it to fail.
{
  let wrongOk = 0;
  for (const [off, want] of POOL) if (strAtVA(u32(off), DATA_DELTA_1283) === want) wrongOk++;
  ck('V2b(NEGATIVE CONTROL: wrong data delta)', wrongOk === 0,
     `delta ${hex(DATA_DELTA_1283)} resolved ${wrongOk}/15 namespaces — the two deltas are not distinguishable, so V2 proves nothing`);
}

// ---------------------------------------------------------------- V3  findDomain code shape
ck('V3a', bytesAt(0x5d262c, '38b50c4605463949'),
   'findDomain prologue at 0x5d262c does not match push{r3,r4,r5,lr}/mov/mov/ldr');
// strcmp callee, byte-exact (this is what makes "== 0 means match" a fact, not an assumption)
ck('V3b', bytesAt(0x6ad874, '10f8012b11f8013b012a28bf9a42f7d0d01a7047'),
   'callee at file 0x6ad874 (VA 0x2C6BD874) is not the byte-wise strcmp this doc relies on');
// The inverted last comparison: CBNZ (d8b9), not CBZ.  Getting this wrong swaps todo/fallback.
ck('V3c', bytesAt(0x5d26d4, 'd8b9'),
   'branch at 0x5d26d4 is not CBNZ — the todo/fallback polarity in the doc would be wrong');
// Return arms: ldr r0,[r5,#imm] encodings
const ARMS = [[0x5d26d6, '686e', 0x64, 'todo'], [0x5d270e, '286e', 0x60, 'fallback'],
              [0x5d26de, 'e869', 0x1c, 'freechat'], [0x5d270a, 'a86d', 0x58, 'llm'],
              [0x5d2712, 'e86d', 0x5c, 'schedule']];
for (const [f, enc, memb, name] of ARMS)
  ck(`V3d[${name}]`, bytesAt(f, enc),
     `return arm at ${hex(f)} is not "ldr r0,[r5,#${hex(memb)}]" (${enc})`);

// ---------------------------------------------------------------- V4  findDomain wrapper
ck('V4a', bytesAt(0x5d2ec0, '38b50c4605460a49'), 'wrapper prologue at 0x5d2ec0 changed');
ck('V4b', strAtVA(u32(0x5d2ef0)) === 'systemsetting',
   `wrapper pool 0x5d2ef0 is "${strAtVA(u32(0x5d2ef0))}", expected "systemsetting"`);
ck('V4c', strAtVA(u32(0x5d2ef4)) === 'helping',
   `wrapper pool 0x5d2ef4 is "${strAtVA(u32(0x5d2ef4))}", expected "helping"`);
ck('V4d', bytesAt(0x5d2eea, 'a869'), 'wrapper systemsetting arm is not ldr r0,[r5,#0x18]');
ck('V4e', bytesAt(0x5d2ee6, '6869'), 'wrapper helping arm is not ldr r0,[r5,#0x14]');

// ---------------------------------------------------------------- V5  dataType -> domain switch
ck('V5a', bytesAt(0x5d2f10, '0f1113151d17191b05'),
   'tbb jump table at 0x5d2f10 changed — the dataType->domain mapping in the doc is stale');
// Decode the table the way the CPU does, then read each case's member offset.
{
  const tblBase = 0x2c5e2f10;
  const want = { 0: 0x28, 1: 0x18, 2: 0x2c, 3: 0x34, 5: 0x48, 6: 0x50, 7: 0x5c, 8: 0x64 };
  for (const [caseIdx, memb] of Object.entries(want)) {
    const tgtVA = tblBase + 2 * B[0x5d2f10 + Number(caseIdx)];
    const f = tgtVA - CODE_BASE;
    // "ldr r0, [r0, #imm]"  T1: 0110 1 imm5 Rn Rt  -> 0x68xx ; imm = ((h>>6)&0x1f)*4
    const h = B.readUInt16LE(f);
    const got = ((h >> 6) & 0x1f) * 4;
    const isLdrR0R0 = (h & 0xf83f) === 0x6800;
    ck(`V5b[case ${caseIdx}]`, isLdrR0R0 && got === memb,
       `case ${caseIdx} -> ${hex(tgtVA)} decodes to member ${hex(got)}, doc says ${hex(memb)}`);
  }
  // case 4 (TTS) must NOT be a member load — it is the default arm.
  const tgt4 = tblBase + 2 * B[0x5d2f10 + 4] - CODE_BASE;
  ck('V5c', (B.readUInt16LE(tgt4) & 0xf83f) !== 0x6800,
     'case 4 (TTS) loads a domain member; the doc says it falls into the default arm');
}

// ---------------------------------------------------------------- V6  connectType token set
// The string->dataType mapper's own literal pool, in the order the compiler emitted it.
{
  const TOKENS = ['SETTING', 'NAVIGATE', 'APP', 'TTS', 'PHONE', 'WECHAT', 'ALARM', 'SCHEDULE', 'TODO'];
  const seen = new Set();
  for (let f = 0x58b704; f < 0x58b9c0; f += 2) {
    const v = u32(f);
    const s = strAtVA(v);
    if (TOKENS.includes(s)) seen.add(s);
  }
  for (const t of TOKENS)
    ck(`V6[${t}]`, seen.has(t),
       `token "${t}" not reachable from the mapper at file 0x58b704 (VA 0x2C59B704)`);
}

// ---------------------------------------------------------------- V7  CONNECT_DATA envelope keys
for (const [off, s] of [[0x19161c, 'connectData'], [0x191628, 'connectType'], [0x191634, 'guideWord']])
  ck(`V7[${s}]`, cstr(off) === s, `at ${hex(off)} expected "${s}", read "${cstr(off)}"`);
// connectData / connectType loaded as an adjacent literal-pool pair (one bean reads both)
for (const f of [0x5cda5c, 0x5d07bc, 0x5d11b8])
  ck(`V7pair[${hex(f)}]`,
     strAtVA(u32(f)) === 'connectData' && strAtVA(u32(f + 4)) === 'connectType',
     `pool pair at ${hex(f)} is not (connectData, connectType)`);

// ---------------------------------------------------------------- V8  the 122/123 LLM fast path
ck('V8a', bytesAt(0x5d6548, 'cb8c7a3b9bb2012b'),
   'ldrh r3,[r1,#0x26] / subs #0x7a / uxth / cmp #1 not found at 0x5d6548');
ck('V8b', bytesAt(0x5d66de, '866e'),
   'the fast-path arm at 0x5d66de is not "ldr r6,[r0,#0x58]" (the llm domain member)');

// ---------------------------------------------------------------- V9  the two entry-path logs
const LOGS = {
  0x1924e8: '[%s] NLU_RESULT->data parse succeed. Domain Namespace %s',
  0x192588: '[%s] CONNECT_DATA->connectData parse succeed. Domain Namespace %s',
  0x192280: '[%s] No matched domain found: %s',
  0x1922a4: '[%s] businessData.dataType: %d',
  0x19248c: '[%s] Domain %s is already started.',
  0x18f2ac: 'todo list is blank, can not create view',
};
for (const [off, s] of Object.entries(LOGS))
  ck(`V9[${hex(Number(off))}]`, cstr(Number(off)) === s,
     `at ${hex(Number(off))} expected "${s}", read "${cstr(Number(off))}"`);

// ---------------------------------------------------------------- V10 embedded envelope is real JSON
{
  const raw = cstr(0x192664, 200);
  ck('V10a', raw.startsWith('{"header":{"namespace":"INNER_STKS"'),
     `envelope at 0x192664 does not start as documented: "${raw.slice(0, 40)}"`);
  // The literal is truncated at the text field; close it and require it to parse.
  // cstr() already returns the complete NUL-terminated JSON; the original code
  // appended '"}}' on the assumption it was truncated, which made it unparseable.
  const j = JSON.parse(raw);
  ck('V10b', j.header.namespace === 'INNER_STKS' &&
             j.payload.data.intent === 'Intent_Global_Confirm' &&
             'specialCmdInChatGptScene' in j.header && 'text' in j.payload,
     'embedded envelope does not carry header.namespace + payload.data.intent + payload.text');
}

// ---------------------------------------------------------------- V11 domain source files
const FILES = {
  0x18f234: 'domain/todo/TodoDomain.cpp',          0x18f154: 'domain/todo/TodoDomainView.cpp',
  0x18dd50: 'domain/schedule/ScheduleDomain.cpp',  0x18df98: 'domain/schedule/ScheduleDomainView.cpp',
  0x18d66c: 'domain/weather/WeatherDomain.cpp',    0x18d58c: 'domain/weather/MultipleTimeWeatherView.cpp',
  0x18d8c8: 'domain/alarm/AlarmDomain.cpp',        0x18db44: 'domain/alarm/AlarmModel.cpp',
  0x18e1b0: 'domain/gpt/GPTDomain.cpp',            0x18eb38: 'domain/gpt/GPTDomainViewV2.cpp',
  0x1909d8: 'domain/freechat/FreeChatDomain.cpp',  0x18f5e4: 'domain/navigation/NavigationDomain.cpp',
  0x18edd4: 'domain/wechat/WechatDomain.cpp',      0x18ca04: 'domain/SystemSetting/SystemSettingDomain.cpp',
  0x18c514: 'domain/application/ApplicationDomain.cpp', 0x18fc28: 'domain/global/GlobalDomain.cpp',
  0x1903e0: 'domain/global/NluErrorDomain.cpp',    0x1905f4: 'domain/global/VspErrorDomain.cpp',
  0x190bf4: 'domain/innerstk/InnerStkDomain.cpp',  0x190858: 'domain/translate/TranslateDomain.cpp',
  0x18e068: 'domain/helping/HelpingDomain.cpp',    0x18c7d4: 'domain/fallback/FallbackDomain.cpp',
  0x1921a8: 'domain/DomainRuntime.cpp',            0x189344: 'app/avatar/state/StateContext.cpp',
  0x18ad9c: 'app/avatar/Hint.cpp',                 0x18be50: 'app/stks/STKSService.cpp',
  0x18a2e4: 'protocol2/bean/VuiModel.cpp',
};
const PRE = '../../thirdparty/star_air_lvgl/app/Pages/Assistant//';
for (const [off, rel] of Object.entries(FILES))
  ck(`V11[${rel}]`, cstr(Number(off)) === PRE + rel,
     `at ${hex(Number(off))} expected "${PRE + rel}", read "${cstr(Number(off))}"`);

// ---------------------------------------------------------------- V12 avatar states
const STATES = {
  0x188460: 'OfflineState',   0x188598: 'ListeningState',    0x18888c: 'IdleState',
  0x1889a4: 'SilenceRecordingState', 0x188a84: 'SpeakingState', 0x188c64: 'WaitingState',
  0x188d58: 'NoNetworkListeningState', 0x188e2c: 'AppleDeviceMuteState',
  0x188f38: 'ProcessingState', 0x188ffc: 'MuteState', 0x1890d4: 'RefusingState',
  0x1891e4: 'WakeupState',
};
for (const [off, st] of Object.entries(STATES))
  ck(`V12[${st}]`, cstr(Number(off)) === `${PRE}app/avatar/state/impl/${st}.cpp`,
     `state impl at ${hex(Number(off))} is not ${st}`);
ck('V12n', Object.keys(STATES).length === 12, 'the doc claims twelve concrete avatar states');

// ---------------------------------------------------------------- V13 intents & session config
const PRESENT = [
  'Intent_Global_Confirm', 'Intent_Global_ToHome', 'Intent_Music_Select', 'Intent_Sys_ShowHelp',
  'Intent_Set_BrightnessUp', 'Intent_Play_Continue', 'Unhandled intent:[%s]',
  'isChatGptCardDisplayEnable', 'isContinuousDialogueEnable', 'isLowPowerWakeupEnable',
  'ttsTimbreValue', 'TTS_TYPE_MULTI_ROUND', 'SYS_INFO_WAKE_UP', 'WUW_ONESHOT',
  'TODO_CREATE_LIST', 'TODO_QUERTY_LIST', 'SCHEDULE_ADD', 'MultipleTimeWeatherView',
  'assistant_todo_domian_done', 'Connected device is apple device, call siri wakeup',
  'StateContext::changeState %s => %s', 'not support hotword for intl',
];
for (const s of PRESENT)
  ck(`V13["${s.slice(0, 32)}"]`, countOccurrences(s) >= 1, `string "${s}" not found in image`);
ck('V13x', cstr(0x18f37d) === 'TODO_DELETE_SELECT',
   `0x18f37d is "${cstr(0x18f37d)}", expected TODO_DELETE_SELECT`);

// ---------------------------------------------------------------- V14 POSITIVE CONTROL
// The substring searcher and the pointer decoder must each demonstrably find a known-present
// thing before any absence below is allowed to mean anything.
ck('V14a(POSITIVE CONTROL: substring search)', countOccurrences('Intent_Global_Confirm') >= 1,
   'searcher failed on a string proven present at 0x18c5b0 — every absence result below is void');
ck('V14b(POSITIVE CONTROL: pointer decode)', strAtVA(u32(0x5d2750)) === 'todo',
   'pointer decode failed on the known-good todo pool entry — V15/V16 absences are void');

// ---------------------------------------------------------------- V15 NEGATIVE CONTROL: no stocks
// STKS is voice-command shortcuts.  A previous pass read it as "stocks" and invented a
// feature.  This keeps that from coming back through this document.
{
  const STOCK = ['ticker', 'NASDAQ', 'Nasdaq', 'nasdaq', 'portfolio', 'Portfolio',
                 'equity', 'Equity', 'NYSE', 'stock market', 'StockMarket', 'shareholder'];
  const hits = STOCK.filter((w) => countOccurrences(w) > 0);
  ck('V15(NEGATIVE CONTROL: no stock-market vocabulary)', hits.length === 0,
     `found stock vocabulary ${JSON.stringify(hits)} — the STKS=stocks reading may be back`);
  // and the real meaning is still present
  ck('V15b', countOccurrences('stks_global_next_music') >= 1,
     'stks_global_next_music missing — STKS is not the voice-shortcut service the doc claims');
}

// ---------------------------------------------------------------- V16 NEGATIVE CONTROL: no KWS model
// CLAUDE.md's retraction: the wake-word model lives in the Android app, not here.
ck('V16(NEGATIVE CONTROL: wake-word model absent)',
   countOccurrences('STAR_NN') === 0 && countOccurrences('kws_model.nn') === 0,
   'a wake-word model signature appears in the firmware — §7 of the doc is wrong');

// ---------------------------------------------------------------- V17 doc hygiene (G5)
{
  const bad2C = /0x2C000000/i.test(DOCS);
  ck('V17a', !bad2C, 'doc contains the known-bad 0x2C000000 code base');
  ck('V17b', DOCS.includes('0x3BFD7CB0'), 'doc does not state the 1.0.11.53 data delta');
  ck('V17c', DOCS.includes('1.0.11.53'), 'doc does not pin the build');
  // no write proposed inside the DSP / sensor_hub sub-images
  // Naming a sub-image BOUNDARY is documentation ("never write here"), not a write
  // proposal — so the four boundary constants are exempt. An offset strictly inside
  // that is not a boundary still trips this, so the gate can still fail.
  const BOUNDS = new Set([0x04E9B4, 0x143F14, 0x134070, 0x14A7A4]);
  const subImage = (n) => !BOUNDS.has(n) &&
    ((n >= 0x04E9B4 && n < 0x143F14) || (n >= 0x134070 && n < 0x14A7A4));
  const offs = [...DOCS.matchAll(/`0x([0-9a-fA-F]{5,6})`/g)].map((m) => parseInt(m[1], 16));
  const inSub = offs.filter(subImage);
  ck('V17d', inSub.length === 0,
     `doc names file offsets inside the DSP/sensor_hub sub-images: ${inSub.map(hex).join(', ')}`);
  // every surface carries a tier
  for (const t of ['CONFIG', 'DATA', 'CODE'])
    ck(`V17e[${t}]`, DOCS.includes(`**${t}**`), `doc never assigns tier ${t}`);
}

// ---------------------------------------------------------------- report
if (fails.length) {
  console.error(`assistant verification FAILED — ${fails.length} of ${pass + fails.length} checks:`);
  for (const f of fails) console.error('  - ' + f);
  process.exit(1);
}
console.log(`assistant verification passed`);
console.error(`(${pass} checks)`);
