; FUN_10001786 @ 0x10001786 size=26
  push {r4,lr}
  mov r4,r0
  mov r0,r1
  mov r1,r2
  bl 0x1000175e
  lsls r3,r4,#0xe
  add.w r3,r3,#0x40000000
  add.w r3,r3,#0x88000
  str r0,[r3,#0x14]
  pop {r4,pc}
