; FUN_1003eb08 @ 0x1003eb08 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x1003eb34]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x100ba310
  subs r3,r0,#0x2
  rsbs r0,r3
  adcs r0,r3
  ldr r3,[0x1003eb34]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003eb2c
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
