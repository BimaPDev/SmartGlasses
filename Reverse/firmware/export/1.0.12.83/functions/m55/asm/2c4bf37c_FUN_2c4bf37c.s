; FUN_2c4bf37c @ 0x2c4bf37c size=34
  push {r3,lr}
  ldr r3,[0x2c4bf3a0]
  movs r1,#0x0
  ldr.w r2,[r3,#0x1c4]
  str.w r1,[r3,#0x1c4]
  lsls r3,r2,#0xa
  bmi 0x2c4bf390
  pop {r3,pc}
  ldr r0,[0x2c4bf3a4]
  bl 0x2c674598
  pop.w {r3,lr}
  b.w 0x2c49742c
