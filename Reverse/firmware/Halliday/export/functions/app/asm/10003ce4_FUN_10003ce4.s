; FUN_10003ce4 @ 0x10003ce4 size=184
  teq r4,#0x0
  bne 0x10003cca
  and r6,r1,#0x80000000
  lsls r0,r0,#0x1
  adc.w r1,r1,r1
  tst r1,#0x100000
  it eq
  sub.eq r4,#0x1
  beq 0x10003cae
  orr.w r1,r1,r6
  teq r5,#0x0
  it ne
  bx.ne lr
  and r6,r3,#0x80000000
  lsls r2,r2,#0x1
  adc.w r3,r3,r3
  tst r3,#0x100000
  it eq
  sub.eq r5,#0x1
  beq 0x10003cce
  orr.w r3,r3,r6
  bx lr
  teq.w r4,r12
  and.w r5,r12,r3, lsr #0x14
  it ne
  teq.ne.w r5,r12
  beq 0x10003d0e
  orrs.w r6,r0,r1, lsl #0x1
  it ne
  orrs.ne.w r6,r2,r3, lsl #0x1
  bne 0x10003ca4
  eor.w r1,r1,r3
  and r1,r1,#0x80000000
  mov.w r0,#0x0
  pop {r4,r5,r6,pc}
  orrs.w r6,r0,r1, lsl #0x1
  itte eq
  mov.eq r0,r2
  mov.eq r1,r3
  orrs.ne.w r6,r2,r3, lsl #0x1
  beq 0x10003d52
  teq.w r4,r12
  bne 0x10003d2a
  orrs.w r6,r0,r1, lsl #0xc
  bne 0x10003d52
  teq.w r5,r12
  bne 0x10003d3c
  orrs.w r6,r2,r3, lsl #0xc
  itt ne
  mov.ne r0,r2
  mov.ne r1,r3
  bne 0x10003d52
  eor.w r1,r1,r3
  and r1,r1,#0x80000000
  orr r1,r1,#0x7f000000
  orr r1,r1,#0xf00000
  mov.w r0,#0x0
  pop {r4,r5,r6,pc}
  orr r1,r1,#0x7f000000
  orr r1,r1,#0xf80000
  pop {r4,r5,r6,pc}
