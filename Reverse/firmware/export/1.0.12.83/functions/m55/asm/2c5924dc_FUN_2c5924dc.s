; FUN_2c5924dc @ 0x2c5924dc size=32
  push {r4,r5,lr}
  ldr r4,[0x2c58e95c]
  sub sp,#0xc
  ldr r3,[0x2c58e960]
  movw r2,#0x219
  str r4,[sp,#0x0]
  movs r0,#0x4
  ldr r1,[0x2c58e964]
  ldr r4,[0x2c58e968]
  str r3,[sp,#0x4]
  bl 0x2c62c82c
  ldr r0,[r0,#0x8]
  b.w 0x2c58e8d4
