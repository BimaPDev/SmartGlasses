; FUN_1004ec20 @ 0x1004ec20 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x1004ec44]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1004ec48]
  ldrb r0,[r3,#0x4]
  ldr r3,[0x1004ec44]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004ec3e
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
