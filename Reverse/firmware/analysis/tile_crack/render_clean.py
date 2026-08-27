import numpy as np
from PIL import Image, ImageDraw
from framework import D
def gray4(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF; ll=b&0xF
    idx=np.empty(len(b)*2,np.uint8)
    if hi:idx[0::2]=hh;idx[1::2]=ll
    else:idx[0::2]=ll;idx[1::2]=hh
    return idx[:h*stride*2].reshape(h,stride*2)[:,:w]
tops=[(48,48,0x3c4e00),(28,28,0x3a5180),(32,32,0x3d6dc0),(40,18,0x3a5380),(29,31,0x3a4f40),
      (120,120,0x3acd80),(20,20,0x3b4e00),(48,48,0x3c1400),(80,80,0x3b3f00),(100,100,0x3be900),
      (56,56,0x3c2800),(120,120,0x3a74c0)]
cell=180;cols=4;pad=6;rows=(len(tops)+cols-1)//cols
sh=Image.new('L',(cols*(cell+pad)+pad,rows*(cell+pad+12)+pad),50);dr=ImageDraw.Draw(sh)
for i,(w,h,fo) in enumerate(tops):
    m=gray4(fo,w,h); im=Image.fromarray((m*17).astype(np.uint8)).resize((cell,cell),Image.NEAREST)
    r=i//cols;c=i%cols;x=pad+c*(cell+pad);y=pad+r*(cell+pad+12)
    dr.text((x,y),f"{w}x{h}@{fo:#x}",fill=255);sh.paste(im,(x,y+12))
sh.save("clean_glyphs.png");print("saved")
