; FUN_140a5058 @ 0x140a5058 size=22
  cmp r0,#0x1
  mov r12,r1
  mov r1,r2
  mov r2,r3
  bne 0x140a5068
  mov r0,r12
  b.w 0x140a5484
  mov.w r0,#0xffffffff
  bx lr
