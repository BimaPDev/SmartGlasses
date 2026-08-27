import numpy as np
from PIL import Image
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
def colmajor(off,w,h,hi=True):
    # storage: column by column, each column h pixels. total w*h nibbles (no per-col padding)
    nib=nibs(off+64, (w*h+1)//2 +2, hi)
    out=np.zeros((h,w),np.uint8)
    need=w*h
    n=nib[:need]
    out=n.reshape(w,h).T
    return out
def sc(m): 
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    return -1 if hist.max()>0.97 else ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
for nm,off,w,h in [("boot",0x3871c0,399,145),("i112",0x3456c0,112,112),("i80",0x323f40,80,80),("i48",0x372cc0,48,48),("i64",0x39e5c0,64,64)]:
    for hi in (True,False):
        m=colmajor(off,w,h,hi)
        s=sc(m)
        Image.fromarray((m*17).astype(np.uint8)).resize((w*3,h*3),Image.NEAREST).save(f"cm_{nm}_{'hi'if hi else'lo'}.png")
        print(nm,"hi" if hi else "lo","colmajor score",round(s,3))
