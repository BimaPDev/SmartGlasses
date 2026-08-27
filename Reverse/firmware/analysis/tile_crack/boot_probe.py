import numpy as np
from PIL import Image
from framework import D

def bytes_img(off,nbytes,W,scale,name):
    b=D[off:off+nbytes]; rows=len(b)//W
    m=b[:rows*W].reshape(rows,W)
    Image.fromarray(m).resize((W*scale,rows*scale),Image.NEAREST).save(name)
    print(name,m.shape)

def nib_img(off,nbytes,Wnib,scale,name,hi_first=True):
    b=D[off:off+nbytes]
    hi=(b>>4)&0xF; lo=b&0xF
    n=np.empty(len(b)*2,dtype=np.uint8)
    if hi_first: n[0::2]=hi;n[1::2]=lo
    else: n[0::2]=lo;n[1::2]=hi
    n=(n*17).astype(np.uint8)
    rows=len(n)//Wnib; m=n[:rows*Wnib].reshape(rows,Wnib)
    Image.fromarray(m).resize((Wnib*scale,rows*scale),Image.NEAREST).save(name)
    print(name,m.shape)

off=0x3871c0+64
# full region, bytes as pixels, width 56, large
bytes_img(off,29000,56,6,"boot_b56_big.png")
# nibble interpretations
nib_img(off,29000,112,3,"boot_n112.png",True)
nib_img(off,29000,56,3,"boot_n56.png",True)
