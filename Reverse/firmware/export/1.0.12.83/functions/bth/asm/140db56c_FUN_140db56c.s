; FUN_140db56c @ 0x140db56c size=16
  cmp r0,#0xff
  ittte ls
  ldr.ls r3,[0x140db57c]
  ldrb.ls r0,[r0,r3]
  and.ls r0,r0,#0x8
  mov.hi r0,#0x0
  bx lr
