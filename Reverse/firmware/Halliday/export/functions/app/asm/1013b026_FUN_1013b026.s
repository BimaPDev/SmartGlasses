; FUN_1013b026 @ 0x1013b026 size=30
  cbz r0,0x1013b042
  ldr.w r3,[r0,#0x6e4]
  cmp r3,#0x1
  bhi 0x1013b040
  add.w r3,r3,#0x1b4
  ldr.w r0,[r0,r3,lsl #0x2]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
