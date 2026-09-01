; FUN_10027b20 @ 0x10027b20 size=44
  push {r0,r1,r2,lr}
  ldr r3,[0x10027b4c]
  ldr r0,[0x10027b50]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1006c2a0
  ldr r3,[0x10027b4c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10027b40
  bl 0x1013cdc0
  ldr r0,[0x10027b54]
  add sp,#0xc
  pop.w lr
  b.w 0x1006c2a0
