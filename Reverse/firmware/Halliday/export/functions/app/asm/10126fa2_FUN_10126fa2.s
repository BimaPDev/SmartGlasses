; FUN_10126fa2 @ 0x10126fa2 size=12
  cbz r0,0x10126fa8
  ldr r3,[r0,#0x4]
  cbnz r3,0x10126faa
  bx lr
  mov r0,r3
  b 0x10126fa2
