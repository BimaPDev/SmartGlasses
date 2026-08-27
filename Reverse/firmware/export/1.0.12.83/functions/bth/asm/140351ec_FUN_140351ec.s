; FUN_140351ec @ 0x140351ec size=12
  cmp r0,#0x5
  it cs
  mov.cs r0,#0x5
  ldr r3,[0x140351f8]
  ldrsb r0,[r3,r0]
  bx lr
