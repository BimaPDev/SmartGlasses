; FUN_1012471a @ 0x1012471a size=12
  cbz r0,0x10124724
  ldrb r3,[r0,#0x5]
  orr r3,r3,#0x8
  strb r3,[r0,#0x5]
  bx lr
