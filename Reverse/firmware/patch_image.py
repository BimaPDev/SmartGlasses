#!/usr/bin/env python3
"""Replace a compiled-in LVGL IDX4 image inside platform_tester.bin.

Locates the target by CONTENT (its existing 2656-byte blob), not by a hardcoded
offset, so it works on any firmware build without being told the version.
Same-length only: the blob is contiguous and growing it would shift everything
after it and break absolute pointers.
"""
import struct, sys, hashlib
from pathlib import Path
from PIL import Image

def find_data_base(d):
    """0x3C000000 - <this build's PSRAM copy offset>, validated semantically."""
    import re
    def pal_ok(f):
        if f < 0 or f+64 > len(d): return False
        e=[tuple(d[f+i:f+i+4]) for i in range(0,64,4)]
        if e[0][3]!=0: return False
        a=[x[3] for x in e]
        return a==sorted(a) and a[-1]>=200 and len({x[:3] for x in e[1:]})==1
    def score(base):
        n=0
        for o in range(0,len(d)-12,4):
            hdr=struct.unpack_from('<I',d,o)[0]
            if (hdr&0x1F)!=9 or ((hdr>>5)&7): continue
            w=(hdr>>10)&0x7FF; h=(hdr>>21)&0x7FF
            if not(4<=w<=1024 and 4<=h<=1024): continue
            ds,dp=struct.unpack_from('<II',d,o+4)
            if ds!=64+((w+1)//2)*h: continue
            if pal_ok(dp-base): n+=1
        return n
    best=(0,None)
    for m in re.finditer(re.escape(struct.pack('<I',0x3C000000)), d[:0x4000]):
        for k in range(-16,20,4):
            p=m.start()+k
            if p<0 or p+4>len(d): continue
            v=struct.unpack_from('<I',d,p)[0]
            if 0x2C010000 <= v < 0x2C010000+len(d):
                b=0x3C000000-(v-0x2C010000)
                s=score(b)
                if s>best[0]: best=(s,b)
    if best[0] < 50:
        raise SystemExit("could not derive a data base (semantic score too low)")
    return best[1], best[0]

def find_descriptor(d, base, blob):
    """Find the image whose data == blob, and its descriptor."""
    hits=[]; i=0
    while True:
        j=d.find(blob,i)
        if j<0: break
        hits.append(j); i=j+1
    if len(hits)!=1:
        raise SystemExit(f"expected exactly 1 content match, got {len(hits)}")
    off=hits[0]
    want=struct.pack('<I', off+base)
    dscs=[m for m in range(0,len(d)-12,4) if d[m+8:m+12]==want]
    if len(dscs)!=1:
        raise SystemExit(f"expected exactly 1 descriptor pointing at it, got {len(dscs)}")
    return off, dscs[0]

def encode_idx4(img, w, h, pal):
    """img: 'L' mode PIL image -> 4bpp indexed using the existing 16-level ramp."""
    img = img.convert('L').resize((w,h), Image.LANCZOS)
    out=bytearray(pal)
    stride=(w+1)//2
    for y in range(h):
        row=bytearray(stride)
        for x in range(w):
            v=min(15, img.getpixel((x,y))*16//256)
            if (x&1)==0: row[x>>1] |= v<<4
            else:        row[x>>1] |= v
        out+=row
    return bytes(out)

def main():
    if len(sys.argv)<5:
        print(__doc__); print("usage: patch_image.py <fw.bin> <ref_fw.bin> <ref_data_off> <new.png> [out.bin]")
        raise SystemExit(2)
    fw, ref, refoff, png = sys.argv[1], sys.argv[2], int(sys.argv[3],0), sys.argv[4]
    out = sys.argv[5] if len(sys.argv)>5 else fw.replace('.bin','_patched.bin')
    d=bytearray(Path(fw).read_bytes()); r=Path(ref).read_bytes()
    base,score = find_data_base(bytes(d))
    # descriptor of the reference image tells us w/h/size
    want=struct.pack('<I', refoff + 0x3BFD7C0C)   # ref is 12.83
    rd=[m for m in range(0,len(r)-12,4) if r[m+8:m+12]==want][0]
    hdr,ds,_=struct.unpack_from('<III',r,rd)
    w=(hdr>>10)&0x7FF; h=(hdr>>21)&0x7FF
    blob=r[refoff:refoff+ds]
    off,dsc = find_descriptor(bytes(d), base, blob)
    print(f"  data base   {hex(base)} (semantic score {score})")
    print(f"  target      {w}x{h} IDX4, {ds} B  data@{hex(off)}  descriptor@{hex(dsc)}")
    new = encode_idx4(Image.open(png), w, h, d[off:off+64])
    assert len(new)==ds, f"length changed {len(new)} != {ds}"
    d[off:off+ds]=new
    Path(out).write_bytes(bytes(d))
    print(f"  wrote {out}  ({len(d)} B, unchanged)  new md5 {hashlib.md5(new).hexdigest()[:12]}")

if __name__=='__main__': main()
