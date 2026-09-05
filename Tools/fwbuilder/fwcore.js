/* fwcore.js — MYVU / Star Air firmware parsing + patching core.
 * No DOM. Runs under node and in the browser.
 *
 * Address model (established by the 2026-09-03 audit):
 *   code VA = file + 0x2C010000        (NOT 0x2C000000)
 *   data    : file = VA - dataBase, where dataBase = 0x3C000000 - <build's PSRAM copy offset>
 * The data base DIFFERS per build and must be derived, never hardcoded.
 */

export const CODE_BASE = 0x2C010000;
const TRAILER_MAGIC = 0xBE57341D;

const u32 = (d, o) => d[o] | (d[o + 1] << 8) | (d[o + 2] << 16) | (d[o + 3] << 24) >>> 0;
const rd32 = (d, o) => (u32(d, o) >>> 0);
const rd16 = (d, o) => d[o] | (d[o + 1] << 8);
const rd16s = (d, o) => { const v = rd16(d, o); return v > 0x7fff ? v - 0x10000 : v; };

export function cstr(d, o, max = 400) {
  let e = o; while (e < d.length && d[e] && e - o < max) e++;
  let s = ''; for (let i = o; i < e; i++) s += String.fromCharCode(d[i]);
  return s;
}

/* ---------- image-descriptor primitives ---------- */
const imgHdr = (h) => ({ cf: h & 0x1F, az: (h >> 5) & 7, w: (h >> 10) & 0x7FF, h: (h >> 21) & 0x7FF });
const idx4Size = (w, h) => 64 + Math.ceil(w / 2) * h;

function paletteOk(d, f) {
  if (f < 0 || f + 64 > d.length) return false;
  const a = [], col = new Set();
  for (let i = 0; i < 64; i += 4) { a.push(d[f + i + 3]); if (i) col.add(`${d[f+i]},${d[f+i+1]},${d[f+i+2]}`); }
  if (a[0] !== 0 || a[15] < 200) return false;
  for (let i = 1; i < 16; i++) if (a[i] < a[i - 1]) return false;
  return col.size === 1;
}

/* ---------- 1. data base, derived semantically ---------- */
export function deriveDataBase(d) {
  const cands = new Map();
  for (let o = 0; o + 4 <= Math.min(d.length, 0x4000); o += 1) {
    if (rd32(d, o) !== 0x3C000000) continue;
    for (let k = -16; k < 20; k += 4) {
      const p = o + k; if (p < 0 || p + 4 > d.length) continue;
      const v = rd32(d, p);
      if (v >= CODE_BASE && v < CODE_BASE + d.length) {
        const b = (0x3C000000 - (v - CODE_BASE)) >>> 0;
        cands.set(b, (cands.get(b) || 0));
      }
    }
  }
  let best = { base: 0x3BFD7C0C, score: -1 };
  for (const base of cands.keys()) {
    let n = 0;
    for (let o = 0; o + 12 <= d.length; o += 4) {
      const h = rd32(d, o), i = imgHdr(h);
      if (i.cf !== 9 || i.az) continue;
      if (i.w < 4 || i.w > 1024 || i.h < 4 || i.h > 1024) continue;
      if (rd32(d, o + 4) !== idx4Size(i.w, i.h)) continue;
      if (paletteOk(d, (rd32(d, o + 8) - base) | 0)) n++;
    }
    if (n > best.score) best = { base, score: n };
  }
  return best;
}

/* ---------- 2. build identity ---------- */
export function readIdentity(d) {
  const out = { codeBase: null, trailerAt: null, buildInfo: null, version: null, model: null };
  for (let o = 0; o + 8 <= d.length; o += 4) {
    if (rd32(d, o) !== TRAILER_MAGIC) continue;
    if (o + 8 === d.length) { out.trailerAt = o; out.codeBase = rd32(d, o + 4); }
  }
  const sp = rd32(d, 0x0C);
  if (out.codeBase != null) {
    const off = sp - out.codeBase;
    if (off > 0 && off < d.length) {
      out.buildInfo = cstr(d, off, 320);
      const v = out.buildInfo.match(/SW_VER=([^\n]+)/); if (v) out.version = v[1].trim();
      const m = out.buildInfo.match(/XJXR_DEVICE_MODEL=([^\n]+)/); if (m) out.model = m[1].trim();
    }
  }
  return out;
}

