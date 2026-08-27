; FUN_2c669d2a @ 0x2c669d2a size=36
  push {r3,r4,r5,r6,r7,lr}
  mov r6,r0
  mov r7,r1
  mov r4,r2
  adds r5,r2,r3
  cmp r4,r5
  bne 0x2c669d3c
  movs r0,#0x0
  b 0x2c669d4c
  mov r2,r7
  ldrb.w r1,[r4],#0x1
  mov r0,r6
  bl 0x2c669cfc
  adds r3,r0,#0x1
  bne 0x2c669d34
  pop {r3,r4,r5,r6,r7,pc}
