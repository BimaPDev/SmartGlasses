; FUN_2c53c8e0 @ 0x2c53c8e0 size=38
  ldr r0,[r0,#0x2c]
  cbz r0,0x2c53c8f0
  cbz r1,0x2c53c8ea
  b.w 0x2c638730
  ldr r1,[0x2c53c90c]
  b.w 0x2c638730
  push {r4,lr}
  ldr r4,[0x2c53c910]
  sub sp,#0x8
  ldr r3,[0x2c53c914]
  mov.w r2,#0x174
  ldr r1,[0x2c53c918]
  movs r0,#0x4
  str r4,[sp,#0x0]
  bl 0x2c62c82c
