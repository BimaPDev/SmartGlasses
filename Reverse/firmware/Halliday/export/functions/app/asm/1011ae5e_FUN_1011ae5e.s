; FUN_1011ae5e @ 0x1011ae5e size=26
  push {r1,r2,r3}
  push {r0,r1,lr}
  add r2,sp,#0xc
  ldr.w r1,[r2],#0x4
  str r2,[sp,#0x4]
  bl 0x100593bc
  add sp,#0x8
  pop.w lr
  add sp,#0xc
  bx lr
