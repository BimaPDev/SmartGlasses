; FUN_140017d0 @ 0x140017d0 size=26
  ldr r2,[0x140017ec]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x140017d2
  ldr r0,[r2,#0x14]
  lsls r3,r1,#0x10
  and r3,r3,#0xff0000
  bic r1,r0,#0xff0000
  orrs r3,r1
  str r3,[r2,#0x14]
  bx lr
