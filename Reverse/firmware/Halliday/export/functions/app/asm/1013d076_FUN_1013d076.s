; FUN_1013d076 @ 0x1013d076 size=30
  muls r2,r1
  push {r0,r1,r4,lr}
  mov r1,r2
  str r2,[sp,#0x4]
  bl 0x10117f04
  mov r4,r0
  cbz r0,0x1013d08e
  ldr r2,[sp,#0x4]
  movs r1,#0x0
  bl 0x1011ea48
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
