; FUN_10053090 @ 0x10053090 size=54
  push {r0,r1,r2,lr}
  ldr r3,[0x100530c8]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  lsls r3,r0,#0x18
  bmi 0x100530b8
  cmp r0,#0x9
  bhi 0x100530bc
  ldr r3,[0x100530cc]
  ldr.w r0,[r3,r0,lsl #0x2]
  ldr r3,[0x100530c8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100530c0
  bl 0x1013cdc0
  ldr r0,[0x100530d0]
  b 0x100530aa
  ldr r0,[0x100530d4]
  b 0x100530aa
  add sp,#0xc
  pop.w pc
