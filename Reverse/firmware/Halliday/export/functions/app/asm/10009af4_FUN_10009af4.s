; FUN_10009af4 @ 0x10009af4 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10009b18]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10009b1c]
  ldrh r0,[r3,#0x18]
  ldr r3,[0x10009b18]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10009b12
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
