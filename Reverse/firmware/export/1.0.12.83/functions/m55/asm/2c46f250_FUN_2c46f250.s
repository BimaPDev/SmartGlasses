; FUN_2c46f250 @ 0x2c46f250 size=18
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f260
  ldr r3,[r0,#0x78]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
