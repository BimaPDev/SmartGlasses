; FUN_2c47716c @ 0x2c47716c size=30
  push {r3,lr}
  ldr r3,[0x2c47718c]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c47717e
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c477190]
  movs r1,#0x1a
  ldr r2,[0x2c477194]
  ldr r0,[0x2c477198]
  bl 0x2c668484
