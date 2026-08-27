; FUN_2c5f6e8e @ 0x2c5f6e8e size=38
  push {r4,r5,r6,lr}
  clz r5,r1
  mov r4,r1
  lsrs r5,r5,#0x5
  cbz r1,0x2c5f6eae
  mov r6,r0
  bl 0x2c66c4ec
  mov r2,r0
  mov r0,r4
  mov r1,r6
  bl 0x2c5f6704
  mov r0,r5
  pop {r4,r5,r6,pc}
  mov.w r0,#0xffffffff
  pop {r4,r5,r6,pc}
