; FUN_2c645d70 @ 0x2c645d70 size=20
  ldrb.w r3,[r0,#0x22]
  ldr r0,[r0,#0x38]
  tst r3,#0x10
  ite eq
  mov.eq r3,#0x60
  mov.ne r3,#0x20
  add r0,r3
  bx lr
