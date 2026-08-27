; FUN_2c44f4c8 @ 0x2c44f4c8 size=38
  ldr r6,[0x2c44f1ac]
  subs r5,#0xb6
  add r7,sp
  b 0x2c44e7fc
  ldr.w r1,[r6,#0x1cf]
  vtst.16 d17,d11,d14
  blt 0x2c44ee0c
  lsrs r5,r2,#0x20
  b.w 0x2b8f814a
  push {r0,r1,r3,lr}
  str r5,[sp,#0x244]
  str r4,[sp,#0x244]
  sub sp,#0xfc
  str r6,[r6,r6]
  revsh r2,r6
  b 0x2c44ee56
