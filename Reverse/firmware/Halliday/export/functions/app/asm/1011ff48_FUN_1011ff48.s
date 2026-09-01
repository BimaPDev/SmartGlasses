; FUN_1011ff48 @ 0x1011ff48 size=16
  movs r3,#0x0
  lsls r2,r0,#0x1f
  bpl 0x1011ff52
  mov r0,r3
  bx lr
  lsrs r0,r0,#0x1
  adds r3,#0x1
  b 0x1011ff4a
