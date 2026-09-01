; FUN_1011df5e @ 0x1011df5e size=20
  push {r3,r4,r5,lr}
  mov r5,r0
  bl 0x1011df34
  lsls r4,r0,#0x8
  mov r0,r5
  bl 0x1011df34
  orrs r0,r4
  pop {r3,r4,r5,pc}
