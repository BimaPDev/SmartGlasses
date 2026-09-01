; FUN_100f160c @ 0x100f160c size=12
  ldr r3,[0x100f1618]
  ldr r0,[r3,#0x44]
  cbz r0,0x100f1616
  ldr r3,[r0,#0x4]
  ldrh r0,[r3,#0xc]
  bx lr
