; FUN_100f151c @ 0x100f151c size=40
  ldr r3,[0x100f1544]
  b 0x100f1528
  ldr r2,[r3,#0x4]
  ldrh r2,[r2,#0xc]
  cmp r2,r0
  beq 0x100f1532
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  bne 0x100f1520
  mov r0,r3
  bx lr
  ldrb r3,[r3,#0x16]
  and r3,r3,#0x48
  sub.w r0,r3,#0x40
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
