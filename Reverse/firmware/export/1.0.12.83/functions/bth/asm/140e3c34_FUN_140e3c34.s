; FUN_140e3c34 @ 0x140e3c34 size=122
  mov.w r12,#0x1
  push.w r12
  lsl.w r12,r1,#0x1
  mvns.w r12,r12, asr #0x15
  lsl.w r12,r3,#0x1
  it ne
  mvns.ne.w r12,r12, asr #0x15
  beq 0x140e3c88
  add sp,#0x4
  orrs.w r12,r0,r1, lsl #0x1
  ite eq
  orrs.eq.w r12,r2,r3, lsl #0x1
  teq.ne.w r1,r3
  ittt eq
  teq.eq.w r0,r2
  mov.eq r0,#0x0
  bx.eq lr
  cmn r0,#0x0
  teq.w r1,r3
  it pl
  cmp.pl r1,r3
  it eq
  cmp.eq r0,r2
  ite cs
  asr.cs r0,r3,#0x1f
  mvn.cc.w r0,r3, asr #0x1f
  orr r0,r0,#0x1
  bx lr
  lsl.w r12,r1,#0x1
  mvns.w r12,r12, asr #0x15
  bne 0x140e3c98
  orrs.w r12,r0,r1, lsl #0xc
  bne 0x140e3ca8
  lsl.w r12,r3,#0x1
  mvns.w r12,r12, asr #0x15
  bne 0x140e3c50
  orrs.w r12,r2,r3, lsl #0xc
  beq 0x140e3c50
  pop.w r0
  bx lr
