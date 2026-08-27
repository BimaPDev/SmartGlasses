; FUN_14097f40 @ 0x14097f40 size=42
  ldrb.w r12,[r1,#0x78]
  ldrb.w r2,[r1,#0x7c]
  strb.w r12,[r0,#0x0]
  ldrb.w r12,[r1,#0x79]
  eor r2,r2,#0x1
  strb r2,[r0,#0x4]
  strb.w r12,[r0,#0x1]
  ldrb.w r2,[r1,#0x7b]
  ldrb.w r12,[r1,#0x7a]
  strb r2,[r0,#0x3]
  strb.w r12,[r0,#0x2]
  bx lr
