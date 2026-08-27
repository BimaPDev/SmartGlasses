; FUN_2c48b478 @ 0x2c48b478 size=40
  push {r4,r5,r6,lr}
  sub sp,#0x38
  ldr r6,[0x2c48b620]
  mov r5,r1
  mov r4,r0
  str r6,[sp,#0x0]
  ldr r3,[0x2c48b624]
  ldr r2,[0x2c48b628]
  strd r0,r1,[sp,#0x4]
  ldr r1,[0x2c48b62c]
  movs r0,#0x4
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x34]
  mov.w r1,#0x0
  mov.w r1,#0x3a4
  bl 0x2c673d88
