; FUN_100d3d2c @ 0x100d3d2c size=20
  mov r3,r0
  cbz r1,0x100d3d3c
  ldr r2,[0x100d3d40]
  ldr r2,[r2,#0x0]
  ldrh r0,[r2,#0x2]
  orrs r3,r0
  strh r3,[r2,#0x2]
  bx lr
  b.w 0x100d3a28
