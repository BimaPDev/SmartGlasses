; FUN_1007375c @ 0x1007375c size=44
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  mov.w r0,#0xffffffff
  mov.w r1,#0xffffffff
  str r2,[sp,#0x4]
  bl 0x10072c84
  mov r2,r5
  mov r1,r4
  ldr r3,[sp,#0x4]
  ldr r0,[0x10073788]
  bl 0x10073238
  str r0,[sp,#0x4]
  bl 0x10072c78
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop {r4,r5,pc}
