; FUN_2c5fed6c @ 0x2c5fed6c size=30
  push {r3,lr}
  ldr r3,[0x2c5fed8c]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fed7e
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c5fed90]
  movs r1,#0x13
  ldr r2,[0x2c5fed94]
  ldr r0,[0x2c5fed98]
  bl 0x2c668484
