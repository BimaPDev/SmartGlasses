import numpy as np
from PIL import Image
from framework import D

def decode(dataoff,w,h,hi_first=True,pal_bgra=True):
    pal=D[dataoff:dataoff+64].reshape(16,4)  # B,G,R,A
    stride=(w+1)//2
    px=D[dataoff+64:dataoff+64+stride*h]
    px=px.reshape(h,stride)
    hi=(px>>4)&0xF; lo=px&0xF
    idx=np.zeros((h,stride*2),dtype=np.uint8)
    if hi_first: idx[:,0::2]=hi; idx[:,1::2]=lo
    else: idx[:,0::2]=lo; idx[:,1::2]=hi
    idx=idx[:,:w]
    if pal_bgra:
        R=pal[:,2][idx]; G=pal[:,1][idx]; B=pal[:,0][idx]; A=pal[:,3][idx]
    rgba=np.dstack([R,G,B,A]).astype(np.uint8)
    return rgba

def save(dataoff,w,h,name,hi=True,scale=1,bg=(255,0,255)):
    rgba=decode(dataoff,w,h,hi)
    im=Image.fromarray(rgba,'RGBA')
    canvas=Image.new('RGB',im.size,bg); canvas.paste(im,(0,0),im)
    if scale!=1: canvas=canvas.resize((w*scale,h*scale),Image.NEAREST)
    canvas.save(name); print(name,w,h)

save(0x3871c0,399,145,"BOOT_hi.png",hi=True,scale=1)
save(0x3871c0,399,145,"BOOT_lo.png",hi=False,scale=1)
save(0x3456c0,112,112,"icon112_hi.png",hi=True,scale=2)
save(0x323f40,80,80,"icon80_hi.png",hi=True,scale=3)
save(0x321cc0,24,24,"icon24_hi.png",hi=True,scale=6)
save(0x3c0000,48,48,"i48_a.png",hi=True,scale=5)
save(0x39e5c0,64,64,"i64_a.png",hi=True,scale=4)
save(0x3456c0,112,112,"i112_b.png",hi=True,scale=2)
save(0x372cc0,48,48,"i48_b.png",hi=True,scale=5)
