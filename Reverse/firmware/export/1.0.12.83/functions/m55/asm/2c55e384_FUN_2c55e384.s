; FUN_2c55e384 @ 0x2c55e384 size=36
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x4]
  mov r4,r0
  ldr r5,[r3,#0x4]
  mov r0,r5
  bl 0x2c6041fc
  mov r1,r0
  mov r0,r5
  subs r1,#0x1
  bl 0x2c6041dc
  ldr r3,[r4,#0x4]
  subs r0,r3,r0
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,r4,r5,pc}
