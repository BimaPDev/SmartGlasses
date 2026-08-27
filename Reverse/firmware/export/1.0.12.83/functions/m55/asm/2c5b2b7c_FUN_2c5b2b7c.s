; FUN_2c5b2b7c @ 0x2c5b2b7c size=30
  push {r3,r4,r5,lr}
  add.w r4,r0,#0x44
  mov r5,r1
  mov r0,r4
  bl 0x2c5afda4
  cbnz r0,0x2c5b2b8e
  pop {r3,r4,r5,pc}
  mov r1,r5
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x2c5b0754
