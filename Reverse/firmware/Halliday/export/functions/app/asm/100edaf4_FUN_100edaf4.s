; FUN_100edaf4 @ 0x100edaf4 size=22
  ldr r3,[0x100edb0c]
  cmp r0,r3
  bcc 0x100edb06
  ldr r3,[0x100edb10]
  cmp r0,r3
  ite cs
  mov.cs r0,#0x0
  mov.cc r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
