import numpy as np
from PIL import Image
from framework import D
def graysave(off,w,h,name,hi=True,scale=3):
    stride=(w+1)//2
    b=D[off+64:off+64+stride*h]
    hh=(b>>4)&0xF; ll=b&0xF
    idx=np.empty(len(b)*2,np.uint8)
    if hi:idx[0::2]=hh;idx[1::2]=ll
    else:idx[0::2]=ll;idx[1::2]=hh
    m=idx[:h*stride*2].reshape(h,stride*2)[:,:w]
    Image.fromarray((m*17).astype(np.uint8)).resize((w*scale,h*scale),Image.NEAREST).save(name)
    print(name)
graysave(0x3456c0,112,112,"g_i112.png")
graysave(0x323f40,80,80,"g_i80.png",scale=4)
graysave(0x3871c0,399,145,"g_boot399.png",scale=1)
