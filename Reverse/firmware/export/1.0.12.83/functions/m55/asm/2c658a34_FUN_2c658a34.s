; FUN_2c658a34 @ 0x2c658a34 size=28
  ldr r3,[0x2c658a50]
  push {r4,lr}
  str r3,[r0,#0x0]
  adds r3,#0x14
  mov r4,r0
  adds r0,#0x8
  str r3,[r0,#0x0]
  movs r3,#0x0
  str.w r3,[r0,#-0x4]
  bl 0x2c6587f0
  mov r0,r4
  pop {r4,pc}
