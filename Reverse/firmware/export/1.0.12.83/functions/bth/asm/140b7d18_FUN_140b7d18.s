; FUN_140b7d18 @ 0x140b7d18 size=18
  mov r3,r0
  cbz r0,0x140b7d24
  movs r0,#0x0
  strd r1,r2,[r3,#0x14]
  bx lr
  mov.w r0,#0xffffffff
  bx lr
