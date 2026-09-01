; FUN_1004b9d4 @ 0x1004b9d4 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x1004b9f8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1004b9f8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004b9ee
  bl 0x1013cdc0
  mov.w r0,#0xffffffff
  add sp,#0xc
  pop.w pc