/* ---------- 3. fonts ---------- */
export function findFaces(d, base) {
  const out = [];
  for (let o = 0; o + 32 <= d.length; o += 4) {
    const w = [3, 4, 5, 7].map(i => rd32(d, o + i * 4));
    const [bmpP, dscP, cmP, packedW] = w;
    if (![bmpP, dscP, cmP].every(v => v >= 0x3C000000 && v < 0x3C500000)) continue;
    const packed = packedW >>> 16;
    const cmaps = packed & 0x1FF, bpp = (packed >> 9) & 0xF, fmt = (packed >> 14) & 3;
    if (fmt !== 0 || ![1, 2, 4, 8].includes(bpp) || cmaps < 1 || cmaps > 64) continue;
    const bitmap = bmpP - base, dsc = dscP - base, cm = cmP - base;
    if (![bitmap, dsc, cm].every(x => x >= 0 && x < d.length)) continue;
    const rs = rd32(d, cm), rl = rd16(d, cm + 4);
    if (!rl || rl > 0x3000 || rs > 0x30000) continue;
    let glyphs = 0, ranges = [];
    for (let i = 0; i < cmaps; i++) {
      const b = cm + i * 20;
      const r = { start: rd32(d, b), len: rd16(d, b + 4), gidStart: rd16(d, b + 6),
                  ulist: rd32(d, b + 8), listLen: rd16(d, b + 16), type: rd16(d, b + 18) & 0xFF };
      ranges.push(r);
      glyphs = Math.max(glyphs, r.gidStart + ([1, 3].includes(r.type) ? r.listLen : r.len));
    }
    out.push({ struct: o, bitmap, dsc, cmaps: cm, nCmaps: cmaps, bpp, glyphs, ranges });
  }
  return out;
}

export const glyphDsc = (d, face, gid) => ({
  bitmapIndex: rd32(d, face.dsc + gid * 16),
  advW: rd32(d, face.dsc + gid * 16 + 4),
  boxW: rd16(d, face.dsc + gid * 16 + 8),
  boxH: rd16(d, face.dsc + gid * 16 + 10),
  ofsX: rd16s(d, face.dsc + gid * 16 + 12),
  ofsY: rd16s(d, face.dsc + gid * 16 + 14),
});

export function gidForCp(d, base, face, cp) {
  for (const r of face.ranges) {
    if (cp < r.start || cp >= r.start + r.len) continue;
    if ([1, 3].includes(r.type)) {
      if (!r.ulist) return 0;
      const off = cp - r.start, b = r.ulist - base;
      for (let k = 0; k < r.listLen; k++) if (rd16(d, b + k * 2) === off) return r.gidStart + k;
      return 0;
    }
    return r.gidStart + (cp - r.start);
  }
  return 0;
}

export function glyphBudget(d, face, gid) {
  if (gid + 1 >= face.glyphs) return null;
  const a = glyphDsc(d, face, gid).bitmapIndex, b = glyphDsc(d, face, gid + 1).bitmapIndex;
  return b >= a ? b - a : null;
}

export function decodeGlyph(d, face, gid) {
  const g = glyphDsc(d, face, gid);
  if (!g.boxW || !g.boxH) return { ...g, pixels: null };
  const n = Math.ceil(g.boxW * g.boxH * face.bpp / 8);
  const px = new Uint8Array(g.boxW * g.boxH);
  for (let i = 0; i < px.length; i++) {
    const b = d[face.bitmap + g.bitmapIndex + (face.bpp === 4 ? (i >> 1) : (i >> 3))];
    px[i] = face.bpp === 4 ? (((i & 1) === 0 ? (b >> 4) : (b & 15)) * 17)
                           : (((b >> (7 - (i & 7))) & 1) * 255);
  }
  return { ...g, pixels: px, bytes: n };
}

/* ---------- 4. images + names ---------- */
export function findImages(d, base) {
  const out = [];
  for (let o = 0; o + 12 <= d.length; o += 4) {
    const h = rd32(d, o), i = imgHdr(h);
    if (i.cf !== 9 || i.az) continue;
    if (i.w < 4 || i.w > 1024 || i.h < 4 || i.h > 1024) continue;
    const size = rd32(d, o + 4);
    if (size !== idx4Size(i.w, i.h)) continue;
    const dp = rd32(d, o + 8), f = dp - base;
    if (f < 0 || f + size > d.length) continue;
    out.push({ dsc: o, data: f, w: i.w, h: i.h, size, name: null });
  }
  return out;
}

