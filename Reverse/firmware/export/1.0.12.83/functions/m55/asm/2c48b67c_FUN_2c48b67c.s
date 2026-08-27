; FUN_2c48b67c @ 0x2c48b67c size=40
  push {r4,r5,r6,lr}
  sub sp,#0x38
  ldr r6,[0x2c48b824]
  mov r5,r1
  ldr r3,[0x2c48b828]
  ldr r2,[0x2c48b82c]
  mov r4,r0
  str r6,[sp,#0x0]
  strd r0,r1,[sp,#0x4]
  ldr r1,[0x2c48b830]
  movs r0,#0x4
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x34]
  mov.w r1,#0x0
  mov.w r1,#0x3f0
  bl 0x2c673d88
