; FUN_2c4e4d26 @ 0x2c4e4d26 size=26
  push {r4,lr}
  mov r4,r1
  ldr r1,[r1,#0x0]
  cbz r1,0x2c4e4d3e
  movs r2,#0x0
  bl 0x2c4e4f4c
  ldr r0,[r4,#0x0]
  bl 0x2c669588
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
