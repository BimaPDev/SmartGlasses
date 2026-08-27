import numpy as np
from PIL import Image, ImageDraw
from framework import D
def deswiz(fo,w,h,TWb,THb,intra,to,hi=True):
    stride=(w+1)//2
    S=D[fo+64:fo+64+stride*h].astype(np.uint8)
    ntx=(stride+TWb-1)//TWb; nty=(h+THb-1)//THb
    Sp=stride # target byte cols
    Y,XB=np.mgrid[0:h,0:stride]
    tx=XB//TWb; ty=Y//THb; ix=XB%TWb; iy=Y%THb
    tile=(ty*ntx+tx) if to=='row' else (tx*nty+ty)
    intra_off=(iy*TWb+ix) if intra=='row' else (ix*THb+iy)
    si=(tile*(TWb*THb)+intra_off)
    flat=si.ravel()
    src=np.zeros(h*stride,np.uint8); v=flat<len(S); src[v]=S[flat[v]]
    src=src.reshape(h,stride)
    hh=(src>>4)&0xF; ll=src&0xF
    idx=np.empty((h,stride*2),np.uint8)
    if hi:idx[:,0::2]=hh;idx[:,1::2]=ll
    else:idx[:,0::2]=ll;idx[:,1::2]=hh
    return idx[:,:w]
def smooth(m):
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    if hist.max()>0.97: return -1
    return ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2
w,h,fo=399,145,0x3871c0
tiles=[]
for TWb in [1,2,4,7,8,14,16,28,56]:
    for THb in [1,2,4,7,8,14,16,28,56]:
        tiles.append((TWb,THb))
res=[]
for hi in (True,False):
    for TWb,THb in tiles:
        for intra in('row','col'):
            for to in('row','col'):
                m=deswiz(fo,w,h,TWb,THb,intra,to,hi)
                res.append((smooth(m),hi,TWb,THb,intra,to))
res.sort(reverse=True)
print("BOOT byte-tile top:")
for r in res[:15]: print("  ",round(r[0],3),"hi"if r[1]else"lo",f"{r[2]}x{r[3]}b",r[4],r[5])
# render top 12
cell=399;cols=3;pad=6;top=res[:12];rows=(12+cols-1)//cols
sh=Image.new('L',(cols*(cell+pad)+pad,rows*(145+pad+12)+pad),50);dr=ImageDraw.Draw(sh)
for i,r in enumerate(top):
    _,hi,TWb,THb,intra,to=r
    m=deswiz(fo,w,h,TWb,THb,intra,to,hi)
    im=Image.fromarray((m*17).astype(np.uint8))
    rr=i//cols;cc=i%cols;x=pad+cc*(cell+pad);y=pad+rr*(145+pad+12)
    dr.text((x,y),f"{'hi'if hi else'lo'}{TWb}x{THb}{intra[0]}{to[0]} s={r[0]:.2f}",fill=255);sh.paste(im,(x,y+12))
sh.save("boot_bytetile.png");print("saved")
