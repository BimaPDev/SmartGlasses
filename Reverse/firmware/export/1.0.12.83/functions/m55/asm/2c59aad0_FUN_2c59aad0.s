; FUN_2c59aad0 @ 0x2c59aad0 size=30
  push {r4,lr}
  ldr r2,[0x2c59aaf0]
  mov r4,r0
  movs r3,#0x0
  adds r0,#0x30
  str r2,[r4,#0x0]
  str r3,[r4,#0x64]
  bl 0x2c59ba24
  mov r0,r4
  movs r1,#0x68
  bl 0x2c64c9ce
  mov r0,r4
  pop {r4,pc}
