; FUN_10124316 @ 0x10124316 size=38
  push {r0,r1,r4,lr}
  mov r4,r2
  add r2,sp,#0x4
  bl 0x10086ae0
  cmp r0,#0x0
  blt 0x10124334
  ldr r3,[sp,#0x4]
  cmp.w r3,#0x10000
  bcs 0x10124334
  uxth r3,r3
  strh r3,[r4,#0x0]
  add sp,#0x8
  pop {r4,pc}
  movs r3,#0x3f
  mvn r0,#0x15
  b 0x1012432e
