; FUN_2c66c58e @ 0x2c66c58e size=40
  push {r3,r4,r5,lr}
  mov r3,r0
  mov r4,r1
  cbnz r1,0x2c66c5b2
  pop.w {r3,r4,r5,lr}
  b.w 0x2c66b60a
  adds r3,r0,#0x1
  mov r5,r0
  mov r1,r4
  mov r0,r3
  bl 0x2c66b60a
  cmp r0,#0x0
  bne 0x2c66c59e
  mov r0,r5
  pop {r3,r4,r5,pc}
  movs r5,#0x0
  b 0x2c66c5a2
