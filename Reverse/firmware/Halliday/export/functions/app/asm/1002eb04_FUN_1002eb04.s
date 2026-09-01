; FUN_1002eb04 @ 0x1002eb04 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x1002eb2c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1002eb2c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1002eb1e
  bl 0x1013cdc0
  movs r0,#0x4c
  ldr r3,[0x1002eb30]
  ldr r3,[r3,#0x0]
  add sp,#0xc
  pop.w lr
  bx r3
