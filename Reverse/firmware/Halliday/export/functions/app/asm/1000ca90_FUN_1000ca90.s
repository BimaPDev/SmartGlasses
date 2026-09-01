; FUN_1000ca90 @ 0x1000ca90 size=38
  push {r0,r1,r2,lr}
  ldr r3,[0x1000cab8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1000cab8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1000caaa
  bl 0x1013cdc0
  ldr r0,[0x1000cabc]
  add sp,#0xc
  pop.w lr
  b.w 0x100a2de0
