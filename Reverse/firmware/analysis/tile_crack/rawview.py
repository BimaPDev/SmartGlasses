import numpy as np
from PIL import Image
from framework import D

def rawimg(pix_off,nbytes,width,name,scale=3,expand_nibbles=False):
    b=D[pix_off:pix_off+nbytes]
    if expand_nibbles:
        hi=(b>>4)&0xF; lo=b&0xF
        n=np.empty(len(b)*2,dtype=np.uint8); n[0::2]=hi;n[1::2]=lo
        n=(n*17).astype(np.uint8); arr=n; W=width
    else:
        arr=b; W=width
    rows=len(arr)//W
    m=arr[:rows*W].reshape(rows,W)
    im=Image.fromarray(m).resize((W*scale,rows*scale),Image.NEAREST)
    im.save(name); print("saved",name,m.shape)

# raw bytes at detected periods
rawimg(0x323f40+64,3200,32,"raw_icon_w32.png",scale=4)
rawimg(0x323f40+64,3200,16,"raw_icon_w16.png",scale=4)
rawimg(0x323f40+64,3200,40,"raw_icon_w40.png",scale=4)
rawimg(0x3871c0+64,29000,56,"raw_boot_w56.png",scale=2)
rawimg(0x3871c0+64,29000,112,"raw_boot_w112.png",scale=2)
rawimg(0x3871c0+64,29000,200,"raw_boot_w200.png",scale=2)
