; FUN_2c5fe11c @ 0x2c5fe11c size=30
  push {r3,lr}
  ldr r3,[0x2c5fe13c]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fe12e
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c5fe140]
  movs r1,#0x1a
  ldr r2,[0x2c5fe144]
  ldr r0,[0x2c5fe148]
  bl 0x2c668484
