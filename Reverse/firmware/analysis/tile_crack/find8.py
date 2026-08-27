import numpy as np
from PIL import Image, ImageDraw
from framework import D
def bestwidth(off,nbytes,wlo=40,whi=320):
    b=D[off:off+nbytes].astype(np.int16)
    res=[]
    for W in range(wlo,whi):
        r=len(b)//W
        if r<10: continue
        m=b[:r*W].reshape(r,W)
        v=np.abs(np.diff(m,axis=0)).mean()
        res.append((v,W))
    res.sort(); return res[:5]
offs=[("a_30fdc0",0x30fdc0,20000),("b_317340",0x317340,20000),("c_39be7c",0x373ac0,16000),
      ("d_3f8fb4",0x3d0c00,6000),("e_4067f0",0x3de440,4000),("f_39e9c4",0x376600,60000)]
for nm,off,nb in offs:
    bw=bestwidth(off,nb)
    print(nm,f"{off:#x}","best8widths",[(W,round(v,1)) for v,W in bw])
