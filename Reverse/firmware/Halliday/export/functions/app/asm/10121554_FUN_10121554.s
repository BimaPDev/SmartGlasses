; FUN_10121554 @ 0x10121554 size=34
  ldr r2,[r0,#0xc]
  mov r3,r2
  add.w r0,r2,#0x30
  ldrh.w r1,[r3,#0x94]
  adds r3,#0xc
  adds r1,#0x1
  strh.w r1,[r3,#0x88]
  cmp r3,r0
  bne 0x1012155c
  ldr.w r3,[r2,#0x8c]
  movs r2,#0x0
  strh r2,[r3,#0x4]
  bx lr