export function findResourceNames(d, base, images) {
  const byData = new Map(images.map(im => [im.dsc, im]));
  let named = 0;
  for (let o = 0; o + 8 <= d.length; o += 4) {
    const a = rd32(d, o), b = rd32(d, o + 4);
    if (a < 0x3C000000 || a >= 0x3C500000 || b < 0x3C000000 || b >= 0x3C500000) continue;
    const im = byData.get(a - base); if (!im || im.name) continue;
    const s = cstr(d, b - base, 64);
    if (!/^[A-Za-z][A-Za-z0-9_]{2,60}$/.test(s)) continue;
    im.name = s; named++;
  }
  return named;
}

export function decodeImage(d, im) {
  const stride = Math.ceil(im.w / 2), px = new Uint8Array(im.w * im.h);
  for (let y = 0; y < im.h; y++)
    for (let x = 0; x < im.w; x++) {
      const b = d[im.data + 64 + y * stride + (x >> 1)];
      px[y * im.w + x] = ((x & 1) === 0 ? (b >> 4) : (b & 15)) * 17;
    }
  return px;
}

/* ---------- 5. patching ---------- */
export function patchImage(d, im, gray /* Uint8Array w*h, 0..255 */) {
  const stride = Math.ceil(im.w / 2);
  for (let y = 0; y < im.h; y++) {
    for (let x = 0; x < im.w; x += 2) {
      const hi = Math.min(15, gray[y * im.w + x] >> 4);
      const lo = x + 1 < im.w ? Math.min(15, gray[y * im.w + x + 1] >> 4) : 0;
      d[im.data + 64 + y * stride + (x >> 1)] = (hi << 4) | lo;
    }
  }
  return { changed: im.size - 64, at: im.data + 64 };
}

export function patchGlyph(d, face, gid, gray, gw, gh) {
  const budget = glyphBudget(d, face, gid);
  const need = Math.ceil(gw * gh * face.bpp / 8);
  if (budget == null) throw new Error(`glyph ${gid}: no budget`);
  if (need > budget) throw new Error(`artwork ${need} B exceeds slot budget ${budget} B`);
  const g = glyphDsc(d, face, gid), off = face.bitmap + g.bitmapIndex;
  if (face.bpp === 4) {
    for (let i = 0; i < gw * gh; i += 2) {
      const hi = Math.min(15, gray[i] >> 4), lo = i + 1 < gw * gh ? Math.min(15, gray[i + 1] >> 4) : 0;
      d[off + (i >> 1)] = (hi << 4) | lo;
    }
  } else {
    for (let i = 0; i < gw * gh; i += 8) {
      let b = 0;
      for (let j = 0; j < 8; j++) if (i + j < gw * gh && gray[i + j] >= 128) b |= 1 << (7 - j);
      d[off + (i >> 3)] = b;
    }
  }
  for (let i = need; i < budget; i++) d[off + i] = 0;
  const dp = face.dsc + gid * 16, adv = (gw + 1) * 16;
  d[dp + 4] = adv & 255; d[dp + 5] = (adv >> 8) & 255; d[dp + 6] = 0; d[dp + 7] = 0;
  d[dp + 8] = gw & 255; d[dp + 9] = (gw >> 8) & 255;
  d[dp + 10] = gh & 255; d[dp + 11] = (gh >> 8) & 255;
  d[dp + 12] = 0; d[dp + 13] = 0; d[dp + 14] = 0; d[dp + 15] = 0;
  return { at: off, bytes: need, budget, descriptorAt: dp };
}

