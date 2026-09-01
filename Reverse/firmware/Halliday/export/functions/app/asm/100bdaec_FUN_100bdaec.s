; FUN_100bdaec @ 0x100bdaec size=30
  ldr r3,[0x100bdb0c]
  ldrb r2,[r3,#0x0]
  cmp r2,r0
  beq 0x100bdb02
  ldrb r2,[r3,#0x8]
  cmp r2,r0
  bne 0x100bdb06
  movs r0,#0x1
  add.w r0,r3,r0, lsl #0x3
  bx lr
  movs r0,#0x0
  b 0x100bdafc
  movs r0,#0x0
  bx lr
