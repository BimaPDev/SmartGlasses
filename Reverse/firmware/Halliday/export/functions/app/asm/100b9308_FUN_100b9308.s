; FUN_100b9308 @ 0x100b9308 size=18
  ldr r2,[0x100b931c]
  ldr r3,[r2,#0xc]
  cmp r3,r0
  ittte cs
  ldr.cs r2,[r2,#0x0]
  sub.cs r0,r3,r0
  ldrb.cs r0,[r2,r0]
  mov.cc r0,#0x0
  bx lr
