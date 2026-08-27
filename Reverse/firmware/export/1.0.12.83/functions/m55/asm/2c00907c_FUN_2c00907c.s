; FUN_2c00907c @ 0x2c00907c size=72
  push {r4,r5}
  cbnz r2,0x2c009094
  ldr r3,[0x2c0090c4]
  ldr r4,[r1,#0x0]
  ldrb r2,[r1,#0xc]
  ldr.w r3,[r3,r0,lsl #0x2]
  str r4,[r3,#0x0]
  str.w r2,[r3,#0x88]
  pop {r4,r5}
  bx lr
  ldr r3,[0x2c0090c4]
  ldrb r5,[r1,#0xf]
  ldr r4,[r1,#0x4]
  ldrb r2,[r1,#0xd]
  ldr.w r3,[r3,r0,lsl #0x2]
  cbz r5,0x2c0090b8
  ldrb r0,[r1,#0xe]
  str r0,[r3,#0x28]
  ldrb r1,[r1,#0xf]
  orr r1,r1,#0x40000
  str r1,[r3,#0x2c]
  str r4,[r3,#0x0]
  str.w r2,[r3,#0x88]
  pop {r4,r5}
  bx lr
  str r5,[r3,#0x2c]
  str r4,[r3,#0x0]
  str.w r2,[r3,#0x88]
  pop {r4,r5}
  bx lr
