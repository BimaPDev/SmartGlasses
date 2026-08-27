; FUN_2c478cfc @ 0x2c478cfc size=28
  push {r4,lr}
  bl 0x2c478b68
  ldr r3,[0x2c478d18]
  str r0,[r3,#0x0]
  cbz r0,0x2c478d16
  ldr r3,[r0,#0x30]
  movs r1,#0x32
  ldr r2,[0x2c478d1c]
  ldr r0,[0x2c478d20]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
