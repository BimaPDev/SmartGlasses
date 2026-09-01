; FUN_10073cc0 @ 0x10073cc0 size=22
  ldr r3,[0x10073cd8]
  cmp r3,r0
  beq 0x10073ccc
  adds r3,#0x24
  cmp r0,r3
  bne 0x10073cd4
  movs r2,#0x24
  movs r1,#0x0
  b.w 0x1011ea48
  bx lr
