; FUN_2c4e0ff0 @ 0x2c4e0ff0 size=34
  push {r4,r5,r6,lr}
  mov r4,r0
  add.w r0,r0,#0x15c
  mov r5,r1
  mov r6,r2
  bl 0x2c4df6f0
  cbnz r0,0x2c4e1010
  mov r2,r6
  mov r1,r5
  mov r0,r4
  pop.w {r4,r5,r6,lr}
  b.w 0x2c4e0124
  pop {r4,r5,r6,pc}
