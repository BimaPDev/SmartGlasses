; FUN_2c614f2c @ 0x2c614f2c size=18
  subs r0,#0x4
  uxtb r0,r0
  cmp r0,#0xa
  bhi 0x2c614f3a
  ldr r3,[0x2c614f40]
  ldrb r0,[r3,r0]
  bx lr
  movs r0,#0x0
  bx lr
