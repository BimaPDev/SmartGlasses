; FUN_2c4dd9ac @ 0x2c4dd9ac size=26
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  str r1,[r0,#0x4]
  mov r0,r1
  bl 0x2c4dffbc
  str r0,[r4,#0x8]
  mov r0,r5
  bl 0x2c4dffcc
  str r0,[r4,#0xc]
  pop {r3,r4,r5,pc}
