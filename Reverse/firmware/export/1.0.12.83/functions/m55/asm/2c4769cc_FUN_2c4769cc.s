; FUN_2c4769cc @ 0x2c4769cc size=30
  push {r3,lr}
  ldr r3,[0x2c4769ec]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c4769de
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c4769f0]
  movs r1,#0x47
  ldr r2,[0x2c4769f4]
  ldr r0,[0x2c4769f8]
  bl 0x2c668484
