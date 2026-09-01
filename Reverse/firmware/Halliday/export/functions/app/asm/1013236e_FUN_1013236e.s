; FUN_1013236e @ 0x1013236e size=44
  push {r4,r5,lr}
  sub sp,#0x14
  strd r2,r1,[sp,#0x8]
  mov r4,r0
  str r3,[sp,#0x4]
  bl 0x10131956
  ldrd r3,r2,[sp,#0x4]
  mov r5,r0
  ldr r1,[sp,#0xc]
  mov r0,r4
  bl 0x100e58ec
  mov r4,r0
  mov r0,r5
  bl 0x1013197e
  mov r0,r4
  add sp,#0x14
  pop {r4,r5,pc}
