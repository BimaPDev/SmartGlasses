; FUN_2c5dd304 @ 0x2c5dd304 size=40
  ldr r3,[r0,#0x24]
  ldr r2,[r0,#0x14]
  cmp r3,r2
  beq 0x2c5dd318
  ldr r2,[r0,#0x28]
  cmp r3,r2
  beq 0x2c5dd31c
  ldr.w r0,[r3,#-0x4]
  bx lr
  movs r0,#0x0
  bx lr
  ldr r3,[r0,#0x30]
  ldr.w r3,[r3,#-0x4]
  add.w r3,r3,#0x200
  ldr.w r0,[r3,#-0x4]
  bx lr
