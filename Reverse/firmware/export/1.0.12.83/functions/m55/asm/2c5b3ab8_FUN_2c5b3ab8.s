; FUN_2c5b3ab8 @ 0x2c5b3ab8 size=34
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x18]
  strb r3,[r0,#0x1c]
  str r3,[r0,#0x20]
  strb.w r3,[r0,#0x24]
  strd r2,r3,[r0,#0x0]
  strd r3,r3,[r0,#0x8]
  strd r3,r3,[r0,#0x10]
  bl 0x2c5b3a24
  mov r0,r4
  pop {r4,pc}
