; FUN_2c476a54 @ 0x2c476a54 size=30
  push {r3,lr}
  ldr r3,[0x2c476a74]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476a66
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c476a78]
  movs r1,#0x13
  ldr r2,[0x2c476a7c]
  ldr r0,[0x2c476a80]
  bl 0x2c668484
