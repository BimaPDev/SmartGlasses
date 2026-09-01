; FUN_10131b42 @ 0x10131b42 size=34
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  str r1,[sp,#0x4]
  bl 0x10131956
  ldr r1,[sp,#0x4]
  mov r5,r0
  mov r0,r4
  bl 0x100c8b90
  mov r4,r0
  mov r0,r5
  bl 0x1013197e
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
