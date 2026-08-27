; FUN_2c5f50c4 @ 0x2c5f50c4 size=30
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  mov r6,r2
  bl 0x2c5f503c
  cbz r0,0x2c5f50d4
  pop {r4,r5,r6,pc}
  mov r2,r6
  mov r1,r5
  mov r0,r4
  pop.w {r4,r5,r6,lr}
  b.w 0x2c5f6b40
