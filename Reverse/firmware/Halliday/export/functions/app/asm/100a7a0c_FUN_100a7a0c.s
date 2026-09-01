; FUN_100a7a0c @ 0x100a7a0c size=20
  ldr r3,[0x100a7a20]
  ldr r0,[r3,#0x0]
  cbz r0,0x100a7a1a
  mov.w r1,#0xffffffff
  b.w 0x1011dbf4
  mvn r0,#0x2
  bx lr
