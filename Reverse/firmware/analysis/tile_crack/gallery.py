import numpy as np, struct
from PIL import Image, ImageDraw
from framework import D
d=D.tobytes(); N=len(d)
def deswiz_idx(fo,w,h,P=112,narrow_first=True,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF;ll=b&0xF; nb=np.empty(len(b)*2,np.uint8)
    if hi:nb[0::2]=hh;nb[1::2]=ll
    else:nb[0::2]=ll;nb[1::2]=hh
    out=np.zeros((h,w),np.uint8); pos=0; x0=0
    if narrow_first and w%P: widths=[w%P]+[P]*(w//P)
    else: widths=[P]*(w//P)+([w%P] if w%P else [])
    for sw in widths:
        seg=nb[pos:pos+sw*h]
        if len(seg)<sw*h: seg=np.pad(seg,(0,sw*h-len(seg)))
        out[:,x0:x0+sw]=seg.reshape(h,sw); pos+=sw*h; x0+=sw
    return out
# collect descriptors, render bigger ones
descs=[]
for off in range(0,N-12,4):
    hdr,ds,ptr=struct.unpack_from("<III",d,off)
    if hdr&0x1F!=9: continue
    w=(hdr>>10)&0x7FF;h=(hdr>>21)&0x7FF
    if not(24<=w<=300 and 24<=h<=300): continue
    if not(0x3c000000<=ptr<0x3c400000): continue
    fo=ptr-0x3C000000
    if fo<0 or fo+ds>N or abs(ds-(64+((w+1)//2)*h))>4: continue
    descs.append((w,h,fo))
# pick a spread
sel=descs[::max(1,len(descs)//48)][:48]
cols=8;cell=110;pad=3;rows=(len(sel)+cols-1)//cols
sh=Image.new('L',(cols*(cell+pad)+pad,rows*(cell+pad+10)+pad),40);dr=ImageDraw.Draw(sh)
for i,(w,h,fo) in enumerate(sel):
    m=deswiz_idx(fo,w,h)
    im=Image.fromarray((m*17).astype(np.uint8)).resize((cell,cell),Image.NEAREST)
    r=i//cols;c=i%cols;x=pad+c*(cell+pad);y=pad+r*(cell+pad+10)
    dr.text((x,y),f"{w}x{h}",fill=255);sh.paste(im,(x,y+10))
sh.save("gallery.png");print("saved",len(sel),"of",len(descs))
