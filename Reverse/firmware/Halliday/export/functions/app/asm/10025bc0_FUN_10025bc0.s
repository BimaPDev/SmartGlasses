; FUN_10025bc0 @ 0x10025bc0 size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x10025be8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10025be8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10025bda
  bl 0x1013cdc0
  ldr r0,[0x10025bec]
  add sp,#0xc
  pop.w lr
  b.w 0x10113e2c
