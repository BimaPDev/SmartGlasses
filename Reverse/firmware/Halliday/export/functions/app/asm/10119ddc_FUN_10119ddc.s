; FUN_10119ddc @ 0x10119ddc size=26
  push {r2,r3}
  push {r0,r1,r2,lr}
  add r3,sp,#0x10
  ldr.w r2,[r3],#0x4
  str r3,[sp,#0x4]
  bl 0x100539c0
  add sp,#0xc
  pop.w lr
  add sp,#0x8
  bx lr
