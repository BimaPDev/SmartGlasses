; FUN_10003d5c @ 0x10003d5c size=360
  push {r4,r5,r6,lr}
  mov.w r12,#0xff
  orr r12,r12,#0x700
  ands.w r4,r12,r1, lsr #0x14
  ittte ne
  ands.ne.w r5,r12,r3, lsr #0x14
  teq.ne.w r4,r12
  teq.ne.w r5,r12
  bl.eq 0x10003eca
  sub.w r4,r4,r5
  eor.w lr,r1,r3
  orrs.w r5,r2,r3, lsl #0xc
  lsl.w r1,r1,#0xc
  beq.w 0x10003ea0
  lsl.w r3,r3,#0xc
  mov.w r5,#0x10000000
  orr.w r3,r5,r3, lsr #0x4
  orr.w r3,r3,r2, lsr #0x18
  lsl.w r2,r2,#0x8
  orr.w r5,r5,r1, lsr #0x4
  orr.w r5,r5,r0, lsr #0x18
  lsl.w r6,r0,#0x8
  and r1,lr,#0x80000000
  cmp r5,r3
  it eq
  cmp.eq r6,r2
  adc r4,r4,#0xfd
  add.w r4,r4,#0x300
  bcs 0x10003dca
  lsrs r3,r3,#0x1
  rrx r2,r2
  subs r6,r6,r2
  sbc.w r5,r5,r3
  lsrs r3,r3,#0x1
  rrx r2,r2
  mov.w r0,#0x100000
  mov.w r12,#0x80000
  subs.w lr,r6,r2
  sbcs.w lr,r5,r3
  ittt cs
  sub.cs r6,r6,r2
  mov.cs r5,lr
  orr.cs.w r0,r0,r12
  lsrs r3,r3,#0x1
  rrx r2,r2
  subs.w lr,r6,r2
  sbcs.w lr,r5,r3
  ittt cs
  sub.cs r6,r6,r2
  mov.cs r5,lr
  orr.cs.w r0,r0,r12, lsr #0x1
  lsrs r3,r3,#0x1
  rrx r2,r2
  subs.w lr,r6,r2
  sbcs.w lr,r5,r3
  ittt cs
  sub.cs r6,r6,r2
  mov.cs r5,lr
  orr.cs.w r0,r0,r12, lsr #0x2
  lsrs r3,r3,#0x1
  rrx r2,r2
  subs.w lr,r6,r2
  sbcs.w lr,r5,r3
  ittt cs
  sub.cs r6,r6,r2
  mov.cs r5,lr
  orr.cs.w r0,r0,r12, lsr #0x3
  orrs.w lr,r5,r6
  beq 0x10003e70
  lsl.w r5,r5,#0x4
  orr.w r5,r5,r6, lsr #0x1c
  lsl.w r6,r6,#0x4
  lsl.w r3,r3,#0x3
  orr.w r3,r3,r2, lsr #0x1d
  lsl.w r2,r2,#0x3
  lsrs.w r12,r12,#0x4
  bne 0x10003dde
  tst r1,#0x100000
  bne 0x10003e7a
  orr.w r1,r1,r0
  mov.w r0,#0x0
  mov.w r12,#0x80000000
  b 0x10003dde
  tst r1,#0x100000
  itt eq
  orr.eq r1,r0
  mov.eq r0,#0x0
  subs.w r12,r4,#0xfd
  it hi
  cmp.hi.w r12,#0x700
  bhi.w 0x10003be6
  subs.w r12,r5,r3
  itt eq
  subs.eq.w r12,r6,r2
  lsrs.eq.w r12,r0,#0x1
  adcs r0,r0,#0x0
  adc.w r1,r1,r4, lsl #0x14
  pop {r4,r5,r6,pc}
  and lr,lr,#0x80000000
  orr.w r1,lr,r1, lsr #0xc
  adds.w r4,r4,r12, lsr #0x1
  ittt gt
  rsbs.gt r5,r4,r12
  orr.gt.w r1,r1,r4, lsl #0x14
  pop.gt {r4,r5,r6,pc}
  orr r1,r1,#0x100000
  mov.w lr,#0x0
  subs r4,#0x1
  b 0x10003be6
