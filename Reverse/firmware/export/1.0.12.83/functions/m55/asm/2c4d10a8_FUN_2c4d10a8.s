; FUN_2c4d10a8 @ 0x2c4d10a8 size=20
  cbz r0,0x2c4d10ba
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x2c4d7158
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  bx lr
