; FUN_10024f5c @ 0x10024f5c size=34
  push {r0,r1,r2,lr}
  ldr r3,[0x10024f80]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10024f80]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10024f76
  bl 0x1013cdc0
  ldr r0,[0x10024f84]
  add sp,#0xc
  pop.w pc
