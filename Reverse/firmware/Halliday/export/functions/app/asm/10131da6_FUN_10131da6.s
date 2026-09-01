; FUN_10131da6 @ 0x10131da6 size=32
  push {r0,r1,r2,r4,r5,lr}
  mov r5,r0
  str r1,[sp,#0x4]
  bl 0x10131956
  mov r4,r0
  ldr r1,[sp,#0x4]
  mov r0,r5
  bl 0x10133dba
  mov r0,r4
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x1013197e
