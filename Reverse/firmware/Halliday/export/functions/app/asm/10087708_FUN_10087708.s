; FUN_10087708 @ 0x10087708 size=36
  push {r0,r1,r4,lr}
  mov r4,r0
  cbnz r0,0x10087726
  ldr r3,[0x1008772c]
  mov.w r2,#0x12a
  str r3,[sp,#0x0]
  movs r0,#0x2
  ldr r3,[0x10087730]
  ldr r1,[0x10087734]
  bl 0x10094174
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
  ldr r3,[r0,#0x0]
  ldr r4,[r3,#0x14]
  b 0x10087720
