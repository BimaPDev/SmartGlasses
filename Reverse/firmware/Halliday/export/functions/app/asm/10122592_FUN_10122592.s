; FUN_10122592 @ 0x10122592 size=28
  ldrb r2,[r1,#0x1b]
  ldrb r3,[r1,#0x1a]
  cmp r0,#0x3
  orr.w r3,r3,r2, lsl #0x8
  itttt eq
  ldrb.eq r0,[r1,#0x15]
  ldrb.eq r2,[r1,#0x14]
  orr.eq.w r2,r2,r0, lsl #0x8
  orr.eq.w r3,r3,r2, lsl #0x10
  mov r0,r3
  bx lr
