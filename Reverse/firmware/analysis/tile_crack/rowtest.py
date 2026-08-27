import numpy as np
from PIL import Image
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
def coh(m): return ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
tests=[("boot",0x3871c0,399,145),("i112",0x3456c0,112,112),("i80",0x323f40,80,80),
       ("i24",0x321cc0,24,24),("i48",0x3c0000,48,48),("i32",0x353f00,32,32),("i64",0x39e5c0,64,64)]
for nm,off,w,h in tests:
    n=nibs(off+64,((w+1)//2)*h)
    m=n[:h*((w+1)//2*2)].reshape(h,(w+1)//2*2)[:,:w]
    print(f"{nm} {w}x{h} row-major coh={coh(m):.3f}")
