; FUN_1407358c @ 0x1407358c size=26
  mov r3,r0
  cbz r0,0x140735a2
  ldrb r2,[r0,#0xb]
  cbz r2,0x140735a2
  movs r1,#0xa5
  adds r2,#0x1
  movs r0,#0x0
  strb r2,[r3,#0xb]
  strb.w r1,[r3,#0x2c]
  bx lr
  movs r0,#0x1
  bx lr
