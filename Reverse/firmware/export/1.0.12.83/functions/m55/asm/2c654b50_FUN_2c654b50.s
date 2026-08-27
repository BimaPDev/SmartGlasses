; FUN_2c654b50 @ 0x2c654b50 size=24
  ldr r3,[0x2c654b68]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x10
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c652164
  mov r0,r4
  pop {r4,pc}
