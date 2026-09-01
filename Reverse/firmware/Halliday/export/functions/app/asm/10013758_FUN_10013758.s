; FUN_10013758 @ 0x10013758 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x1001377c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1013ce56
  ldr r3,[0x1001377c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10013776
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
