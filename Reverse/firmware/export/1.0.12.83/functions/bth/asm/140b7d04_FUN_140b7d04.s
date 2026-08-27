; FUN_140b7d04 @ 0x140b7d04 size=18
  mov r3,r0
  cbz r0,0x140b7d10
  movs r0,#0x0
  strd r1,r2,[r3,#0xc]
  bx lr
  mov.w r0,#0xffffffff
  bx lr
