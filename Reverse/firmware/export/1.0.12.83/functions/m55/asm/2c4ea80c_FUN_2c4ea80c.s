; FUN_2c4ea80c @ 0x2c4ea80c size=34
  push {r4,r5,r6,lr}
  sub sp,#0x10
  mov r5,r0
  mov r6,r1
  bl 0x2c4e9504
  ldr r1,[0x2c4ea858]
  movs r0,#0x4
  ldr r3,[0x2c4ea85c]
  ldr r2,[0x2c4ea860]
  str r1,[sp,#0x0]
  mov.w r1,#0x104
  strd r5,r6,[sp,#0x4]
  bl 0x2c673d88
