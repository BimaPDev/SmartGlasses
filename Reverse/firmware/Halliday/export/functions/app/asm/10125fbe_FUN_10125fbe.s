; FUN_10125fbe @ 0x10125fbe size=18
  ldr r3,[r0,#0x8]
  cbz r3,0x10125fcc
  ldrb.w r0,[r3,#0x20]
  and r0,r0,#0x3
  bx lr
  movs r0,#0x3
  bx lr
