; FUN_1000a8f0 @ 0x1000a8f0 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x1000a918]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1000a91c]
  ldrh r0,[r3,#0x38]
  ldr r3,[0x1000a918]
  adds r0,#0x1
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  uxth r0,r0
  beq 0x1000a912
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
