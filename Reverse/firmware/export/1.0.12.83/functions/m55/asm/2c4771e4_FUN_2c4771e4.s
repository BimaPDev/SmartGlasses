; FUN_2c4771e4 @ 0x2c4771e4 size=30
  push {r3,lr}
  ldr r3,[0x2c477204]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c4771f6
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c477208]
  movs r1,#0x40
  ldr r2,[0x2c47720c]
  ldr r0,[0x2c477210]
  bl 0x2c668484
