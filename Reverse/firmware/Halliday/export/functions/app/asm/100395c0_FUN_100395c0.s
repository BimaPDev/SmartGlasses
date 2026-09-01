; FUN_100395c0 @ 0x100395c0 size=34
  push {r0,r1,r2,lr}
  ldr r3,[0x100395e4]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100395e4]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100395da
  bl 0x1013cdc0
  movs r0,#0x0
  add sp,#0xc
  pop.w pc
