; FUN_2c140ac8 @ 0x2c140ac8 size=30
  ldr r3,[0x2c140ae8]
  ldr r1,[r3,#0x14]
  cbz r1,0x2c140ae4
  ldr r3,[r1,#0x30]
  ldr r2,[r1,#0x38]
  cmp r3,r2
  bcs 0x2c140ade
  ldr r2,[0x2c140aec]
  ldr r3,[r3,#0x0]
  cmp r3,r2
  beq 0x2c140ae4
  movs r0,#0x1
  b.w 0x2c13ec68
  bx lr
