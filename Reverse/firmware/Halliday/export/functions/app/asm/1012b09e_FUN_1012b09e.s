; FUN_1012b09e @ 0x1012b09e size=24
  cbz r0,0x1012b0ae
  ldr r3,[r0,#0x4]
  cbnz r3,0x1012b0b2
  ldr r0,[r0,#0x8]
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
  movs r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
