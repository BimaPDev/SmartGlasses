; FUN_2c5fecd0 @ 0x2c5fecd0 size=30
  push {r3,lr}
  ldr r3,[0x2c5fecf0]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fece2
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c5fecf4]
  movs r1,#0x1a
  ldr r2,[0x2c5fecf8]
  ldr r0,[0x2c5fecfc]
  bl 0x2c668484
