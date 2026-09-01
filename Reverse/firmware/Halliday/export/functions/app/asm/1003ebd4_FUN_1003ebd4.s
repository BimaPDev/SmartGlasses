; FUN_1003ebd4 @ 0x1003ebd4 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x1003ec00]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x100bf62c
  ldr r3,[0x1003ec00]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003ebf8
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
