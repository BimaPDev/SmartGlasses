; FUN_10139636 @ 0x10139636 size=36
  push {r4,r5,lr}
  mov r4,r0
  mov r5,r1
  sub sp,#0x14
  movs r2,#0x10
  movs r1,#0x0
  mov r0,sp
  bl 0x1011ea48
  movs r1,#0x1
  mov r0,sp
  str r5,[sp,#0x8]
  strh.w r4,[sp,#0xc]
  bl 0x100ee8fc
  add sp,#0x14
  pop {r4,r5,pc}
