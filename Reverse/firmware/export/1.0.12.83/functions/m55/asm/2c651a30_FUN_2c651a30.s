; FUN_2c651a30 @ 0x2c651a30 size=28
  push {r4,lr}
  mov r4,r0
  mov r0,r1
  mov r1,r2
  mov r2,r3
  mov.w r3,#0x0
  add.w r1,r0,r1, lsl #0x2
  bl 0x2c651a0c
  str r0,[r4,#0x0]
  mov r0,r4
  pop {r4,pc}
