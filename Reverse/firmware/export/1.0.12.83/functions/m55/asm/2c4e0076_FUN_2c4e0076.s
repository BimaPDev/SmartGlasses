; FUN_2c4e0076 @ 0x2c4e0076 size=32
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  mov r6,r2
  bl 0x2c4ddd3c
  cbz r0,0x2c4e0094
  mov r2,r6
  mov r1,r5
  add.w r0,r4,#0xa8
  pop.w {r4,r5,r6,lr}
  b.w 0x2c4dee64
  pop {r4,r5,r6,pc}
