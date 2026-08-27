; FUN_2c5f6a78 @ 0x2c5f6a78 size=16
  movs r3,#0x0
  ldr r2,[r0,#0x8]
  cmp r2,r3
  str r3,[r0,#0xc]
  ble 0x2c5f6a86
  ldr r2,[r0,#0x4]
  strb r3,[r2,#0x0]
  bx lr
