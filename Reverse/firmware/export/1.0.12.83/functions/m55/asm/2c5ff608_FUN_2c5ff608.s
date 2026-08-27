; FUN_2c5ff608 @ 0x2c5ff608 size=28
  cbz r0,0x2c5ff622
  ldr r3,[r0,#0x0]
  ldrb r3,[r3,#0x0]
  and r3,r3,#0xfd
  cmp r3,#0x1
  bne 0x2c5ff620
  ldrb.w r0,[r0,#0x40]
  and r0,r0,#0xf
  bx lr
  movs r0,#0x0
  bx lr
