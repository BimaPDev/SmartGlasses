; FUN_2c6517b4 @ 0x2c6517b4 size=22
  ldr r3,[0x2c6517cc]
  cmp r0,r3
  add.w r0,r0,#0xc
  ittt ne
  ldr.ne.w r3,[r0,#-0x4]
  add.ne r3,#0x1
  str.w.ne r3,[r0,#-0x4]
  bx lr
