; FUN_100f114c @ 0x100f114c size=32
  ldr r3,[0x100f116c]
  ldr r1,[0x100f1170]
  mov r2,r0
  cmp r3,r1
  bcs 0x100f1168
  mov r0,r3
  b 0x100f1160
  adds r0,#0x14
  cmp r0,r1
  bcs 0x100f1168
  ldrh r3,[r0,#0xc]
  cmp r3,r2
  bne 0x100f115a
  bx lr
  movs r0,#0x0
  bx lr
