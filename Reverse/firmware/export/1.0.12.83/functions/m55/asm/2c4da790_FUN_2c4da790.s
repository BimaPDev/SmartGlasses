; FUN_2c4da790 @ 0x2c4da790 size=46
  cbz r1,0x2c4da7b0
  movs r2,#0x0
  ldr.w r3,[r0],#0x4
  subs r1,#0x1
  eor.w r3,r3,r3, asr #0x1f
  orr.w r2,r2,r3
  bne 0x2c4da794
  clz r0,r2
  subs r0,#0x1
  bic.w r0,r0,r0, asr #0x1f
  bx lr
  mov r2,r1
  clz r0,r2
  subs r0,#0x1
  bic.w r0,r0,r0, asr #0x1f
  bx lr
