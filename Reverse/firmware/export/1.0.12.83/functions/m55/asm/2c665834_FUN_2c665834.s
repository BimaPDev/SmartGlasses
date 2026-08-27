; FUN_2c665834 @ 0x2c665834 size=28
  ldr r3,[0x2c665850]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x2c6657b0
  ldr r3,[0x2c665854]
  mov r0,r4
  str r3,[r4,#0x0]
  bl 0x2c64cdcc
  mov r0,r4
  pop {r4,pc}
