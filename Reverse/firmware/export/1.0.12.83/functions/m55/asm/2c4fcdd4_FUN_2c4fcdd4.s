; FUN_2c4fcdd4 @ 0x2c4fcdd4 size=36
  push {r4,lr}
  movs r0,#0x2
  bl 0x2c4fccb8
  mov r4,r0
  cbnz r0,0x2c4fcde4
  mov r0,r4
  pop {r4,pc}
  movs r0,#0x1
  bl 0x2c4fccb8
  mov r4,r0
  cmp r0,#0x0
  bne 0x2c4fcde0
  movs r0,#0x2
  bl 0x2c4fccb8
  b 0x2c4fcde0
