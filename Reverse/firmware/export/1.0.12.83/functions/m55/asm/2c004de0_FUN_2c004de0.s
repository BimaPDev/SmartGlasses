; FUN_2c004de0 @ 0x2c004de0 size=30
  ldr r2,[0x2c004e00]
  ldr.w r2,[r2,r0,lsl #0x2]
  lsls r2,r2,#0x1f
  bpl 0x2c004df2
  ldr r2,[0x2c004e04]
  ldrb r1,[r2,r0]
  cbnz r1,0x2c004dfa
  bx lr
  ldr r2,[0x2c004e08]
  ldrb r1,[r2,r0]
  cmp r1,#0x0
  beq 0x2c004df0
  b.w 0x2c003de8
