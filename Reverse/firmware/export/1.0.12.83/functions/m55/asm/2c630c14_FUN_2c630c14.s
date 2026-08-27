; FUN_2c630c14 @ 0x2c630c14 size=26
  push {r3,lr}
  ldr r0,[r0,#0x0]
  bl 0x2c6041d4
  ldrb.w r3,[r0,#0x2a]
  lsls r3,r3,#0x1f
  bmi 0x2c630c26
  pop {r3,pc}
  pop.w {r3,lr}
  b.w 0x2c630880
