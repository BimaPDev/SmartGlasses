import numpy as np, struct
from framework import D
d=D.tobytes(); N=len(d)
def idx4(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF; ll=b&0xF; idx=np.empty(len(b)*2,np.uint8)
    if hi:idx[0::2]=hh;idx[1::2]=ll
    else:idx[0::2]=ll;idx[1::2]=hh
    return idx[:h*stride*2].reshape(h,stride*2)[:,:w]
descs=[]
for off in range(0,N-12,4):
    hdr,ds,ptr=struct.unpack_from("<III",d,off)
    if hdr&0x1F!=9: continue
    w=(hdr>>10)&0x7FF; h=(hdr>>21)&0x7FF
    if not(8<=w<=512 and 8<=h<=512): continue
    if not(0x3c000000<=ptr<0x3c400000): continue
    fo=ptr-0x3C000000
    if fo<0 or fo+ds>N or abs(ds-(64+((w+1)//2)*h))>4: continue
    descs.append((w,h,fo))
scored=[]
for w,h,fo in descs:
    m=idx4(fo,w,h)
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    p=hist[hist>0]; ent=-(p*np.log2(p)).sum()
    coh=((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
    scored.append((coh*ent,coh,ent,w,h,fo))
scored.sort(reverse=True)
print("TOP by coh*entropy:")
for s in scored[:20]: print(f"  {s[0]:.2f} coh={s[1]:.2f} ent={s[2]:.2f} {s[3]}x{s[4]} @{s[5]:#x}")
