; FUN_1003fe7c @ 0x1003fe7c size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x1003fea8]
  movs r2,#0x1
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1003feac]
  strb r2,[r3,#0x0]
  ldr r3,[0x1003fea8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003fe9c
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x1003fde4
