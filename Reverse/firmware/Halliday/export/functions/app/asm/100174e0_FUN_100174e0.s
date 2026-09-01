; FUN_100174e0 @ 0x100174e0 size=32
  push {r0,r1,r2,lr}
  ldr r3,[0x10017500]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10017500]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100174fa
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
