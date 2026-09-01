; FUN_1001946c @ 0x1001946c size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x10019498]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x10019344
  movs r2,#0x0
  ldr r3,[0x1001949c]
  str r2,[r3,#0xc]
  ldr r3,[0x10019498]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10019490
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
