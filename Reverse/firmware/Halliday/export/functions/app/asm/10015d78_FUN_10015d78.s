; FUN_10015d78 @ 0x10015d78 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10015d9c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10015da0]
  ldr r0,[r3,#0x0]
  ldr r3,[0x10015d9c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10015d96
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
