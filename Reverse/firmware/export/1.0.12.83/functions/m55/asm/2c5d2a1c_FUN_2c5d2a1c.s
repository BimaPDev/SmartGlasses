; FUN_2c5d2a1c @ 0x2c5d2a1c size=26
  ldr r3,[0x2c5d2a38]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x98
  bl 0x2c5da970
  ldr r1,[0x2c5d2a3c]
  mov r0,r4
  bl 0x2c5cfd14
  mov r0,r4
  pop {r4,pc}
