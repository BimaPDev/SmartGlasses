import numpy as np
from PIL import Image
from widthfind import nibstream

def save(m,name,scale):
    g=(m*17).astype(np.uint8)
    Image.fromarray(g).resize((m.shape[1]*scale,m.shape[0]*scale),Image.NEAREST).save(name)
    print(name,m.shape)

n=nibstream(0x323f40+64,3200,True)   # 6400 nibbles = 80*80
# row-major width 80
save(n[:6400].reshape(80,80),"icon_row80.png",4)
# column-major: fill column by column, height 80 -> reshape (80cols,80) then T
save(n[:6400].reshape(80,80).T,"icon_col80.png",4)
# maybe width 64
r=len(n)//64
save(n[:r*64].reshape(r,64),"icon_w64.png",4)
# lo-first variants
nl=nibstream(0x323f40+64,3200,False)
save(nl[:6400].reshape(80,80),"icon_row80_lo.png",4)
save(nl[:6400].reshape(80,80).T,"icon_col80_lo.png",4)
