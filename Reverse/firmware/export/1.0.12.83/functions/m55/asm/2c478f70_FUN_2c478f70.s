; FUN_2c478f70 @ 0x2c478f70 size=20
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c478f82
  ldr.w r3,[r0,#0xf4]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
