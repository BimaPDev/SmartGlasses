; FUN_1003f838 @ 0x1003f838 size=68
  push {r0,r1,r4,lr}
  ldr r3,[0x1003f87c]
  ldr r4,[0x1003f880]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  strh.w r0,[r4,#0x3b0]
  orr.w r0,r0,r1, lsl #0x10
  strh.w r1,[r4,#0x3b2]
  bl 0x1003f748
  movs r2,#0x4
  ldr r0,[0x1003f884]
  add.w r1,r4,#0x3b0
  bl 0x1012d13c
  ldr r3,[0x1003f87c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1003f870
  bl 0x1013cdc0
  ldr r0,[0x1003f884]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x1012d1ae
