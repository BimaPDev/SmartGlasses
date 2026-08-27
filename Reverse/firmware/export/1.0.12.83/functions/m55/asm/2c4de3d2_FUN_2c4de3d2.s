; FUN_2c4de3d2 @ 0x2c4de3d2 size=24
  push {r4,lr}
  str r2,[r0,#0x0]
  add.w r2,r3,#0x2c
  adds r3,#0x38
  mov r4,r0
  str r2,[r0,#0x20]
  str r3,[r0,#0x30]
  bl 0x2c4dfb24
  mov r0,r4
  pop {r4,pc}
