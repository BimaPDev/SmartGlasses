; FUN_2c66b3a8 @ 0x2c66b3a8 size=28
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x2c66b3c4]
  mov r4,r0
  mov r0,r1
  str r3,[r5,#0x0]
  bl 0x2c4e676c
  adds r3,r0,#0x1
  bne 0x2c66b3c2
  ldr r3,[r5,#0x0]
  cbz r3,0x2c66b3c2
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
