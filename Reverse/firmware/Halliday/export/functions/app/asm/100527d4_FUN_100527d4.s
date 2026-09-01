; FUN_100527d4 @ 0x100527d4 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x100527fc]
  mov r1,r0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100527fc]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100527f0
  bl 0x1013cdc0
  ldr r0,[0x10052800]
  add sp,#0xc
  pop.w lr
  b.w 0x100a0350
