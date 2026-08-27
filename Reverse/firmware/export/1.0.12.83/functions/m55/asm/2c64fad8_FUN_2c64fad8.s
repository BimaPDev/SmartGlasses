; FUN_2c64fad8 @ 0x2c64fad8 size=24
  ldr r3,[0x2c64faf0]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c658cdc
  mov r0,r4
  pop {r4,pc}
