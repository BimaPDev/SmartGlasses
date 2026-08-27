import numpy as np
from PIL import Image, ImageDraw
from framework import D
def deswiz(fo,w,h,TWb,intra,to,hi=True,THb=None):
    stride=(w+1)//2
    if THb is None: THb=h
    S=D[fo+64:fo+64+stride*h].astype(np.uint8)
    ntx=(stride+TWb-1)//TWb; nty=(h+THb-1)//THb
    Y,XB=np.mgrid[0:h,0:stride]
    tx=XB//TWb; ty=Y//THb; ix=XB%TWb; iy=Y%THb
    tile=(ty*ntx+tx) if to=='row' else (tx*nty+ty)
    intra_off=(iy*TWb+ix) if intra=='row' else (ix*THb+iy)
    si=(tile*(TWb*THb)+intra_off).ravel()
    src=np.zeros(h*stride,np.uint8); v=si<len(S); src[v]=S[si[v]]
    src=src.reshape(h,stride)
    hh=(src>>4)&0xF; ll=src&0xF
    idx=np.empty((h,stride*2),np.uint8)
    if hi:idx[:,0::2]=hh;idx[:,1::2]=ll
    else:idx[:,0::2]=ll;idx[:,1::2]=hh
    return idx[:,:w]
def smooth(m):
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    return -1 if hist.max()>0.97 else ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
w,h,fo=399,145,0x3871c0
res=[]
for hi in (True,False):
    for TWb in [2,4,8,16,28,56]:
        for intra in('row','col'):
            m=deswiz(fo,w,h,TWb,intra,'row',hi,THb=h)  # full-height strips
            res.append((smooth(m),hi,TWb,intra))
res.sort(reverse=True)
print("BOOT full-height strip top:")
for r in res[:8]: print("  ",round(r[0],3),"hi"if r[1]else"lo","TWb",r[2],r[3])
best=res[0]
m=deswiz(fo,w,h,best[2],best[3],'row',best[1],THb=h)
Image.fromarray((m*17).astype(np.uint8)).resize((399*2,145*2),Image.NEAREST).save("boot_fullstrip.png")
print("saved best",best)
