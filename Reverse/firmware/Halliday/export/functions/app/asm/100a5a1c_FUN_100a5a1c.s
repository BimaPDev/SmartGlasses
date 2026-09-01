; FUN_100a5a1c @ 0x100a5a1c size=22
  ldr r3,[0x100a5a34]
  cmp r0,r3
  bcc 0x100a5a2e
  ldr r3,[0x100a5a38]
  cmp r0,r3
  ite cs
  mov.cs r0,#0x0
  mov.cc r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
