; FUN_140e414c @ 0x140e414c size=50
  cbnz r3,0x140e4164
  cbnz r2,0x140e4164
  cmp r1,#0x0
  it eq
  cmp.eq r0,#0x0
  itt ne
  mov.ne.w r1,#0xffffffff
  mov.ne.w r0,#0xffffffff
  b.w 0x140e453c
  sub.w r12,sp,#0x8
  strd r12,lr,[sp,#-0x10]!
  bl 0x140e4250
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  bx lr
  bx lr
