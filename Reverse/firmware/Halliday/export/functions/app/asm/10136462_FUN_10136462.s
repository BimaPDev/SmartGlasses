; FUN_10136462 @ 0x10136462 size=30
  push {r0,r1,r2,lr}
  subs r1,r0,#0x0
  str r1,[sp,#0x4]
  blt 0x1013647a
  bl 0x10115464
  ldr r1,[sp,#0x4]
  add sp,#0xc
  pop.w lr
  b.w 0x10115194
  add sp,#0xc
  pop.w pc
