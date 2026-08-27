; FUN_2c57f500 @ 0x2c57f500 size=30
  push {r4,r5,lr}
  ldr r3,[0x2c57f548]
  sub sp,#0xc
  ldr r2,[0x2c57f54c]
  mov r4,r0
  ldr r5,[0x2c57f550]
  ldr r1,[0x2c57f554]
  strd r2,r3,[sp,#0x0]
  str r5,[r0,#0x0]
  movw r2,#0x10d
  movs r0,#0x4
  bl 0x2c62c82c
