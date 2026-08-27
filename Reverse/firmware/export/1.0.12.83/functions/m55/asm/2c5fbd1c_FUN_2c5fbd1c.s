; FUN_2c5fbd1c @ 0x2c5fbd1c size=28
  push {r3,lr}
  ldr r3,[r0,#0x0]
  cmp r3,r2
  bne 0x2c5fbd2e
  pop.w {r3,lr}
  b.w 0x2c47573c
  ldr r3,[0x2c5fbd40]
  movs r1,#0x34
  ldr r2,[0x2c5fbd44]
  ldr r0,[0x2c5fbd48]
  bl 0x2c668484
