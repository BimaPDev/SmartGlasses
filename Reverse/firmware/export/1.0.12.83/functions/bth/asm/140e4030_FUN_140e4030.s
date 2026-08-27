; FUN_140e4030 @ 0x140e4030 size=124
  orrs.w r2,r0,r1
  it eq
  bx.eq lr
  ands r3,r1,#0x80000000
  bpl 0x140e4044
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  movs.w r12,r1
  ittt eq
  mov.eq r12,r0
  mov.eq r1,r0
  mov.eq r0,#0x0
  orr r3,r3,#0x5b000000
  it eq
  sub.eq.w r3,r3,#0x10000000
  sub.w r3,r3,#0x800000
  clz r2,r12
  subs r2,#0x8
  sub.w r3,r3,r2, lsl #0x17
  blt 0x140e408c
  lsl.w r12,r1,r2
  add r3,r12
  lsl.w r12,r0,r2
  rsb.w r2,r2,#0x20
  cmp.w r12,#0x80000000
  lsr.w r2,r0,r2
  adc.w r0,r3,r2
  it eq
  bic.eq r0,r0,#0x1
  bx lr
  add.w r2,r2,#0x20
  lsl.w r12,r1,r2
  rsb.w r2,r2,#0x20
  orrs.w r0,r0,r12, lsl #0x1
  lsr.w r2,r1,r2
  adc.w r0,r3,r2
  it eq
  bic.eq.w r0,r0,r12, lsr #0x1f
  bx lr
