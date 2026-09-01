; FUN_10004238 @ 0x10004238 size=50
  cbnz r3,0x10004250
  cbnz r2,0x10004250
  cmp r1,#0x0
  it eq
  cmp.eq r0,#0x0
  itt ne
  mov.ne.w r1,#0xffffffff
  mov.ne.w r0,#0xffffffff
  b.w 0x10004550
  sub.w r12,sp,#0x8
  strd r12,lr,[sp,#-0x10]!
  bl 0x10004268
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  bx lr
  bx lr