/* ---------- 6. validation ---------- */
export function validate(d) {
  const checks = [];
  const add = (name, pass, detail, where) => checks.push({ name, pass, detail, where });

  add('file size plausible', d.length > 4e6 && d.length < 1.2e7,
      `${d.length.toLocaleString()} bytes`, '0x0');

  const id = readIdentity(d);
  add('image trailer present (magic 0xBE57341D at EOF-8)', id.trailerAt !== null,
      id.trailerAt !== null ? `@0x${id.trailerAt.toString(16)}` : 'not found — not a Star Air app image?',
      id.trailerAt !== null ? '0x' + id.trailerAt.toString(16) : '0x' + (d.length - 8).toString(16));
  add('code base declared', id.codeBase === CODE_BASE,
      id.codeBase ? `0x${id.codeBase.toString(16)}` : 'none',
      '0x' + ((d.length - 4) >>> 0).toString(16));
  add('build info readable via header self-pointer', !!id.version,
      id.version || 'header +0x0C did not resolve into the file', '0xc');

  const { base, score } = deriveDataBase(d);
  add('data base derived semantically', score > 100,
      `0x${base.toString(16)} — ${score} descriptors resolve to a valid green-ramp palette`, '0x430');

  const faces = findFaces(d, base);
  const big = faces.filter(f => f.glyphs > 1000);
  add('font faces found', faces.length >= 3,
      `${faces.length} faces (${big.length} full-size, ${faces.length - big.length} small/digit)`,
      faces[0] ? '0x' + faces[0].struct.toString(16) : '-');
  add('full faces carry the expected glyph count', big.every(f => f.glyphs === 6032),
      big.map(f => f.glyphs).join(', ') || 'none',
      big[0] ? '0x' + big[0].dsc.toString(16) : '-');

  const images = findImages(d, base);
  add('IDX4 images found', images.length > 100, `${images.length} descriptors`,
      images[0] ? '0x' + images[0].dsc.toString(16) : '-');

  const named = findResourceNames(d, base, images);
  add('resource name table resolves', named > 100, `${named} images named`, '-');

  const wordmark = images.find(im => im.name === 'power_off');
  add('MYVU wordmark located by name', !!wordmark,
      wordmark ? `${wordmark.w}x${wordmark.h} @0x${wordmark.data.toString(16)}` : 'no image named power_off',
      wordmark ? '0x' + wordmark.dsc.toString(16) : '-');

  return { ok: checks.every(c => c.pass), checks, base, id, faces, images, named };
}

/* ---------- 7. strings ---------- */
export function findStrings(d, min = 4, max = 200) {
  const out = [];
  let i = 0;
  while (i < d.length) {
    if (d[i] >= 32 && d[i] < 127) {
      const s = i;
      while (i < d.length && d[i] >= 32 && d[i] < 127) i++;
      const len = i - s;
      if (len >= min && len <= max && d[i] === 0) out.push({ off: s, len, text: cstr(d, s, max) });
    } else i++;
  }
  return out;
}

/** In-place string write. Never grows: a longer replacement would run into the next
 *  string. Shorter is NUL-padded to the original length. */
export function patchString(d, off, oldLen, text) {
  const bytes = [];
  for (const ch of text) { const c = ch.codePointAt(0); if (c > 126 || c < 32) throw new Error(`non-ASCII "${ch}" not supported`); bytes.push(c); }
  if (bytes.length > oldLen) throw new Error(`"${text}" is ${bytes.length} chars; slot holds ${oldLen}`);
  for (let i = 0; i < oldLen; i++) d[off + i] = i < bytes.length ? bytes[i] : 0;
  return { at: off, wrote: bytes.length, slot: oldLen };
}

/* ---------- 8. audio (ADTS AAC) ---------- */
export function findAudio(d) {
  const out = [];
  for (let i = 0; i < d.length - 7; i++) {
    if (d[i] !== 0xFF || (d[i + 1] !== 0xF1 && d[i + 1] !== 0xF9)) continue;
    let p = i, n = 0;
    while (p + 7 < d.length && d[p] === 0xFF && (d[p + 1] === 0xF1 || d[p + 1] === 0xF9)) {
      const L = ((d[p + 3] & 3) << 11) | (d[p + 4] << 3) | (d[p + 5] >> 5);
      if (L < 7) break; p += L; n++;
    }
    if (n >= 4) {
      const sr = [96000,88200,64000,48000,44100,32000,24000,22050,16000,12000,11025,8000][(d[i+2]>>2)&0xF];
      out.push({ off: i, size: p - i, frames: n, rate: sr });
      i = p - 1;
    }
  }
  return out;
}

export function patchAudio(d, clip, bytes) {
  if (bytes.length > clip.size) throw new Error(`clip is ${bytes.length} B; slot holds ${clip.size} B`);
  for (let i = 0; i < clip.size; i++) d[clip.off + i] = i < bytes.length ? bytes[i] : 0;
  return { at: clip.off, wrote: bytes.length, slot: clip.size };
}

/* ---------- 9. any glyph by character, and revert ---------- */
export function glyphByChar(d, base, faces, ch) {
  const cp = ch.codePointAt(0), hits = [];
  for (const f of faces) {
    const gid = gidForCp(d, base, f, cp);
    if (gid) hits.push({ face: f, gid, budget: glyphBudget(d, f, gid), dsc: glyphDsc(d, f, gid) });
  }
  return hits;
}

export const snapshot = (d) => d.slice();
export function revertRange(d, snap, off, len) {
  for (let i = 0; i < len; i++) d[off + i] = snap[off + i];
  return { at: off, len };
}
