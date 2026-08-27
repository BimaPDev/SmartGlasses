; FUN_14097ee8 @ 0x14097ee8 size=42
  ldrb.w r12,[r1,#0x60]
  ldrb.w r2,[r1,#0x64]
  strb.w r12,[r0,#0x0]
  ldrb.w r12,[r1,#0x61]
  eor r2,r2,#0x1
  strb r2,[r0,#0x4]
  strb.w r12,[r0,#0x1]
  ldrb.w r2,[r1,#0x63]
  ldrb.w r12,[r1,#0x62]
  strb r2,[r0,#0x3]
  strb.w r12,[r0,#0x2]
  bx lr
