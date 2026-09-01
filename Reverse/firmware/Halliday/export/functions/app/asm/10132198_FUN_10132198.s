; FUN_10132198 @ 0x10132198 size=34
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  str r1,[sp,#0x4]
  bl 0x10131956
  ldr r1,[sp,#0x4]
  mov r5,r0
  mov r0,r4
  bl 0x100e4d40
  mov r4,r0
  mov r0,r5
  bl 0x1013197e
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
