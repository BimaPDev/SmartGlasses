; FUN_1003f6f0 @ 0x1003f6f0 size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x1003f718]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1012d99a
  ldr r3,[0x1003f718]
  uxtb r0,r0
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003f710
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
