; FUN_14029348 @ 0x14029348 size=34
  cmp r0,#0x1
  it ls
  mov.ls r0,#0x1
  ldr r2,[0x1402936c]
  ldr r3,[0x14029370]
  ldr r2,[r2,#0x50]
  it hi
  add.hi.w r0,r0,#0xffffffff
  str r2,[r3,#0x4]
  ldr r3,[0x14029374]
  str r0,[r3,#0x20]
  ldr r2,[r3,#0x28]
  orr r2,r2,#0x80
  str r2,[r3,#0x28]
  bx lr
