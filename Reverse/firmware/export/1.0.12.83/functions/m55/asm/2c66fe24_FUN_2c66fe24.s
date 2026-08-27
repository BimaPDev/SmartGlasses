; FUN_2c66fe24 @ 0x2c66fe24 size=30
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x2c66fe44]
  mov r4,r0
  mov r0,r1
  mov r1,r2
  str r3,[r5,#0x0]
  bl 0x2c4e6744
  adds r3,r0,#0x1
  bne 0x2c66fe40
  ldr r3,[r5,#0x0]
  cbz r3,0x2c66fe40
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
