; FUN_10003a58 @ 0x10003a58 size=66
  lsls r2,r0,#0x1
  asr.w r1,r2, asr #0x3
  rrx r1,r1
  lsl.w r0,r2,#0x1c
  itttt ne
  ands.ne r3,r2,#0xff000000
  teq.ne r3,#0xff000000
  eor.ne r1,r1,#0x38000000
  bx.ne lr
  bics r2,r2,#0xff000000
  it eq
  bx.eq lr
  teq r3,#0xff000000
  itt eq
  orr.eq r1,r1,#0x80000
  bx.eq lr
  push {r4,r5,lr}
  mov.w r4,#0x380
  and r5,r1,#0x80000000
  bic r1,r1,#0x80000000
  b 0x100038d4
