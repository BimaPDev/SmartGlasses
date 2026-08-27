; FUN_140e37a4 @ 0x140e37a4 size=90
  orrs.w r2,r0,r1
  it eq
  bx.eq lr
  push {r4,r5,lr}
  ands r5,r1,#0x80000000
  bpl 0x140e37ba
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  mov.w r4,#0x400
  add.w r4,r4,#0x32
  lsrs.w r12,r1,#0x16
  beq.w 0x140e357a
  mov.w r2,#0x3
  lsrs.w r12,r12,#0x3
  it ne
  add.ne r2,#0x3
  lsrs.w r12,r12,#0x3
  it ne
  add.ne r2,#0x3
  add.w r2,r2,r12, lsr #0x3
  rsb.w r3,r2,#0x20
  lsl.w r12,r0,r3
  lsr.w r0,r0,r2
  lsl.w lr,r1,r3
  orr.w r0,r0,lr
  lsr.w r1,r1,r2
  add r4,r2
  b 0x140e357a
