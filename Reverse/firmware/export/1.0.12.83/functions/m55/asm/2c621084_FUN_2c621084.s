; FUN_2c621084 @ 0x2c621084 size=18
  ldr r3,[0x2c621098]
  ldrb r2,[r0,#0x8]
  ldrb r3,[r3,#0x0]
  cmp r2,r3
  beq 0x2c621092
  movs r0,#0x0
  bx lr
  b.w 0x2c602410
