; FUN_2c476e1c @ 0x2c476e1c size=34
  cbz r0,0x2c476e30
  ldr r2,[0x2c476e40]
  push {r3,lr}
  ldr r3,[r0,#0x0]
  cmp r3,r2
  bne 0x2c476e32
  pop.w {r3,lr}
  b.w 0x2c47573c
  bx lr
  ldr r3,[0x2c476e44]
  movs r1,#0x8e
  ldr r2,[0x2c476e48]
  ldr r0,[0x2c476e4c]
  bl 0x2c668484
