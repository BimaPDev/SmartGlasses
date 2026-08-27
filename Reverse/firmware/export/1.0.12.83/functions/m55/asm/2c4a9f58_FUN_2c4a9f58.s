; FUN_2c4a9f58 @ 0x2c4a9f58 size=104
  push {r4,r5,r6,lr}
  ldr r3,[0x2c4a9fc0]
  sub sp,#0x8
  ldr r4,[0x2c4a9fc4]
  movs r5,#0x0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr.w r6,[r0,#0xa8]
  umull r3,r4,r4,r1
  add.w r2,sp,#0x2
  mov r0,r6
  strh.w r5,[sp,#0x2]
  lsrs r3,r4,#0x5
  add.w r4,r3,r3, lsl #0x1
  sub.w r4,r1,r4, lsl #0x4
  movs r1,#0x5
  add.w r4,r4,r3, lsl #0x6
  bl 0x2c4a8764
  ldrh.w r2,[sp,#0x2]
  uxth r4,r4
  movs r1,#0x5
  and r2,r2,#0x3f
  mov r0,r6
  orr.w r2,r2,r4, lsl #0x6
  uxth r2,r2
  bl 0x2c4a8704
  ldr r3,[0x2c4a9fc0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c4a9fbc
  mov r0,r5
  add sp,#0x8
  pop {r4,r5,r6,pc}
  bl 0x2c674828
