; FUN_140e3d34 @ 0x140e3d34 size=44
  lsl.w r12,r1,#0x1
  mvns.w r12,r12, asr #0x15
  bne 0x140e3d44
  orrs.w r12,r0,r1, lsl #0xc
  bne 0x140e3d5a
  lsl.w r12,r3,#0x1
  mvns.w r12,r12, asr #0x15
  bne 0x140e3d54
  orrs.w r12,r2,r3, lsl #0xc
  bne 0x140e3d5a
  mov.w r0,#0x0
  bx lr
  mov.w r0,#0x1
  bx lr
