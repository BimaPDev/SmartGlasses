; FUN_100ed8f8 @ 0x100ed8f8 size=26
  mov r3,r0
  cmp r3,#0x2
  mov r0,r1
  bhi 0x100ed90e
  movs r1,#0x24
  ldr r2,[0x100ed914]
  mla r3,r1,r3,r2
  ldr r3,[r3,#0x1c]
  cbz r3,0x100ed90e
  bx r3
  movs r0,#0x0
  bx lr
