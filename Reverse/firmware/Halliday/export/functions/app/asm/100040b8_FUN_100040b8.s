; FUN_100040b8 @ 0x100040b8 size=64
  lsls r2,r1,#0x1
  bcs 0x100040e0
  adds.w r2,r2,#0x200000
  bcs 0x100040e6
  bpl 0x100040e0
  mvn r3,#0x3e0
  subs.w r2,r3,r2, asr #0x15
  bmi 0x100040ec
  lsl.w r3,r1,#0xb
  orr r3,r3,#0x80000000
  orr.w r3,r3,r0, lsr #0x15
  lsr.w r0,r3,r2
  bx lr
  mov.w r0,#0x0
  bx lr
  orrs.w r0,r0,r1, lsl #0xc
  bne 0x100040f2
  mov.w r0,#0xffffffff
  bx lr
  mov.w r0,#0x0
  bx lr
