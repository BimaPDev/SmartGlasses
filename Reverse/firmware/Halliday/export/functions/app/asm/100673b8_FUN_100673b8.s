; FUN_100673b8 @ 0x100673b8 size=16
  ldr r3,[0x100673c8]
  mov r1,r0
  ldrb r0,[r3,#0x0]
  cbz r0,0x100673c6
  ldr r0,[0x100673cc]
  b.w 0x1011deaa
  bx lr
