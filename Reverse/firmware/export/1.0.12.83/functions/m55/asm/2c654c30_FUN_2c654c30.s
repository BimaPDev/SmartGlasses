; FUN_2c654c30 @ 0x2c654c30 size=24
  ldr r3,[0x2c654c48]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x10
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c6560b8
  mov r0,r4
  pop {r4,pc}
