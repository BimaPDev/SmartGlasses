; FUN_10041c48 @ 0x10041c48 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x10041c74]
  movs r2,#0x0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10041c78]
  strb r2,[r3,#0x0]
  ldr r3,[0x10041c74]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10041c68
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x10041c0c
