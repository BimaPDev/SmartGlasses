#!/usr/bin/env python3
"""BES2700 smart-glasses firmware IDX4 image decoder + column-scan de-swizzle.

Container (confirmed, matches lv_img_dsc + the Ghidra software decoder):
  [64-byte BGRA palette][ceil(w/2)*h pixel bytes]     4bpp, 16-colour indexed.
  even x -> high nibble, odd x -> low nibble.
  data_size == 64 + ceil(w/2)*h exactly  => NO compression, pure permutation.
  The 64-byte palette is NOT swizzled; only the pixel region is permuted.

Hardware permutation (empirical, LCDC / 2-D DMA for a 112-px column-scanned panel):
  The logical row-major pixel buffer is written to flash as full-height vertical
  strips PANEL=112 px wide, each strip row-major, strips concatenated left->right.
  When w is not a multiple of 112, the *narrow* remainder strip is stored FIRST.
  De-swizzle = reverse of that.

Status: verified to reveal recognisable art on the wide images that use the panel
  permutation (146x146 location pin, 256x256 media-control dial atlas, music
  notes). Narrow strips / image tops still show residual misalignment -> the exact
  intra-strip geometry is not yet 100% pixel-perfect. See FORMAT.md.
"""
import numpy as np
from PIL import Image
FW="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
D=np.frombuffer(open(FW,'rb').read(),dtype=np.uint8)
PANEL=112

def strip_widths(w,P=PANEL):
    """Full 112-px strips left→right; leftover (w%112) is last."""
    nfull=w//P
    rem=w%P
    widths=[P]*nfull
    if rem: widths.append(rem)
    return widths

def remainder_decode(nb, w, h):
    """Unswizzle leftover strip (w % 112). nb is remainder nibbles only.

    No size-preserving permutation beat row-major on the PIN right-edge
    test (see remainder/remainder_findings.md). Identity reshape.
    """
    rem_w=w%PANEL
    if rem_w==0:
        return np.zeros((h,0),np.uint8)
    need=rem_w*h
    seg=np.asarray(nb,np.uint8).ravel()[:need]
    if len(seg)<need: seg=np.pad(seg,(0,need-len(seg)))
    return seg.reshape(h, rem_w)

def decode(fileoff,w,h,hi_first=True,panel=PANEL):
    pal=D[fileoff:fileoff+64].reshape(16,4)              # B,G,R,A (unswizzled)
    stride=(w+1)//2
    b=D[fileoff+64:fileoff+64+stride*h]
    hh=(b>>4)&0xF; ll=b&0xF
    nb=np.empty(len(b)*2,np.uint8)
    if hi_first: nb[0::2]=hh; nb[1::2]=ll
    else:        nb[0::2]=ll; nb[1::2]=hh
    idx=np.zeros((h,w),np.uint8); pos=0; x0=0
    widths=strip_widths(w,panel)
    for i,sw in enumerate(widths):
        # odd-width strip: 2*ceil(sw/2) nibbles/row, last nibble unused
        sb=(sw+1)//2
        row_nibs=sb*2
        if sw%2==0 and sw==panel:
            seg=nb[pos:pos+sw*h]
            if len(seg)<sw*h: seg=np.pad(seg,(0,sw*h-len(seg)))
            idx[:,x0:x0+sw]=seg.reshape(h,sw)
            pos+=sw*h
        elif sw==panel:
            seg=nb[pos:pos+sw*h]
            idx[:,x0:x0+sw]=seg.reshape(h,sw)
            pos+=sw*h
        else:
            # remainder: consume ceil(sw/2)*2 nibbles per row, use sw
            rows=[]
            for y in range(h):
                row=nb[pos:pos+row_nibs]
                pos+=row_nibs
                rows.append(row[:sw] if len(row)>=sw else np.pad(row,(0,sw-len(row))))
            rem_nb=np.concatenate(rows) if rows else np.zeros(0,np.uint8)
            idx[:,x0:x0+sw]=remainder_decode(rem_nb, w, h)
        x0+=sw
    R=pal[:,2][idx];G=pal[:,1][idx];B=pal[:,0][idx];A=pal[:,3][idx]
    return idx, np.dstack([R,G,B,A]).astype(np.uint8)

def save_color(fileoff,w,h,name,scale=3,bg=(30,30,40)):
    _,rgba=decode(fileoff,w,h)
    im=Image.fromarray(rgba,'RGBA'); cv=Image.new('RGB',im.size,bg)
    cv.paste(im,(0,0),im); cv.resize((w*scale,h*scale),Image.NEAREST).save(name); return name

def save_gray(fileoff,w,h,name,scale=3):
    idx,_=decode(fileoff,w,h)
    Image.fromarray((idx*17).astype(np.uint8)).resize((w*scale,h*scale),Image.NEAREST).save(name); return name

if __name__=="__main__":
    save_color(0x36d040,146,146,"OUT_pin_color.png",3);   save_gray(0x36d040,146,146,"OUT_pin_gray.png",3)
    save_gray(0x376600,256,256,"OUT_media_dials.png",2)
    print("rendered showcase outputs")
