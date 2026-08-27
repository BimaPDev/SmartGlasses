; FUN_2c4a9b28 @ 0x2c4a9b28 size=96
  push {r4,r5,lr}
  sub sp,#0xc
  ldr r3,[0x2c4a9b88]
  movs r5,#0x0
  mov r4,r1
  add.w r2,sp,#0x2
  movs r1,#0x5
  ldr.w r0,[r0,#0xa8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  strh.w r5,[sp,#0x2]
  bl 0x2c4a8764
  ldrh.w r2,[sp,#0x2]
  ldr r3,[0x2c4a9b8c]
  ubfx r1,r2,#0x6,#0x6
  lsrs r2,r2,#0xc
  umull r0,r3,r3,r1
  add.w r2,r2,r2, lsl #0x1
  lsrs r3,r3,#0x5
  add.w r3,r3,r3, lsl #0x1
  sub.w r3,r1,r3, lsl #0x4
  add.w r2,r3,r2, lsl #0x4
  ldr r3,[0x2c4a9b88]
  strh r2,[r4,#0x0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c4a9b84
  mov r0,r5
  add sp,#0xc
  pop {r4,r5,pc}
  bl 0x2c674828
