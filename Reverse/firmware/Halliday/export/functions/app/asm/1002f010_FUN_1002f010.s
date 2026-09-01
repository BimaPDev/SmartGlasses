; FUN_1002f010 @ 0x1002f010 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x1002f038]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x10087308
  ldr r3,[0x1002f038]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1002f02e
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x1012455a
