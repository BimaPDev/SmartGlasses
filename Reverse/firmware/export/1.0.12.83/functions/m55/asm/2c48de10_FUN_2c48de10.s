; FUN_2c48de10 @ 0x2c48de10 size=16
  cbz r0,0x2c48de1e
  ldrb r3,[r0,#0xc]
  cmp r3,#0x10
  bne 0x2c48de1c
  ldr r0,[r0,#0x10]
  bx lr
  movs r0,#0x0
  bx lr
