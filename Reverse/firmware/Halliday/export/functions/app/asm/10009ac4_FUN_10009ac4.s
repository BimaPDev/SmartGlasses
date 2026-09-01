; FUN_10009ac4 @ 0x10009ac4 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x10009aec]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10009af0]
  ldrh r0,[r3,#0x0]
  ldr r3,[0x10009aec]
  adds r0,#0x1
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  uxth r0,r0
  beq 0x10009ae6
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
