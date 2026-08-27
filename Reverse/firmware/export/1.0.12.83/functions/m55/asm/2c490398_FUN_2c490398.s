; FUN_2c490398 @ 0x2c490398 size=24
  ldr r3,[0x2c4903b0]
  ldr r2,[r3,#0x0]
  cmp r2,#0x7
  ble 0x2c4903ac
  ldr r0,[r3,#0x0]
  cmp r0,#0x11
  ite gt
  mov.gt r0,#0x0
  mov.le r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
