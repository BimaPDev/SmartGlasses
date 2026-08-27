; FUN_2c654b84 @ 0x2c654b84 size=26
  push {r4,lr}
  str r3,[r0,#0x0]
  mov r4,r0
  ldr r3,[r0,#0x10]
  adds r0,#0xc
  str r2,[r3,#0xc]
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c64e184
  mov r0,r4
  pop {r4,pc}
