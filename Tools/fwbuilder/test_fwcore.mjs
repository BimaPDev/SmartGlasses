#!/usr/bin/env node
/* Gate harness for fwcore.js. Exercised against ALL THREE real firmware images —
 * a parser that only works on one build is a failure. */
import { readFileSync, existsSync } from 'node:fs';
import * as fw from './fwcore.js';

const FW = {
  '1.0.12.83': 'Reverse/firmware/x_1.0.12.83/platform_tester.bin',
  '1.0.11.53': 'Reverse/firmware/x_1.0.11.53/platform_tester.bin',
  '1.0.7.83':  'Reverse/firmware/x_1.0.7.83/platform_tester.bin',
};
const load = (p) => new Uint8Array(readFileSync(p));
const which = process.argv[2] || 'all';
let fail = 0;
const ok = (g, cond, msg) => { console.log(`${g} ${cond ? 'ok' : 'FAIL'} — ${msg}`); if (!cond) fail++; };

// expected per-build data bases, established by the audit
const EXPECT_BASE = { '1.0.12.83': 0x3BFD7C0C, '1.0.11.53': 0x3BFD7CB0, '1.0.7.83': 0x3BFD7D04 };

function run(g) {
  if (g === 'g1') {
    let good = 0, notes = [];
    for (const [v, p] of Object.entries(FW)) {
      if (!existsSync(p)) { notes.push(`${v}: MISSING`); continue; }
      const d = load(p);
      const { base, score } = fw.deriveDataBase(d);
      const id = fw.readIdentity(d);
      const baseOk = base === EXPECT_BASE[v];
      const verOk = !!id.version && id.version.includes(v);
      if (baseOk && verOk && id.codeBase === fw.CODE_BASE) good++;
      notes.push(`${v}: base 0x${base.toString(16)}${baseOk ? '' : ' WRONG'} (score ${score}), ver "${id.version}"${verOk ? '' : ' WRONG'}`);
    }
    ok('G1', good === 3, notes.join(' | '));
  }

  if (g === 'g2') {
    const d = load(FW['1.0.12.83']);
    const { base } = fw.deriveDataBase(d);
    const faces = fw.findFaces(d, base);
    const imgs = fw.findImages(d, base);
    const big = faces.filter(f => f.glyphs > 1000);
    // 386 = INDEXED_4 only. The audit's "387" counted one ALPHA_4 image too; fwcore
    // deliberately scans IDX4 (cf=9), which is every image the UI actually uses.
    ok('G2', faces.length === 8 && imgs.length === 386 && big.length === 3 && big.every(f => f.glyphs === 6032),
       `12.83: ${faces.length} faces (expect 8), ${imgs.length} IDX4 images (expect 386), ` +
       `${big.length} full faces with glyph counts [${big.map(f => f.glyphs)}]`);
  }

  if (g === 'g3') {
    const want = { '1.0.12.83': 0x3f8ff4, '1.0.11.53': 0x413490, '1.0.7.83': 0x3b973c };
    let good = 0, notes = [];
    for (const [v, p] of Object.entries(FW)) {
      const d = load(p);
      const { base } = fw.deriveDataBase(d);
      const imgs = fw.findImages(d, base);
      const named = fw.findResourceNames(d, base, imgs);
      const wm = imgs.find(i => i.name === 'power_off');
      const hit = wm && wm.data === want[v] && wm.w === 144 && wm.h === 36;
      if (hit) good++;
      notes.push(`${v}: ${named} named, power_off ${wm ? `${wm.w}x${wm.h}@0x${wm.data.toString(16)}` : 'NOT FOUND'}${hit ? '' : ' MISMATCH'}`);
    }
    ok('G3', good === 3, notes.join(' | '));
  }

  if (g === 'g4') {
    const d = load(FW['1.0.11.53']);            // the device actually in hand
    const before = d.length;
    const { base } = fw.deriveDataBase(d);
    const imgs = fw.findImages(d, base);
    fw.findResourceNames(d, base, imgs);
    const wm = imgs.find(i => i.name === 'power_off');
    // patch the image to a known ramp, read it back
    const gray = new Uint8Array(wm.w * wm.h);
    for (let i = 0; i < gray.length; i++) gray[i] = (i % 16) * 17;
    fw.patchImage(d, wm, gray);
    const back = fw.decodeImage(d, wm);
    let imgOk = true;
    for (let i = 0; i < gray.length; i++) if (back[i] !== (i % 16) * 17) { imgOk = false; break; }
    // patch a glyph, read it back
    const faces = fw.findFaces(d, base);
    const face = faces.filter(f => f.glyphs > 1000 && f.bpp === 4)[0];
    const gid = fw.gidForCp(d, base, face, 0xFDFD);
    const gw = 20, gh = 20, art = new Uint8Array(gw * gh).fill(255);
    const res = fw.patchGlyph(d, face, gid, art, gw, gh);
    const g2 = fw.decodeGlyph(d, face, gid);
    const glyphOk = g2.boxW === gw && g2.boxH === gh && g2.advW === (gw + 1) * 16 &&
                    g2.pixels[0] === 255;
    ok('G4', imgOk && glyphOk && d.length === before,
       `image round-trip ${imgOk}, glyph round-trip ${glyphOk} (box ${g2.boxW}x${g2.boxH}, ` +
       `adv ${g2.advW / 16}px, ${res.bytes}/${res.budget} B), length unchanged ${d.length === before}`);
  }

  if (g === 'g5') {
    // NEGATIVE CONTROL: a validator that cannot fail proves nothing.
    const good = load(FW['1.0.12.83']);
    const vGood = fw.validate(good);
    const bad = load(FW['1.0.12.83']);
    for (let i = bad.length - 8; i < bad.length; i++) bad[i] = 0;   // destroy the trailer
    const vBad = fw.validate(bad);
    const trailerCheck = vBad.checks.find(c => c.name.startsWith('image trailer'));
    ok('G5', vGood.ok && !vBad.ok && trailerCheck && !trailerCheck.pass && trailerCheck.where,
       `pristine passes (${vGood.checks.filter(c => c.pass).length}/${vGood.checks.length}); ` +
       `corrupted fails at "${trailerCheck?.name}" where=${trailerCheck?.where} ` +
       `(${vBad.checks.filter(c => !c.pass).length} checks failed)`);
  }

  if (g === 'g6') {
    const p = 'Tools/fwbuilder/builder.html';
    if (!existsSync(p)) { ok('G6', false, 'builder.html not found'); return; }
    const t = readFileSync(p, 'utf8');
    const noRemote = !/src\s*=\s*["']https?:/i.test(t) && !/fetch\(\s*["']https?:/i.test(t);
    const embeds = t.includes('deriveDataBase') && t.includes('findImages') && t.includes('patchGlyph');
    ok('G6', noRemote && embeds,
       `self-contained (no remote script/fetch): ${noRemote}; embeds fwcore: ${embeds}; ${(t.length / 1024).toFixed(0)} KB`);
  }
  if (g === 'g7') {
    const d = load(FW['1.0.11.53']);
    const before = d.length;
    const strs = fw.findStrings(d, 6, 120);
    // the Aicy prompt exists in 11.53 — the user's original question
    const aicy = strs.find(s => s.text.includes("Hey Aicy"));
    let refused = false;
    try { fw.patchString(d, aicy.off, aicy.len, 'X'.repeat(aicy.len + 1)); }
    catch { refused = true; }
    const r = fw.patchString(d, aicy.off, aicy.len, "You can say 'Hey Buddy'");
    const readBack = fw.cstr(d, aicy.off, 120);
    ok('G7', strs.length > 10000 && aicy && refused && readBack === "You can say 'Hey Buddy'" && d.length === before,
       `${strs.length.toLocaleString()} strings; found Aicy prompt @0x${aicy.off.toString(16)} (${aicy.len} ch); ` +
       `over-long refused=${refused}; wrote "${readBack}" (${r.wrote}/${r.slot}); length unchanged`);
  }

  if (g === 'g8') {
    // POSITIVE CONTROL first: the detector must reproduce the audit's 12.83 figures
    // exactly (18 clips / 204,997 B). Only then is a different count on another build
    // evidence about that build rather than about the detector.
    const c83 = fw.findAudio(load(FW['1.0.12.83']));
    const tot83 = c83.reduce((a, x) => a + x.size, 0);
    const controlOk = c83.length === 18 && tot83 === 204997;

    const d = load(FW['1.0.11.53']);
    const before = d.length;
    const clips = fw.findAudio(d);
    let refused = false;
    try { fw.patchAudio(d, clips[0], new Uint8Array(clips[0].size + 1)); } catch { refused = true; }
    const rep = new Uint8Array(64); rep[0] = 0xFF; rep[1] = 0xF1;
    const r = fw.patchAudio(d, clips[0], rep);
    ok('G8', controlOk && clips.length >= 8 && refused && d[clips[0].off] === 0xFF && d.length === before,
       `CONTROL 12.83 = ${c83.length} clips / ${tot83.toLocaleString()} B (expect 18 / 204,997) -> ${controlOk}; ` +
       `11.53 = ${clips.length} clips, first @0x${clips[0].off.toString(16)} ` +
       `(${clips[0].size} B, ${clips[0].frames} frames, ${clips[0].rate} Hz); ` +
       `over-long refused=${refused}; wrote ${r.wrote}/${r.slot}; length unchanged`);
  }

  if (g === 'g9') {
    const d = load(FW['1.0.11.53']);
    const snap = fw.snapshot(d);
    const { base } = fw.deriveDataBase(d);
    const faces = fw.findFaces(d, base);
    // address a NORMAL glyph by character — not an unused slot
    const hits = fw.glyphByChar(d, base, faces, 'A');
    const h = hits.find(x => x.face.bpp === 4 && x.face.glyphs > 1000);
    const origDsc = { ...h.dsc };
    const gw = 8, gh = 8;
    fw.patchGlyph(d, h.face, h.gid, new Uint8Array(gw * gh).fill(255), gw, gh);
    const edited = fw.glyphDsc(d, h.face, h.gid);
    // revert the descriptor + bitmap from the snapshot
    fw.revertRange(d, snap, h.face.dsc + h.gid * 16, 16);
    fw.revertRange(d, snap, h.face.bitmap + origDsc.bitmapIndex, h.budget);
    const restored = fw.glyphDsc(d, h.face, h.gid);
    let identical = true;
    for (let i = 0; i < d.length; i++) if (d[i] !== snap[i]) { identical = false; break; }
    ok('G9', hits.length >= 3 && edited.boxW === gw && restored.boxW === origDsc.boxW && identical,
       `'A' found in ${hits.length} faces; edited box ${origDsc.boxW}x${origDsc.boxH} -> ${edited.boxW}x${edited.boxH}; ` +
       `reverted to ${restored.boxW}x${restored.boxH}; buffer byte-identical to snapshot: ${identical}`);
  }
}

if (which === 'all') ['g1','g2','g3','g4','g5','g6','g7','g8','g9'].forEach(run); else run(which);
if (fail) { console.log(`\n${fail} gate(s) unmet`); process.exit(1); }
console.log('\nfw-builder gates passed');
