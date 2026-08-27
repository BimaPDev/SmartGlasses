; FUN_2c476e50 @ 0x2c476e50 size=30
  push {r3,lr}
  ldr r3,[0x2c476e70]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476e62
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c476e74]
  movs r1,#0xc7
  ldr r2,[0x2c476e78]
  ldr r0,[0x2c476e7c]
  bl 0x2c668484
