; FUN_140e3d60 @ 0x140e3d60 size=78
  lsl.w r2,r1,#0x1
  adds.w r2,r2,#0x200000
  bcs 0x140e3d96
  bpl 0x140e3d90
  mvn r3,#0x3e0
  subs.w r2,r3,r2, asr #0x15
  bls 0x140e3d9c
  lsl.w r3,r1,#0xb
  orr r3,r3,#0x80000000
  orr.w r3,r3,r0, lsr #0x15
  tst r1,#0x80000000
  lsr.w r0,r3,r2
  it ne
  rsb.ne r0,r0
  bx lr
  mov.w r0,#0x0
  bx lr
  orrs.w r0,r0,r1, lsl #0xc
  bne 0x140e3da8
  ands r0,r1,#0x80000000
  it eq
  mvn.eq r0,#0x80000000
  bx lr
  mov.w r0,#0x0
  bx lr
