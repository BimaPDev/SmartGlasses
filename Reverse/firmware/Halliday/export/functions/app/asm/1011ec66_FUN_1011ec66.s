; FUN_1011ec66 @ 0x1011ec66 size=26
  ldrh r3,[r0,#0xe]
  cbz r3,0x1011ec7c
  add.w r3,r3,#0x2fc00000
  add.w r3,r3,#0x318000
  ldrh r2,[r3,#0x2]
  strh r2,[r0,#0xe]
  sub.w r0,r0,#0x8000
  strh r0,[r3,#0x2]
  movs r0,#0x0
  bx lr
