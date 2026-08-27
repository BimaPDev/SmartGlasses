; FUN_2c4e3d68 @ 0x2c4e3d68 size=30
  push {r4,lr}
  str r2,[r0,#0x0]
  mov r4,r0
  str r3,[r0,#0x20]
  bl 0x2c4e3d24
  ldr r3,[0x2c4e3d8c]
  mov r0,r4
  str r3,[r4,#0x0]
  adds r3,#0x3c
  str r3,[r4,#0x20]
  bl 0x2c4dfb24
  mov r0,r4
  pop {r4,pc}
