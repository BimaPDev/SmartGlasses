import numpy as np, struct
from framework import D
d=D.tobytes(); N=len(d)
descs=[]
for off in range(0,N-12,4):
    hdr,ds,ptr=struct.unpack_from("<III",d,off)
    if hdr&0x1F!=9: continue
    w=(hdr>>10)&0x7FF; h=(hdr>>21)&0x7FF
    if not(8<=w<=512 and 8<=h<=512): continue
    if not(0x3c000000<=ptr<0x3c400000): continue
    fo=ptr-0x3C000000
    if fo<0 or fo+ds>N: continue
    if abs(ds-(64+((w+1)//2)*h))>4: continue
    descs.append((off,w,h,ds,fo))
def score4(fo,w,h):  # 4bpp grayscale row-major, hi-first
    stride=(w+1)//2
    b=D[fo+64:fo+64+stride*h]
    hi=(b>>4)&0xF; lo=b&0xF
    idx=np.empty(len(b)*2,np.uint8); idx[0::2]=hi; idx[1::2]=lo
    m=idx[:h*stride*2].reshape(h,stride*2)[:,:w]
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    if hist.max()>0.97: return -1
    return ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
scored=[(score4(fo,w,h),w,h,fo,off) for (off,w,h,ds,fo) in descs]
scored=[s for s in scored if s[0]>0]
scored.sort(reverse=True)
print("total",len(descs),"nonblank",len(scored))
print("TOP 4bpp-rowmajor clean:")
for s in scored[:20]: print(f"  coh={s[0]:.3f} {s[1]}x{s[2]} @ {s[3]:#x}")
print("...")
print("count coh>0.8:",sum(1 for s in scored if s[0]>0.8))
print("count coh>0.7:",sum(1 for s in scored if s[0]>0.7))
print("count coh>0.6:",sum(1 for s in scored if s[0]>0.6))
