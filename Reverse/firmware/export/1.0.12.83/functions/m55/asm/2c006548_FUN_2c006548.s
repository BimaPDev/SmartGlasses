; FUN_2c006548 @ 0x2c006548 size=44
  adds r0,#0x18
  strb r2,[r3,r1]
  add.w r3,r3,r5, lsr #0x1
  ldrb r2,[r7,#0xd]
  ldrb r1,[r7,#0x9]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x1]
  ldrb.w r2,[r3,#-0x2]
  ldrb r1,[r7,#0x11]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x2]
  b 0x2c005ee0
