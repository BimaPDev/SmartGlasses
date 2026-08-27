; FUN_2c658a66 @ 0x2c658a66 size=26
  push {r4,lr}
  str r3,[r0,#0x0]
  adds r3,#0x14
  mov r4,r0
  adds r0,#0x8
  str r3,[r0,#0x0]
  movs r3,#0x0
  str.w r3,[r0,#-0x4]
  bl 0x2c658804
  mov r0,r4
  pop {r4,pc}
