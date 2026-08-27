; FUN_1406fe70 @ 0x1406fe70 size=36
  ldr r3,[0x1406fe94]
  adds r0,#0x6
  ldr.w r2,[r3,r0,lsl #0x2]
  cbz r2,0x1406fe90
  ldrsb.w r3,[r2,#0x3a]
  bic r3,r3,#0x4
  cbz r1,0x1406fe88
  orr r3,r3,#0x4
  movs r0,#0x0
  strb.w r3,[r2,#0x3a]
  bx lr
  movs r0,#0x43
  bx lr
