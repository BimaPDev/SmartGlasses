; FUN_1001c9e8 @ 0x1001c9e8 size=32
  push {r0,r1,r2,lr}
  ldr r3,[0x1001ca08]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1001ca08]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1001ca02
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
