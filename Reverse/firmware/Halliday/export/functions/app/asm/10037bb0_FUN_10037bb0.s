; FUN_10037bb0 @ 0x10037bb0 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x10037bd8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10037bdc]
  ldrb r0,[r3,#0x0]
  ldr r3,[0x10037bd8]
  and r0,r0,#0x1
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10037bd2
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
