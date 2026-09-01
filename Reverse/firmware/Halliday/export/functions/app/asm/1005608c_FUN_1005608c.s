; FUN_1005608c @ 0x1005608c size=42
  ldr r3,[0x100560b8]
  ldr r2,[r3,#0x0]
  cbnz r2,0x100560b2
  mov.w r1,#0x40004000
  ldr r2,[0x100560bc]
  str r1,[r2,#0x48]
  add.w r1,r1,#0x100
  str r1,[r2,#0x4c]
  ldrb.w r1,[r2,#0x50]
  str r2,[r3,#0x0]
  bic r1,r1,#0x3
  orr r1,r1,#0x3
  strb.w r1,[r2,#0x50]
  ldr r0,[r3,#0x0]
  bx lr
