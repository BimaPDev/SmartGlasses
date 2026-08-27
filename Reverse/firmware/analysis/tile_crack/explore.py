import struct
FW="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
d=open(FW,'rb').read()
print("fw len", len(d))

def desc(off):
    hdr,ds,ptr=struct.unpack("<III", d[off:off+12])
    cf=hdr&0x1F; w=(hdr>>10)&0x7FF; h=(hdr>>21)&0x7FF
    print(f"desc@{off:#x}: hdr={hdr:#x} cf={cf} w={w} h={h} data_size={ds} data_ptr={ptr:#x} fileoff={ptr-0x3C000000:#x}")
    return cf,w,h,ds,ptr-0x3C000000

desc(0x3af594)  # boot logo
desc(0x323f40)  # icon
desc(0x30fdc0)
desc(0x317340)
