import numpy as np
from PIL import Image
from framework import D

def stored_nibbles(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF; ll=b&0xF
    n=np.empty(len(b)*2,np.uint8)
    if hi:n[0::2]=hh;n[1::2]=ll
    else:n[0::2]=ll;n[1::2]=hh
    return n[:w*h] if False else n  # keep full (stride*2*h nibbles incl pad col)

def deswiz_strip_colmajor(fo,w,h,SW,hi=True,band_bytes=False,coldir=1):
    # stored stream = for each vertical strip (width SW px) L->R, column-major (xin 0..SW-1), y 0..H-1
    stride=(w+1)//2
    b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF; ll=b&0xF
    nb=np.empty(len(b)*2,np.uint8)
    if hi:nb[0::2]=hh;nb[1::2]=ll
    else:nb[0::2]=ll;nb[1::2]=hh
    # nb length = stride*2*h ; but real pixels use w per row. Use padded width Wp=stride*2
    Wp=stride*2
    nstrips=(Wp+SW-1)//SW
    out=np.zeros((h,Wp),np.uint8)
    k=0; N=len(nb)
    for s in range(nstrips):
        for xin in range(SW):
            x=s*SW+xin
            if x>=Wp:
                k+=h; continue
            ys=range(h) if coldir>0 else range(h-1,-1,-1)
            for y in ys:
                if k<N: out[y,x]=nb[k]
                k+=1
    return out[:,:w]

def smooth(m):
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    if hist.max()>0.97: return -1
    return ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2

# brute force on boot
res=[]
for hi in (True,False):
    for SW in [4,8,16,32,56,64,112,128]:
        for cd in (1,-1):
            m=deswiz_strip_colmajor(0x3871c0,399,145,SW,hi,coldir=cd)
            res.append((smooth(m),hi,SW,cd))
res.sort(reverse=True)
print("BOOT strip-colmajor top:")
for r in res[:10]: print("  ",round(r[0],3),"hi" if r[1] else "lo","SW",r[2],"dir",r[3])
