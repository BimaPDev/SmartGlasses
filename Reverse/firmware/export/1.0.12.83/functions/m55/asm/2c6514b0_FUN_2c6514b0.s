; FUN_2c6514b0 @ 0x2c6514b0 size=20
  ldr r3,[0x2c6514c4]
  cmp r0,r3
  beq 0x2c6514c2
  movs r3,#0x0
  str r1,[r0,#0x0]
  str r3,[r0,#0x8]
  add.w r0,r0,r1, lsl #0x2
  str r3,[r0,#0xc]
  bx lr
