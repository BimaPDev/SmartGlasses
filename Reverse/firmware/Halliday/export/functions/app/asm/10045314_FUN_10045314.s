; FUN_10045314 @ 0x10045314 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x1004533c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1004533c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1004532e
  bl 0x1013cdc0
  movs r2,#0x0
  mov r1,r2
  add sp,#0xc
  pop.w lr
  b.w 0x10138bb0
