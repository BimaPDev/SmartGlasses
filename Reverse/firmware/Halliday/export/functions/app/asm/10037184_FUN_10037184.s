; FUN_10037184 @ 0x10037184 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x100371ac]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1003711c
  ldr r3,[0x100371ac]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100371a2
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x100c1474
