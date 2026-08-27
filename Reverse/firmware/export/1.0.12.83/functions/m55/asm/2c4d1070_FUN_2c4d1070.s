; FUN_2c4d1070 @ 0x2c4d1070 size=20
  cbz r0,0x2c4d1082
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x2c4d7128
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  bx lr
