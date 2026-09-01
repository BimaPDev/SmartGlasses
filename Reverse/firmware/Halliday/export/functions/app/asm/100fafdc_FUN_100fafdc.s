; FUN_100fafdc @ 0x100fafdc size=20
  ldrd r3,r2,[r0,#0x20]
  cmp r3,r2
  ittte cc
  add.cc r2,r3,#0x1
  str.cc r2,[r0,#0x20]
  ldrsb.cc.w r0,[r3,#0x0]
  mov.cs r0,#0x0
  bx lr
