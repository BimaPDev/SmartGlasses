; FUN_1004297c @ 0x1004297c size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x100429a0]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100429a4]
  ldrb r0,[r3,#0x0]
  ldr r3,[0x100429a0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004299a
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
