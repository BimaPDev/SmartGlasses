; FUN_1400177c @ 0x1400177c size=22
  ldr r2,[0x14001794]
  ldr r3,[r2,#0xc]
  lsls r1,r3,#0x1f
  bmi 0x1400177e
  movs r3,#0x3
  ldr r1,[0x14001794]
  str r3,[r2,#0x18]
  ldr r3,[r1,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x1400178a
  bx lr
