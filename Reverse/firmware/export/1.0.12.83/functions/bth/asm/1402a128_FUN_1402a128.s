; FUN_1402a128 @ 0x1402a128 size=14
  ldr r3,[0x1402a138]
  ldrb r3,[r3,#0x0]
  cbz r3,0x1402a132
  b.w 0x14029cb0
  mov r0,r3
  bx lr
