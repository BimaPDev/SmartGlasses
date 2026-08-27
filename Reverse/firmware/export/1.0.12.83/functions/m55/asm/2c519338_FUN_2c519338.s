; FUN_2c519338 @ 0x2c519338 size=34
  push {r3,r4,r5,lr}
  movs r5,#0x0
  movs r3,#0x3
  mov r0,r1
  mov r4,r1
  strb.w r3,[r1,#0x2c]
  str r5,[r1,#0x28]
  bl 0x2c6073ec
  mov r3,r0
  mov r0,r4
  strh r3,[r4,#0x24]
  bl 0x2c6073f8
  strb.w r5,[r4,#0x2d]
