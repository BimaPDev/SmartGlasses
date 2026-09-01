; FUN_10122306 @ 0x10122306 size=28
  mov r2,r0
  add.w r1,r0,#0xb
  movs r0,#0x0
  ldrb.w r3,[r2],#0x1
  add.w r3,r3,r0, lsr #0x1
  add.w r3,r3,r0, lsl #0x7
  cmp r2,r1
  uxtb r0,r3
  bne 0x1012230e
  bx lr
