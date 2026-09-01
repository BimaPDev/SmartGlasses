; FUN_100c8c48 @ 0x100c8c48 size=16
  cbz r0,0x100c8c52
  ldr r3,[0x100c8c58]
  str r0,[r3,#0x0]
  movs r0,#0x0
  bx lr
  mvn r0,#0x15
  bx lr
