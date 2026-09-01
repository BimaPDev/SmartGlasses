; FUN_10126162 @ 0x10126162 size=34
  push {r0,r1,r2,r3,r4,lr}
  mov r4,r0
  str r1,[sp,#0x4]
  bl 0x10089bf8
  movs r2,#0x0
  mov r1,r4
  strd r2,r2,[sp,#0x8]
  ldr r3,[sp,#0x4]
  add r2,sp,#0x8
  add.w r0,r4,#0x14
  bl 0x1008a2dc
  add sp,#0x10
  pop {r4,pc}
