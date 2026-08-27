; FUN_2c1427e8 @ 0x2c1427e8 size=16
  mov r3,r0
  ldrb.w r2,[r3],#0x1
  cmp r2,#0x0
  bne 0x2c1427ea
  subs r0,r3,r0
  subs r0,#0x1
  bx lr
