; FUN_2c477214 @ 0x2c477214 size=30
  push {r3,lr}
  ldr r3,[0x2c477234]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c477226
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c477238]
  movs r1,#0x47
  ldr r2,[0x2c47723c]
  ldr r0,[0x2c477240]
  bl 0x2c668484
