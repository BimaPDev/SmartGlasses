import numpy as np
from PIL import Image, ImageDraw
from framework import D
def nibstream(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF;ll=b&0xF; nb=np.empty(len(b)*2,np.uint8)
    if hi:nb[0::2]=hh;nb[1::2]=ll
    else:nb[0::2]=ll;nb[1::2]=hh
    return nb
def deswiz(fo,w,h,P,mode,hi=True):
    nb=nibstream(fo,w,h,hi); out=np.zeros((h,w),np.uint8); pos=0; x0=0; s=0
    while x0<w:
        sw=min(P,w-x0); seg=nb[pos:pos+sw*h]
        if len(seg)<sw*h: seg=np.pad(seg,(0,sw*h-len(seg)))
        if mode=='row': blk=seg.reshape(h,sw)
        elif mode=='col': blk=seg.reshape(sw,h).T
        elif mode=='colflip': blk=seg.reshape(sw,h).T[::-1]
        elif mode=='boust': blk=seg.reshape(h,sw); 
        out[:,x0:x0+sw]=blk; pos+=sw*h; x0+=sw; s+=1
    return out
w,h,fo=146,146,0x36d040
combos=[]
for P in [8,16,32,56,112,146]:
    for mode in ['row','col','colflip']:
        combos.append((P,mode))
imgs=[]
for P,mode in combos:
    m=deswiz(fo,w,h,P,mode)
    imgs.append((f"P{P}{mode}",m))
cols=3;cell=146*2;pad=4;rows=(len(imgs)+cols-1)//cols
sh=Image.new('L',(cols*(cell+pad)+pad,rows*(cell+pad+12)+pad),50);dr=ImageDraw.Draw(sh)
for i,(lb,m) in enumerate(imgs):
    im=Image.fromarray((m*17).astype(np.uint8)).resize((cell,cell),Image.NEAREST)
    r=i//cols;c=i%cols;x=pad+c*(cell+pad);y=pad+r*(cell+pad+12)
    dr.text((x,y),lb,fill=255);sh.paste(im,(x,y+12))
sh.save("pintest.png");print("saved")
