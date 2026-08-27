; FUN_2c5b314c @ 0x2c5b314c size=30
  ldr r0,[r0,#0x8]
  cbz r0,0x2c5b3156
  movs r1,#0x1
  b.w 0x2c606a28
  push {r4,lr}
  ldr r4,[0x2c5b3170]
  sub sp,#0x8
  ldr r3,[0x2c5b3174]
  movs r2,#0x8a
  ldr r1,[0x2c5b3178]
  movs r0,#0x4
  str r4,[sp,#0x0]
  bl 0x2c62c82c
