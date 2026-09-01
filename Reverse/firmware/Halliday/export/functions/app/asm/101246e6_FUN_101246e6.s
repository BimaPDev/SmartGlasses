; FUN_101246e6 @ 0x101246e6 size=22
  cbz r0,0x101246fa
  ldr r3,[r0,#0x0]
  ldrb r3,[r3,#0x0]
  and r3,r3,#0xfd
  cmp r3,#0x1
  bne 0x101246f8
  ldr r0,[r0,#0x50]
  bx lr
  movs r0,#0x0
  bx lr
