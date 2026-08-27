; FUN_140b7cf0 @ 0x140b7cf0 size=18
  mov r3,r0
  cbz r0,0x140b7cfc
  movs r0,#0x0
  strd r1,r2,[r3,#0x4]
  bx lr
  mov.w r0,#0xffffffff
  bx lr
