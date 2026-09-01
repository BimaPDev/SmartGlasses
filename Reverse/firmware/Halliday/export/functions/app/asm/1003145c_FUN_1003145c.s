; FUN_1003145c @ 0x1003145c size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10031480]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10031484]
  ldrb r0,[r3,#0x0]
  ldr r3,[0x10031480]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003147a
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
