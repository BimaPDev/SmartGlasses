; FUN_1000a894 @ 0x1000a894 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x1000a8b8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1000a8bc]
  ldrh r0,[r3,#0x18]
  ldr r3,[0x1000a8b8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1000a8b2
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
