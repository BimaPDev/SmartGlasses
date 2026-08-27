import numpy as np, struct
FW="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
D=np.frombuffer(open(FW,'rb').read(),dtype=np.uint8)

def get_nibbles(pix_off, npix, nibble_hi_first=True):
    nbytes=(npix+1)//2
    b=D[pix_off:pix_off+nbytes].astype(np.uint16)
    hi=(b>>4)&0xF; lo=b&0xF
    if nibble_hi_first:
        n=np.empty(nbytes*2,dtype=np.uint8); n[0::2]=hi; n[1::2]=lo
    else:
        n=np.empty(nbytes*2,dtype=np.uint8); n[0::2]=lo; n[1::2]=hi
    return n[:npix]

def tv_score(img):
    # img is 2D uint8 indices; lower = smoother
    a=img.astype(np.int32)
    dh=np.abs(np.diff(a,axis=1)).sum()
    dv=np.abs(np.diff(a,axis=0)).sum()
    return (dh+dv)/(img.shape[0]*img.shape[1])

# Candidate: storage linear index for each output (y,x)
def decode_tiled(nib, w, h, tw, th, tile_order='row', intra='row'):
    # nib: flat storage nibbles. Build output[y,x] = nib[storage_index]
    out=np.zeros((h,w),dtype=np.uint8)
    tiles_x=(w+tw-1)//tw
    # precompute intra-tile order mapping local (ty,tx)->offset
    idx=0
    # storage order: tiles row-major, within tile per intra
    # We'll iterate storage sequentially and place pixels
    # build list of (x,y) in storage order
    ntiles_x=(w+tw-1)//tw
    ntiles_y=(h+th-1)//th
    pos=0
    N=len(nib)
    for tyi in range(ntiles_y):
        for txi in range(ntiles_x):
            x0=txi*tw; y0=tyi*th
            if intra=='row':
                order=[(yy,xx) for yy in range(th) for xx in range(tw)]
            elif intra=='col':
                order=[(yy,xx) for xx in range(tw) for yy in range(th)]
            for (yy,xx) in order:
                if pos>=N: break
                X=x0+xx; Y=y0+yy
                if X<w and Y<h:
                    out[Y,X]=nib[pos]
                pos+=1
    return out
