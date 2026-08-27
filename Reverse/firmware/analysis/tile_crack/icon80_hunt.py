import numpy as np
from PIL import Image, ImageDraw
from framework import D
def nibs(off,n,hi=True):
    b=D[off:off+n]; h=(b>>4)&0xF; l=b&0xF
    o=np.empty(len(b)*2,np.uint8)
    if hi:o[0::2]=h;o[1::2]=l
    else:o[0::2]=l;o[1::2]=h
    return o
off=0x323f40+64
imgs=[];labels=[]
n_hi=nibs(off,3200,True); n_lo=nibs(off,3200,False)
# row-major widths
for W in [32,40,64,80,100,128,160]:
    r=6400//W; m=n_hi[:r*W].reshape(r,W); imgs.append(m);labels.append(f"rowW{W}")
# column-major heights (reshape(ncols,H).T)
for H in [32,40,64,80,100,128,160]:
    c=6400//H; m=n_hi[:c*H].reshape(c,H).T; imgs.append(m);labels.append(f"colH{H}")
# lo-first row/col at 80/40
for W in [40,80]:
    r=6400//W; imgs.append(n_lo[:r*W].reshape(r,W));labels.append(f"loRowW{W}")
for H in [80,40]:
    c=6400//H; imgs.append(n_lo[:c*H].reshape(c,H).T);labels.append(f"loColH{H}")
# render sheet
cols=6; cell=260; pad=4
rows=(len(imgs)+cols-1)//cols
sheet=Image.new('L',(cols*(cell+pad)+pad,rows*(cell+pad+12)+pad),50)
dr=ImageDraw.Draw(sheet)
for i,(m,lb) in enumerate(zip(imgs,labels)):
    g=(m*17).astype(np.uint8)
    im=Image.fromarray(g)
    im=im.resize((cell,cell),Image.NEAREST)
    r=i//cols;c=i%cols;x=pad+c*(cell+pad);y=pad+r*(cell+pad+12)
    dr.text((x,y),lb,fill=255); sheet.paste(im,(x,y+12))
sheet.save("hunt80.png"); print("saved",len(imgs))
