; FUN_140e3800 @ 0x140e3800 size=412
  push {r4,r5,r6,lr}
  mov.w r12,#0xff
  orr r12,r12,#0x700
  ands.w r4,r12,r1, lsr #0x14
  ittte ne
  ands.ne.w r5,r12,r3, lsr #0x14
  teq.ne.w r4,r12
  teq.ne.w r5,r12
  bl.eq 0x140e39dc
  add r4,r5
  eor.w r6,r1,r3
  bic.w r1,r1,r12, lsl #0x15
  bic.w r3,r3,r12, lsl #0x15
  orrs.w r5,r0,r1, lsl #0xc
  it ne
  orrs.ne.w r5,r2,r3, lsl #0xc
  orr r1,r1,#0x100000
  orr r3,r3,#0x100000
  beq 0x140e38b4
  umull r12,lr,r0,r2
  mov.w r5,#0x0
  umlal lr,r5,r1,r2
  and r2,r6,#0x80000000
  umlal lr,r5,r0,r3
  mov.w r6,#0x0
  umlal r5,r6,r1,r3
  teq r12,#0x0
  it ne
  orr.ne lr,lr,#0x1
  sub.w r4,r4,#0xff
  cmp.w r6,#0x200
  sbc r4,r4,#0x300
  bcs 0x140e3880
  lsls.w lr,lr,#0x1
  adcs r5,r5
  adc.w r6,r6,r6
  orr.w r1,r2,r6, lsl #0xb
  orr.w r1,r1,r5, lsr #0x15
  lsl.w r0,r5,#0xb
  orr.w r0,r0,lr, lsr #0x15
  lsl.w lr,lr,#0xb
  subs.w r12,r4,#0xfd
  it hi
  cmp.hi.w r12,#0x700
  bhi 0x140e38de
  cmp.w lr,#0x80000000
  it eq
  lsrs.eq.w lr,r0,#0x1
  adcs r0,r0,#0x0
  adc.w r1,r1,r4, lsl #0x14
  pop {r4,r5,r6,pc}
  and r6,r6,#0x80000000
  orr.w r1,r6,r1
  orr.w r0,r0,r2
  eor.w r1,r1,r3
  subs.w r4,r4,r12, lsr #0x1
  ittt gt
  rsbs.gt r5,r4,r12
  orr.gt.w r1,r1,r4, lsl #0x14
  pop.gt {r4,r5,r6,pc}
  orr r1,r1,#0x100000
  mov.w lr,#0x0
  subs r4,#0x1
  bgt.w 0x140e3a38
  cmn r4,#0x36
  ittt le
  mov.le r0,#0x0
  and.le r1,r1,#0x80000000
  pop.le {r4,r5,r6,pc}
  rsb.w r4,r4,#0x0
  subs r4,#0x20
  bge 0x140e3964
  adds r4,#0xc
  bgt 0x140e3934
  add.w r4,r4,#0x14
  rsb.w r5,r4,#0x20
  lsl.w r3,r0,r5
  lsr.w r0,r0,r4
  lsl.w r2,r1,r5
  orr.w r0,r0,r2
  and r2,r1,#0x80000000
  bic r1,r1,#0x80000000
  adds.w r0,r0,r3, lsr #0x1f
  lsr.w r6,r1,r4
  adc.w r1,r2,r6
  orrs.w lr,lr,r3, lsl #0x1
  it eq
  bic.eq.w r0,r0,r3, lsr #0x1f
  pop {r4,r5,r6,pc}
  rsb.w r4,r4,#0xc
  rsb.w r5,r4,#0x20
  lsl.w r3,r0,r4
  lsr.w r0,r0,r5
  lsl.w r2,r1,r4
  orr.w r0,r0,r2
  and r1,r1,#0x80000000
  adds.w r0,r0,r3, lsr #0x1f
  adc r1,r1,#0x0
  orrs.w lr,lr,r3, lsl #0x1
  it eq
  bic.eq.w r0,r0,r3, lsr #0x1f
  pop {r4,r5,r6,pc}
  rsb.w r5,r4,#0x20
  lsl.w r2,r0,r5
  orr.w lr,lr,r2
  lsr.w r3,r0,r4
  lsl.w r2,r1,r5
  orr.w r3,r3,r2
  lsr.w r0,r1,r4
  and r1,r1,#0x80000000
  lsr.w r2,r1,r4
  bic.w r0,r0,r2
  add.w r0,r0,r3, lsr #0x1f
  orrs.w lr,lr,r3, lsl #0x1
  it eq
  bic.eq.w r0,r0,r3, lsr #0x1f
  pop {r4,r5,r6,pc}
