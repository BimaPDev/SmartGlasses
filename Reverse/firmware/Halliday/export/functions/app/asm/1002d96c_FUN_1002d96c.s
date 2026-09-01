; FUN_1002d96c @ 0x1002d96c size=44
  push {r0,r1,r2,lr}
  ldr r3,[0x1002d998]
  ldr r0,[0x1002d99c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1006c2a0
  ldr r3,[0x1002d998]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1002d98c
  bl 0x1013cdc0
  ldr r0,[0x1002d9a0]
  add sp,#0xc
  pop.w lr
  b.w 0x1006c2a0
