; FUN_1012227a @ 0x1012227a size=16
  ldrh r2,[r0,#0x2]
  ldrb r3,[r0,#0x1]
  ldrb r0,[r0,#0x0]
  orr.w r3,r3,r2, lsl #0x8
  orr.w r0,r0,r3, lsl #0x8
  bx lr
