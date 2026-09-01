; FUN_10042950 @ 0x10042950 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10042974]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10042978]
  ldrb r0,[r3,#0x0]
  ldr r3,[0x10042974]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004296e
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
