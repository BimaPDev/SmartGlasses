; FUN_14060420 @ 0x14060420 size=38
  ldr r3,[0x14060448]
  cbz r0,0x14060434
  movs r0,#0x1
  ldrb.w r3,[r3,#0x5e]
  lsls r3,r3,#0x1d
  it mi
  orr.mi r0,r0,#0x2
  bx lr
  ldrb.w r3,[r3,#0x5e]
  and r0,r3,#0x1
  lsls r3,r3,#0x1d
  it mi
  orr.mi r0,r0,#0x2
  bx lr
