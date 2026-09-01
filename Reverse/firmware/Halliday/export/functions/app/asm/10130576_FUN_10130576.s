; FUN_10130576 @ 0x10130576 size=16
  cbz r0,0x10130582
  ldrb.w r0,[r0,#0x63]
  and r0,r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
