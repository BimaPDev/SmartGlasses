import numpy as np
from PIL import Image, ImageDraw
from framework import D
def gray4(fo,w,h,hi=True):
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF;ll=b&0xF; idx=np.empty(len(b)*2,np.uint8)
    if hi:idx[0::2]=hh;idx[1::2]=ll
    else:idx[0::2]=ll;idx[1::2]=hh
    return idx[:h*stride*2].reshape(h,stride*2)[:,:w]
def stripdeswiz(fo,w,h,SWpx=112,hi=True):
    # original(y,x): strip=x//SWpx, within=x%SWpx; storage nibble= strip*(SWpx*h)+ y*SWpx + within
    stride=(w+1)//2; b=D[fo+64:fo+64+stride*h]
    hh=(b>>4)&0xF;ll=b&0xF; nb=np.empty(len(b)*2,np.uint8)
    if hi:nb[0::2]=hh;nb[1::2]=ll
    else:nb[0::2]=ll;nb[1::2]=hh
    Wp=stride*2
    Y,X=np.mgrid[0:h,0:Wp]
    strip=X//SWpx; within=X%SWpx
    si=(strip*(SWpx*h)+Y*SWpx+within).ravel()
    out=np.zeros(h*Wp,np.uint8); v=si<len(nb); out[v]=nb[si[v]]
    return out.reshape(h,Wp)[:,:w]
wides=[(256,256,0x376600),(280,280,0x394c40),(204,92,0x30fdc0),(220,72,0x373ac0),(146,146,0x36d040),(256,80,0x317340)]
# render plain vs strip112 side by side, grayscale
rowsimg=[]
for w,h,fo in wides:
    a=gray4(fo,w,h); b=stripdeswiz(fo,w,h,112)
    rowsimg.append((f"{w}x{h}@{fo:#x}",a,b))
maxw=max(w for w,h,fo in wides)
cell=maxw
sh=Image.new('L',(2*cell+30, sum(h for w,h,fo in wides)+ len(wides)*16 ),50)
dr=ImageDraw.Draw(sh); yoff=0
for (lb,a,b),(w,h,fo) in zip(rowsimg,wides):
    dr.text((0,yoff),lb+" plain | strip112",fill=255); yoff+=14
    sh.paste(Image.fromarray((a*17).astype(np.uint8)),(0,yoff))
    sh.paste(Image.fromarray((b*17).astype(np.uint8)),(cell+20,yoff))
    yoff+=h+2
sh.save("wides.png"); print("saved")
