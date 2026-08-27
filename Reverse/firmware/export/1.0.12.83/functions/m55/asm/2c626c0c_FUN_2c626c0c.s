; FUN_2c626c0c @ 0x2c626c0c size=28
  push {r4,lr}
  mov r4,r1
  add.w r0,r1,#0x68
  bl 0x2c613324
  ldr r0,[r4,#0x60]
  bl 0x2c626be8
  ldr r0,[r4,#0x64]
  pop.w {r4,lr}
  b.w 0x2c62be1c
