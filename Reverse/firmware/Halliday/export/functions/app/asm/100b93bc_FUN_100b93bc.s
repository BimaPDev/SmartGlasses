; FUN_100b93bc @ 0x100b93bc size=22
  ldr r1,[0x100b93d4]
  ldr r2,[r1,#0x4]
  ldr r3,[r1,#0xc]
  subs r3,r3,r2
  cmp r3,r0
  ittte cs
  add.cs r0,r0,r2
  str.cs r0,[r1,#0x8]
  mov.cs r0,#0x1
  mov.cc r0,#0x0
  bx lr
