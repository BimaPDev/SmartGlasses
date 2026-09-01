; FUN_10038814 @ 0x10038814 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10038838]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10038838]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003882e
  bl 0x1013cdc0
  mov.w r0,#0xffffffff
  add sp,#0xc
  pop.w pc
