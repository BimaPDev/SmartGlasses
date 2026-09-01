; FUN_1003f2cc @ 0x1003f2cc size=34
  push {r0,r1,r2,lr}
  ldr r3,[0x1003f2f0]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1003f2f0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003f2e6
  bl 0x1013cdc0
  movs r0,#0x0
  add sp,#0xc
  pop.w pc
