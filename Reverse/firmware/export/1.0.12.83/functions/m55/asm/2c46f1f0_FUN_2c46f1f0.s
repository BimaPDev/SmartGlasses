; FUN_2c46f1f0 @ 0x2c46f1f0 size=18
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f200
  ldr r3,[r0,#0x6c]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
