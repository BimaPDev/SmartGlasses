; FUN_2c4dffdc @ 0x2c4dffdc size=28
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x2c4de02c
  cbz r0,0x2c4dfff6
  mov r1,r5
  add.w r0,r4,#0xa8
  pop.w {r3,r4,r5,lr}
  b.w 0x2c4df184
  pop {r3,r4,r5,pc}
