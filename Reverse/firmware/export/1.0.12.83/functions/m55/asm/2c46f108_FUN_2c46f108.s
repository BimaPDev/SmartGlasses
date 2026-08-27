; FUN_2c46f108 @ 0x2c46f108 size=18
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f118
  ldr r3,[r0,#0x64]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
