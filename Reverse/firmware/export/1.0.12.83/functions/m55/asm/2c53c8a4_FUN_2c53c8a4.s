; FUN_2c53c8a4 @ 0x2c53c8a4 size=38
  ldr r0,[r0,#0x28]
  cbz r0,0x2c53c8b4
  cbz r1,0x2c53c8ae
  b.w 0x2c638730
  ldr r1,[0x2c53c8d0]
  b.w 0x2c638730
  push {r4,lr}
  ldr r4,[0x2c53c8d4]
  sub sp,#0x8
  ldr r3,[0x2c53c8d8]
  mov.w r2,#0x16c
  ldr r1,[0x2c53c8dc]
  movs r0,#0x4
  str r4,[sp,#0x0]
  bl 0x2c62c82c
