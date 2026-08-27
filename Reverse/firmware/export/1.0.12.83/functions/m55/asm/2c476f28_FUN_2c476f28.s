; FUN_2c476f28 @ 0x2c476f28 size=30
  push {r3,lr}
  ldr r3,[0x2c476f48]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476f3a
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c476f4c]
  movs r1,#0xfb
  ldr r2,[0x2c476f50]
  ldr r0,[0x2c476f54]
  bl 0x2c668484
