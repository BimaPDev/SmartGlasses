; FUN_10084408 @ 0x10084408 size=54
  subs r0,#0x1
  cmp r0,#0xf
  bhi 0x1008443a
  ldr r2,[0x10084440]
  lsls r1,r0,#0x4
  add.w r0,r2,r0, lsl #0x4
  ldrh r3,[r0,#0xc]
  cmp.w r3,#0x100
  bne 0x10084428
  movs r3,#0x0
  strh r3,[r0,#0xc]
  movs r0,#0x0
  str r0,[r2,r1]
  bx lr
  cmp r3,#0x0
  beq 0x10084422
  subs r3,#0x1
  uxth r3,r3
  strh r3,[r0,#0xc]
  cmp r3,#0x0
  beq 0x10084422
  movs r0,#0x0
  bx lr
  movs r0,#0x2
  bx lr
