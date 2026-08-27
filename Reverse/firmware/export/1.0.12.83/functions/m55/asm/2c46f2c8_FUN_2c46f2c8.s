; FUN_2c46f2c8 @ 0x2c46f2c8 size=20
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f2da
  ldr.w r3,[r0,#0x84]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
