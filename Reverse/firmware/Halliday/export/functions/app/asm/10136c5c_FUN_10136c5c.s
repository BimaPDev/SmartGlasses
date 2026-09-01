; FUN_10136c5c @ 0x10136c5c size=28
  push {r0,r1,r2,r3,r4,r5,r6,lr}
  movs r3,#0x0
  str r0,[sp,#0x8]
  str r1,[sp,#0x10]
  str r3,[sp,#0x0]
  movs r1,#0x2b
  movs r3,#0x10
  add r2,sp,#0x8
  movs r0,#0xcb
  bl 0x100d44e4
  add sp,#0x1c
  pop.w pc
