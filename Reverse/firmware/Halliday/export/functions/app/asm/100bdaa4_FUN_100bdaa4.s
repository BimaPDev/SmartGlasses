; FUN_100bdaa4 @ 0x100bdaa4 size=30
  ldr r3,[0x100bdac4]
  ldrb r2,[r3,#0x0]
  cmp r2,r0
  beq 0x100bdaba
  ldrb r2,[r3,#0x8]
  cmp r2,r0
  bne 0x100bdabe
  movs r0,#0x1
  add.w r0,r3,r0, lsl #0x3
  bx lr
  movs r0,#0x0
  b 0x100bdab4
  movs r0,#0x0
  bx lr
