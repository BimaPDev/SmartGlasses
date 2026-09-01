; FUN_1002e858 @ 0x1002e858 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x1002e880]
  movs r2,#0x57
  movs r1,#0x0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x1012691c
  ldr r3,[0x1002e880]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1002e87a
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
