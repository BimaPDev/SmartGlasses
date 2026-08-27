; FUN_140e40ac @ 0x140e40ac size=160
  cbnz r3,0x140e40ce
  cbnz r2,0x140e40ce
  cmp r1,#0x0
  ittt lt
  mov.lt r0,#0x0
  mov.lt.w r1,#0x80000000
  b.lt 0x140e40ca
  it eq
  cmp.eq r0,#0x0
  itt ne
  mvn.ne r1,#0x80000000
  mov.ne.w r0,#0xffffffff
  b.w 0x140e453c
  sub.w r12,sp,#0x8
  strd r12,lr,[sp,#-0x10]!
  cmp r1,#0x0
  blt 0x140e40ee
  cmp r3,#0x0
  blt 0x140e4114
  bl 0x140e4250
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  bx lr
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  cmp r3,#0x0
  blt 0x140e4130
  bl 0x140e4250
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bx lr
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bl 0x140e4250
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  bx lr
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bl 0x140e4250
  ldr.w lr,[sp,#0x4]
  ldrd r2,r3,[sp,#0x8]
  add sp,#0x10
  rsbs r2,r2
  sbc.w r3,r3,r3, lsl #0x1
  bx lr
