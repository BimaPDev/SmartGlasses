; FUN_10033e64 @ 0x10033e64 size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x10033e8c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10033e8c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10033e7e
  bl 0x1013cdc0
  ldr r0,[0x10033e90]
  add sp,#0xc
  pop.w lr
  b.w 0x10040f84
