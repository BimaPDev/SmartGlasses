; FUN_2c478700 @ 0x2c478700 size=30
  push {r4,r5,lr}
  ldr r0,[0x2c478730]
  sub sp,#0x14
  mov r4,r1
  ldr r5,[0x2c478734]
  ldr r2,[0x2c478738]
  mov.w r1,#0x3c4
  ldr r3,[0x2c47873c]
  str r4,[sp,#0x8]
  strd r0,r5,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
