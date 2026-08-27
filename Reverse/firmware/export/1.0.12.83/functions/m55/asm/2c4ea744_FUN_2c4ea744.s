; FUN_2c4ea744 @ 0x2c4ea744 size=34
  push {r4,r5,r6,lr}
  sub sp,#0x10
  mov r5,r0
  mov r6,r1
  bl 0x2c4e9504
  ldr r1,[0x2c4ea794]
  movs r0,#0x4
  ldr r3,[0x2c4ea798]
  ldr r2,[0x2c4ea79c]
  str r1,[sp,#0x0]
  mov.w r1,#0x108
  strd r5,r6,[sp,#0x4]
  bl 0x2c673d88
