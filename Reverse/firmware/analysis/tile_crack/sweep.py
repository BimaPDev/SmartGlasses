import numpy as np
from framework import D, get_nibbles, tv_score

def decode_tiled_vec(nib, w, h, tw, th, intra='row', tile_order='row', morton=False):
    ntx=(w+tw-1)//tw; nty=(h+th-1)//th
    Wp=ntx*tw; Hp=nty*th
    Y,X=np.mgrid[0:Hp,0:Wp]
    tX=X//tw; tY=Y//th; ty=Y%th; tx=X%tw
    if tile_order=='row': tile=tY*ntx+tX
    else: tile=tX*nty+tY
    if morton:
        # interleave bits of tx,ty (assumes power of two tile)
        intra_off=np.zeros_like(tx)
        for b in range(8):
            intra_off |= ((tx>>b)&1)<<(2*b)
            intra_off |= ((ty>>b)&1)<<(2*b+1)
    elif intra=='row': intra_off=ty*tw+tx
    else: intra_off=tx*th+ty
    stor=tile*(tw*th)+intra_off
    flat=np.zeros(Wp*Hp,dtype=np.uint8)
    m=stor<len(nib)
    flat_idx=stor.ravel()
    valid=flat_idx<len(nib)
    tmp=np.zeros(Wp*Hp,dtype=np.uint8)
    tmp[valid]=nib[flat_idx[valid]]
    out=tmp.reshape(Hp,Wp)[:h,:w]
    return out

def run(name, pix_off, w, h):
    print(f"=== {name} {w}x{h} ===")
    results=[]
    for nib_hi in (True,False):
        nib=get_nibbles(pix_off, w*h + w*h, nib_hi)  # plenty
        npix_padmax=w*h*4
        nib=get_nibbles(pix_off, w*h*4, nib_hi)
        for tw,th in [(1,1),(8,8),(4,4),(16,16),(8,16),(16,8),(32,8),(8,32),(2,2),(4,8),(8,4),(32,1),(1,32),(16,1),(1,16),(64,1),(4,2),(2,4),(32,32),(4,16),(16,4)]:
            for intra in ('row','col'):
                for to in ('row','col'):
                    try:
                        img=decode_tiled_vec(nib,w,h,tw,th,intra,to)
                        s=tv_score(img)
                        results.append((s,nib_hi,tw,th,intra,to,'plain'))
                    except Exception as e:
                        pass
            # morton if power of two
            if tw in(2,4,8,16,32) and th==tw:
                img=decode_tiled_vec(nib,w,h,tw,th,morton=True)
                results.append((tv_score(img),nib_hi,tw,th,'morton','row','morton'))
    results.sort()
    for r in results[:15]:
        print(f"  tv={r[0]:.3f} nibhi={r[1]} tile={r[2]}x{r[3]} intra={r[4]} tileorder={r[5]}")
    return results

run("icon0", 0x323f40+64, 80, 80)
run("bootlogo", 0x3871c0+64, 399, 145)
