import numpy as np
from PIL import Image
from widthfind import nibstream
def save(n,W,name,scale):
    r=len(n)//W; m=n[:r*W].reshape(r,W); g=(m*17).astype(np.uint8)
    Image.fromarray(g).resize((W*scale,r*scale),Image.NEAREST).save(name); print(name,m.shape)
n=nibstream(0x323f40+64,3200,True)
save(n,32,"icon_w32big.png",8)
save(n,64,"icon_w64big.png",5)
