; FUN_1012d2d0 @ 0x1012d2d0 size=32
  push {r4,lr}
  mov r4,r0
  bl 0x1012d284
  ldr r3,[r4,#0x0]
  ldr r2,[r4,#0x8]
  add r3,r0
  str r3,[r4,#0x0]
  ldr r3,[r4,#0x18]
  add r3,r0
  cmp r3,r2
  str r3,[r4,#0x18]
  itt cs
  sub.cs r3,r3,r2
  str.cs r3,[r4,#0x18]
  pop {r4,pc}
