; FUN_1002e108 @ 0x1002e108 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x1002e130]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  movs r3,#0xff
  strb r3,[r0,#0x1]
  ldr r3,[0x1002e130]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1002e126
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x1002dd8c
