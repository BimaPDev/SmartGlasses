; FUN_2c5fed9c @ 0x2c5fed9c size=30
  push {r3,lr}
  ldr r3,[0x2c5fedbc]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fedae
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c5fedc0]
  movs r1,#0x1a
  ldr r2,[0x2c5fedc4]
  ldr r0,[0x2c5fedc8]
  bl 0x2c668484
