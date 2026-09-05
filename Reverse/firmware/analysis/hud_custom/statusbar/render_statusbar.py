#!/usr/bin/env python3
"""Render the launcher status-bar IDX4 icon set out of platform_tester.bin.

Ownership: LEAF 1.3 (statusbar). Reads only; writes only into this directory.
Facts used (established upstream, not re-derived here):
  lv_img_dsc_t = {u32 header; u32 data_size; u32 data_ptr}
  cf = header & 0x1F  (9 = LV_IMG_CF_INDEXED_4BIT)
  w  = (header >> 10) & 0x7FF ; h = (header >> 21) & 0x7FF
  data_size == 64 + ceil(w/2)*h        (64 = 16 BGRA palette entries)
  file_off   == data_ptr - 0x3BFD7C0C  (PSRAM copy base for this build)
"""
import struct, json, sys
from pathlib import Path
from PIL import Image

HERE = Path(__file__).resolve().parent
BIN  = HERE.parents[2] / "x_1.0.12.83/platform_tester.bin"
OUT  = HERE / "icons"
DATA_BASE = 0x3BFD7C0C
SCALE = 4

d = BIN.read_bytes()

def read_dsc(dsc_off):
    hdr, ds, dp = struct.unpack_from("<III", d, dsc_off)
    cf = hdr & 0x1F
    w  = (hdr >> 10) & 0x7FF
    h  = (hdr >> 21) & 0x7FF
    assert cf == 9, f"{dsc_off:#x}: cf={cf}, not INDEXED_4BIT"
    assert ds == 64 + ((w + 1) // 2) * h, f"{dsc_off:#x}: data_size mismatch"
    return dict(cf=cf, w=w, h=h, data_size=ds, data_off=dp - DATA_BASE)

def render(dsc_off, path, scale=SCALE):
    m = read_dsc(dsc_off)
    w, h, off = m["w"], m["h"], m["data_off"]
    pal = [tuple(d[off + i*4 : off + i*4 + 4]) for i in range(16)]   # B,G,R,A
    stride = (w + 1) // 2
    px = d[off + 64 : off + 64 + stride * h]
    im = Image.new("RGBA", (w, h))
    for y in range(h):
        row = px[y*stride : (y+1)*stride]
        for x in range(w):
            b = row[x >> 1]
            idx = (b >> 4) if (x & 1) == 0 else (b & 0xF)
            bb, gg, rr, aa = pal[idx]
            im.putpixel((x, y), (rr, gg, bb, aa))
    im.resize((w*scale, h*scale), Image.NEAREST).save(path)
    m["palette"] = ["%02x%02x%02x%02x" % (p[2], p[1], p[0], p[3]) for p in pal]
    return m

if __name__ == "__main__":
    OUT.mkdir(parents=True, exist_ok=True)
    icons = json.loads((HERE / "icons.json").read_text())
    out = {}
    for name, dsc in icons.items():
        m = render(int(dsc, 16), OUT / f"{name}.png")
        m["dsc_off"] = int(dsc, 16)
        out[name] = m
        print(f"{name:<46} dsc={dsc} {m['w']}x{m['h']} data={m['data_off']:#x} bytes={m['data_size']}")
    (HERE / "rendered.json").write_text(json.dumps(out, indent=1))
