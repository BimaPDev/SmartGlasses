; FUN_100040f8 @ 0x100040f8 size=158
  lsl.w r2,r1,#0x1
  subs.w r3,r2,#0x70000000
  itt cs
  subs.cs.w r12,r3,#0x200000
  rsbs.cs.w r12,r12,#0x1fc00000
  bls 0x10004128
  and r12,r1,#0x80000000
  lsl.w r2,r0,#0x3
  orr.w r0,r12,r0, lsr #0x1d
  cmp.w r2,#0x80000000
  adc.w r0,r0,r3, lsl #0x2
  it eq
  bic.eq r0,r0,#0x1
  bx lr
  tst r1,#0x40000000
  bne 0x10004172
  adds.w r2,r3,#0x2e00000
  itt lt
  and.lt r0,r1,#0x80000000
  bx.lt lr
  orr r1,r1,#0x100000
  lsr.w r2,r2,#0x15
  rsb.w r2,r2,#0x18
  rsb.w r12,r2,#0x20
  lsls.w r3,r0,r12
  lsr.w r0,r0,r2
  it ne
  orr.ne r0,r0,#0x1
  lsl.w r3,r1,#0xb
  lsr.w r3,r3,#0xb
  lsl.w r12,r3,r12
  orr.w r0,r0,r12
  lsr.w r3,r3,r2
  lsl.w r3,r3,#0x1
  b 0x1000410c
  mvns.w r3,r2, asr #0x15
  bne 0x10004188
  orrs.w r3,r0,r1, lsl #0xc
  ittt ne
  mov.ne.w r0,#0x7f000000
  orr.ne r0,r0,#0xc00000
  bx.ne lr
  and r0,r1,#0x80000000
  orr r0,r0,#0x7f000000
  orr r0,r0,#0x800000
  bx lr
