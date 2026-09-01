; FUN_1003eaa0 @ 0x1003eaa0 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x1003eac8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1003eac8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003eaba
  bl 0x1013cdc0
  movs r0,#0x0
  add sp,#0xc
  pop.w lr
  b.w 0x1013130a
  b.w 0x101368aa
