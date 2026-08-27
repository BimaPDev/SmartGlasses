; FUN_2c14089c @ 0x2c14089c size=18
  ldr r3,[r0,#0x8]
  ldr r2,[r3,#0x8]
  str r2,[r0,#0x8]
  cbz r2,0x2c1408a6
  str r0,[r2,#0xc]
  movs r2,#0x0
  mov r0,r3
  str r2,[r3,#0xc]
  bx lr
