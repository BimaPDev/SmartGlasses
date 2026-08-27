; FUN_140b337c @ 0x140b337c size=14
  movs r2,#0x0
  ldr r3,[0x140b338c]
  add.w r0,r3,r0, lsl #0x3
  strb r2,[r0,#0x1]
  strb r2,[r0,#0x2]
  bx lr
