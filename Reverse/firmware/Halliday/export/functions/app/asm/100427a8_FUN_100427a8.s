; FUN_100427a8 @ 0x100427a8 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x100427d4]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100427d4]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100427c2
  bl 0x1013cdc0
  movs r2,#0x0
  ldr r1,[0x100427d8]
  ldr r0,[0x100427dc]
  add sp,#0xc
  pop.w lr
  b.w 0x101164a0
