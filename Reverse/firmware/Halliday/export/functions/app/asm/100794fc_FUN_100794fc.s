; FUN_100794fc @ 0x100794fc size=32
  push {r4,lr}
  movs r4,#0x0
  ldr r3,[r0,#0x4]
  movs r0,#0x13
  ldr r3,[r3,#0x0]
  str r4,[r3,#0x4]
  ldr r2,[r3,#0x8]
  str r2,[r3,#0x8]
  ldr r1,[r3,#0x0]
  ldr r2,[0x1007951c]
  ands r2,r1
  str r2,[r3,#0x0]
  bl 0x10055c2c
  mov r0,r4
  pop {r4,pc}
