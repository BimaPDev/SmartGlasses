; FUN_1013680c @ 0x1013680c size=34
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  str r1,[sp,#0x4]
  bl 0x10136444
  ldr r1,[sp,#0x4]
  mov r5,r0
  mov r0,r4
  bl 0x1013635a
  mov r4,r0
  mov r0,r5
  bl 0x10136462
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
