; FUN_2c5e4354 @ 0x2c5e4354 size=24
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  bl 0x2c5e4128
  mov r3,r0
  mov r1,r5
  mov r0,r4
  ldr r3,[r3,#0x3c]
  pop.w {r4,r5,r6,lr}
  bx r3
