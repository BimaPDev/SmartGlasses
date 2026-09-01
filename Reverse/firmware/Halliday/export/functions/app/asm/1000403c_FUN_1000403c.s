; FUN_1000403c @ 0x1000403c size=44
  lsl.w r12,r1,#0x1
  mvns.w r12,r12, asr #0x15
  bne 0x1000404c
  orrs.w r12,r0,r1, lsl #0xc
  bne 0x10004062
  lsl.w r12,r3,#0x1
  mvns.w r12,r12, asr #0x15
  bne 0x1000405c
  orrs.w r12,r2,r3, lsl #0xc
  bne 0x10004062
  mov.w r0,#0x0
  bx lr
  mov.w r0,#0x1
  bx lr
