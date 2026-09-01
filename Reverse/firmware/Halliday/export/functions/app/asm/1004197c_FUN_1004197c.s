; FUN_1004197c @ 0x1004197c size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x100419a0]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100419a4]
  ldrb r0,[r3,#0x0]
  ldr r3,[0x100419a0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004199a
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
