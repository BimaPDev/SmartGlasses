; FUN_10139410 @ 0x10139410 size=40
  movs r3,#0x0
  push {r0,r1,r4,lr}
  mov r4,r0
  str r3,[sp,#0x0]
  bl 0x100f405c
  subs r0,#0x1
  strh.w r0,[sp,#0x4]
  bl 0x100f4070
  subs r0,#0x1
  strh.w r0,[sp,#0x6]
  mov r1,sp
  mov r0,r4
  bl 0x1011e560
  add sp,#0x8
  pop {r4,pc}
