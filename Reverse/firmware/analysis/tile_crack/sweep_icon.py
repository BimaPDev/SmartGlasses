import numpy as np
from PIL import Image, ImageDraw
from framework import get_nibbles

# General tiled decoder with explicit intra-tile scan control
def decode(nib,w,h,tw,th,intra,tile_order,transpose_tile=False):
    ntx=(w+tw-1)//tw; nty=(h+th-1)//th
    Wp=ntx*tw; Hp=nty*th
    Y,X=np.mgrid[0:Hp,0:Wp]
    tX=X//tw; tY=Y//th; ty=(Y%th); tx=(X%tw)
    if transpose_tile: ty,tx=tx,ty; TW,TH=th,tw
    else: TW,TH=tw,th
    if tile_order=='row': tile=tY*ntx+tX
    else: tile=tX*nty+tY
    if intra=='row': off=ty*TW+tx
    else: off=tx*TH+ty
    stor=tile*(tw*th)+off
    flat=stor.ravel()
    out=np.zeros(Wp*Hp,dtype=np.uint8)
    v=flat<len(nib); out[v]=nib[flat[v]]
    return out.reshape(Hp,Wp)[:h,:w]

def gray(img): return (img.astype(np.uint16)*17).clip(0,255).astype(np.uint8)

pix=0x323f40+64; w=h=80
cands=[]
for tw,th in [(8,8),(16,16),(8,16),(16,8)]:
    for nh in (True,False):
        for intra in ('row','col'):
            for to in ('row','col'):
                cands.append((nh,tw,th,intra,to,False))
# dedupe by rendering all
scale=4; cols=6
imgs=[];labels=[]
for (nh,tw,th,intra,to,tp) in cands:
    nib=get_nibbles(pix,w*h*4,nh)
    img=decode(nib,w,h,tw,th,intra,to,tp)
    imgs.append(gray(img)); labels.append(f"{'hi'if nh else'lo'}{tw}x{th}{intra[:1]}{to[:1]}")
rows=(len(imgs)+cols-1)//cols
cw,ch=w*scale,h*scale;pad=6
sheet=Image.new('L',(cols*(cw+pad)+pad,rows*(ch+pad+12)+pad),40)
dr=ImageDraw.Draw(sheet)
for i,(im,lb) in enumerate(zip(imgs,labels)):
    pim=Image.fromarray(im).resize((cw,ch),Image.NEAREST)
    r=i//cols;c=i%cols;x=pad+c*(cw+pad);y=pad+r*(ch+pad+12)
    dr.text((x,y),lb,fill=255);sheet.paste(pim,(x,y+12))
sheet.save("sheet_icon2.png")
print("saved",len(imgs))
