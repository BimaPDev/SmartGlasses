; FUN_1013cbc2 @ 0x1013cbc2 size=20
  push {r0,r1,r2,lr}
  str r0,[sp,#0x4]
  bl 0x1011368c
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w lr
  b.w 0x10068240
