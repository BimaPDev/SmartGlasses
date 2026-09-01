; FUN_10009b20 @ 0x10009b20 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x10009b48]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10009b4c]
  ldrh r0,[r3,#0x1c]
  ldr r3,[0x10009b48]
  adds r0,#0x1
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  uxth r0,r0
  beq 0x10009b42
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
