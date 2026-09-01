; FUN_10042a40 @ 0x10042a40 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x10042a6c]
  movs r0,#0x14
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10042a70]
  strb r0,[r3,#0x0]
  ldr r3,[0x10042a6c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10042a60
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x10042a08
