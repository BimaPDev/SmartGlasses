; FUN_10039740 @ 0x10039740 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x10039768]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1003976c]
  strb r0,[r3,#0x0]
  ldr r3,[0x10039768]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003975e
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x100396fc
