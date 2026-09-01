; FUN_100a7370 @ 0x100a7370 size=18
  ldr r3,[0x100a7384]
  ldr r3,[r3,#0x0]
  cbz r3,0x100a737e
  ldrb r0,[r3,#0x1]
  and r0,r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
