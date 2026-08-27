; FUN_2c59adaa @ 0x2c59adaa size=34
  push {r4,lr}
  mov r4,r0
  strb r1,[r0,#0x10]
  strb r3,[r0,#0x18]
  strh r3,[r0,#0x1a]
  str.w r2,[r0],#0x30
  bl 0x2c59ba1c
  bl 0x2c62a470
  bl 0x2c5fee94
  mov r3,r0
  mov r0,r4
  str r3,[r4,#0x64]
  pop {r4,pc}
