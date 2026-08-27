; FUN_2c53d3f4 @ 0x2c53d3f4 size=38
  ldr r0,[r0,#0x5c]
  cbz r0,0x2c53d404
  cbz r1,0x2c53d3fe
  b.w 0x2c638730
  ldr r1,[0x2c53d420]
  b.w 0x2c638730
  push {r4,lr}
  ldr r4,[0x2c53d424]
  sub sp,#0x8
  ldr r3,[0x2c53d428]
  movw r2,#0x413
  ldr r1,[0x2c53d42c]
  movs r0,#0x4
  str r4,[sp,#0x0]
  bl 0x2c62c82c
