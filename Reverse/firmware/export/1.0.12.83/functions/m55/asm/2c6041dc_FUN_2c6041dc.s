; FUN_2c6041dc @ 0x2c6041dc size=30
  ldr r0,[r0,#0x8]
  cbz r0,0x2c6041f8
  cmp r1,#0x0
  ldr r3,[r0,#0x4]
  blt 0x2c6041f2
  cmp r1,r3
  bcs 0x2c6041f6
  ldr r3,[r0,#0x0]
  ldr.w r0,[r3,r1,lsl #0x2]
  bx lr
  adds r1,r1,r3
  bpl 0x2c6041e6
  movs r0,#0x0
  bx lr
