; FUN_2c5ff624 @ 0x2c5ff624 size=22
  cbz r0,0x2c5ff638
  ldr r3,[r0,#0x0]
  ldrb r3,[r3,#0x0]
  and r3,r3,#0xfd
  cmp r3,#0x1
  bne 0x2c5ff636
  ldr r0,[r0,#0x2c]
  bx lr
  movs r0,#0x0
  bx lr
