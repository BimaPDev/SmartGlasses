; FUN_2c46f384 @ 0x2c46f384 size=22
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f398
  ldr.w r3,[r0,#0xb4]
  ldr r0,[0x2c46f39c]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
