; FUN_1011ec3e @ 0x1011ec3e size=18
  ldrh r2,[r0,#0x4]
  ldrh r3,[r0,#0x0]
  cmp r2,r3
  ittte cc
  ldrh.cc r0,[r0,#0xa]
  add.cc r0,r0,r2
  sub.cc r0,r0,r3
  sub.cs r0,r2,r3
  bx lr
