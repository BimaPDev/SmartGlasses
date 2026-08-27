; FUN_2c46f1d8 @ 0x2c46f1d8 size=24
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c46f1ee
  mov r4,r0
  bl 0x2c46f160
  ldr r3,[r4,#0x68]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
