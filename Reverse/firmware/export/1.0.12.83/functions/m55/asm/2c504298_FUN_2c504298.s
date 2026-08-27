; FUN_2c504298 @ 0x2c504298 size=30
  push {r3,r4,r5,lr}
  movs r5,#0x0
  mov r4,r0
  ldr r1,[0x2c5042b8]
  str.w r5,[r0,#0x48]!
  bl 0x2c62e838
  ldr r1,[0x2c5042bc]
  mov r0,r4
  str r5,[r4,#0x0]
  bl 0x2c62e838
  mov r0,r4
  pop {r3,r4,r5,pc}
