; FUN_1400168c @ 0x1400168c size=24
  ldr r0,[0x140016a4]
  ldr r3,[r0,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x1400168e
  ldr r3,[r0,#0x4]
  orr.w r1,r1,r2, lsl #0x8
  bic r3,r3,#0x1
  str r3,[r0,#0x4]
  str r1,[r0,#0x0]
  bx lr
