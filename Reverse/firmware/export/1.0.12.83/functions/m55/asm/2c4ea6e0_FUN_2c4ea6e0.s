; FUN_2c4ea6e0 @ 0x2c4ea6e0 size=34
  push {r4,r5,r6,lr}
  sub sp,#0x10
  mov r5,r0
  mov r6,r1
  bl 0x2c4e9504
  ldr r1,[0x2c4ea730]
  movs r0,#0x4
  ldr r3,[0x2c4ea734]
  ldr r2,[0x2c4ea738]
  str r1,[sp,#0x0]
  mov.w r1,#0x10a
  strd r5,r6,[sp,#0x4]
  bl 0x2c673d88
