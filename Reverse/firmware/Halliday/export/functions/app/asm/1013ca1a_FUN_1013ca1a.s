; FUN_1013ca1a @ 0x1013ca1a size=32
  cbz r2,0x1013ca34
  cmp r2,r1
  bcc 0x1013ca34
  add.w r3,r0,#0x10
  strd r1,r2,[r0,#0x8]
  strd r0,r0,[r0,#0x0]
  strd r3,r3,[r0,#0x10]
  movs r0,#0x0
  bx lr
  mvn r0,#0x15
  bx lr
