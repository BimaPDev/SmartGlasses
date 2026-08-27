; FUN_2c46f3a0 @ 0x2c46f3a0 size=22
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f3b4
  ldr.w r3,[r0,#0xc4]
  ldr r0,[0x2c46f3b8]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
