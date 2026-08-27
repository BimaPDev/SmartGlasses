; FUN_2c672ae8 @ 0x2c672ae8 size=50
  cbnz r3,0x2c672b00
  cbnz r2,0x2c672b00
  cmp r1,#0x0
  it eq
  cmp.eq r0,#0x0
  itt ne
  mov.ne.w r1,#0xffffffff
  mov.ne.w r0,#0xffffffff
  b.w 0x2c672e9c
  sub.w r12,sp,#0x8
  strd r12,lr,[sp,#-0x10]!
  bl 0x2c672bb0
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  bx lr
  bx lr
