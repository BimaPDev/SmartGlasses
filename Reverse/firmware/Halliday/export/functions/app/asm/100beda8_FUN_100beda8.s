; FUN_100beda8 @ 0x100beda8 size=18
  ldr r3,[0x100bedbc]
  mov r1,r0
  ldr r0,[r3,#0x0]
  cbz r0,0x100bedb4
  b.w 0x10131e9c
  mvn r0,#0x4
  bx lr
