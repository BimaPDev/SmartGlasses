; FUN_2c65efe8 @ 0x2c65efe8 size=30
  push {r3,r4,r5,lr}
  add.w r3,r0,#0x8
  mov r4,r0
  str r3,[r0,#0x0]
  mov.w r3,#0x0
  ldrd r5,r2,[r1,#0x0]
  add r2,r5
  mov r1,r5
  bl 0x2c65efa0
  mov r0,r4
  pop {r3,r4,r5,pc}
