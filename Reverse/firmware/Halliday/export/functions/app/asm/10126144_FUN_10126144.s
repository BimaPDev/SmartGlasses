; FUN_10126144 @ 0x10126144 size=30
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  mov r5,r2
  mov r2,r3
  str r3,[sp,#0x4]
  bl 0x1008a284
  mov r1,r5
  mov r0,r4
  ldr r2,[sp,#0x4]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x1008a2b0
