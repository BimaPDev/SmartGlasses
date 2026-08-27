; FUN_1402d7bc @ 0x1402d7bc size=30
  movs r2,#0x3
  push {r4}
  ldr r4,[0x1402d7dc]
  lsls r0,r0,#0x1
  ldr r3,[r4,#0x44]
  ands r1,r2
  lsls r2,r0
  bic.w r3,r3,r2
  lsls r1,r0
  orrs r3,r1
  str r3,[r4,#0x44]
  pop.w r4
  bx lr
