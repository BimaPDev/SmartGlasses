; FUN_2c64fb08 @ 0x2c64fb08 size=24
  ldr r3,[0x2c64fb20]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0xc
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c65f380
  mov r0,r4
  pop {r4,pc}
