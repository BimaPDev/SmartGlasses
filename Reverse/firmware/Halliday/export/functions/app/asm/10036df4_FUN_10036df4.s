; FUN_10036df4 @ 0x10036df4 size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x10036e1c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x100c1460
  ldr r3,[0x10036e1c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10036e12
  bl 0x1013cdc0
  movs r0,#0x1
  add sp,#0xc
  pop.w pc
