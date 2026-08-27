; FUN_2c66efc0 @ 0x2c66efc0 size=28
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x2c66efdc]
  mov r4,r0
  mov r0,r1
  str r3,[r5,#0x0]
  bl 0x2c4e666c
  adds r3,r0,#0x1
  bne 0x2c66efda
  ldr r3,[r5,#0x0]
  cbz r3,0x2c66efda
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
