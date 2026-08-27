; FUN_14098328 @ 0x14098328 size=14
  cbz r0,0x14098334
  ldrb.w r0,[r0,#0x90]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
