import numpy as np
from PIL import Image
from framework import get_nibbles
from sweep import decode_tiled_vec

def gray(img):  # index*17 grayscale
    return (img.astype(np.uint16)*17).clip(0,255).astype(np.uint8)

def render_pure_col(nib,w,h):
    n=nib[:w*h]; 
    if len(n)<w*h: n=np.pad(n,(0,w*h-len(n)))
    return n.reshape(w,h).T  # column-major
def render_pure_row(nib,w,h):
    n=nib[:w*h]
    if len(n)<w*h: n=np.pad(n,(0,w*h-len(n)))
    return n.reshape(h,w)

def contact(name,pix_off,w,h,cands,scale=3):
    imgs=[]
    labels=[]
    nibT=get_nibbles(pix_off,w*h*4,True)
    nibF=get_nibbles(pix_off,w*h*4,False)
    imgs.append(gray(render_pure_row(nibT,w,h))); labels.append("row-hi")
    imgs.append(gray(render_pure_col(nibT,w,h))); labels.append("col-hi")
    imgs.append(gray(render_pure_col(nibF,w,h))); labels.append("col-lo")
    for (nh,tw,th,intra,to) in cands:
        nib=nibT if nh else nibF
        if intra=='morton':
            img=decode_tiled_vec(nib,w,h,tw,th,morton=True)
        else:
            img=decode_tiled_vec(nib,w,h,tw,th,intra,to)
        imgs.append(gray(img)); labels.append(f"{'hi'if nh else'lo'}_{tw}x{th}_{intra[:3]}_{to[:3]}")
    # assemble grid
    cols=4
    cellw=w*scale; cellh=h*scale
    pad=8
    rows=(len(imgs)+cols-1)//cols
    sheet=Image.new('L',(cols*(cellw+pad)+pad, rows*(cellh+pad+14)+pad), 40)
    from PIL import ImageDraw
    dr=ImageDraw.Draw(sheet)
    for i,(im,lb) in enumerate(zip(imgs,labels)):
        pim=Image.fromarray(im).resize((cellw,cellh),Image.NEAREST)
        r=i//cols; c=i%cols
        x=pad+c*(cellw+pad); y=pad+r*(cellh+pad+14)
        dr.text((x,y),lb,fill=255)
        sheet.paste(pim,(x,y+14))
    sheet.save(name)
    print("saved",name,"n=",len(imgs))

icon_c=[(False,64,1,'row','col'),(False,32,8,'row','col'),(False,1,32,'row','row'),
        (True,8,8,'row','row'),(True,16,16,'row','row'),(True,4,4,'row','row'),
        (True,8,8,'morton','-'),(False,16,16,'row','row'),(True,32,32,'row','row')]
contact("sheet_icon.png",0x323f40+64,80,80,icon_c,scale=3)

boot_c=[(True,1,128,'row','col'),(True,8,64,'row','col'),(True,64,1,'row','row'),
        (True,8,8,'row','row'),(True,16,16,'row','row'),(True,4,16,'row','col'),
        (True,4,4,'row','col'),(False,8,64,'row','col'),(True,8,8,'morton','-')]
contact("sheet_boot.png",0x3871c0+64,399,145,boot_c,scale=2)
