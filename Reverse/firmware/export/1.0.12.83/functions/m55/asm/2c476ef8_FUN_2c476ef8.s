; FUN_2c476ef8 @ 0x2c476ef8 size=30
  push {r3,lr}
  ldr r3,[0x2c476f18]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476f0a
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c476f1c]
  movs r1,#0xf4
  ldr r2,[0x2c476f20]
  ldr r0,[0x2c476f24]
  bl 0x2c668484
