; FUN_2c654540 @ 0x2c654540 size=38
  push {r3,r4,r5,r6,r7,lr}
  ldr r5,[r1,#0x4]
  mov r6,r1
  mov r7,r0
  adds r0,r5,#0x1
  bl 0x2c64ca7e
  movs r3,#0x0
  mov r4,r0
  mov r1,r0
  mov r2,r5
  mov r0,r6
  bl 0x2c65ee48
  movs r3,#0x0
  mov r0,r5
  str r4,[r7,#0x0]
  strb r3,[r4,r5]
  pop {r3,r4,r5,r6,r7,pc}
