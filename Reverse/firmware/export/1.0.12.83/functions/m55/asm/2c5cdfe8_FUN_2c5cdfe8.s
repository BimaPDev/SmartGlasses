; FUN_2c5cdfe8 @ 0x2c5cdfe8 size=40
  push {r4,r5,r6,r7,r8,lr}
  sub sp,#0x18
  mov r6,r3
  ldr r3,[0x2c5ce058]
  mov r4,r0
  ldr r5,[sp,#0x30]
  mov r7,r2
  mov.w r8,#0x1
  str r3,[sp,#0x0]
  str r5,[sp,#0x10]
  movs r0,#0x4
  ldr r3,[0x2c5ce05c]
  ldr r1,[0x2c5ce060]
  strd r2,r6,[sp,#0x8]
  movs r2,#0x5a
  bl 0x2c62c82c
