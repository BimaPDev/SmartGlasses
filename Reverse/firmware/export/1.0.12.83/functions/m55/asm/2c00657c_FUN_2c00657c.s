; FUN_2c00657c @ 0x2c00657c size=34
  lsls r7,r1,#0xc
  orr.w r3,r3,r2, lsr #0x4
  ldr.w r2,[r8,#0x18]
  strb r3,[r2,r1]
  add.w r2,r2,r5, lsr #0x1
  ldrb r3,[r7,#0xd]
  ldrb r1,[r7,#0x9]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  b 0x2c005ee0
