; FUN_2c46f0f4 @ 0x2c46f0f4 size=18
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f104
  ldr r3,[r0,#0x60]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
