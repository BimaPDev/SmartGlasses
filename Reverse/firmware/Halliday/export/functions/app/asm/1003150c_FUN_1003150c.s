; FUN_1003150c @ 0x1003150c size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10031530]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10031534]
  ldrb r0,[r3,#0x0]
  ldr r3,[0x10031530]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003152a
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
