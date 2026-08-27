; FUN_2c4d3c34 @ 0x2c4d3c34 size=40
  ldrb r3,[r0,#0x2]
  cbz r3,0x2c4d12f0
  movs r0,#0x0
  bx lr
  adds r0,#0x14
  b.w 0x2c4d82e0
  ldrsb.w r3,[r0,#0x0]
  mov r2,r1
  cmp r3,#0x2
  bne 0x2c4d3c48
  add.w r1,r0,#0x3c
  adds r0,#0x6c
  b.w 0x2c4d12e8
  mov.w r0,#0xffffffff
  bx lr
