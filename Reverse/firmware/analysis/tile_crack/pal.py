FW="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/x_1.0.12.83/platform_tester.bin"
d=open(FW,'rb').read()
def showpal(off,name):
    print(f"--- {name} palette @ {off:#x} (16 entries, 4 bytes each) ---")
    for i in range(16):
        b=d[off+i*4:off+i*4+4]
        print(f"  [{i:2d}] {b.hex()}  B={b[0]} G={b[1]} R={b[2]} A={b[3]}")
showpal(0x3871c0,"boot logo")
showpal(0x323f40,"icon0")
