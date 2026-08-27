import numpy as np
from PIL import Image
from framework import D
off=0x3871c0
pal=D[off:off+64].reshape(16,4)  # BGRA
b=D[off+64:off+64+29000]
hi=(b>>4)&0xF; lo=b&0xF
n=np.empty(len(b)*2,np.uint8); n[0::2]=hi; n[1::2]=lo
W=112; r=len(n)//W; m=n[:r*W].reshape(r,W)
R=pal[:,2][m];G=pal[:,1][m];B=pal[:,0][m];A=pal[:,3][m]
rgba=np.dstack([R,G,B,A]).astype(np.uint8)
im=Image.fromarray(rgba,'RGBA')
canvas=Image.new('RGB',im.size,(20,20,30)); canvas.paste(im,(0,0),im)
canvas.resize((W*3,r*3),Image.NEAREST).save("colorstrip112.png")
print("saved",m.shape)
