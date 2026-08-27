; FUN_2c473918 @ 0x2c473918 size=24
  cbz r0,0x2c47392e
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  cbz r0,0x2c47392c
  movs r1,#0x0
  bl 0x2c476e1c
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  bx lr
