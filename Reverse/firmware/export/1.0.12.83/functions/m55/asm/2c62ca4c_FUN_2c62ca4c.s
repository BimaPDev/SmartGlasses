; FUN_2c62ca4c @ 0x2c62ca4c size=24
  cbz r0,0x2c62ca60
  ldr r3,[r0,#0x4]
  cbz r3,0x2c62ca56
  movs r0,#0x0
  bx lr
  ldr r0,[r0,#0x8]
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
  movs r0,#0x1
  bx lr
