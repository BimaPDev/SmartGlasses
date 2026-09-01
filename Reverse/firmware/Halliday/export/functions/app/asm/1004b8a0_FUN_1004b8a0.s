; FUN_1004b8a0 @ 0x1004b8a0 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x1004b8cc]
  movs r2,#0x1
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1004b8d0]
  strb r2,[r3,#0x0]
  ldr r3,[0x1004b8cc]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004b8c0
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x1004b830
