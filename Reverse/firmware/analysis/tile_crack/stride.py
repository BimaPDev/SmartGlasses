import numpy as np
from framework import D

def stride_scan(pix_off, nbytes, smax):
    b=D[pix_off:pix_off+nbytes].astype(np.int16)
    print(f"  data bytes={nbytes}")
    best=[]
    for S in range(1,smax):
        nrows=len(b)//S
        if nrows<3: continue
        m=b[:nrows*S].reshape(nrows,S)
        # vertical coherence: fraction of equal bytes between adjacent rows
        eq=(m[1:]==m[:-1]).mean()
        best.append((eq,S))
    best.sort(reverse=True)
    for e,S in best[:12]:
        print(f"   stride={S:4d} byteEq={e:.4f}")

print("ICON pixel data (skip 64 palette):")
stride_scan(0x323f40+64, 3200, 200)
print("BOOT pixel data (skip 64 palette):")
stride_scan(0x3871c0+64, 29000, 420)
