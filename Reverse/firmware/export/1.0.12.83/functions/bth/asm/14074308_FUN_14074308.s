; FUN_14074308 @ 0x14074308 size=16
  movw r3,#0x8338
  ldrh.w r0,[r0,#-0x4]
  subs r0,r0,r3
  it ne
  mov.ne r0,#0x1
  bx lr
