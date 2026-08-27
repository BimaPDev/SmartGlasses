import numpy as np
from PIL import Image
from framework import D
def nibstream(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF;ll=b&0xF; nb=np.empty(len(b)*2,np.uint8)
    if hi:nb[0::2]=hh;nb[1::2]=ll
    else:nb[0::2]=ll;nb[1::2]=hh
    return nb, stride*2
def strip_deswiz(fo,w,h,P=112,hi=True,colmajor=False):
    nb,Wp=nibstream(fo,w,h,hi)
    out=np.zeros((h,w),np.uint8)
    pos=0
    x0=0
    while x0<w:
        sw=min(P,w-x0)
        seg=nb[pos:pos+sw*h]
        if len(seg)<sw*h: seg=np.pad(seg,(0,sw*h-len(seg)))
        if colmajor:
            blk=seg.reshape(sw,h).T   # column-major within strip
        else:
            blk=seg.reshape(h,sw)     # row-major within strip
        out[:,x0:x0+sw]=blk
        pos+=sw*h; x0+=sw
    return out
def sc(m):
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    return -1 if hist.max()>0.97 else ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
tests=[(256,256,0x376600),(146,146,0x36d040),(280,280,0x394c40),(204,92,0x30fdc0),(220,72,0x373ac0),(399,145,0x3871c0)]
for w,h,fo in tests:
    best=None
    for P in [56,64,112,128,160,224,240]:
        for cm in (False,True):
            m=strip_deswiz(fo,w,h,P,True,cm)
            s=sc(m)
            if best is None or s>best[0]: best=(s,P,cm,m)
    print(f"{w}x{h}@{fo:#x} best P={best[1]} colmajor={best[2]} score={best[0]:.3f}")
    Image.fromarray((best[3]*17).astype(np.uint8)).resize((w*2,h*2),Image.NEAREST).save(f"sf_{fo:#x}.png")
