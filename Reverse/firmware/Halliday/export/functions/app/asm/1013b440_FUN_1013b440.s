; FUN_1013b440 @ 0x1013b440 size=32
  movs r3,#0x0
  mov.w r1,#0x400
  str r3,[r0,#0x40]
  str.w r3,[r0,#0xbc]
  movs r2,#0x1
  movw r3,#0x401
  strd r1,r2,[r0,#0xb4]
  strh.w r3,[r0,#0xc2]
  adds r0,#0xb4
  b.w 0x1010c4b4
