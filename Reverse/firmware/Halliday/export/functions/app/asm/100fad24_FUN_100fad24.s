; FUN_100fad24 @ 0x100fad24 size=24
  mov r3,r0
  mov r2,r1
  cbz r0,0x100fad38
  ldr r1,[r0,#0x4]
  cbz r1,0x100fad38
  ldr r1,[r1,#0x60]
  ldr r0,[r1,#0x4]
  mov r1,r3
  b.w 0x100fab34
  movs r0,#0x6
  bx lr
