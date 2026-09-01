; FUN_101246ca @ 0x101246ca size=28
  cbz r0,0x101246e4
  ldr r3,[r0,#0x0]
  ldrb r3,[r3,#0x0]
  and r3,r3,#0xfd
  cmp r3,#0x1
  bne 0x101246e2
  ldrb.w r0,[r0,#0x70]
  and r0,r0,#0xf
  bx lr
  movs r0,#0x0
  bx lr
