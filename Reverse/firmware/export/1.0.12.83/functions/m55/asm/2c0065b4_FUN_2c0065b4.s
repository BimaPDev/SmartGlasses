; FUN_2c0065b4 @ 0x2c0065b4 size=76
  strb r3,[r1,r0]
  ldrb.w r3,[r2,#-0x1]
  ldrb r1,[r7,#0x9]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  b 0x2c005ee0
  ldr r3,[0x2c0066bc]
  movs r0,#0x3
  ldr r1,[0x2c0066b0]
  str r3,[sp,#0x0]
  ldr r3,[0x2c0066ac]
  strd r4,r2,[sp,#0x4]
  movw r2,#0x171
  bl 0x2c013c4c
  b 0x2c005ff4
  ldrb r3,[r7,#0x1]
  lsrs r2,r2,#0x1
  ldr.w r0,[r8,#0x18]
  bic r1,r3,#0xf
  ldrb r3,[r0,r2]
  and r3,r3,#0xf
  orrs r3,r1
  strb r3,[r0,r2]
  b 0x2c005ee0
  ldrb r3,[r3,#0x0]
  lsr.w lr,lr,#0x1
