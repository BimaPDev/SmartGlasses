import numpy as np
from PIL import Image, ImageDraw
from framework import D
def nib(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF;ll=b&0xF; n=np.empty(len(b)*2,np.uint8)
    if hi:n[0::2]=hh;n[1::2]=ll
    else:n[0::2]=ll;n[1::2]=hh
    return n
def deswiz(fo,w,h,P,narrow_first,hi=True):
    nb=nib(fo,w,h,hi); out=np.zeros((h,w),np.uint8); pos=0
    if narrow_first and w%P: widths=[w%P]+[P]*(w//P)
    else:
        widths=[P]*(w//P)+([w%P] if w%P else [])
    x0=0
    for sw in widths:
        seg=nb[pos:pos+sw*h]
        if len(seg)<sw*h: seg=np.pad(seg,(0,sw*h-len(seg)))
        out[:,x0:x0+sw]=seg.reshape(h,sw); pos+=sw*h; x0+=sw
    return out
w,h,fo=146,146,0x36d040
imgs=[]
for P in [112]:
    for nf in [False,True]:
        imgs.append((f"P{P}nf{nf}",deswiz(fo,w,h,P,nf)))
# also try boot atlas cleaner and a couple others
tests=[(146,146,0x36d040),(256,256,0x376600),(204,92,0x30fdc0),(100,100,0x3be900),(120,120,0x3acd80)]
for w2,h2,fo2 in tests:
    imgs.append((f"{w2}x{h2}nfT",deswiz(fo2,w2,h2,112,True)))
cols=4;cell=300;pad=4;rows=(len(imgs)+cols-1)//cols
sh=Image.new('L',(cols*(cell+pad)+pad,rows*(cell+pad+12)+pad),50);dr=ImageDraw.Draw(sh)
for i,(lb,m) in enumerate(imgs):
    im=Image.fromarray((m*17).astype(np.uint8)).resize((cell,cell),Image.NEAREST)
    r=i//cols;c=i%cols;x=pad+c*(cell+pad);y=pad+r*(cell+pad+12)
    dr.text((x,y),lb,fill=255);sh.paste(im,(x,y+12))
sh.save("phase.png");print("saved")
