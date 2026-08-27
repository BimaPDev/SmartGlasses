; FUN_2c65e35e @ 0x2c65e35e size=20
  push {r4,lr}
  str r3,[r0,#0x0]
  adds r3,#0x14
  mov r4,r0
  str.w r3,[r0,#0x4]!
  bl 0x2c658804
  mov r0,r4
  pop {r4,pc}
