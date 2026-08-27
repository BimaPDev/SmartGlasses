; FUN_1405d88c @ 0x1405d88c size=18
  movs r1,#0x1
  ldr r2,[0x1405d8a0]
  ldrb.w r3,[r2,#0xb2]
  add r3,r1
  strb.w r3,[r2,#0xb2]
  strb r1,[r0,#0xf]
  bx lr
