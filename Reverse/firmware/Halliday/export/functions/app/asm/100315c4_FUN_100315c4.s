; FUN_100315c4 @ 0x100315c4 size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x100315ec]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100315ec]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100315de
  bl 0x1013cdc0
  movs r0,#0x1
  add sp,#0xc
  pop.w lr
  b.w 0x10048018
