; FUN_100eebe8 @ 0x100eebe8 size=36
  ldr r3,[0x100eec0c]
  ldr r3,[r3,#0x0]
  ldrb r2,[r3,#0x2]
  cmp r2,r0
  bls 0x100eebfa
  ldr r3,[r3,#0x4]
  ldrh.w r0,[r3,r0,lsl #0x1]
  bx lr
  adds r1,r2,#0x2
  cmp r0,r1
  ittte lt
  sub.lt r0,r0,r2
  add.lt.w r0,r3,r0, lsl #0x1
  ldrh.lt r0,[r0,#0x12]
  mov.ge r0,#0x0
  bx lr
