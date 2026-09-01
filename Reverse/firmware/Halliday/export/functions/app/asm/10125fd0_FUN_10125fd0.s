; FUN_10125fd0 @ 0x10125fd0 size=18
  ldr r3,[r0,#0x8]
  cbz r3,0x10125fde
  ldrb.w r0,[r3,#0x21]
  and r0,r0,#0xf
  bx lr
  movs r0,#0xf
  bx lr
