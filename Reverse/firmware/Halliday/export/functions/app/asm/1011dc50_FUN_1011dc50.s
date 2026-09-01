; FUN_1011dc50 @ 0x1011dc50 size=26
  push {r0,r1,r2,r3}
  push {r0,r1,r2,lr}
  add r1,sp,#0x10
  ldr.w r0,[r1],#0x4
  str r1,[sp,#0x4]
  bl 0x1005d13c
  add sp,#0xc
  pop.w lr
  add sp,#0x10
  bx lr
