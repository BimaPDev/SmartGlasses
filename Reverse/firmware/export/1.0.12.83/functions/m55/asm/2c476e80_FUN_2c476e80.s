; FUN_2c476e80 @ 0x2c476e80 size=30
  push {r3,lr}
  ldr r3,[0x2c476ea0]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476e92
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c476ea4]
  movs r1,#0xce
  ldr r2,[0x2c476ea8]
  ldr r0,[0x2c476eac]
  bl 0x2c668484
