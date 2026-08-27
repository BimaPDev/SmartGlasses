; FUN_2c664dac @ 0x2c664dac size=32
  push {r3,r4,r5,lr}
  add.w r3,r0,#0x8
  mov r4,r0
  str r3,[r0,#0x0]
  mov.w r3,#0x0
  ldrd r5,r2,[r1,#0x0]
  add.w r2,r5,r2, lsl #0x2
  mov r1,r5
  bl 0x2c664d64
  mov r0,r4
  pop {r3,r4,r5,pc}
