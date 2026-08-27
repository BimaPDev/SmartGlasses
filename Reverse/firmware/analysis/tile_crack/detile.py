import numpy as np
from PIL import Image, ImageDraw
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
def decode(nib,w,h,tw,th,intra,to):
    ntx=(w+tw-1)//tw; nty=(h+th-1)//th; Wp=ntx*tw; Hp=nty*th
    Y,X=np.mgrid[0:Hp,0:Wp]; tX=X//tw;tY=Y//th;ty=Y%th;tx=X%tw
    tile=(tY*ntx+tX) if to=='row' else (tX*nty+tY)
    off=(ty*tw+tx) if intra=='row' else (tx*th+ty)
    stor=(tile*(tw*th)+off).ravel()
    out=np.zeros(Wp*Hp,np.uint8); v=stor<len(nib); out[v]=nib[stor[v]]
    return out.reshape(Hp,Wp)[:h,:w]
def score(m):
    hist=np.bincount(m.ravel(),minlength=16)/m.size
    if hist.max()>0.97: return -1
    return ((m[1:]==m[:-1]).mean()+(m[:,1:]==m[:,:-1]).mean())/2

def hunt(off,w,h,name):
    res=[]
    for hi in (True,False):
        nib=nibs(off+64,((w+1)//2)*h*1,hi)
        # ensure enough
        nib=nibs(off+64,((w+1)//2)*h,hi)
        for tw in [2,4,7,8,14,16,28,56,112,80,40,20,10,5]:
            if w%tw: continue
            for th in [2,4,7,8,14,16,28,56,112,80,40,20,10,5]:
                if h%th: continue
                for intra in('row','col'):
                    for to in('row','col'):
                        m=decode(nib,w,h,tw,th,intra,to)
                        res.append((score(m),hi,tw,th,intra,to))
    res.sort(reverse=True)
    print(name,"top:")
    for r in res[:10]: print("  ",round(r[0],4),r[1:])
    # render top 12
    imgs=[]
    for r in res[:12]:
        _,hi,tw,th,intra,to=r
        nib=nibs(off+64,((w+1)//2)*h,hi)
        imgs.append((decode(nib,w,h,tw,th,intra,to),f"{'hi'if hi else'lo'}{tw}x{th}{intra[0]}{to[0]}"))
    cols=4;cell=w*3;pad=4;rows=(len(imgs)+cols-1)//cols
    sh=Image.new('L',(cols*(cell+pad)+pad,rows*(cell+pad+12)+pad),50);dr=ImageDraw.Draw(sh)
    for i,(m,lb) in enumerate(imgs):
        im=Image.fromarray((m*17).astype(np.uint8)).resize((cell,cell),Image.NEAREST)
        rr=i//cols;cc=i%cols;x=pad+cc*(cell+pad);y=pad+rr*(cell+pad+12)
        dr.text((x,y),lb,fill=255);sh.paste(im,(x,y+12))
    sh.save(name);print("saved",name)
hunt(0x3456c0,112,112,"detile_i112.png")
hunt(0x323f40,80,80,"detile_i80.png")
