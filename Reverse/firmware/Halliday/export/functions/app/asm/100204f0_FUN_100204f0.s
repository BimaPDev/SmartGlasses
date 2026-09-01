; FUN_100204f0 @ 0x100204f0 size=34
  push {r0,r1,r2,lr}
  ldr r3,[0x10020514]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10020514]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1002050a
  bl 0x1013cdc0
  ldr r0,[0x10020518]
  add sp,#0xc
  pop.w pc
