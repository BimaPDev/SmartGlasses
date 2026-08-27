; FUN_2c654d20 @ 0x2c654d20 size=24
  ldr r3,[0x2c654d38]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c656040
  mov r0,r4
  pop {r4,pc}
