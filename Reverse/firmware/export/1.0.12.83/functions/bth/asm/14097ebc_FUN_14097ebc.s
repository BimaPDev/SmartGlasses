; FUN_14097ebc @ 0x14097ebc size=42
  ldrb.w r12,[r1,#0x30]
  ldrb.w r2,[r1,#0x34]
  strb.w r12,[r0,#0x0]
  ldrb.w r12,[r1,#0x31]
  eor r2,r2,#0x1
  strb r2,[r0,#0x4]
  strb.w r12,[r0,#0x1]
  ldrb.w r2,[r1,#0x33]
  ldrb.w r12,[r1,#0x32]
  strb r2,[r0,#0x3]
  strb.w r12,[r0,#0x2]
  bx lr
