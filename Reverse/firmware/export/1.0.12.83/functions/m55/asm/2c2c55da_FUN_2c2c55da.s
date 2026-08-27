; FUN_2c2c55da @ 0x2c2c55da size=38
  push {r1,r2,r3,r4,r5,r6,r7,lr}
  movs r0,r0
  str r0,[sp,#0xfc]
  movs r0,r0
  mrc2 p0,0x1,r0,cr15,cr1,0x4
  str r0,[sp,#0xfc]
  movs r0,r0
  ldr r4,[r0,r0]
  movs r0,#0xfe
  str r0,[sp,#0xfc]
  movs r0,r0
  movs r0,r0
  stmia r0,{r0,r1,r2,r3,r4,r5}
  str r0,[sp,#0xfc]
  movs r0,r0
  movs r0,r0
  b.w 0x2d0cf67e
