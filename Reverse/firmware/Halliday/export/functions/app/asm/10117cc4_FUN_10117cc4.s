; FUN_10117cc4 @ 0x10117cc4 size=32
  push {r1,r2,r3}
  push {r0,r1,lr}
  add r3,sp,#0xc
  mov r1,r0
  ldr r0,[0x10117ce4]
  ldr.w r2,[r3],#0x4
  ldr r0,[r0,#0x0]
  str r3,[sp,#0x4]
  bl 0x10117fb8
  add sp,#0x8
  pop.w lr
  add sp,#0xc
  bx lr
