; FUN_1011a926 @ 0x1011a926 size=20
  mov r2,r1
  mov.w r1,#0x7d0000
  push {r3,lr}
  umull r0,r1,r0,r1
  movs r3,#0x0
  bl 0x10004238
  pop {r3,pc}
