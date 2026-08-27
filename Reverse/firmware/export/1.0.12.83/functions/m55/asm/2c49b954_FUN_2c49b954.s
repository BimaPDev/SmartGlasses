; FUN_2c49b954 @ 0x2c49b954 size=18
  ldr r3,[0x2c49b968]
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  bge 0x2c49b960
  ldr r3,[0x2c49b96c]
  ldr r3,[r3,#0x0]
  str r3,[r0,#0x0]
  movs r0,#0x0
  bx lr
