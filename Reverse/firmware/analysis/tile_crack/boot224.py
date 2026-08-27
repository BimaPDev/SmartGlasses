import numpy as np
from PIL import Image
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
n=nibs(0x3871c0+64,29000,True)
for W in [112,224]:
    r=len(n)//W; m=n[:r*W].reshape(r,W)
    Image.fromarray((m*17).astype(np.uint8)).resize((W*2,r*2),Image.NEAREST).save(f"bootstrip_{W}.png")
    print(W,m.shape)
