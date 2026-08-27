; FUN_2c6523b2 @ 0x2c6523b2 size=34
  push {r4,r5,r6,lr}
  ldrb r3,[r0,#0x1c]
  mov r4,r0
  mov r5,r1
  cbnz r3,0x2c6523ce
  bl 0x2c651b36
  ldr r3,[r4,#0x0]
  mov r1,r5
  mov r0,r4
  ldr r3,[r3,#0x18]
  pop.w {r4,r5,r6,lr}
  bx r3
  adds r1,r0,r1
  ldrb r0,[r1,#0x1d]
  pop {r4,r5,r6,pc}
