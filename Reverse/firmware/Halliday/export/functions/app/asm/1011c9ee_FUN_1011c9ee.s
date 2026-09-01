; FUN_1011c9ee @ 0x1011c9ee size=40
  push {r0,r1,r2,r4,r5,lr}
  mov r5,r3
  ldrsb.w r3,[sp,#0x18]
  mov r4,r0
  str r3,[sp,#0x4]
  bl 0x1011c984
  ldr r3,[sp,#0x4]
  cbz r0,0x1011ca12
  mov r2,r5
  mov r1,r4
  mov r0,r4
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x1011c726
  add sp,#0xc
  pop {r4,r5,pc}
