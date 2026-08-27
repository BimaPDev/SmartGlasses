; FUN_140018a0 @ 0x140018a0 size=20
  ldr r2,[0x140018b4]
  lsls r1,r1,#0x10
  ldr r3,[r2,#0x20]
  and r1,r1,#0xff0000
  bic r3,r3,#0xff0000
  orrs r1,r3
  str r1,[r2,#0x20]
  bx lr
