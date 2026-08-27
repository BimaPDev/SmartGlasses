; FUN_2c6025b4 @ 0x2c6025b4 size=68
  ldr r0,[r0,#0x8]
  cbz r0,0x2c6025f2
  ldrb.w r12,[r0,#0x1a]
  ands r12,r12,#0x3f
  beq 0x2c6025f4
  add.w r12,r12,r12, lsl #0x1
  movs r3,#0x0
  push {r4}
  ldr r4,[r0,#0xc]
  mov r2,r4
  b 0x2c6025d8
  cmp r3,r12
  add.w r2,r2,#0xc
  beq 0x2c6025ea
  ldr.w r0,[r4,r3,lsl #0x2]
  adds r3,#0x3
  cmp r0,r1
  bne 0x2c6025d0
  ldr r0,[r2,#0x4]
  pop.w r4
  bx lr
  movs r0,#0x0
  pop.w r4
  bx lr
  bx lr
  mov r0,r12
  bx lr
