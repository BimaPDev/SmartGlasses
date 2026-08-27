import numpy as np
from PIL import Image
from framework import D

def nibstream(off,nbytes,hi_first=True):
    b=D[off:off+nbytes]; hi=(b>>4)&0xF; lo=b&0xF
    n=np.empty(len(b)*2,dtype=np.uint8)
    if hi_first: n[0::2]=hi;n[1::2]=lo
    else: n[0::2]=lo;n[1::2]=hi
    return n

def width_scan(n,wmin,wmax,label):
    res=[]
    for W in range(wmin,wmax):
        rows=len(n)//W
        if rows<8: continue
        m=n[:rows*W].reshape(rows,W)
        eq=(m[1:]==m[:-1]).mean()
        res.append((eq,W))
    res.sort(reverse=True)
    print(label, [(W,round(e,3)) for e,W in res[:8]])
    return res

# ICON region
n_icon=nibstream(0x323f40+64,3200)
width_scan(n_icon,16,300,"icon 0x323f40 nibwidths:")
# BOOT region
n_boot=nibstream(0x3871c0+64,29000)
width_scan(n_boot,40,420,"boot 0x3871c0 nibwidths:")
