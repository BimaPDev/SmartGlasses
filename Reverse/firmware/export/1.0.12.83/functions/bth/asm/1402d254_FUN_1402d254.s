; FUN_1402d254 @ 0x1402d254 size=36
  mov r12,r0
  mov r3,r2
  movs r2,#0x0
  push {r4,r5,lr}
  ldr r5,[0x1402d278]
  ldr r4,[0x1402d27c]
  sub sp,#0xc
  str r2,[sp,#0x0]
  cmp r0,#0x1
  ite ne
  mov.ne r0,r5
  mov.eq r0,r4
  mov r2,r1
  mov r1,r12
  bl 0x1402634c
  add sp,#0xc
  pop {r4,r5,pc}
