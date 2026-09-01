; FUN_1012d48e @ 0x1012d48e size=28
  ldrd r2,r3,[r0,#0x0]
  subs r2,r3,r2
  str r3,[r0,#0x0]
  ldr r3,[r0,#0x18]
  ldr r1,[r0,#0x8]
  add r3,r2
  cmp r3,r1
  str r3,[r0,#0x18]
  itt cs
  sub.cs r3,r3,r1
  str.cs r3,[r0,#0x18]
  mov r0,r2
  bx lr
