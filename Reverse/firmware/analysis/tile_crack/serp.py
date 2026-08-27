import numpy as np
from PIL import Image
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
def sc(m):
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    return -1 if hist.max()>0.97 else ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
n=nibs(0x3871c0+64,29000,True)
def grid(m): return (m*17).astype(np.uint8)
res={}
for W in [56,112]:
    r=len(n)//W; m=n[:r*W].reshape(r,W).copy()
    ms=m.copy(); ms[1::2]=ms[1::2,::-1]  # serpentine
    Image.fromarray(grid(m)).resize((W*3,r*3),Image.NEAREST).save(f"serp_plain{W}.png")
    Image.fromarray(grid(ms)).resize((W*3,r*3),Image.NEAREST).save(f"serp_alt{W}.png")
    print(f"W{W} plain {sc(m):.3f} serp {sc(ms):.3f}")
