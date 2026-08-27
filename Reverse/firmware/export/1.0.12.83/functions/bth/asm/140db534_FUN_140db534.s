; FUN_140db534 @ 0x140db534 size=16
  cmp r0,#0xff
  ittte ls
  ldr.ls r3,[0x140db544]
  ldrb.ls r0,[r0,r3]
  and.ls r0,r0,#0x97
  mov.hi r0,#0x0
  bx lr
