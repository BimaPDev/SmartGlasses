; FUN_1004ec4c @ 0x1004ec4c size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x1004ec74]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1004ec78]
  ldrsh.w r0,[r3,#0x2]
  ldr r3,[0x1004ec74]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004ec6c
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
