; FUN_2c476b58 @ 0x2c476b58 size=30
  push {r3,lr}
  ldr r3,[0x2c476b78]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476b6a
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c476b7c]
  movs r1,#0x1a
  ldr r2,[0x2c476b80]
  ldr r0,[0x2c476b84]
  bl 0x2c668484
