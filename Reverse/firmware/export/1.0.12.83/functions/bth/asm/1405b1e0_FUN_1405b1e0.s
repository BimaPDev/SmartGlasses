; FUN_1405b1e0 @ 0x1405b1e0 size=20
  cmp r0,#0x1
  bhi 0x1405b1f0
  ldr r3,[0x1405b1f4]
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x1405b1f0
  b.w 0x1406d73c
  movs r0,#0x0
  bx lr
