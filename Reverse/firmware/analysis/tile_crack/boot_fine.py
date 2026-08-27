import numpy as np
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
n=nibs(0x3871c0+64,29000,True)
# fine width scan (nibble widths) around plausible ranges
res=[]
for W in range(60,420):
    rows=len(n)//W
    if rows<20: continue
    m=n[:rows*W].reshape(rows,W)
    v=(m[1:]==m[:-1]).mean()
    res.append((v,W))
res.sort(reverse=True)
print("top vertical-coherence widths (nibbles):",[(W,round(v,3)) for v,W in res[:12]])
