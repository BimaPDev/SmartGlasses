; FUN_10041ce8 @ 0x10041ce8 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x10041d14]
  movs r2,#0x28
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10041d18]
  strb r2,[r3,#0x0]
  ldr r3,[0x10041d14]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10041d08
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x10041cac
