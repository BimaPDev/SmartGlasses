; FUN_10043548 @ 0x10043548 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x1004356c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1013ce56
  ldr r3,[0x1004356c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10043566
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
