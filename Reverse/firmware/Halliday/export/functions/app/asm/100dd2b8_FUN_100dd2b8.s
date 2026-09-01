; FUN_100dd2b8 @ 0x100dd2b8 size=32
  ldr r3,[0x100dd2d8]
  ldrb r2,[r3,#0x4]
  cmp r2,r0
  beq 0x100dd2d0
  ldrb r2,[r3,#0x18]
  cmp r2,r0
  bne 0x100dd2d4
  movs r0,#0x1
  movs r2,#0x14
  mla r0,r2,r0,r3
  bx lr
  movs r0,#0x0
  b 0x100dd2c8
  movs r0,#0x0
  bx lr
