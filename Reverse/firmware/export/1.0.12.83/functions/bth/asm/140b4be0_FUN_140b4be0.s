; FUN_140b4be0 @ 0x140b4be0 size=20
  mov r3,r0
  cmp r0,#0x16
  ittte ls
  ldr.ls r2,[0x140b4bf4]
  mov.ls r0,#0x0
  str.ls.w r1,[r2,r3,lsl #0x2]
  mov.hi.w r0,#0xffffffff
  bx lr
