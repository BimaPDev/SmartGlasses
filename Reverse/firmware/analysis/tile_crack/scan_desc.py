import numpy as np, struct
from framework import D
d=D.tobytes()
N=len(d)
found=[]
for off in range(0,N-12,4):
    hdr,ds,ptr=struct.unpack_from("<III",d,off)
    cf=hdr&0x1F
    if cf!=9: continue
    w=(hdr>>10)&0x7FF; h=(hdr>>21)&0x7FF
    if not(8<=w<=512 and 8<=h<=512): continue
    if not(0x3c000000<=ptr<0x3c400000): continue
    fo=ptr-0x3C000000
    if fo<0 or fo+ds>N: continue
    # 4bpp check: ds ~ 64 + ceil(w/2)*h  OR  64 + (w*h+1)//2
    exp=64+((w+1)//2)*h
    tag = "MATCH" if abs(ds-exp)<=4 else f"ds{ds}vs{exp}"
    found.append((off,w,h,ds,fo,tag))
print(f"{len(found)} cf=9 descriptors")
for f in found:
    print(f" desc@{f[0]:#x} {f[1]}x{f[2]} ds={f[3]} dataoff={f[4]:#x} {f[5]}")
