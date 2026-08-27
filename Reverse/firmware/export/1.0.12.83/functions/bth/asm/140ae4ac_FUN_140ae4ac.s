; FUN_140ae4ac @ 0x140ae4ac size=36
  push {r4,lr}
  mov r3,r1
  ldr r4,[0x140ae4d0]
  ldr r1,[0x140ae4d4]
  sub sp,#0x8
  cmp r2,#0x0
  ite ne
  mov.ne r2,r4
  mov.eq r2,r1
  mov r1,r0
  sub.w r4,r1,#0x8
  str r4,[sp,#0x0]
  ldr r0,[0x140ae4d8]
  bl 0x140dbf70
  add sp,#0x8
  pop {r4,pc}
