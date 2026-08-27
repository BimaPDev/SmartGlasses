import numpy as np
from PIL import Image
from framework import D
def render8(off,W,nbytes,name,scale):
    b=D[off:off+nbytes]; r=len(b)//W; m=b[:r*W].reshape(r,W)
    Image.fromarray(m).resize((W*scale,r*scale),Image.NEAREST).save(name); print(name,m.shape)
def coh(off,W,nbytes):
    b=D[off:off+nbytes].astype(np.int16); r=len(b)//W; m=b[:r*W].reshape(r,W)
    return (np.abs(np.diff(m,axis=1)).mean()+np.abs(np.diff(m,axis=0)).mean())/2
for W in [56,112,144,200,224]:
    print(W,"TVgrad",round(coh(0x3871c0,W,29000),2))
render8(0x3871c0,112,29000,"e8_w112.png",3)
render8(0x3871c0,56,29000,"e8_w56.png",5)
