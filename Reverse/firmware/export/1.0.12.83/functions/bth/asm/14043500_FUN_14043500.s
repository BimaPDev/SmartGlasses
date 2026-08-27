; FUN_14043500 @ 0x14043500 size=48
  ldr r3,[0x14043530]
  mov r2,r0
  rsb r0,r0,r0, lsl #0x3
  add.w r0,r3,r0, lsl #0x3
  ldrb.w r0,[r0,#0x443]
  mov.w r12,#0x38
  cbz r0,0x14043524
  mla r3,r12,r2,r3
  addw r3,r3,#0x44a
  movs r0,#0x1
  str r3,[r1,#0x0]
  bx lr
  mla r3,r12,r2,r3
  addw r3,r3,#0x444
  str r3,[r1,#0x0]
  bx lr
