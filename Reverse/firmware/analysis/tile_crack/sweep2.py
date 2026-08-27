import numpy as np
from framework import D, get_nibbles
from sweep import decode_tiled_vec

def match_score(img):
    # fraction of adjacent pairs (H and V) that are EQUAL -> spatial coherence, label invariant
    h=(img[:,1:]==img[:,:-1]).mean()
    v=(img[1:,:]==img[:-1,:]).mean()
    return (h+v)/2

def baseline_chance(img):
    _,c=np.unique(img,return_counts=True); p=c/c.sum(); return (p*p).sum()

def run(name, pix_off, w, h):
    print(f"=== {name} {w}x{h}  (chance≈)===")
    nib0=get_nibbles(pix_off, w*h*4, True)
    print("  chance baseline:", round(baseline_chance(nib0[:w*h].reshape(-1)),3) if False else "")
    results=[]
    tiles=[(1,1),(8,8),(4,4),(16,16),(8,16),(16,8),(32,8),(8,32),(2,2),(4,8),(8,4),
           (32,1),(1,32),(16,1),(1,16),(64,1),(1,64),(4,2),(2,4),(32,32),(4,16),(16,4),
           (2,8),(8,2),(64,8),(8,64),(128,1),(1,128),(16,32),(32,16)]
    for nib_hi in (True,False):
        nib=get_nibbles(pix_off, w*h*4, nib_hi)
        for tw,th in tiles:
            for intra in ('row','col'):
                for to in ('row','col'):
                    img=decode_tiled_vec(nib,w,h,tw,th,intra,to)
                    results.append((match_score(img),nib_hi,tw,th,intra,to))
            if tw in(2,4,8,16,32) and th==tw:
                img=decode_tiled_vec(nib,w,h,tw,th,morton=True)
                results.append((match_score(img),nib_hi,tw,th,'morton','-'))
    results.sort(reverse=True)
    for r in results[:15]:
        print(f"  match={r[0]:.4f} nibhi={r[1]} tile={r[2]}x{r[3]} intra={r[4]} tileorder={r[5]}")
    return results

run("icon0", 0x323f40+64, 80, 80)
run("bootlogo", 0x3871c0+64, 399, 145)
