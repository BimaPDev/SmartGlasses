; FUN_1013b78a @ 0x1013b78a size=20
  cbz r0,0x1013b79a
  subs r3,r1,#0x1
  cmp r3,#0x2
  bhi 0x1013b79a
  strb.w r1,[r0,#0x32]
  movs r0,#0x0
  bx lr
  movs r0,#0x1
  bx lr
