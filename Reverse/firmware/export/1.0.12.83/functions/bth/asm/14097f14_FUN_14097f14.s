; FUN_14097f14 @ 0x14097f14 size=42
  ldrb.w r12,[r1,#0x6c]
  ldrb.w r2,[r1,#0x70]
  strb.w r12,[r0,#0x0]
  ldrb.w r12,[r1,#0x6d]
  eor r2,r2,#0x1
  strb r2,[r0,#0x4]
  strb.w r12,[r0,#0x1]
  ldrb.w r2,[r1,#0x6f]
  ldrb.w r12,[r1,#0x6e]
  strb r2,[r0,#0x3]
  strb.w r12,[r0,#0x2]
  bx lr
