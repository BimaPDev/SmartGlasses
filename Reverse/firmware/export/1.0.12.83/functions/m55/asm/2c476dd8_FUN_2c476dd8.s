; FUN_2c476dd8 @ 0x2c476dd8 size=30
  push {r3,lr}
  ldr r3,[0x2c476df8]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476dea
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c476dfc]
  movs r1,#0x74
  ldr r2,[0x2c476e00]
  ldr r0,[0x2c476e04]
  bl 0x2c668484
